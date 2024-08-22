// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYPOOLINGKERNEL_H
#define MPSNDARRAYPOOLINGKERNEL_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayPoolingKernel : MPSNDArrayUnaryKernel {
    BOOL _disablePostfixReturnIndices;
}


@property (nonatomic) MPSNDArrayPoolingSizes_s poolingDilationRates; // ivar: _poolingDilationRates
@property (nonatomic) BOOL poolingGradientWithIndices; // ivar: _poolingGradientWithIndices
@property (readonly, nonatomic) MPSNDArrayPoolingSizes_s poolingKernelSizes; // ivar: _poolingKernelSizes
@property (readonly, nonatomic) int poolingMode; // ivar: _poolingMode
@property (nonatomic) MPSNDArrayPoolingOffsets_s poolingOffsets; // ivar: _poolingOffsets
@property (nonatomic) unsigned int poolingReturnIndicesDataType; // ivar: _poolingReturnIndicesDataType
@property (nonatomic) int poolingReturnIndicesMode; // ivar: _poolingReturnIndicesMode
@property (nonatomic) MPSNDArrayPoolingSizes_s poolingStrides; // ivar: _poolingStrides


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelSizes:(struct MPSNDArrayPoolingSizes_s )arg1 poolingMode:(int)arg2 ;
-(id)initWithDevice:(id)arg0 kernelSizes:(struct MPSNDArrayPoolingSizes_s )arg1 poolingMode:(int)arg2 returnIndicesMode:(int)arg3 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif