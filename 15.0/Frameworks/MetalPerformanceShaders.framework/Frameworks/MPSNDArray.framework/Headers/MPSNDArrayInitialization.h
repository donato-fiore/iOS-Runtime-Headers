// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYINITIALIZATION_H
#define MPSNDARRAYINITIALIZATION_H

@class MPSParallelRandomDistributionDescriptor, MPSParallelRandom;


#import "MPSNDArrayMultiaryKernel.h"

@interface MPSNDArrayInitialization : MPSNDArrayMultiaryKernel {
    MPSParallelRandomDistributionDescriptor *_distribution;
    MPSParallelRandom *_generator;
    NSUInteger _seed;
    float _constantValue;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForDestinationArray:(id)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 destinationDescriptor:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 destinationArray:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif