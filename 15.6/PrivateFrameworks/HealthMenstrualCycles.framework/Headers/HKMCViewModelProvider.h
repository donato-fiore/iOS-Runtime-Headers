// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCVIEWMODELPROVIDER_H
#define HKMCVIEWMODELPROVIDER_H

@class NSHashTable, NSMutableIndexSet, NSMutableDictionary, NSArray, NSNumber, _HKDelayedOperation, HKCalendarCache, NSString;
@protocol HKMCViewModelProviderDataSourceDelegate, HKMCAnalysisProviderObserver, HKMCViewModelProviderDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKMCAnalysisProvider.h"
#import "HKMCAnalysis.h"

@interface HKMCViewModelProvider : NSObject <HKMCViewModelProviderDataSourceDelegate, HKMCAnalysisProviderObserver>

 {
    id<HKMCViewModelProviderDataSource> *_dataSource;
    HKMCAnalysisProvider *_analysisProvider;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _minimumBufferDuration;
    NSInteger _prefetchDuration;
    ? _managedDayRange;
    NSMutableIndexSet *_fetchStartedDayIndexes;
    NSMutableIndexSet *_fetchCompletedDayIndexes;
    NSMutableDictionary *_daySummariesByDayIndex;
    NSArray *_cycleFactors;
    NSNumber *_minimumAnalysisAnchor;
    HKMCAnalysis *_analysis;
    _HKDelayedOperation *_notifyObserversOperation;
}


@property (nonatomic) ? activeDayRange; // ivar: _activeDayRange
@property (readonly, nonatomic) HKCalendarCache *calendarCache; // ivar: _calendarCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumActiveDuration; // ivar: _maximumActiveDuration
@property (readonly) Class superclass;


-(BOOL)_didFetchInitialAnalysis;
-(BOOL)_didFetchMinimumAnalysis;
-(BOOL)_ppt_didFetchAnalysis;
-(BOOL)_ppt_didFetchDaySummaries;
-(NSInteger)_fetchStateForDayIndex:(NSInteger)arg0 ;
-(NSUInteger)_fertileWindowLevelWithDayIndex:(NSInteger)arg0 ;
-(NSUInteger)_menstruationLevelWithDayIndex:(NSInteger)arg0 menstrualFlow:(NSInteger)arg1 partiallyLoggedPeriod:(*BOOL)arg2 ;
-(id)_copyWithDataSource:(id)arg0 minimumBufferDuration:(NSInteger)arg1 ;
-(id)_initWithDataSource:(id)arg0 analysisProvider:(id)arg1 maximumActiveDuration:(NSInteger)arg2 minimumBufferDuration:(NSInteger)arg3 prefetchDuration:(NSInteger)arg4 calendarCache:(id)arg5 queue:(id)arg6 ;
-(id)_viewModelWithDayIndex:(NSInteger)arg0 fetchedDaySummary:(id)arg1 ;
-(id)copyWithMinimumBufferDuration:(NSInteger)arg0 ;
-(id)dayViewModelAtIndex:(NSInteger)arg0 ;
-(id)initWithHealthStore:(id)arg0 analysisProvider:(id)arg1 maximumActiveDuration:(NSInteger)arg2 minimumBufferDuration:(NSInteger)arg3 calendarCache:(id)arg4 ;
-(id)initWithHealthStore:(id)arg0 analysisProvider:(id)arg1 maximumActiveDuration:(NSInteger)arg2 minimumBufferDuration:(NSInteger)arg3 calendarCache:(id)arg4 queue:(id)arg5 ;
-(struct ? )_test_managedDayRange;
-(void)_queue_notifyObserversDidUpdate;
-(void)_queue_runNotifyObserversOperationNow;
-(void)_setFetchState:(NSInteger)arg0 forDayIndexRange:(struct ? )arg1 ;
-(void)_updateManagedDayRangeIfNeeded;
-(void)addObserver:(id)arg0 ;
-(void)analysisProvider:(id)arg0 didUpdateAnalysis:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)setActiveCycle:(id)arg0 ;
-(void)viewModelProviderDataSource:(id)arg0 didFetchCycleFactors:(id)arg1 forDayIndexRange:(struct ? )arg2 ;
-(void)viewModelProviderDataSource:(id)arg0 didFetchDaySummaries:(id)arg1 forDayIndexRange:(struct ? )arg2 analysisAnchor:(id)arg3 ;
-(void)viewModelProviderDataSourceDidUpdateCycleFactors:(id)arg0 ;
-(void)viewModelProviderDataSourceDidUpdateDaySummaries:(id)arg0 ;


@end


#endif