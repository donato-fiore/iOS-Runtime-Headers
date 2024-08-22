// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHMONTHLYCHALLENGEEVALUATIONENVIRONMENT_H
#define ACHMONTHLYCHALLENGEEVALUATIONENVIRONMENT_H

@class NSCalendar, ACHDateComponentInterval;

#import <Foundation/Foundation.h>

#import "ACHMonthlyChallengeDataSource.h"

@interface ACHMonthlyChallengeEvaluationEnvironment : NSObject

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) CGFloat currentMoveStreakInCurrentMonth;
@property (weak, nonatomic) ACHMonthlyChallengeDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) ACHDateComponentInterval *dateComponentInterval; // ivar: _dateComponentInterval
@property (readonly, nonatomic) CGFloat longestMoveStreakInCurrentMonth;
@property (readonly, nonatomic) CGFloat numberOfDaysClosingAllThreeRingsInCurrentMonth;
@property (readonly, nonatomic) CGFloat numberOfDaysClosingExerciseRingInCurrentMonth;
@property (readonly, nonatomic) CGFloat numberOfDaysClosingMoveRingInCurrentMonth;
@property (readonly, nonatomic) CGFloat numberOfDaysClosingStandRingInCurrentMonth;
@property (readonly, nonatomic) CGFloat numberOfDaysDoublingExerciseGoalInCurrentMonth;
@property (readonly, nonatomic) CGFloat numberOfDaysDoublingMoveGoalInCurrentMonth;
@property (readonly, nonatomic) CGFloat numberOfWorkoutsCompletedInCurrentMonth;
@property (readonly, nonatomic) CGFloat totalEnergyBurnInCurrentMonth;
@property (readonly, nonatomic) CGFloat totalExerciseMinutesInCurrentMonth;
@property (readonly, nonatomic) CGFloat totalMoveTimeInCurrentMonth;
@property (readonly, nonatomic) CGFloat totalWalkingRunningDistanceInCurrentMonth;


-(CGFloat)_valueForMonthlyChallengeType:(NSUInteger)arg0 ;
-(id)eligibleSpecificWorkoutChallengeType;
-(id)initWithMonthlyChallengeDataSource:(id)arg0 dateComponentInterval:(id)arg1 calendar:(id)arg2 ;
-(id)numberOfCompletedWorkoutsInCurrentMonthForChallengeType:(id)arg0 ;
-(id)numberOfDaysWithAppleMoveTimeOver:(id)arg0 ;
-(id)numberOfDaysWithCaloriesBurnedOver:(id)arg0 ;
-(id)numberOfDaysWithDistanceOver:(id)arg0 ;
-(id)numberOfDaysWithExerciseMinutesOver:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif