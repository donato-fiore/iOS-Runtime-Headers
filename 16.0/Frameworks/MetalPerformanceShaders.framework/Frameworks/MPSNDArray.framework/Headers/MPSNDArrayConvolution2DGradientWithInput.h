// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYCONVOLUTION2DGRADIENTWITHINPUT_H
#define MPSNDARRAYCONVOLUTION2DGRADIENTWITHINPUT_H



#import "MPSNDArrayBinaryPrimaryGradientKernel.h"
#import "MPSExternalNDArrayBinaryGradient.h"
#import "MPSNDArrayIdentity.h"

@interface MPSNDArrayConvolution2DGradientWithInput : MPSNDArrayBinaryPrimaryGradientKernel {
    NSUInteger _kernelWidth;
    NSUInteger _kernelHeight;
    NSUInteger _strideInPixelsX;
    NSUInteger _strideInPixelsY;
    NSUInteger _dilationRateInX;
    NSUInteger _dilationRateInY;
    MPSNDArrayConvolutionOffsets _offsets;
    MPSNDArrayConvolutionOffsets _kernelOffsets;
    MPSExternalNDArrayBinaryGradient *_plugin;
    MPSNDArrayIdentity *_ndArrayIdentity;
    BOOL _forcePlugin;
    *void _autoTuningParams;
    int _autoTuningTarget;
}


@property (readonly, nonatomic) NSUInteger channelMultiplier; // ivar: _channelMultiplier
@property (readonly, nonatomic) unsigned int dataFormat; // ivar: _dataFormat
@property (readonly, nonatomic) MPSNDArrayConvolutionSizes dilationRates;
@property (readonly, nonatomic) NSUInteger groups; // ivar: _groups
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (nonatomic) MPSNDArrayConvolutionOffsets kernelOffsets;
@property (readonly, nonatomic) MPSNDArrayConvolutionSizes kernelSizes;
@property (nonatomic) MPSNDArrayConvolutionOffsets offsets;
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (readonly, nonatomic) MPSNDArrayConvolutionSizes strideInPixels;
@property (readonly, nonatomic) unsigned int weightsFormat; // ivar: _weightsFormat


+(BOOL)supportsPostfixForDevice:(*void)arg0 ;
+(BOOL)supportsPostfixForDevice:(*void)arg0 convolutionDescriptor:(id)arg1 sourceTensorDescriptor:(struct MPSNDArrayDataTensorDescriptor *)arg2 destinationTensorDescriptor:(struct MPSNDArrayDataTensorDescriptor *)arg3 weightsTensorDescriptor:(struct MPSNDArrayWeightsTensorDescriptor *)arg4 ;
+(BOOL)supportsPrefixForDevice:(*void)arg0 ;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationStrides;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ndArrayConvolution2DDescriptor:(id)arg1 ;
-(id)stridesAtSourceIndex;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAutoTuningParameters:(*void)arg0 ;
-(void)setAutoTuningTarget:(int)arg0 ;


@end


#endif