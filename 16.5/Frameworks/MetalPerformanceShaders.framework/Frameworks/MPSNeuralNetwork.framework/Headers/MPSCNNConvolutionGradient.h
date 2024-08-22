// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNCONVOLUTIONGRADIENT_H
#define MPSCNNCONVOLUTIONGRADIENT_H

@protocol MTLBuffer, MPSCNNConvolutionDataSource;


#import "MPSCNNGradientKernel.h"

@interface MPSCNNConvolutionGradient : MPSCNNGradientKernel {
    id<MTLBuffer> *_weights;
    BOOL _fullyConnected;
    BOOL _convolutionTranspose;
    unsigned int _weightsDataType;
    unsigned int _preferredWeightsDataType;
    unsigned int _weightsLayout;
    _opaque_pthread_mutex_t _lock;
}


@property (readonly, nonatomic) NSUInteger channelMultiplier; // ivar: _channelMultiplier
@property (readonly, retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) NSUInteger gradientOption; // ivar: _gradientOption
@property (readonly, nonatomic) NSUInteger groups; // ivar: _groups
@property (nonatomic) BOOL serializeWeightsAndBiases; // ivar: _serializeWeightsAndBiases
@property (readonly, nonatomic) NSUInteger sourceGradientFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) NSUInteger sourceImageFeatureChannels; // ivar: _outputFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)convolutionTranspose;
-(BOOL)filterHandlesPlugin;
-(BOOL)isResultStateReusedAcrossBatch;
-(NSUInteger)batchEncodingStorageSizeForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(NSUInteger)encodingStorageSizeForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(NSUInteger)maxBatchSize;
-(id)PeakAtWeightsWithConvolutionGradientState:(id)arg0 ;
-(id)PeakAtWeightsWithConvolutionTransposeGradientState:(id)arg0 ;
-(id)biases;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 convolutionTranspose:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 ;
-(id)weights;
-(unsigned int)preferredWeightsDataType;
-(unsigned int)weightsDataType;
-(unsigned int)weightsLayout;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initialize:(id)arg0 convDesc:(id)arg1 weights:(*void)arg2 dataType:(unsigned int)arg3 weightsLayout:(unsigned int)arg4 fullyConnected:(BOOL)arg5 convolutionTranspose:(BOOL)arg6 preferredWeightsDataType:(unsigned int)arg7 ;
-(void)initialize:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 convolutionTranspose:(BOOL)arg3 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg0 state:(id)arg1 ;


@end


#endif