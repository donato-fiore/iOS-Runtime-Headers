// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNCONVOLUTIONDESCRIPTOR_H
#define MPSCNNCONVOLUTIONDESCRIPTOR_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MPSCNNNeuron.h"
#import "MPSNNNeuronDescriptor.h"

@interface MPSCNNConvolutionDescriptor : NSObject <NSSecureCoding, NSCopying>

 {
    NSData *_batchNormalizationData;
    MPSCNNNeuron *_deprecated_neuron;
    NSUInteger _subPixelScaleFactor;
    BOOL _depthWiseConvolution;
}


@property (nonatomic) NSUInteger dilationRateX; // ivar: _dilationRateX
@property (nonatomic) NSUInteger dilationRateY; // ivar: _dilationRateY
@property (nonatomic) NSUInteger featureChannelsLayout; // ivar: _featureChannelsLayout
@property (retain, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor; // ivar: _fusedNeuronDescriptor
@property (nonatomic) NSUInteger groups; // ivar: _groups
@property (nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (retain, nonatomic) MPSCNNNeuron *neuron; // ivar: _neuron_deprecated
@property (nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (nonatomic) NSUInteger strideInPixelsX; // ivar: _strideInPixelsX
@property (nonatomic) NSUInteger strideInPixelsY; // ivar: _strideInPixelsY


+(BOOL)supportsSecureCoding;
+(id)cnnConvolutionDescriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 ;
+(id)cnnConvolutionDescriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 neuronFilter:(id)arg4 ;
+(id)cnnConvolutionDescriptorWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 postFilters:(id)arg4 ;
-(BOOL)hasBatchNormData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 ;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 neuronFilter:(id)arg4 ;
-(id)newDescriptorWithNeuronInfo:(struct NeuronInfo )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBatchNormalizationParametersForInferenceWithMean:(*float)arg0 variance:(*float)arg1 gamma:(*float)arg2 beta:(*float)arg3 epsilon:(float)arg4 ;


@end


#endif