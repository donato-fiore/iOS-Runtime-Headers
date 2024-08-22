// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTPROFILESMESSENGER_H
#define HMDSIRIENDPOINTPROFILESMESSENGER_H

@class NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue, HMDMessageRouter;

#import <Foundation/Foundation.h>

#import "HMDSiriEndpointProfileMessageHandler.h"

@interface HMDSiriEndpointProfilesMessenger : NSObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) HMDSiriEndpointProfileMessageHandler *messageHandler; // ivar: _messageHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) NSObject<HMDMessageRouter> *messageRouter; // ivar: _messageRouter
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 messageRouter:(id)arg2 messageHandler:(id)arg3 ;
-(id)intermediateApplyOnboardingSelectionsRequestMessageForMessage:(id)arg0 error:(*id)arg1 ;
-(id)logIdentifier;
-(void)registerForMessagesWithHome:(id)arg0 ;
-(void)routeSiriEndpointApplyOnboardingSelectionsRequestMessage:(id)arg0 ;
-(void)routeSiriEndpointDeleteSiriHistoryMessage:(id)arg0 ;


@end


#endif