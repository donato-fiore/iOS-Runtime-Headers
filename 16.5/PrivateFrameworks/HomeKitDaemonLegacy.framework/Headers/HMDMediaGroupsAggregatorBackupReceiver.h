// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAGROUPSAGGREGATORBACKUPRECEIVER_H
#define HMDMEDIAGROUPSAGGREGATORBACKUPRECEIVER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMDMediaGroupsAggregatorBackupReceiverDelegate, OS_dispatch_queue;



@interface HMDMediaGroupsAggregatorBackupReceiver : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaGroupsAggregatorBackupReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)logIdentifier;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)handleGroupsBackupDataMessage:(id)arg0 ;
-(void)registerForMessagesWithHome:(id)arg0 messageDispatcher:(id)arg1 ;


@end


#endif