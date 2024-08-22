// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHDOWNSAMPLER_H
#define TSCHDOWNSAMPLER_H


#import <Foundation/Foundation.h>


@interface TSCHDownsampler : NSObject



+(id)downsampleDataUsingGridPartitioningWithSeries:(id)arg0 xAxis:(id)arg1 yAxis:(id)arg2 ;
+(id)downsampleDataUsingGridPartitioningWithSeries:(id)arg0 xAxis:(id)arg1 yAxis:(id)arg2 sizeAxis:(id)arg3 ;
+(id)downsampleDataUsingTrianglesWithSeries:(id)arg0 toValueCount:(NSUInteger)arg1 radiusAxis:(id)arg2 angleAxis:(id)arg3 ;
+(id)downsampleDataUsingTrianglesWithSeries:(id)arg0 toValueCount:(NSUInteger)arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;


@end


#endif