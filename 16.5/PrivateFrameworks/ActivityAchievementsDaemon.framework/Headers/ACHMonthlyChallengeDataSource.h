// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHMONTHLYCHALLENGEDATASOURCE_H
#define ACHMONTHLYCHALLENGEDATASOURCE_H

@class HDDatabaseTransactionContext, HDProfile, ACHAwardsWorkoutClient;

#import <Foundation/Foundation.h>

#import "ACHActivitySummaryIterator.h"
#import "ACHActivitySummaryUtility.h"
#import "ACHWorkoutUtility.h"

@interface ACHMonthlyChallengeDataSource : NSObject

@property (retain, nonatomic) ACHActivitySummaryIterator *activitySummaryIterator; // ivar: _activitySummaryIterator
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // ivar: _activitySummaryUtility
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // ivar: _databaseContext
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) BOOL requiresError;
@property (retain, nonatomic) ACHAwardsWorkoutClient *workoutClient; // ivar: _workoutClient
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility; // ivar: _workoutUtility


-(CGFloat)_dailyAverageValueForMonthlyChallengeWithDailyTargetValue:(CGFloat)arg0 andDateComponentInterval:(id)arg1 ;
// -(CGFloat)_numberOfDaysWithQuantity:(id)arg0 overThreshold:(unk)arg1 forDateComponentInterval:(CGFloat)arg2  ;
// -(CGFloat)_numberOfDaysWithQuantity:(id)arg0 overThreshold:(unk)arg1 forDateComponentInterval:(CGFloat)arg2 error:(id)arg3  ;
-(CGFloat)caloriesDuringDateComponentInterval:(id)arg0 ;
-(CGFloat)caloriesDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(CGFloat)exerciseMinutesDuringDateComponentInterval:(id)arg0 ;
-(CGFloat)exerciseMinutesDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(CGFloat)moveTimeDuringDateComponentInterval:(id)arg0 ;
-(CGFloat)moveTimeDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(CGFloat)numberOfDaysWithAppleMoveTimeOver:(CGFloat)arg0 forDateComponentInterval:(id)arg1 calendar:(id)arg2 error:(*id)arg3 ;
-(CGFloat)numberOfDaysWithCaloriesBurnedOver:(CGFloat)arg0 forDateComponentInterval:(id)arg1 calendar:(id)arg2 error:(*id)arg3 ;
-(CGFloat)numberOfDaysWithDistanceOver:(CGFloat)arg0 forDateComponentInterval:(id)arg1 calendar:(id)arg2 error:(*id)arg3 ;
-(CGFloat)numberOfDaysWithExerciseMinutesOver:(CGFloat)arg0 forDateComponentInterval:(id)arg1 calendar:(id)arg2 error:(*id)arg3 ;
-(CGFloat)valueForMonthlyChallengeType:(NSUInteger)arg0 forDateComponentInterval:(id)arg1 calendar:(id)arg2 error:(*id)arg3 ;
-(CGFloat)valueForMonthlyChallengeType:(NSUInteger)arg0 forDateComponentInterval:(id)arg1 inCalendar:(id)arg2 ;
-(CGFloat)walkingRunningDistanceDuringDateComponentInterval:(id)arg0 ;
-(CGFloat)walkingRunningDistanceDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(NSInteger)currentStreakOfType:(NSUInteger)arg0 duringDateComponentInterval:(id)arg1 ;
-(NSInteger)currentStreakOfType:(NSUInteger)arg0 duringDateComponentInterval:(id)arg1 error:(*id)arg2 ;
-(NSInteger)longestStreakOfType:(NSUInteger)arg0 duringDateComponentInterval:(id)arg1 ;
-(NSInteger)longestStreakOfType:(NSUInteger)arg0 duringDateComponentInterval:(id)arg1 error:(*id)arg2 ;
-(NSInteger)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfCompletedWorkoutsOfType:(NSUInteger)arg0 andLocation:(NSUInteger)arg1 duringDateInterval:(id)arg2 ;
-(NSInteger)numberOfCompletedWorkoutsOfType:(NSUInteger)arg0 andLocation:(NSUInteger)arg1 duringDateInterval:(id)arg2 error:(*id)arg3 ;
-(NSInteger)numberOfDaysDoublingExerciseGoalDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfDaysDoublingExerciseGoalDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfWorkoutsCompletedDuringDateInterval:(id)arg0 ;
-(NSInteger)numberOfWorkoutsCompletedDuringDateInterval:(id)arg0 error:(*id)arg1 ;
-(id)_inclusiveDateIntervalFor:(id)arg0 andDateComponentInterval:(id)arg1 ;
-(id)initWithActivitySummaryIterator:(id)arg0 workoutClient:(id)arg1 ;
-(id)initWithProfile:(id)arg0 activitySummaryUtility:(id)arg1 workoutUtility:(id)arg2 ;
-(void)_getCurrentAndLongestStreakForStreakType:(NSUInteger)arg0 duringDateComponentInterval:(id)arg1 completion:(id)arg2 ;
-(void)_getNoErrorLongestAndCurrentStreakForStreakType:(NSUInteger)arg0 duringDateComponentInterval:(id)arg1 completion:(id)arg2 ;


@end


#endif