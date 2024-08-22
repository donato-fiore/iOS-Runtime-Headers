// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHMONTHLYCHALLENGEDATASOURCE_H
#define ACHMONTHLYCHALLENGEDATASOURCE_H

@class HDDatabaseTransactionContext, HDProfile;

#import <Foundation/Foundation.h>

#import "ACHActivitySummaryUtility.h"
#import "ACHWorkoutUtility.h"

@interface ACHMonthlyChallengeDataSource : NSObject

@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility; // ivar: _activitySummaryUtility
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext; // ivar: _databaseContext
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility; // ivar: _workoutUtility


-(CGFloat)caloriesDuringDateComponentInterval:(id)arg0 ;
-(CGFloat)exerciseMinutesDuringDateComponentInterval:(id)arg0 ;
-(CGFloat)moveTimeDuringDateComponentInterval:(id)arg0 ;
-(CGFloat)valueForMonthlyChallengeType:(NSUInteger)arg0 forDateComponentInterval:(id)arg1 inCalendar:(id)arg2 ;
-(CGFloat)walkingRunningDistanceDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg0 ;
-(NSInteger)numberOfWorkoutsCompletedDuringDateInterval:(id)arg0 ;
-(id)initWithProfile:(id)arg0 activitySummaryUtility:(id)arg1 workoutUtility:(id)arg2 ;


@end


#endif