// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSERIESQUANTITYDATAAGGREGATOR_H
#define HDSERIESQUANTITYDATAAGGREGATOR_H

@class NSMutableSet;


#import "HDActiveQuantityDataAggregator.h"

@interface HDSeriesQuantityDataAggregator : HDActiveQuantityDataAggregator {
    os_unfair_lock_s _lock;
    NSMutableSet *_lock_failedSeriesUUIDs;
}




-(BOOL)requiresNewSeriesForDatum:(id)arg0 lastDatum:(id)arg1 seriesLength:(NSInteger)arg2 currentSeries:(id)arg3 configuration:(id)arg4 aggregationInterval:(CGFloat)arg5 ;
-(BOOL)shouldAggregateToSeriesForState:(id)arg0 collector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(NSInteger)arg4 options:(NSUInteger)arg5 ;
-(BOOL)shouldFreezeCurrentSeries:(id)arg0 lastDatum:(id)arg1 seriesLength:(NSInteger)arg2 configuration:(id)arg3 aggregationInterval:(CGFloat)arg4 ;
-(id)aggregateForState:(id)arg0 collector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(NSInteger)arg4 options:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)initForQuantityType:(id)arg0 dataCollectionManager:(id)arg1 ;
-(id)initialAggregationState;
-(void)addDatum:(id)arg0 toAccumulatedData:(id)arg1 ;


@end


#endif