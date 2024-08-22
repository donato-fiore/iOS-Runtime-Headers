// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSAGGREGATIONS_H
#define BPSAGGREGATIONS_H


#import <Foundation/Foundation.h>


@interface BPSAggregations : NSObject



+(id)approxPercentile;
+(id)approxPercentileWithDigestCapacity:(NSUInteger)arg0 ;
+(id)approximateDistinctCount;
+(id)avg;
+(id)count;
+(id)max;
+(id)min;
+(id)sum;


@end


#endif