// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSPLUGINCNNCONVOLUTIONDESCRIPTOR_H
#define MPSPLUGINCNNCONVOLUTIONDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "MPSNNNeuronDescriptor.h"

@interface MPSPluginCNNConvolutionDescriptor : NSObject

@property (readonly, nonatomic) NSUInteger channelMultiplier; // ivar: _channelMultiplier
@property (readonly, nonatomic) NSUInteger dilationRateX; // ivar: _dilationRateX
@property (readonly, nonatomic) NSUInteger dilationRateY; // ivar: _dilationRateY
@property (readonly, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor; // ivar: _fusedNeuronDescriptor
@property (readonly, nonatomic) NSUInteger groups; // ivar: _groups
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) BOOL isConvolutionTranspose; // ivar: _isConvolutionTranspose
@property (readonly, nonatomic) BOOL isFullyConnected; // ivar: _isFullyConnected
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (readonly, nonatomic) NSUInteger strideInPixelsX; // ivar: _strideInPixelsX
@property (readonly, nonatomic) NSUInteger strideInPixelsY; // ivar: _strideInPixelsY
@property (readonly, nonatomic) NSUInteger subPixelScaleFactor; // ivar: _subPixelScaleFactor


-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 strideInPixelsX:(NSUInteger)arg4 strideInPixelsY:(NSUInteger)arg5 groups:(NSUInteger)arg6 dilationRateX:(NSUInteger)arg7 dilationRateY:(NSUInteger)arg8 channelMultiplier:(NSUInteger)arg9 subPixelScaleFactor:(NSUInteger)arg10 isFullyConnected:(BOOL)arg11 isConvolutionTranspose:(BOOL)arg12 fusedNeuronDescriptor:(id)arg13 ;
-(void)dealloc;


@end


#endif