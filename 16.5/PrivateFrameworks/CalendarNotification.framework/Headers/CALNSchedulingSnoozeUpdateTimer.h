// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNSCHEDULINGSNOOZEUPDATETIMER_H
#define CALNSCHEDULINGSNOOZEUPDATETIMER_H

@class NSDate, NSMutableDictionary, NSString;
@protocol CALNActivitySchedulerDelegate, CALNSnoozeUpdateTimer, CalDateProvider, CALNActivityScheduler, CALNSnoozeUpdateTimerDelegate;

#import <Foundation/Foundation.h>


@interface CALNSchedulingSnoozeUpdateTimer : NSObject <CALNActivitySchedulerDelegate, CALNSnoozeUpdateTimer>

 {
    id<CalDateProvider> *_dateProvider;
    id<CALNActivityScheduler> *_scheduler;
    NSDate *_scheduledFireDate;
    NSDate *_scheduledOverdueDate;
    NSMutableDictionary *_fireDates;
    NSMutableDictionary *_overdueDates;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CALNSnoozeUpdateTimerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dequeueEventsDueBy:(id)arg0 ;
-(id)initWithDateProvider:(id)arg0 scheduler:(id)arg1 ;
-(void)_scheduleTimer;
-(void)activityRun;
-(void)notifyDelegateOfDueAlarmsAndRescheduleTimer;
-(void)setFireDate:(id)arg0 leeway:(CGFloat)arg1 forEventWithIdentifier:(id)arg2 ;
-(void)significantTimeChange;


@end


#endif