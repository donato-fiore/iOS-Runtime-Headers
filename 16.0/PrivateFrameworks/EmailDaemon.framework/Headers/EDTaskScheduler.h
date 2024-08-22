// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDTASKSCHEDULER_H
#define EDTASKSCHEDULER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface EDTaskScheduler : NSObject

@property (nonatomic) CGFloat backOffInterval; // ivar: _backOffInterval
@property (nonatomic) CGFloat backoffMultiplier; // ivar: _backoffMultiplier
@property (copy, nonatomic) id *canceledCallback; // ivar: _canceledCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (nonatomic) CGFloat initialDelay; // ivar: _initialDelay
@property (nonatomic) BOOL isReachable; // ivar: _isReachable
@property (nonatomic) CGFloat maxBackOffInterval; // ivar: _maxBackOffInterval
@property (nonatomic) BOOL observeForNetworkReachability; // ivar: _observeForNetworkReachability
@property (nonatomic) BOOL pendingWaitingForNetwork; // ivar: _pendingWaitingForNetwork
@property (copy, nonatomic) id *task; // ivar: _task
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource
@property (copy, nonatomic) id *work; // ivar: _work


-(id)initWithExecutionQueue:(id)arg0 ;
-(void)_cancelTimer;
// -(void)_doScheduleTask:(id)arg0 canceledCallback:(unk)arg1  ;
-(void)_incrementBackoffInterval;
-(void)_reportReachabilityChange:(id)arg0 ;
-(void)dealloc;
-(void)rescheduleTask;
// -(void)scheduleTask:(id)arg0 canceledCallback:(unk)arg1  ;


@end


#endif