// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSTATISTICSCOLLECTIONQUERY_H
#define HKSTATISTICSCOLLECTIONQUERY_H

@class NSMutableArray, NSDate, NSDateInterval, NSString, NSDateComponents, NSNumber;
@protocol HKStatisticsCollectionQueryClientInterface;


#import "HKQuery.h"
#import "HKStatisticsCollectionCacheSettings.h"
#import "HKStatisticsCollection.h"

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface>

 {
    NSMutableArray *_results;
    BOOL _hasReceivedInitialResults;
    BOOL _requireQuantityType;
}


@property (readonly) NSDate *anchorDate; // ivar: _anchorDate
@property (copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings; // ivar: _cacheSettings
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *initialResultsHandler; // ivar: _initialResultsHandler
@property (readonly, copy) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (retain) NSNumber *lastAnchor; // ivar: _lastAnchor
@property (nonatomic) NSUInteger mergeStrategy; // ivar: _mergeStrategy
@property (readonly) NSUInteger options; // ivar: _options
@property (retain) HKStatisticsCollection *statisticsCollection; // ivar: _statisticsCollection
@property (copy, nonatomic) id *statisticsUpdateHandler; // ivar: _statisticsUpdateHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_finishedCachingStatisticsHandler; // ivar: _unitTest_finishedCachingStatisticsHandler


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)_comparisonPredicateContainsStrictStartOrEndDateComparisonPredicate:(id)arg0 ;
-(BOOL)_predicateContainsStrictStartOrEndDateComparisonPredicate:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithQuantityType:(id)arg0 quantitySamplePredicate:(id)arg1 options:(NSUInteger)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 ;
-(id)initWithSampleType:(id)arg0 samplePredicate:(id)arg1 options:(NSUInteger)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 ;
-(void)_queue_deliverInitialStatisticsObjects:(id)arg0 anchor:(id)arg1 queryUUID:(id)arg2 ;
-(void)_queue_deliverResetStatisticsObjects:(id)arg0 forQuery:(id)arg1 ;
-(void)_queue_deliverStatisticsObjects:(id)arg0 forQuery:(id)arg1 ;
-(void)client_deliverStatisticsBatch:(id)arg0 resetStatistics:(BOOL)arg1 isFinal:(BOOL)arg2 anchor:(id)arg3 query:(id)arg4 ;
-(void)client_deliverUpdatedStatistics:(id)arg0 anchor:(id)arg1 query:(id)arg2 ;
-(void)client_finishedCachingStatisticsWithCacheHits:(NSInteger)arg0 error:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif