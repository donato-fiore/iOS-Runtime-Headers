// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIACTIVITYDATAPROVIDER_H
#define FIUIACTIVITYDATAPROVIDER_H

@class HKHealthStore, HKUnit, _HKCurrentActivitySummaryQuery, HKActivitySummary, HKCurrentActivityCacheQuery, NSArray, NSHashTable, NSDate, FIFitnessAppsStateObserver, NSString;
@protocol FIFitnessAppsStateObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FIUIActivityDataProvider : NSObject <FIFitnessAppsStateObserverDelegate>

 {
    HKHealthStore *_healthStore;
    HKUnit *_kcalUnit;
    HKUnit *_minuteUnit;
    HKUnit *_countUnit;
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
    NSObject<OS_dispatch_queue> *_queue;
    HKActivitySummary *_queue_currentActivitySummary;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    NSArray *_queue_currentActiveEnergyChartData;
    NSArray *_queue_currentMoveTimeChartData;
    NSArray *_queue_currentExerciseChartData;
    NSArray *_queue_currentStandChartData;
    NSObject<OS_dispatch_queue> *_subscriber_queue;
    NSHashTable *_subscribers;
    NSDate *_currentDate;
    BOOL _queue_ignoreLoadingSummary;
    FIFitnessAppsStateObserver *_fitnessAppsStateObserver;
    BOOL _areFitnessAppsRestricted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedModel;
-(BOOL)_loadingStateForActivitySummary:(id)arg0 ;
-(id)_currentActivitySummaryQueryCollectionIntervalsOverride;
-(id)_queue_activityDataModelFromCurrentActivitySummary;
-(id)init;
-(id)switcherActivityDataModel;
-(void)_broadcastCurrentModelUpdate:(id)arg0 toSubscriber:(id)arg1 ;
-(void)_broadcastCurrentModelUpdateToSubscribers:(id)arg0 ;
-(void)_handleTimeChange;
-(void)_queue_restartQueriesIfQueryInUse:(id)arg0 ;
-(void)_queue_restartQueriesPreservingExistingGoals:(BOOL)arg0 ;
-(void)_queue_startQueries;
-(void)_queue_stopQueriesPreservingExistingGoals:(BOOL)arg0 ;
-(void)_queue_updateChartStatisticsWithStatisticsQueryResult:(id)arg0 ;
-(void)_queue_updateCurrentActivitySummaryWithSummary:(id)arg0 ;
-(void)_setCurrentDate:(id)arg0 ;
-(void)addSubscriber:(id)arg0 ;
-(void)dealloc;
-(void)fitnessAppsStateObserver:(id)arg0 stateDidChange:(NSInteger)arg1 ;
-(void)getCurrentActivityDataModelWithHandler:(id)arg0 ;
-(void)removeSubscriber:(id)arg0 ;


@end


#endif