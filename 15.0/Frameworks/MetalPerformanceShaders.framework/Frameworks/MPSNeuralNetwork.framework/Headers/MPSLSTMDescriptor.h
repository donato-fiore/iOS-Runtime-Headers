// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSLSTMDESCRIPTOR_H
#define MPSLSTMDESCRIPTOR_H

@protocol MPSCNNConvolutionDataSource;


#import "MPSRNNDescriptor.h"

@interface MPSLSTMDescriptor : MPSRNNDescriptor

@property (nonatomic) float cellClipThreshold; // ivar: _cellClipThreshold
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *cellGateInputWeights; // ivar: _cellGateInputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *cellGateMemoryWeights; // ivar: _cellGateMemoryWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *cellGateRecurrentWeights; // ivar: _cellGateRecurrentWeights
@property (nonatomic) float cellToOutputNeuronParamA; // ivar: _cellToOutputNeuronParamA
@property (nonatomic) float cellToOutputNeuronParamB; // ivar: _cellToOutputNeuronParamB
@property (nonatomic) float cellToOutputNeuronParamC; // ivar: _cellToOutputNeuronParamC
@property (nonatomic) int cellToOutputNeuronType; // ivar: _cellToOutputNeuronType
@property (nonatomic) BOOL coupleForgetGateToInputGate; // ivar: _coupleForgetGateToInputGate
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *forgetGateInputWeights; // ivar: _forgetGateInputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *forgetGateMemoryWeights; // ivar: _forgetGateMemoryWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *forgetGateRecurrentWeights; // ivar: _forgetGateRecurrentWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *inputGateInputWeights; // ivar: _inputGateInputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *inputGateMemoryWeights; // ivar: _inputGateMemoryWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *inputGateRecurrentWeights; // ivar: _inputGateRecurrentWeights
@property (nonatomic) BOOL memoryWeightsAreDiagonal; // ivar: _memoryWeightsAreDiagonal
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *outputGateInputWeights; // ivar: _outputGateInputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *outputGateMemoryWeights; // ivar: _outputGateMemoryWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *outputGateRecurrentWeights; // ivar: _outputGateRecurrentWeights


+(id)createLSTMDescriptorWithInputFeatureChannels:(NSUInteger)arg0 outputFeatureChannels:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithInputFeatureChannels:(NSUInteger)arg0 outputFeatureChannels:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif