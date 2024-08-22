// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNBINARYCONVOLUTION_H
#define MPSCNNBINARYCONVOLUTION_H

@protocol MTLBuffer;


#import "MPSCNNKernel.h"
#import "MPSCNNPoolingAverage.h"

@interface MPSCNNBinaryConvolution : MPSCNNKernel {
    NeuronInfo _neuronInfo;
    NSUInteger _filterStride;
    id<MTLBuffer> *_weights;
    id<MTLBuffer> *_outputbias;
    id<MTLBuffer> *_outputScale;
    id<MTLBuffer> *_inputbias;
    id<MTLBuffer> *_inputScale;
    NSUInteger _flags;
    NSUInteger _convType;
    MPSCNNPoolingAverage *_poolingFilter;
    BOOL _fullyConnected;
    float _outputScaleValue;
}


@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyBuffer:(id)arg0 device:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 convolutionData:(id)arg1 outputBiasTerms:(*float)arg2 outputScaleTerms:(*float)arg3 inputBiasTerms:(*float)arg4 inputScaleTerms:(*float)arg5 type:(NSUInteger)arg6 flags:(NSUInteger)arg7 ;
-(id)initWithDevice:(id)arg0 convolutionData:(id)arg1 scaleValue:(float)arg2 type:(NSUInteger)arg3 flags:(NSUInteger)arg4 ;
-(id)initWithDeviceImpl:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*unsigned int)arg2 biasTerms:(*float)arg3 scaleValue:(float)arg4 type:(NSUInteger)arg5 flags:(NSUInteger)arg6 ;
-(id)initWithDeviceImpl:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*unsigned int)arg2 outputBiasTerms:(*float)arg3 outputScaleTerms:(*float)arg4 inputBiasTerms:(*float)arg5 inputScaleTerms:(*float)arg6 type:(NSUInteger)arg7 flags:(NSUInteger)arg8 ;
-(void)createBuffersFromkernelWeights:(*unsigned int)arg0 inputBiasTerms:(*float)arg1 inputScaleTerms:(*float)arg2 outputBiasTerms:(*float)arg3 outputScaleTerms:(*float)arg4 useHalfPrecision:(BOOL)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif