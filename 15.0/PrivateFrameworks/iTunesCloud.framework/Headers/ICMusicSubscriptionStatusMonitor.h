// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSMONITOR_H
#define ICMUSICSUBSCRIPTIONSTATUSMONITOR_H

@class NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ICUserIdentityContext.h"
#import "ICUserIdentity.h"
#import "ICMusicSubscriptionStatus.h"

@interface ICMusicSubscriptionStatusMonitor : NSObject {
    ICUserIdentityContext *_identityContext;
    NSNumber *_DSID;
    NSMutableDictionary *_observers;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // ivar: _subscriptionStatus


+(id)_sharedInstanceManager;
+(id)sharedMonitorForIdentity:(id)arg0 ;
+(id)sharedMonitorForIdentity:(id)arg0 identityStore:(id)arg1 ;
-(BOOL)_isMonitoringSubscriptionStatusForAutoupdatingIdentity;
-(id)_effectiveIdentityForRequestingSubscriptionStatus;
-(id)_initWithIdentityContext:(id)arg0 ;
-(id)beginObservingSubscriptionStatusWithHandler:(id)arg0 ;
-(id)description;
-(void)_beginObservingSubscriptionStatus;
-(void)_endObservingSubscriptionStatus;
-(void)_handleActiveUserIdentityDidChangeRemoteNotification;
-(void)_handleSubscriptionStatusDidChange:(id)arg0 ;
-(void)_handleUserIdentityStoreDidChange:(id)arg0 ;
-(void)_requestSubscriptionStatusWithCachingPolicy:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_updateWithSubscriptionStatus:(id)arg0 ;
-(void)dealloc;
-(void)endObservingSubscriptionStatusWithToken:(id)arg0 ;
-(void)refreshSubscriptionStatus;


@end


#endif