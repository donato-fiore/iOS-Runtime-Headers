// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGSMESSENGER_H
#define HMDACCESSORYSETTINGSMESSENGER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMMLogEventSubmitting, OS_dispatch_queue, HMDMessageRouter;


#import "HMDAccessorySettingsLocalMessageHandler.h"

@interface HMDAccessorySettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) HMDAccessorySettingsLocalMessageHandler *messageHandler; // ivar: _messageHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) NSObject<HMDMessageRouter> *messageRouter; // ivar: _messageRouter
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)fetchLogEventFromMessage:(id)arg0 ;
-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 messageRouter:(id)arg2 messageHandler:(id)arg3 logEventSubmitter:(id)arg4 ;
-(id)logIdentifier;
-(void)registerForMessagesWithHome:(id)arg0 ;
-(void)routeAccessorySettingsFetchRequestMessage:(id)arg0 ;
-(void)routeAccessorySettingsUpdateRequestMessage:(id)arg0 ;
-(void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg0 keyPaths:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg0 keyPath:(id)arg1 settingValue:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateAndPostFetchSettingsEvent:(id)arg0 responsePayload:(id)arg1 responseError:(id)arg2 ;


@end


#endif