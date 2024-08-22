// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSHAREDCONVERSATIONSERVERBAG_H
#define CPSHAREDCONVERSATIONSERVERBAG_H

@class NSString;
@protocol CPConversationServerBag;

#import <Foundation/Foundation.h>


@interface CPSharedConversationServerBag : NSObject <CPConversationServerBag>



@property (readonly, nonatomic) NSUInteger AVCBlobRecoveryGracePeriod;
@property (readonly, nonatomic) NSUInteger AVCBlobRecoveryTimeout;
@property (readonly, nonatomic) NSUInteger activeParticipantPruningTimeout;
@property (readonly, nonatomic) NSUInteger activeParticipantRefreshDelay;
@property (readonly, nonatomic) NSUInteger backgroundAppPolicyHandleExpiryDays;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxActiveParticipantFetchRetries;
@property (readonly, nonatomic) NSUInteger qrPluginConnectionRetryIntervalMillis;
@property (readonly, nonatomic) NSUInteger qrPluginMaxConnectionAttempts;
@property (readonly, nonatomic) NSUInteger qrPluginMaxRpcStreamAttempts;
@property (readonly, nonatomic) NSUInteger qrPluginRpcStreamRetryIntervalMillis;
@property (readonly, nonatomic) NSUInteger rebroadcastTimeThreshold;
@property (readonly, nonatomic) NSUInteger sessionCleanupTimeout;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger timeBetweenMacOSSharePlayNotificationsSeconds;


-(id)stableBundleIdentifierForLocalBundleIdentifier:(id)arg0 ;


@end


#endif