// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMEDIASYSTEMCONTROLLERMESSAGEHANDLER_H
#define HMDHOMEMEDIASYSTEMCONTROLLERMESSAGEHANDLER_H

@class NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMDHomeMediaSystemControllerMessageHandlerDelegate, HMDFeaturesDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDHomeMediaSystemControllerMessageHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)logCategory;
-(id)defaultAssociatedGroupIdentifier;
-(id)initWithQueue:(id)arg0 home:(id)arg1 messageDispatcher:(id)arg2 delegate:(id)arg3 ;
-(id)initWithQueue:(id)arg0 home:(id)arg1 messageDispatcher:(id)arg2 delegate:(id)arg3 featuresDataSource:(id)arg4 ;
-(id)logIdentifier;
-(id)mediaGroupsAggregator;
-(id)mediaSystemNameFromRoomWithAccessoryUUIDs:(id)arg0 ;
-(id)messageDestination;
-(id)messageRouter;
-(id)preProcessMediaSystemMessage:(id)arg0 ;
-(id)stagingMediaSystemDataFromData:(id)arg0 accessoryUUIDs:(id)arg1 ;
-(id)unconfiguredParticipantOnboardingManager;
-(id)updateMediaSystemCompletionBlockWithMessage:(SEL)arg0 data:(id)arg1 accessoryUUIDs:(id)arg2 ;
-(id)updateParticipantWithAccessoryUUID:(id)arg0 associatedGroupIdentifier:(id)arg1 ;
-(id)validateConfiguredName:(id)arg0 ;
-(id)validatePayload:(id)arg0 ;
-(void)_legacyHandleAddMediaSystem:(id)arg0 ;
-(void)_legacyHandleAddMediaSystemWithPreProcessedMessage:(id)arg0 ;
-(void)_legacyHandleRemoveMediaSystem:(id)arg0 ;
-(void)_legacyHandleUpdateMediaSystem:(id)arg0 ;
-(void)_registerForMessages;
-(void)_routeAddMediaSystem:(id)arg0 ;
-(void)_routeRemoveMediaSystem:(id)arg0 ;
-(void)_routeUpdateMediaSystem:(id)arg0 ;
-(void)locallyAddMediaSystemUsingRequestMessage:(id)arg0 ;
-(void)locallyRemoveMediaSystemUsingRemoveRequestMessage:(id)arg0 ;
-(void)locallyUpdateMediaSystemUsingRequestMessage:(id)arg0 ;
-(void)queueOnboardingForUnconfiguredParticipantWithAccessoryUUID:(id)arg0 associatedGroupIdentifier:(id)arg1 ;
-(void)routeAddMediaSystem:(id)arg0 ;
-(void)routeRemoveMediaSystem:(id)arg0 ;
-(void)routeUpdateMediaSystem:(id)arg0 ;


@end


#endif