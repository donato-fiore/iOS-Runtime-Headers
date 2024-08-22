// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSTATISTICSCOLLECTIONQUERYSERVER_H
#define HDSTATISTICSCOLLECTIONQUERYSERVER_H

@class _HKDateIntervalCollection, NSMutableDictionary, NSDateInterval, HKQuantityType, HKStatisticsCollectionCacheSettings, NSDate, NSString;
@protocol HDQuantitySeriesObserver, HDStatisticsCollectionQueryServerDataSource;


#import "HDQueryServer.h"
#import "HDStatisticsCollectionCalculatorDefaultSourceOrderProvider.h"
#import "HDStatisticsCollectionCalculator.h"
#import "HDSampleAggregateCachingSession.h"

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDQuantitySeriesObserver>

 {
    _HKDateIntervalCollection *_intervalCollection;
    id<HDStatisticsCollectionQueryServerDataSource> *_dataSource;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider *_sourceOrderProvider;
    HDStatisticsCollectionCalculator *_calculator;
    NSMutableDictionary *_pendingQuantitiesBySeries;
    BOOL _addedSamplesRequireProtectedData;
    BOOL _requiresFetch;
    BOOL _hasScheduledUpdate;
    BOOL _deliversUpdates;
    NSUInteger _mergeStrategy;
    NSDateInterval *_resultsDateInterval;
    HKQuantityType *_quantityType;
    HKStatisticsCollectionCacheSettings *_cacheSettings;
    HDSampleAggregateCachingSession *_cachingSession;
    NSInteger _cacheHits;
}


@property (readonly, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger statisticsOptions; // ivar: _statisticsOptions
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_queryServerStatisticsEnumerationHandler; // ivar: _unitTest_queryServerStatisticsEnumerationHandler
@property (copy, nonatomic) id *unitTest_queryServerUnableToUpdateStatisticsHandler; // ivar: _unitTest_queryServerUnableToUpdateStatisticsHandler
@property (copy, nonatomic) id *unitTest_queryServerUpdateStatisticsHandler; // ivar: _unitTest_queryServerUpdateStatisticsHandler


+(BOOL)supportsAnchorBasedAuthorization;
+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldObserveDatabaseProtectedDataAvailability;
-(id)_newCachingSessionWithProfile:(id)arg0 cachingIdentifier:(id)arg1 sourceEntity:(id)arg2 queryDescriptor:(id)arg3 cachedClass:(Class)arg4 queryInterval:(id)arg5 anchorDate:(id)arg6 intervalComponents:(id)arg7 timeIntervalToBucketIndex:(id)arg8 ;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)quantityType;
-(id)transactionalQuantityInsertHandlerForProfile:(SEL)arg0 journaled:(id)arg1 count:(BOOL)arg2 ;
-(void)_queue_start;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)profile:(id)arg0 didDiscardSeriesOfType:(id)arg1 ;


@end


#endif