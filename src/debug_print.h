#pragma once

#include "libsm64.h"
#include <stdio.h>

extern SM64DebugPrintFunctionPtr g_debug_print_func;

#define DEBUG_PRINT( ... ) do { \
    char debugStr[1024]; \
    printf( debugStr, __VA_ARGS__ ); \
    if( g_debug_print_func ) { \
        sprintf( debugStr, __VA_ARGS__ ); \
        g_debug_print_func( debugStr ); \
    } \
} while(0)
