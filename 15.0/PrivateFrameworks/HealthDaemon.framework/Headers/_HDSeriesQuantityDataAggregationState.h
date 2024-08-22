// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDSERIESQUANTITYDATAAGGREGATIONSTATE_H
#define _HDSERIESQUANTITYDATAAGGREGATIONSTATE_H



#import "HDDataAggregationState.h"
#import "HDQuantityDatum.h"

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState

@property (readonly, nonatomic) HDQuantityDatum *lastDatum; // ivar: _lastDatum
@property (readonly, nonatomic) NSInteger length; // ivar: _length




@end


#endif