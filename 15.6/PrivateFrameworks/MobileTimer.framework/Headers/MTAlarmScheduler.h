// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTALARMSCHEDULER_H
#define MTALARMSCHEDULER_H

@class NSString;
@protocol MTAlarmObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTPersistence, MTAlarmScheduleDelegate, MTNotificationCenter, MTSchedulingDelegate, NAScheduler, MTAlarmStorage, MTTaskScheduler;

#import <Foundation/Foundation.h>

#import "MTScheduledList.h"

@interface MTAlarmScheduler : NSObject <MTAlarmObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener>



@property (readonly, copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MTPersistence> *defaults; // ivar: _defaults
@property (weak, nonatomic) NSObject<MTAlarmScheduleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MTNotificationCenter> *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) MTScheduledList *scheduledAlarms; // ivar: _scheduledAlarms
@property (readonly, nonatomic) NSObject<MTSchedulingDelegate> *schedulingDelegate; // ivar: _schedulingDelegate
@property (readonly, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) NSObject<MTAlarmStorage> *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTTaskScheduler> *taskScheduler; // ivar: _taskScheduler


+(id)_intervalToCheckForAlarmsToFireBeforeDate:(id)arg0 ;
-(BOOL)_shouldPostNotificationForScheduledAlarm:(id)arg0 ;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)_additionalAlarmsToScheduleForAlarms:(id)arg0 ;
-(id)_lastAlarmTriggerDate;
-(id)_nextScheduledAlertIncludingBedtimeNotification:(BOOL)arg0 ;
-(id)_nextTriggerDateForScheduling;
-(id)gatherDiagnostics;
-(id)initWithStorage:(id)arg0 notificationCenter:(id)arg1 ;
-(id)initWithStorage:(id)arg0 notificationCenter:(id)arg1 scheduler:(id)arg2 defaults:(id)arg3 ;
-(id)initWithStorage:(id)arg0 notificationCenter:(id)arg1 scheduler:(id)arg2 defaults:(id)arg3 schedulingDelegate:(id)arg4 taskScheduler:(id)arg5 currentDateProvider:(id)arg6 ;
-(id)nextAlarm;
-(id)nextAlarmIncludingBedtimeNotification:(BOOL)arg0 ;
-(id)nextScheduledAlarmIncludingBedtimeNotification:(BOOL)arg0 ;
-(id)nextTriggerDate;
-(id)nextTriggerDateIncludingBedtimeNotification:(BOOL)arg0 ;
-(id)sourceIdentifier;
-(void)_fireScheduledAlarm:(id)arg0 firedDate:(id)arg1 completionBlock:(id)arg2 ;
-(void)_queue_fireTriggeredAlarmsWithCompletionBlock:(id)arg0 ;
-(void)_queue_triggerDidFireForAlarmWithCompletionBlock:(id)arg0 ;
-(void)_queue_unregisterTimer;
-(void)_queue_updateNextAlarmTimerWithCompletion:(id)arg0 ;
-(void)_rescheduleAlarmsWithCompletion:(id)arg0 ;
-(void)_scheduleAlarms:(id)arg0 withCompletion:(id)arg1 ;
-(void)_setLastAlarmTriggerDate:(id)arg0 ;
-(void)_unscheduleAlarms:(id)arg0 ;
-(void)cleanDeliveredNotifications;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)printDiagnostics;
-(void)rescheduleAlarmsWithCompletion:(id)arg0 ;
-(void)scheduleAlarms:(id)arg0 ;
-(void)scheduledListDidChange:(id)arg0 withCompletion:(id)arg1 ;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)unscheduleAlarms:(id)arg0 ;


@end


#endif