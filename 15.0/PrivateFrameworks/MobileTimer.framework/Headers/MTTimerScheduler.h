// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERSCHEDULER_H
#define MTTIMERSCHEDULER_H

@class NSString;
@protocol MTTimerObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTPersistence, MTTimerSchedulerDelegate, MTNotificationCenter, MTSchedulingDelegate, NAScheduler, MTTimerStorage, MTTaskScheduler;

#import <Foundation/Foundation.h>

#import "MTScheduledList.h"

@interface MTTimerScheduler : NSObject <MTTimerObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener>



@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MTPersistence> *defaults; // ivar: _defaults
@property (weak, nonatomic) NSObject<MTTimerSchedulerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTNotificationCenter> *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) MTScheduledList *scheduledTimers; // ivar: _scheduledTimers
@property (readonly, nonatomic) NSObject<MTSchedulingDelegate> *schedulingDelegate; // ivar: _schedulingDelegate
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (retain, nonatomic) NSObject<MTTimerStorage> *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTTaskScheduler> *taskScheduler; // ivar: _taskScheduler


+(id)_intervalToCheckForTimersToFireBeforeDate:(id)arg0 ;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)_queue_lastTimerTriggerDate;
-(id)_queue_nextScheduledTimer;
-(id)_queue_nextTimer;
-(id)gatherDiagnostics;
-(id)initWithStorage:(id)arg0 notificationCenter:(id)arg1 ;
-(id)initWithStorage:(id)arg0 notificationCenter:(id)arg1 scheduler:(id)arg2 defaults:(id)arg3 ;
-(id)initWithStorage:(id)arg0 notificationCenter:(id)arg1 scheduler:(id)arg2 defaults:(id)arg3 schedulingDelegate:(id)arg4 taskScheduler:(id)arg5 currentDateProvider:(id)arg6 ;
-(id)nextTimer;
-(id)nextTriggerDate;
-(id)sourceIdentifier;
-(void)_fireScheduledTimer:(id)arg0 firedDate:(id)arg1 completionBlock:(id)arg2 ;
-(void)_queue_fireTriggeredTimersWithCompletionBlock:(id)arg0 ;
-(void)_queue_rescheduleTimersWithCompletion:(id)arg0 ;
-(void)_queue_scheduleTimers:(id)arg0 withCompletion:(id)arg1 ;
-(void)_queue_setLastTimerTriggerDate:(id)arg0 ;
-(void)_queue_triggerDidFireForTimerWithCompletionBlock:(id)arg0 ;
-(void)_queue_unregisterTimer;
-(void)_queue_unscheduleTimers:(id)arg0 ;
-(void)_queue_updatePersistentTimerForNextTimerWithCompletion:(id)arg0 ;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)nextTimerDidChange:(id)arg0 ;
-(void)printDiagnostics;
-(void)rescheduleTimers;
-(void)rescheduleTimersWithCompletion:(id)arg0 ;
-(void)scheduleTimers:(id)arg0 ;
-(void)scheduledListDidChange:(id)arg0 withCompletion:(id)arg1 ;
-(void)source:(id)arg0 didAddTimers:(id)arg1 ;
-(void)source:(id)arg0 didDismissTimer:(id)arg1 ;
-(void)source:(id)arg0 didFireTimer:(id)arg1 ;
-(void)source:(id)arg0 didRemoveTimers:(id)arg1 ;
-(void)source:(id)arg0 didUpdateTimers:(id)arg1 ;
-(void)unscheduleTimers:(id)arg0 ;


@end


#endif