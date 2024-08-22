// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYMATRIXMULTIPLICATION_H
#define MPSNDARRAYMATRIXMULTIPLICATION_H

@class MPSMatrixMultiplication;


#import "MPSNDArrayMultiaryKernel.h"
#import "MPSNDArrayIdentity.h"

@interface MPSNDArrayMatrixMultiplication : MPSNDArrayMultiaryKernel {
    MPSMatrixMultiplication *_mmul;
    MPSNDArrayIdentity *_identity;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGFloat beta; // ivar: _beta


+(BOOL)supportsPostfixForDevice:(*void)arg0 ;
+(BOOL)supportsPrefixForDevice:(*void)arg0 ;
+(NSUInteger)expectedVirtualSourceCount;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 destinationArrays:(id)arg1 kernelDAGObject:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)encodePreProcessingToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArray:(id)arg3 kernelDAGObject:(id)arg4 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif