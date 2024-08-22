// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHACTIVITYTRIGGERGENERATOR_H
#define ACHACTIVITYTRIGGERGENERATOR_H


#import <Foundation/Foundation.h>


@interface ACHActivityTriggerGenerator : NSObject



+(NSUInteger)allPossibleTriggers;
-(BOOL)_goalTypeIsMoveType:(NSInteger)arg0 ;
-(NSUInteger)_triggersForNewActivityDataWithGoalType:(NSInteger)arg0 dataProvider:(id)arg1 goalMetHandler:(id)arg2 ;
-(NSUInteger)triggersForNewExerciseDataWithDataProvider:(id)arg0 ;
-(NSUInteger)triggersForNewMoveDataWithDataProvider:(id)arg0 ;
-(NSUInteger)triggersForNewMoveTimeDataWithDataProvider:(id)arg0 ;
-(NSUInteger)triggersForNewStandDataWithDataProvider:(id)arg0 ;
-(struct ? )_incrementWithInitialState:(struct ? )arg0 forGoalType:(NSInteger)arg1 dataProvider:(id)arg2 goalMetHandler:(id)arg3 ;


@end


#endif