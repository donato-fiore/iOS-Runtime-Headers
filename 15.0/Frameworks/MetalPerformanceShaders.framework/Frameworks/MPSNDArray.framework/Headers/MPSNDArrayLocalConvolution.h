// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYLOCALCONVOLUTION_H
#define MPSNDARRAYLOCALCONVOLUTION_H



#import "MPSNDArrayBinaryKernel.h"

@interface MPSNDArrayLocalConvolution : MPSNDArrayBinaryKernel

@property (nonatomic) unsigned int dataFormat; // ivar: _dataFormat
@property (nonatomic) MPSNDArrayConvolutionSizes dilationRates; // ivar: _dilationRates
@property (nonatomic) MPSNDArrayConvolutionSizes kernelSizes; // ivar: _kernelSizes


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif