// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSPARALLELRANDOMPHILOX_H
#define MPSPARALLELRANDOMPHILOX_H

@protocol MTLBuffer;


#import "MPSParallelRandom.h"

@interface MPSParallelRandomPhilox : MPSParallelRandom {
    id<MTLBuffer> *_counters;
    float _bernoulliParameter;
    float _uniformMin;
    float _uniformMax;
    float _normalMean;
    float _normalStandardDeviation;
    NSUInteger _seed;
}




-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 seed:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 seed:(NSUInteger)arg2 distributionDescriptor:(id)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 computeEncoder:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 numEntries:(NSUInteger)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationBuffer:(id)arg1 destinationOffset:(NSUInteger)arg2 numEntries:(NSUInteger)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationBuffer:(id)arg1 destinationOffset:(NSUInteger)arg2 numEntries:(NSUInteger)arg3 stride:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif