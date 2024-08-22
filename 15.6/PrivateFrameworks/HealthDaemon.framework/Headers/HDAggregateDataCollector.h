// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAGGREGATEDATACOLLECTOR_H
#define HDAGGREGATEDATACOLLECTOR_H

@class _HKDelayedOperation, NSDictionary;
@protocol HDSensorDatum;


#import "HDDataCollector.h"

@interface HDAggregateDataCollector : HDDataCollector {
    _HKDelayedOperation *_historicalFetchOperation;
    id<HDSensorDatum> *_lastReceivedSensorDatum;
    BOOL _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    BOOL _fetchingHistoricalData;
    BOOL _needsHistoricalFetch;
    CGFloat _maxDatumDuration;
}


@property CGFloat maxDatumDuration;
@property (readonly, nonatomic) BOOL requiresSampleAggregation;


-(CGFloat)_queue_aggregationInterval;
-(id)_queue_lastReceivedSecondaryContext;
-(id)_queue_lastReceivedSensorDatum;
-(id)_queue_processSensorDataBatched:(id)arg0 firstDatum:(id)arg1 lastSensorDatum:(*id)arg2 ;
-(id)hkObjectsFromSensorData:(id)arg0 baseSensorDatum:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_queue_beginStreaming;
-(void)_queue_updateLastReceivedSecondaryContext:(id)arg0 ;
-(void)_queue_updateLastReceivedSensorDatum:(id)arg0 ;
-(void)beginUpdatesFromDatum:(id)arg0 withHandler:(id)arg1 ;
-(void)fetchHistoricalSensorDataSinceDatum:(id)arg0 databaseIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)updateHistoricalData;
-(void)updateHistoricalDataForcedUpdate:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateHistoricalDataWithCompletion:(id)arg0 ;
-(void)willPersistHKObjects:(id)arg0 ;


@end


#endif