// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICURLBAGMONITOR_H
#define ICURLBAGMONITOR_H

@class NSMutableDictionary, NSString;
@protocol ICEnvironmentMonitorObserver, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ICURLBag.h"
#import "ICUserIdentityStore.h"

@interface ICURLBagMonitor : NSObject <ICEnvironmentMonitorObserver>

 {
    ICURLBag *_bag;
    NSObject<OS_dispatch_source> *_bagExpirationTimer;
    ICUserIdentityStore *_identityStore;
    NSMutableDictionary *_observers;
    os_unfair_lock_s _lock;
}


@property (readonly) ICURLBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedBagMonitor;
-(id)_init;
-(id)beginObservingBagWithHandler:(id)arg0 ;
-(void)_beginObservingBag;
-(void)_endObservingBag;
-(void)_handleBagExpirationTimerFired;
-(void)_handleUserIdentityStoreDidChange:(id)arg0 ;
-(void)_invalidateBagExpirationTimer;
-(void)_requestBagWithPolicy:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_scheduleBagExpirationTimerForDate:(id)arg0 ;
-(void)_updateWithBag:(id)arg0 ;
-(void)dealloc;
-(void)endObservingBagWithToken:(id)arg0 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;


@end


#endif