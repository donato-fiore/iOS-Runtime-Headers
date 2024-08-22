// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FITYPICALDAYACTIVITYMODEL_H
#define FITYPICALDAYACTIVITYMODEL_H

@class NSDateInterval, HKActivitySummary, NSMutableArray, NSDate, NSString;
@protocol FISleepDataProviderDelegate, OS_dispatch_group, OS_dispatch_queue, FITypicalDayActivityModelDelegate;

#import <Foundation/Foundation.h>

#import "FISimpleHistogram.h"
#import "FISleepDataProvider.h"
#import "FISleepUserDay.h"

@interface FITypicalDayActivityModel : NSObject <FISleepDataProviderDelegate>

 {
    NSDateInterval *_interval;
    HKActivitySummary *_queue_currentActivitySummary;
    FISimpleHistogram *_queue_moveHistogram;
    FISimpleHistogram *_queue_exerciseHistogram;
    NSMutableArray *_queue_bucketDates;
    BOOL _activitySummaryLoaded;
    NSObject<OS_dispatch_group> *_activitySummaryBarrierGroup;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_projectedOffWristDateToday;
    NSInteger _totalActiveDays;
    FISleepDataProvider *_sleepDataProvider;
    FISleepUserDay *_sleepUserDay;
    os_unfair_lock_s _sleepUserDayLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FITypicalDayActivityModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger totalActiveDays;


+(id)_emptySimpleHistogram;
-(BOOL)_queue_enumerateActivitySummariesOrderedByCacheIndexWithCalendar:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)_willCompleteGoalWithType:(NSInteger)arg0 bufferPercentage:(CGFloat)arg1 ;
-(BOOL)isSleepAlarmEnabledForToday;
-(BOOL)projectedToBeatMoveRecordByEndOfDay;
-(BOOL)shouldSuggestWalkWithActivitySettingsController:(id)arg0 ;
-(BOOL)willCompleteExerciseGoalWithBufferPercentage:(CGFloat)arg0 ;
-(BOOL)willCompleteMoveGoalWithBufferPercentage:(CGFloat)arg0 ;
-(BOOL)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(CGFloat)arg0 ;
-(BOOL)willCompletingMoveRingEarnStreakAchievement;
-(CGFloat)_percentageOfTypicalDayComparedToNowForGoal:(NSInteger)arg0 ;
-(CGFloat)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)arg0 biologicalSex:(NSInteger)arg1 height:(id)arg2 weight:(id)arg3 wheelchairUse:(NSInteger)arg4 experienceType:(NSUInteger)arg5 ;
-(CGFloat)_queue_currentValueForHistogram:(id)arg0 ;
-(CGFloat)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)arg0 ;
-(CGFloat)currentExerciseGoalPercentage;
-(CGFloat)currentMoveGoalPercentage;
-(CGFloat)currentStandGoalPercentage;
-(CGFloat)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
-(CGFloat)percentageOfTypicalDayMoveComparedToNow;
-(CGFloat)projectedDayDuration;
-(CGFloat)valueOfTypicalDayBriskMinutesEarnedByNow;
-(CGFloat)valueOfTypicalDayMoveEarnedByNow;
-(NSInteger)_bucketIndexForDate:(id)arg0 startOfDay:(id)arg1 bucketDates:(id)arg2 ;
-(id)_bucketDateForIndex:(NSUInteger)arg0 startOfDay:(id)arg1 ;
-(id)_goodMorningAlertDismissedDateForToday;
-(id)_queue_calculateProjectedOffWristDateFromHistogram:(id)arg0 activeDays:(NSInteger)arg1 ;
-(id)_sleepDataProvider;
-(id)currentCalendar;
-(id)currentDate;
-(id)endOfToday;
-(id)initForDateInterval:(id)arg0 delegate:(id)arg1 ;
-(id)initForDateInterval:(id)arg0 delegate:(id)arg1 sleepDataProvider:(id)arg2 ;
-(id)projectedOffWrist;
-(id)sleepUserDay;
-(id)startOfToday;
-(id)userEndOfDay;
-(id)userStartOfDay;
-(id)userWakeUpDateForToday;
-(void)_queue_populateHistogramsAndOffWristDateForToday;
-(void)_queue_updateHistogram:(id)arg0 goalType:(NSInteger)arg1 activitySummary:(id)arg2 ;
-(void)_queue_updateProjectedOffWristDateHistogram:(id)arg0 activitySummary:(id)arg1 activeDays:(*NSInteger)arg2 ;
-(void)_setProjectedOffWristDateToday:(id)arg0 ;
-(void)_setSleepUserDay:(id)arg0 ;
-(void)_updateSleepUserDay;
-(void)_waitUntilActivitySummaryLoaded;
-(void)handleUpdatedCurrentActivitySummary:(id)arg0 ;
-(void)rebuildWithInterval:(id)arg0 ;
-(void)sleepDataProviderLastAlarmWakeUpDateDidChange;
-(void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
-(void)sleepDataProviderUserDayDidUpdate;


@end


#endif