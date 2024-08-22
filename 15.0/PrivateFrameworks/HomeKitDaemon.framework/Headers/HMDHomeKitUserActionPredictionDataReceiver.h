// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEKITUSERACTIONPREDICTIONDATARECEIVER_H
#define HMDHOMEKITUSERACTIONPREDICTIONDATARECEIVER_H

@class HMFObject, HMFTimer, NSUUID, NSString, HMFMessageDispatcher, NSMapTable;
@protocol HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDUserActionPredictionDataReceiver, HMFLocking, HMDUserActionPredictionDataSource, OS_dispatch_queue;



@interface HMDHomeKitUserActionPredictionDataReceiver : HMFObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDUserActionPredictionDataReceiver>

 {
    HMFTimer *_notifyDebounceTimer;
    NSUInteger _debouncedNotifyPredictionLimit;
    id<HMFLocking> *_lock;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (weak) NSObject<HMDUserActionPredictionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSMapTable *subscribedClientConnections; // ivar: _subscribedClientConnections
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithUUID:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithUUID:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 timerFactory:(id)arg3 ;
-(id)logIdentifier;
-(void)_addOrUpdateSubcriber:(id)arg0 clientConnection:(id)arg1 ;
-(void)_debounceNotifySubscribersOfUpdateBelowLimit:(NSUInteger)arg0 ;
-(void)_handleRemoveAllPredictionsMessage:(id)arg0 ;
-(void)_handleRemovePredictionMessage:(id)arg0 ;
-(void)_handleSubscribeMessage:(id)arg0 ;
-(void)_handleUnsubscribeMessage:(id)arg0 ;
-(void)_handleUpdatePredictionMessage:(id)arg0 ;
-(void)_notifySubscriber:(id)arg0 clientConnection:(id)arg1 messageName:(id)arg2 payload:(id)arg3 ;
-(void)_notifySubscribersOfUpdateBelowLimit:(NSUInteger)arg0 ;
-(void)_removeSubcriberWithUUID:(id)arg0 clientConnection:(id)arg1 ;
-(void)configureWithDataSource:(id)arg0 ;
-(void)removedUserActionPrediction:(id)arg0 atSortedIndex:(NSUInteger)arg1 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updatedUserActionPrediction:(id)arg0 atSortedIndex:(NSUInteger)arg1 ;


@end


#endif