// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHACTIVITYAWARDINGDATAPROVIDER_H
#define ACHACTIVITYAWARDINGDATAPROVIDER_H

@class HKQuantity, HKActivitySummary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ACHDataStoreActivityProperties.h"

@interface ACHActivityAwardingDataProvider : NSObject <NSCopying>



@property (nonatomic) NSInteger lastCheckedIndexForAllGoals; // ivar: _lastCheckedIndexForAllGoals
@property (nonatomic) NSInteger lastCheckedIndexForDistance; // ivar: _lastCheckedIndexForDistance
@property (nonatomic) NSInteger lastCheckedIndexForExercise; // ivar: _lastCheckedIndexForExercise
@property (nonatomic) NSInteger lastCheckedIndexForMove; // ivar: _lastCheckedIndexForMove
@property (nonatomic) NSInteger lastCheckedIndexForStand; // ivar: _lastCheckedIndexForStand
@property (retain, nonatomic) HKQuantity *lastProcessedTodayExerciseValue; // ivar: _lastProcessedTodayExerciseValue
@property (retain, nonatomic) HKQuantity *lastProcessedTodayMoveTimeValue; // ivar: _lastProcessedTodayMoveTimeValue
@property (retain, nonatomic) HKQuantity *lastProcessedTodayMoveValue; // ivar: _lastProcessedTodayMoveValue
@property (retain, nonatomic) HKQuantity *lastProcessedTodayStandValue; // ivar: _lastProcessedTodayStandValue
@property (retain, nonatomic) HKQuantity *lastTodayDistanceValue; // ivar: _lastTodayDistanceValue
@property (retain, nonatomic) HKQuantity *lastTodayExerciseGoal; // ivar: _lastTodayExerciseGoal
@property (retain, nonatomic) HKQuantity *lastTodayMoveGoal; // ivar: _lastTodayMoveGoal
@property (retain, nonatomic) HKQuantity *lastTodayMoveTimeGoal; // ivar: _lastTodayMoveTimeGoal
@property (retain, nonatomic) HKQuantity *lastTodayStandGoal; // ivar: _lastTodayStandGoal
@property (retain, nonatomic) HKQuantity *previousProcessedTodayExerciseValue; // ivar: _previousProcessedTodayExerciseValue
@property (retain, nonatomic) HKQuantity *previousProcessedTodayMoveTimeValue; // ivar: _previousProcessedTodayMoveTimeValue
@property (retain, nonatomic) HKQuantity *previousProcessedTodayMoveValue; // ivar: _previousProcessedTodayMoveValue
@property (retain, nonatomic) HKQuantity *previousProcessedTodayStandValue; // ivar: _previousProcessedTodayStandValue
@property (readonly, nonatomic) ACHDataStoreActivityProperties *properties; // ivar: _properties
@property (retain, nonatomic) HKActivitySummary *todayActivitySummary; // ivar: _todayActivitySummary
@property (readonly, nonatomic) HKQuantity *todayDistanceValue; // ivar: _todayDistanceValue
@property (readonly, nonatomic) HKQuantity *todayExerciseGoal;
@property (readonly, nonatomic) HKQuantity *todayExerciseValue;
@property (readonly, nonatomic) NSInteger todayIndex;
@property (readonly, nonatomic) HKQuantity *todayMoveGoal;
@property (readonly, nonatomic) HKQuantity *todayMoveTimeGoal;
@property (readonly, nonatomic) HKQuantity *todayMoveTimeValue;
@property (readonly, nonatomic) HKQuantity *todayMoveValue;
@property (readonly, nonatomic) HKQuantity *todayStandGoal;
@property (readonly, nonatomic) HKQuantity *todayStandValue;
@property (retain, nonatomic) HKActivitySummary *yesterdayActivitySummary; // ivar: _yesterdayActivitySummary
@property (readonly, nonatomic) HKQuantity *yesterdayExerciseGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayExerciseValue;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveTimeGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveTimeValue;
@property (readonly, nonatomic) HKQuantity *yesterdayMoveValue;
@property (readonly, nonatomic) HKQuantity *yesterdayStandGoal;
@property (readonly, nonatomic) HKQuantity *yesterdayStandValue;


-(BOOL)allGoalsMetToday;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct ? )_baseMoveState;
-(struct ? )currentExerciseState;
-(struct ? )currentMoveState;
-(struct ? )currentMoveTimeState;
-(struct ? )currentStandState;
-(struct ? )currentStateForGoalType:(NSInteger)arg0 ;
-(void)_setBaseMoveState:(struct ? )arg0 ;
-(void)clearAllProperties;
-(void)setLastCheckedIndex:(NSInteger)arg0 ;
-(void)setNewExerciseState:(struct ? )arg0 ;
-(void)setNewMoveState:(struct ? )arg0 ;
-(void)setNewMoveTimeState:(struct ? )arg0 ;
-(void)setNewStandState:(struct ? )arg0 ;
-(void)setNewState:(struct ? )arg0 forGoalType:(NSInteger)arg1 ;
-(void)updatePreviousPropertiesWithCurrentProperties;


@end


#endif