// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REPERIODOFDAYPREDICTOR_H
#define REPERIODOFDAYPREDICTOR_H

@class NSArray, NSLock, NSDateInterval;
@protocol REPeriodOfDayPredictorProperties;


#import "REPredictor.h"
#import "REUpNextTimer.h"
#import "REDuetKnowledgeStore.h"

@interface REPeriodOfDayPredictor : REPredictor <REPeriodOfDayPredictorProperties>

 {
    NSArray *_storedPeriods;
    NSLock *_storedPeriodsLock;
    REUpNextTimer *_periodOfDayUpdateTimer;
    REDuetKnowledgeStore *_knowledgeStore;
}


@property (readonly, nonatomic) NSUInteger currentPeriodOfDay;
@property (readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;
@property (readonly, nonatomic) NSArray *storedPeriods;


+(CGFloat)updateInterval;
-(id)_defaultDayPeriodsOfDayForDate:(id)arg0 ;
-(id)_init;
-(id)_nextDayPeriodUpdateDate;
-(id)_periodsOfDayForSleepIntervals:(id)arg0 ;
-(id)dateIntervalForNextPeriodOfDay:(NSUInteger)arg0 ;
-(id)dateIntervalForNextPeriodOfDay:(NSUInteger)arg0 afterDate:(id)arg1 ;
-(id)dateIntervalForPreviousPeriodOfDay:(NSUInteger)arg0 ;
-(id)dateIntervalForPreviousPeriodOfDay:(NSUInteger)arg0 beforeDate:(id)arg1 ;
-(void)_getAllSleepIntervalsWithCompletion:(id)arg0 ;
-(void)_getHistoricSleepIntervalsWithCompletion:(id)arg0 ;
-(void)_getPredictedSleepIntervalsWithCompletion:(id)arg0 ;
-(void)_handleSignificantTimeChange;
-(void)_queue_updateNextDateUpdateTimer;
-(void)dealloc;
-(void)update;


@end


#endif