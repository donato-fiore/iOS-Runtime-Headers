// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSSUBSCRIPTIONMANAGER_H
#define NMSSUBSCRIPTIONMANAGER_H

@class ACAccount, NSString;
@protocol ICEnvironmentMonitorObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_activeAccount;
    NSInteger _subscriptionType;
    NSUInteger _subscriptionCapabilities;
    NSUInteger _failedGetSubscriptionStatusAttempts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger subscriptionCapabilities;
@property (readonly, nonatomic) NSInteger subscriptionType;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)hasCapability:(NSUInteger)arg0 ;
-(id)init;
-(void)_handleAccountStoreDidChangeNotification:(id)arg0 ;
-(void)_handleSubscriptionStatusDidChangeNotification:(id)arg0 ;
-(void)_retrySubscriptionStatusRequest;
-(void)_updateActiveAccount;
-(void)_updateSubscriptionStatus;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;


@end


#endif