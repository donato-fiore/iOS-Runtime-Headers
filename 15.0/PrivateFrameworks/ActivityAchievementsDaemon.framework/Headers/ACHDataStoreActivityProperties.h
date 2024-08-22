// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHDATASTOREACTIVITYPROPERTIES_H
#define ACHDATASTOREACTIVITYPROPERTIES_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "ACHDataStoreActivityProperties.h"

@interface ACHDataStoreActivityProperties : NSObject

@property (nonatomic) CGFloat bestExerciseGoalValue; // ivar: _bestExerciseGoalValue
@property (nonatomic) NSUInteger bestExerciseStreak; // ivar: _bestExerciseStreak
@property (nonatomic) CGFloat bestExerciseValue; // ivar: _bestExerciseValue
@property (nonatomic) CGFloat bestMoveGoalValue; // ivar: _bestMoveGoalValue
@property (nonatomic) NSUInteger bestMoveStreak; // ivar: _bestMoveStreak
@property (nonatomic) CGFloat bestMoveTimeGoalValue; // ivar: _bestMoveTimeGoalValue
@property (nonatomic) CGFloat bestMoveTimeValue; // ivar: _bestMoveTimeValue
@property (nonatomic) CGFloat bestMoveValue; // ivar: _bestMoveValue
@property (nonatomic) NSUInteger bestStandGoalValue; // ivar: _bestStandGoalValue
@property (nonatomic) NSUInteger bestStandStreak; // ivar: _bestStandStreak
@property (nonatomic) NSUInteger bestStandValue; // ivar: _bestStandValue
@property (nonatomic) NSUInteger bestStepCount; // ivar: _bestStepCount
@property (nonatomic) NSUInteger currentExerciseStreak; // ivar: _currentExerciseStreak
@property (nonatomic) NSUInteger currentMoveStreak; // ivar: _currentMoveStreak
@property (nonatomic) NSUInteger currentStandStreak; // ivar: _currentStandStreak
@property (readonly, nonatomic) NSArray *dictionaryKeys;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) NSUInteger lastStepCount; // ivar: _lastStepCount
@property (retain, nonatomic) ACHDataStoreActivityProperties *previousValues; // ivar: _previousValues
@property (nonatomic) NSInteger storeValuesValidBeforeSummaryIndex; // ivar: _storeValuesValidBeforeSummaryIndex
@property (nonatomic) NSUInteger totalExerciseGoalsAttempted; // ivar: _totalExerciseGoalsAttempted
@property (nonatomic) NSUInteger totalExerciseGoalsMade; // ivar: _totalExerciseGoalsMade
@property (nonatomic) NSUInteger totalMoveGoalsAttempted; // ivar: _totalMoveGoalsAttempted
@property (nonatomic) NSUInteger totalMoveGoalsMade; // ivar: _totalMoveGoalsMade
@property (nonatomic) NSUInteger totalStandGoalsAttempted; // ivar: _totalStandGoalsAttempted
@property (nonatomic) NSUInteger totalStandGoalsMade; // ivar: _totalStandGoalsMade




@end


#endif