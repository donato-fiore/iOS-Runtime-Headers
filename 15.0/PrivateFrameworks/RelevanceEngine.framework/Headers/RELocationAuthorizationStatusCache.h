// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RELOCATIONAUTHORIZATIONSTATUSCACHE_H
#define RELOCATIONAUTHORIZATIONSTATUSCACHE_H

@class NSMutableDictionary, NSMutableSet, NSLock;
@protocol OS_dispatch_queue;


#import "RESingleton.h"

@interface RELocationAuthorizationStatusCache : RESingleton {
    NSMutableDictionary *_bundleToStatusCache;
    NSMutableDictionary *_bundleToCallbackBlocks;
    NSMutableSet *_bundlesAwaitingQuery;
    NSObject<OS_dispatch_queue> *_schedulingQueue;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSLock *_bundleToStatusCacheLock;
}




-(id)_init;
-(int)_cachedStatusForBundleIdentifier:(id)arg0 ;
-(int)cachedAuthorizationStatusForBundleIdentifier:(id)arg0 invalidationUpdateQueue:(id)arg1 withCallback:(id)arg2 ;
-(void)_q_queue_queryStatusFromCLForBundleIdentifier:(id)arg0 ;
-(void)_s_queue_addCallbackInfo:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_s_queue_scheduleUpdatedStatusForBundleIdentifier:(id)arg0 ;
-(void)_s_queue_updateCacheFromCLWithStatus:(int)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif