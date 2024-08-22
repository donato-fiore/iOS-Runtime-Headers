// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSAGGREGATORMESSENGER_H
#define HMDMEDIAGROUPSAGGREGATORMESSENGER_H

@class NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMDMediaGroupsAggregatorMessengerDataSource, HMDMediaGroupsAggregatorMessengerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDMediaGroupsAggregatorMessenger : NSObject <HMFLogging, HMFMessageReceiver>



@property (weak) NSObject<HMDMediaGroupsAggregatorMessengerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaGroupsAggregatorMessengerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)logIdentifier;
-(id)router;
-(void)configureWithMessageDispatcher:(id)arg0 home:(id)arg1 ;
-(void)locallyHandleUpdateAssociatedGroupIdentifierRequestMessage:(id)arg0 ;
-(void)notifyOfRequestToUpdateAssociatedGroupIdentifierWithPayload:(id)arg0 message:(id)arg1 ;
-(void)registerForMessagesWithMessageDispatcher:(id)arg0 home:(id)arg1 ;
-(void)routeMessage:(id)arg0 localHandler:(id)arg1 ;
-(void)routeUpdateAssociatedGroupIdentifierRequestMessage:(id)arg0 ;
-(void)sendRequestToUpdateAssociatedGroupIdentifier:(id)arg0 forGroupIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif