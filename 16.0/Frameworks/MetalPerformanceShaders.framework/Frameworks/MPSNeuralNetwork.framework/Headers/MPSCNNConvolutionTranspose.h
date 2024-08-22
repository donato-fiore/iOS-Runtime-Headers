// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNCONVOLUTIONTRANSPOSE_H
#define MPSCNNCONVOLUTIONTRANSPOSE_H

@protocol MPSCNNConvolutionDataSource;


#import "MPSCNNKernel.h"
#import "MPSCNNConvolution.h"
#import "MPSNNNeuronDescriptor.h"

@interface MPSCNNConvolutionTranspose : MPSCNNKernel {
    MPSCNNConvolution *_convolution;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
}


@property (nonatomic) NSUInteger accumulatorPrecisionOption;
@property (readonly, retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *dataSource;
@property (readonly, nonatomic) NSUInteger featureChannelsLayout; // ivar: _featureChannelsLayout
@property (readonly, nonatomic) NSUInteger groups; // ivar: _groups
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (nonatomic) NSInteger kernelOffsetX; // ivar: _kernelOffsetX
@property (nonatomic) NSInteger kernelOffsetY; // ivar: _kernelOffsetY
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (readonly, nonatomic) NSUInteger weightsBufferLength;


+(BOOL)supportsSecureCoding;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)appendBatchBarrier;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 convolutionGradientStates:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 convolutionGradientStates:(id)arg2 destinationStates:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 convolutionGradientState:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 convolutionGradientState:(id)arg2 destinationState:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 convolutionState:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationState:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)exportWeightsAndBiasesWithCommandBuffer:(id)arg0 resultStateCanBeTemporary:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 ;
-(id)initialize:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 fullyConnected:(BOOL)arg5 ;
-(id)initialize:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 ;
-(id)resultStateBatchForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 convolutionGradientStates:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 convolutionGradientState:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationState:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg0 state:(id)arg1 ;
-(void)reloadWeightsAndBiasesWithDataSource:(id)arg0 ;


@end


#endif