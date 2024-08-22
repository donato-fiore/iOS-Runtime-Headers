// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDUETPREDICTIONSUBSCRIBER_H
#define HMDDUETPREDICTIONSUBSCRIBER_H

@class HMFObject, HMFMessageDispatcher;
@protocol HMDDuetPredictionSubscriberDataSource, OS_dispatch_queue;



@interface HMDDuetPredictionSubscriber : HMFObject

@property (weak) NSObject<HMDDuetPredictionSubscriberDataSource> *dataSource; // ivar: _dataSource
@property int duetPredictionsChangedNotificationToken; // ivar: _duetPredictionsChangedNotificationToken
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 dataSource:(id)arg2 ;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)dealloc;


@end


#endif