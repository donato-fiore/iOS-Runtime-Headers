// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSMESSAGEHANDLER_H
#define HMDMEDIAGROUPSMESSAGEHANDLER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMDMediaGroupsMessageHandlerDataSource, HMDMediaGroupsMessageHandlerDelegate, OS_dispatch_queue;



@interface HMDMediaGroupsMessageHandler : HMFObject <HMFLogging, HMFMessageReceiver>



@property (weak) NSObject<HMDMediaGroupsMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaGroupsMessageHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)destinationIdentifiersInMessage:(id)arg0 error:(*id)arg1 ;
-(id)identifierInMessage:(id)arg0 ;
-(id)initWithMessageTargetUUID:(id)arg0 ;
-(id)logIdentifier;
-(id)nameInMessage:(id)arg0 error:(*id)arg1 ;
-(id)router;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)handleMediaGroupsControllerCreateGroupRequestMessage:(id)arg0 ;
-(void)handleMediaGroupsControllerRemoveGroupRequestMessage:(id)arg0 ;
-(void)handleMediaGroupsControllerUpdateGroupRequestMessage:(id)arg0 ;
-(void)registerForMessagesWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)routeMediaGroupsControllerCreateGroupRequestMessage:(id)arg0 ;
-(void)routeMediaGroupsControllerRemoveGroupRequestMessage:(id)arg0 ;
-(void)routeMediaGroupsControllerUpdateGroupRequestMessage:(id)arg0 ;
-(void)routeMessage:(id)arg0 localHandler:(id)arg1 ;


@end


#endif