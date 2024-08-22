// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNCONVOLUTION_H
#define MPSCNNCONVOLUTION_H

@class NSData;
@protocol MTLBuffer, MPSCNNConvolutionDataSource;


#import "MPSCNNKernel.h"
#import "MPSNNNeuronDescriptor.h"
#import "MPSCNNNeuron.h"

@interface MPSCNNConvolution : MPSCNNKernel {
    NSUInteger _layout;
    id<MTLBuffer> *_weights;
    id<MTLBuffer> *_bias;
    NSUInteger _flags;
    BOOL _fullyConnected;
    BOOL _convolutionTranspose;
    BOOL _convertFloat32Weights;
    id<MTLBuffer> *_qWts;
    int _qType;
    unsigned int _weightsDataType;
    unsigned int _weightsLayout;
    NSData *_biasOriginal;
    id<MTLBuffer> *_neuronABuffer;
    NSUInteger _accumulatorPrecisionOption;
    NSData *_batchNormalizationData;
}


@property (nonatomic) NSUInteger accumulatorPrecisionOption;
@property (readonly, nonatomic) NSUInteger channelMultiplier; // ivar: _channelMultiplier
@property (readonly, retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSUInteger featureChannelsLayout; // ivar: _featureChannelsLayout
@property (readonly, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor; // ivar: _fusedNeuronDescriptor
@property (readonly, nonatomic) NSUInteger groups; // ivar: _groups
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) MPSCNNNeuron *neuron; // ivar: _neuron_deprecated
@property (readonly, nonatomic) float neuronParameterA;
@property (readonly, nonatomic) float neuronParameterB;
@property (readonly, nonatomic) float neuronParameterC;
@property (readonly, nonatomic) int neuronType;
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (readonly, nonatomic) NSUInteger subPixelScaleFactor; // ivar: _scaleFactor
@property (readonly, nonatomic) NSUInteger weightsBufferLength;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)PrepareAndLoadData:(id)arg0 dataType:(unsigned int)arg1 weightsLayout:(unsigned int)arg2 weights:(*void)arg3 biases:(*float)arg4 quantizationType:(int)arg5 ranges:(**float)arg6 lookUpTable:(BOOL)arg7 convertFloat32Weights;
-(BOOL)appendBatchBarrier;
-(BOOL)convolutionTranspose;
-(BOOL)initialize:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*void)arg2 dataType:(unsigned int)arg3 weightsLayout:(unsigned int)arg4 range:(**float)arg5 lookUpTable:(int)arg6 qType:(*float)arg7 biasTerms:(NSUInteger)arg8 flags:(BOOL)arg9 fullyConnected:(BOOL)arg10 convolutionTranspose:(unsigned int)arg11 preferredWeightsDataType;
-(BOOL)isResultStateReusedAcrossBatch;
-(NSUInteger)batchEncodingStorageSizeForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(NSUInteger)encodingStorageSizeForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(NSUInteger)maxBatchSize;
-(id)biases;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 kernelOffset:(struct ? *)arg4 ;
-(id)exportWeightsAndBiasesWithCommandBuffer:(id)arg0 resultStateCanBeTemporary:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 ;
-(id)initWithDevice:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 fullyConnected:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 fullyConnected:(BOOL)arg5 convolutionTranspose:(BOOL)arg6 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 convolutionTranspose:(BOOL)arg3 ;
-(id)initializeWithDevice:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 convolutionTranspose:(BOOL)arg3 ;
-(id)quantizationBuffer;
-(id)resourceListForSourceImages:(id)arg0 destinationImages:(id)arg1 ;
-(id)resultStateBatchForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)weights;
-(int)quantizationType;
-(unsigned int)weightsDataType;
-(unsigned int)weightsLayout;
-(void)copyToGradientState:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 state:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg0 state:(id)arg1 ;
-(void)reloadWeightsAndBiasesWithDataSource:(id)arg0 ;


@end


#endif