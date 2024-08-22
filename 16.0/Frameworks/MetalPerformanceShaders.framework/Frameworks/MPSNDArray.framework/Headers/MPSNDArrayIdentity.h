// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYIDENTITY_H
#define MPSNDARRAYIDENTITY_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayIdentity : MPSNDArrayUnaryKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)reshapeWithCommandBuffer:(id)arg0 sourceArray:(id)arg1 dimensionCount:(NSUInteger)arg2 dimensionSizes:(*NSUInteger)arg3 destinationArray:(id)arg4 ;
-(id)reshapeWithCommandBuffer:(id)arg0 sourceArray:(id)arg1 shape:(id)arg2 destinationArray:(id)arg3 ;
-(id)reshapeWithCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArray:(id)arg2 dimensionCount:(NSUInteger)arg3 dimensionSizes:(*NSUInteger)arg4 destinationArray:(id)arg5 ;
-(id)reshapeWithCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArray:(id)arg2 shape:(id)arg3 destinationArray:(id)arg4 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif