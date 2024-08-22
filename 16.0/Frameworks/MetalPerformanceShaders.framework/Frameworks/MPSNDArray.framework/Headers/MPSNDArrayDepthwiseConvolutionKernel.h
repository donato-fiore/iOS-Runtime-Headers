// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYDEPTHWISECONVOLUTIONKERNEL_H
#define MPSNDARRAYDEPTHWISECONVOLUTIONKERNEL_H



#import "MPSNDArrayBinaryKernel.h"

@interface MPSNDArrayDepthwiseConvolutionKernel : MPSNDArrayBinaryKernel

@property (nonatomic) NSUInteger channelAxis; // ivar: _channelAxis
@property (nonatomic) MPSNDArrayConv3dSizes_s convDilationRates; // ivar: _convDilationRates
@property (nonatomic) MPSNDArrayConv3dSizes_s convStrides; // ivar: _convStrides
@property (nonatomic) MPSNDArrayConv3dOffsets_s windowOffsets; // ivar: _windowOffsets


+(BOOL)supportsPostfixForDevice:(*void)arg0 ;
+(BOOL)supportsPrefixForDevice:(*void)arg0 ;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif