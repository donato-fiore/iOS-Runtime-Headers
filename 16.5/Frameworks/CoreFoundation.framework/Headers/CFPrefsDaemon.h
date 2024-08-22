// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFPREFSDAEMON_H
#define CFPREFSDAEMON_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CFPrefsDaemon : NSObject {
    NSObject<OS_xpc_object> *_listener;
    char * _name;
    int _role;
    *__CFSet _sourceCache;
    *__CFBag _sourceCacheUsageCounts;
    os_unfair_lock_s _sourceCacheLock;
    *__CFSet _deadSourceShmemIndexes;
    ? _deadManagedSourceBitSet;
    BOOL _testMode;
    *uint8_t _shmem;
}






@end


#endif