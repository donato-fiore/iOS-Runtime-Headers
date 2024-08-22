// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDAILYROUTINEPREDICTOR_H
#define REDAILYROUTINEPREDICTOR_H

@class NSDateInterval, NSLock, NSNumber, NSString;
@protocol REPeriodOfDayPredictorDelegate, OS_dispatch_queue;


#import "REObservableSingleton.h"
#import "REPeriodOfDayPredictor.h"
#import "REUpNextTimer.h"

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate>

 {
    REPeriodOfDayPredictor *_periodOfDayPredictor;
    REUpNextTimer *_endMorningRoutineTimer;
    REUpNextTimer *_beginEveningRoutineTimer;
    REUpNextTimer *_endEveningRoutineTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _currentRoutine;
    NSDateInterval *_currentRoutineInterval;
    NSLock *_routineLock;
    NSNumber *_overrideRoutineType;
}


@property (readonly, nonatomic) NSDateInterval *currentRoutineInterval;
@property (readonly, nonatomic) NSUInteger currentRoutineType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_eveningRoutineIntervalForEvening:(id)arg0 ;
-(id)_init;
-(id)_morningRoutineIntervalForMorning:(id)arg0 ;
-(id)routineIntervalForNextRoutine:(NSUInteger)arg0 ;
-(id)routineIntervalForPreviousRoutine:(NSUInteger)arg0 ;
-(void)_queue_didBeginEveningRoutine;
-(void)_queue_didBeginMorningRoutine;
-(void)_queue_didEndEveningRoutine;
-(void)_queue_didEndMorningRoutine;
-(void)_queue_setupEveningBeginTimerIfNeeded;
-(void)_queue_setupMorningBeginTimerIfNeeded;
-(void)_setOverrideRoutineType:(NSUInteger)arg0 ;
-(void)_updateCurrentRoutine;
-(void)dealloc;
-(void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg0 ;
-(void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg0 ;


@end


#endif