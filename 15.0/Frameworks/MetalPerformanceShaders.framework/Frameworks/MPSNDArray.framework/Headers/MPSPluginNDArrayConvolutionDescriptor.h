// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSPLUGINNDARRAYCONVOLUTIONDESCRIPTOR_H
#define MPSPLUGINNDARRAYCONVOLUTIONDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSPluginNDArrayConvolutionDescriptor : NSObject

@property (readonly, nonatomic) NSUInteger channelMultiplier; // ivar: _channelMultiplier
@property (readonly, nonatomic) unsigned int dataFormat; // ivar: _dataFormat
@property (readonly, nonatomic) MPSPluginNDArrayConvolutionSizes dilationRates; // ivar: _dilationRates
@property (readonly, nonatomic) NSUInteger groups; // ivar: _groups
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) MPSPluginNDArrayConvolutionSizes kernelSizes; // ivar: _kernelSizes
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (readonly, nonatomic) MPSPluginNDArrayConvolutionSizes strides; // ivar: _strides
@property (readonly, nonatomic) NSUInteger subPixelScaleFactor; // ivar: _subPixelScaleFactor
@property (readonly, nonatomic) unsigned int weightsFormat; // ivar: _weightsFormat


-(id)initWithKernelSizes:(struct MPSPluginNDArrayConvolutionSizes )arg0 inputFeatureChannels:(NSUInteger)arg1 outputFeatureChannels:(NSUInteger)arg2 strides:(struct MPSPluginNDArrayConvolutionSizes )arg3 dilationRates:(struct MPSPluginNDArrayConvolutionSizes )arg4 groups:(NSUInteger)arg5 channelMultiplier:(NSUInteger)arg6 subPixelScaleFactor:(NSUInteger)arg7 dataFormat:(unsigned int)arg8 weightsFormat:(unsigned int)arg9 ;


@end


#endif