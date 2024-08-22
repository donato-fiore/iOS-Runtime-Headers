// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CFPREFSCLIENTCONTEXT_H
#define _CFPREFSCLIENTCONTEXT_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _CFPrefsClientContext : NSObject {
    uint8_t _cfprefsd;
    *__CFDictionary _suiteCache;
    *__CFSet _observedSources;
    NSObject<OS_xpc_object> *_entitlements;
    *__CFBoolean _sandboxed;
    os_unfair_lock_s _lock;
    char _isPlatformBinary;
    BOOL _impersonatingAnotherProcess;
    BOOL _hasInFlightKVONotifications;
    BOOL _didDeferKVONotifications;
    BOOL _valid;
}






@end


#endif