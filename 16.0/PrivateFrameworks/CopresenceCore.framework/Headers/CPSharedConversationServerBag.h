// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSHAREDCONVERSATIONSERVERBAG_H
#define CPSHAREDCONVERSATIONSERVERBAG_H

@class NSArray, NSString;
@protocol CPConversationServerBag;

#import <Foundation/Foundation.h>


@interface CPSharedConversationServerBag : NSObject <CPConversationServerBag>



@property (readonly, nonatomic) NSUInteger AVCBlobRecoveryGracePeriod;
@property (readonly, nonatomic) NSUInteger AVCBlobRecoveryTimeout;
@property (readonly, nonatomic) NSUInteger activeParticipantPruningTimeout;
@property (readonly, nonatomic) NSUInteger activeParticipantRefreshDelay;
@property (readonly, nonatomic) NSUInteger backgroundAppPolicyHandleExpiryDays;
@property (readonly, nonatomic) NSArray *blockedActivitySessionBundleIdentifiers;
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
@property (readonly, nonatomic) NSUInteger unreliableMessengerChannelStreamMaxQueueSize;
@property (readonly, nonatomic) NSUInteger unreliableMessengerChannelStreamMaxTries;
@property (readonly, nonatomic) NSUInteger unreliableMessengerChannelStreamRetryIntervalMillis;
@property (readonly, nonatomic) NSUInteger unreliableMessengerEgressMessagePayloadMaxSizeBytes;
@property (readonly, nonatomic) NSUInteger unreliableMessengerEstablishChannelMaxAttempts;
@property (readonly, nonatomic) NSUInteger unreliableMessengerEstablishChannelRetryIntervalMillis;


-(id)stableBundleIdentifierForLocalBundleIdentifier:(id)arg0 ;


@end


#endif