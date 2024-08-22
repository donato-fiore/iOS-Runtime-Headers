// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCVIEWMODELPROVIDERDATASOURCE_H
#define HKMCVIEWMODELPROVIDERDATASOURCE_H

@class HKHealthStore, NSMutableSet, HKSampleIteratorQuery, _HKDatabaseChangesQuery, NSMutableIndexSet, HKCalendarCache, NSString;
@protocol HKMCViewModelProviderDataSource, OS_dispatch_queue, HKMCViewModelProviderDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKMCDaySummaryObserverQuery.h"

@interface HKMCViewModelProviderDataSource : NSObject <HKMCViewModelProviderDataSource>

 {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_summaryQueries;
    HKMCDaySummaryObserverQuery *_summaryObserverQuery;
    HKSampleIteratorQuery *_factorQuery;
    _HKDatabaseChangesQuery *_factorObserverQuery;
    NSMutableIndexSet *_canceledDayIndexes;
    HKCalendarCache *_calendarCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKMCViewModelProviderDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHealthStore:(id)arg0 calendarCache:(id)arg1 queue:(id)arg2 ;
-(void)_handleCycleFactorsSampleTypeChanges:(id)arg0 error:(id)arg1 ;
-(void)_handleDaySummaryObserverUpdateWithError:(id)arg0 ;
-(void)_startObservingCycleFactorsUpdates;
-(void)_startObservingDaySummaryUpdates;
-(void)cancelFetchForDaySummariesInDayIndexRange:(struct ? )arg0 ;
-(void)dealloc;
-(void)fetchCycleFactorsInDayIndexRange:(struct ? )arg0 ;
-(void)fetchDaySummariesInDayIndexRange:(struct ? )arg0 ;


@end


#endif