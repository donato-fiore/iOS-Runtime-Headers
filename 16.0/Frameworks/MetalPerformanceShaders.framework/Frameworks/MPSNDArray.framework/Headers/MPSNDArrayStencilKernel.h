// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYSTENCILKERNEL_H
#define MPSNDARRAYSTENCILKERNEL_H



#import "MPSNDArrayBinaryKernel.h"

@interface MPSNDArrayStencilKernel : MPSNDArrayBinaryKernel

@property (nonatomic) float paddingConstant; // ivar: _paddingConstant
@property (nonatomic) int paddingMode; // ivar: _paddingMode
@property (nonatomic) int reductionMode; // ivar: _reductionMode
@property (nonatomic) MPSNDArrayStencilSizes_s stencilDilationRates; // ivar: _stencilDilationRates
@property (nonatomic) MPSNDArrayStencilOffsets_s stencilOffsets; // ivar: _stencilOffsets
@property (nonatomic) MPSNDArrayStencilSizes_s stencilStrides; // ivar: _stencilStrides


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif