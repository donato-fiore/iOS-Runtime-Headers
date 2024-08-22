// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERACTIONPREDICTIONCONTROLLER_MESSAGINGIMPL_H
#define HMUSERACTIONPREDICTIONCONTROLLER_MESSAGINGIMPL_H

@class NSArray, NSString, NSUUID, NSNotificationCenter;
@protocol HMFLogging, HMFMessageReceiver, HMUserActionPredictionControllerDataSource, OS_dispatch_queue;


#import "HMUserActionPredictionController.h"

@interface HMUserActionPredictionController_MessagingImpl : HMUserActionPredictionController <HMFLogging, HMFMessageReceiver>

 {
    NSArray *_predictions;
}


@property (weak) NSObject<HMUserActionPredictionControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (copy) NSArray *lastUpdatedClientMappedPredictions; // ivar: _lastUpdatedClientMappedPredictions
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)mergeWithOtherPredictionController:(id)arg0 operations:(id)arg1 ;
-(id)initWithPredictions:(id)arg0 homeUUID:(id)arg1 ;
-(id)predictions;
-(void)configureWithDataSource:(id)arg0 context:(id)arg1 ;
-(void)fetchPredictionsWithCompletion:(id)arg0 ;
-(void)handleDaemonReconnectedNotification:(id)arg0 ;
-(void)handleUpdatePredictionsMessage:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPredictions:(id)arg0 ;


@end


#endif