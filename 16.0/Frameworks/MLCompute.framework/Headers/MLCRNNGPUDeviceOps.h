// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCRNNGPUDEVICEOPS_H
#define MLCRNNGPUDEVICEOPS_H

@class NSMutableArray;


#import "MLCGPUDeviceOps.h"

@interface MLCRNNGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) NSMutableArray *auxiliaryCenterWeightMemory; // ivar: _auxiliaryCenterWeightMemory
@property (retain, nonatomic) NSMutableArray *auxiliaryMomentumMemory; // ivar: _auxiliaryMomentumMemory
@property (retain, nonatomic) NSMutableArray *auxiliaryVelocityMemory; // ivar: _auxiliaryVelocityMemory
@property (retain, nonatomic) NSMutableArray *auxiliaryWeightsMemory; // ivar: _auxiliaryWeightsMemory
@property (nonatomic) BOOL batchFirst; // ivar: _batchFirst
@property (retain, nonatomic) id *biDirectionalGradientResult; // ivar: _biDirectionalGradientResult
@property (retain, nonatomic) id *biDirectionalSumKernel; // ivar: _biDirectionalSumKernel
@property (retain, nonatomic) id *forwardTimeGradientResult; // ivar: _forwardTimeGradientResult
@property (nonatomic) NSUInteger hiddenSize; // ivar: _hiddenSize
@property (nonatomic) NSUInteger inputSize; // ivar: _inputSize
@property (nonatomic) BOOL isBidirectional; // ivar: _isBidirectional
@property (nonatomic) float lstmDropout; // ivar: _lstmDropout
@property (retain, nonatomic) NSMutableArray *lstmDropoutForwardKernel; // ivar: _lstmDropoutForwardKernel
@property (retain, nonatomic) NSMutableArray *lstmDropoutGradientKernel; // ivar: _lstmDropoutGradientKernel
@property (retain, nonatomic) NSMutableArray *lstmDropoutSource; // ivar: _lstmDropoutSource
@property (retain, nonatomic) NSMutableArray *lstmDropoutState; // ivar: _lstmDropoutState
@property (retain, nonatomic) id *lstmMultiGPUChildOps; // ivar: _lstmMultiGPUChildOps
@property (nonatomic) NSUInteger numLayers; // ivar: _numLayers
@property (nonatomic) BOOL returnsSequences; // ivar: _returnsSequences
@property (retain, nonatomic) id *reverseTimeGradientResult; // ivar: _reverseTimeGradientResult
@property (retain, nonatomic) NSMutableArray *rnnBuffers; // ivar: _rnnBuffers
@property (retain, nonatomic) NSMutableArray *rnnCenterWeightMatrices; // ivar: _rnnCenterWeightMatrices
@property (retain, nonatomic) NSMutableArray *rnnExportedBiasGradientMatrices; // ivar: _rnnExportedBiasGradientMatrices
@property (retain, nonatomic) NSMutableArray *rnnExportedBiasTerms; // ivar: _rnnExportedBiasTerms
@property (retain, nonatomic) NSMutableArray *rnnExportedHiddenWeightGradientMatrices; // ivar: _rnnExportedHiddenWeightGradientMatrices
@property (retain, nonatomic) NSMutableArray *rnnExportedInputWeightGradientMatrices; // ivar: _rnnExportedInputWeightGradientMatrices
@property (retain, nonatomic) NSMutableArray *rnnExportedWeightMatrices; // ivar: _rnnExportedWeightMatrices
@property (retain, nonatomic) NSMutableArray *rnnMomentumMatrices; // ivar: _rnnMomentumMatrices
@property (retain, nonatomic) NSMutableArray *rnnStackedLayersBufferResults; // ivar: _rnnStackedLayersBufferResults
@property (retain, nonatomic) NSMutableArray *rnnStackedLayersResults; // ivar: _rnnStackedLayersResults
@property (retain, nonatomic) NSMutableArray *rnnTrainableStates; // ivar: _rnnTrainableStates
@property (retain, nonatomic) NSMutableArray *rnnTrainableWeightGradients; // ivar: _rnnTrainableWeightGradients
@property (retain, nonatomic) NSMutableArray *rnnTrainableWeights; // ivar: _rnnTrainableWeights
@property (retain, nonatomic) NSMutableArray *rnnVelocityMatrices; // ivar: _rnnVelocityMatrices


+(id)deviceOpsWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;


@end


#endif