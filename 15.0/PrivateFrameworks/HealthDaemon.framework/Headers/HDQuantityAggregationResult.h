// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYAGGREGATIONRESULT_H
#define HDQUANTITYAGGREGATIONRESULT_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HDQuantityAggregationResult : NSObject

@property (readonly, copy, nonatomic) NSArray *aggregatedSamples; // ivar: _aggregatedSamples
@property (readonly, copy, nonatomic) NSArray *consumedSensorData; // ivar: _consumedSensorData
@property (readonly, copy, nonatomic) NSMutableArray *remainingSensorData; // ivar: _remainingSensorData


-(id)initWithAggregatedSamples:(id)arg0 consumedData:(id)arg1 remainingData:(id)arg2 ;


@end


#endif