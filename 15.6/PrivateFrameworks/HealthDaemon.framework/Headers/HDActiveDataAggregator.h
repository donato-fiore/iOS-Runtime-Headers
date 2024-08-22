// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDACTIVEDATAAGGREGATOR_H
#define HDACTIVEDATAAGGREGATOR_H

@class NSLock, NSMutableDictionary, _HKDelayedOperation;
@protocol OS_dispatch_queue;


#import "HDDataAggregator.h"

@interface HDActiveDataAggregator : HDDataAggregator {
    NSLock *_aggregationLock;
    NSMutableDictionary *_currentAggregationStates;
    _HKDelayedOperation *_delayedAggregationOperation;
    NSObject<OS_dispatch_queue> *_delayedAggregationQueue;
}




-(BOOL)didPersistObjects:(id)arg0 lastDatum:(id)arg1 collector:(id)arg2 error:(*id)arg3 ;
-(CGFloat)aggregationInterval;
-(CGFloat)aggregationIntervalForCollector:(id)arg0 ;
-(Class)sensorDatumClass;
-(id)aggregateForState:(id)arg0 collector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(NSInteger)arg4 options:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)configurationForCollector:(id)arg0 ;
-(id)initWithDataCollectionManager:(id)arg0 ;
-(id)initialAggregationState;
-(void)dataCollector:(id)arg0 didCollectSensorData:(id)arg1 device:(id)arg2 ;
-(void)recomputeCollectorConfiguration;
-(void)registerDataCollector:(id)arg0 state:(id)arg1 ;
-(void)requestAggregationThroughDate:(id)arg0 mode:(NSInteger)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)unregisterDataCollector:(id)arg0 ;


@end


#endif