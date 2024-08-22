// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDSHAREMESSENGER_H
#define HMDCLOUDSHAREMESSENGER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMDCloudShareMessengerDelegate, OS_dispatch_queue;



@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCloudShareMessengerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (copy) id *shareInvitationRetryHandler; // ivar: _shareInvitationRetryHandler
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithMessageTargetUUID:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithMessageTargetUUID:(id)arg0 workQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)logIdentifier;
-(void)_sendShareInvitationData:(id)arg0 toUser:(id)arg1 minimumHomeKitVersion:(id)arg2 requiredSupportedFeatures:(id)arg3 retryCount:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)configureWithHome:(id)arg0 ;
-(void)handleInviteMessage:(id)arg0 ;
-(void)handleRequestInviteMessage:(id)arg0 ;
-(void)requestShareInvitationDataFromUser:(id)arg0 ;
-(void)sendShareInvitationData:(id)arg0 toUser:(id)arg1 minimumHomeKitVersion:(id)arg2 requiredSupportedFeatures:(id)arg3 completion:(id)arg4 ;
-(void)unconfigure;


@end


#endif