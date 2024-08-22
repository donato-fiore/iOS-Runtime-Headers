// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHACTIVITYAWARDINGENVIRONMENT_H
#define ACHACTIVITYAWARDINGENVIRONMENT_H


#import <Foundation/Foundation.h>

#import "ACHActivityAwardingDataProvider.h"
#import "ACHActivityAwardingDateCache.h"

@interface ACHActivityAwardingEnvironment : NSObject

@property (retain, nonatomic) ACHActivityAwardingDataProvider *dataProvider; // ivar: _dataProvider
@property (retain, nonatomic) ACHActivityAwardingDateCache *dateCache; // ivar: _dateCache
@property (nonatomic) NSUInteger experienceType; // ivar: _experienceType
@property (nonatomic) BOOL valueForKeyLoggingEnabled; // ivar: _valueForKeyLoggingEnabled


-(BOOL)todayIsStandalonePhoneFitnessMode;
-(NSInteger)todayActivityMoveMode;
-(id)bestExerciseGoal;
-(id)bestExerciseStreak;
-(id)bestExerciseValue;
-(id)bestMoveGoal;
-(id)bestMoveStreak;
-(id)bestMoveTimeGoal;
-(id)bestMoveTimeValue;
-(id)bestMoveValue;
-(id)bestStandGoal;
-(id)bestStandStreak;
-(id)bestStandValue;
-(id)currentExercisePercentage;
-(id)currentExerciseStreak;
-(id)currentMovePercentage;
-(id)currentMoveStreak;
-(id)currentMoveTimePercentage;
-(id)currentStandPercentage;
-(id)currentStandStreak;
-(id)currentStreakForAllActivity;
-(id)dayOfMonthForToday;
-(id)dayOfWeekForLastDayOfFitnessWeek;
-(id)dayOfWeekForToday;
-(id)initWithDataProvider:(id)arg0 ;
-(id)numberOfDaysInThisMonth;
-(id)previousBestExerciseGoal;
-(id)previousBestExerciseStreak;
-(id)previousBestMoveGoal;
-(id)previousBestMoveStreak;
-(id)previousBestMoveTimeGoal;
-(id)previousBestStandGoal;
-(id)previousBestStandStreak;
-(id)previousExercisePercentage;
-(id)previousMovePercentage;
-(id)previousMoveTimePercentage;
-(id)previousStandPercentage;
-(id)requiredDaysOfActivityHistoryForRecords;
-(id)requiredDaysOfActivityHistoryForStreaks;
-(id)todayAgnosticMoveGoal;
-(id)todayAgnosticMoveValue;
-(id)todayExerciseGoal;
-(id)todayExerciseValue;
-(id)todayMoveGoal;
-(id)todayMoveTimeGoal;
-(id)todayMoveTimeValue;
-(id)todayMoveValue;
-(id)todayStandGoal;
-(id)todayStandValue;
-(id)totalDaysOfExerciseHistory;
-(id)totalDaysOfMoveHistory;
-(id)totalDaysOfStandHistory;
-(id)totalExerciseGoalsMet;
-(id)totalMoveGoalsMet;
-(id)totalStandGoalsMet;
-(id)valueForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)yesterdayExerciseValue;
-(id)yesterdayMoveTimeValue;
-(id)yesterdayMoveValue;
-(id)yesterdayStandValue;
-(void)setCurrentDateComponents:(id)arg0 ;


@end


#endif