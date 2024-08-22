// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLPLSTMLAYER_H
#define MLPLSTMLAYER_H

@class NSString, MPSRNNMatrixTrainingLayer, MPSLSTMDescriptor, NSArray, NSMutableArray;
@protocol MLPLayerOptimizerProtocol;


#import "MLPLayer.h"

@interface MLPLSTMLayer : MLPLayer <MLPLayerOptimizerProtocol>



@property int cellGateActivation; // ivar: _cellGateActivation
@property int cellToOutputActivation; // ivar: _cellToOutputActivation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) MPSRNNMatrixTrainingLayer *filter; // ivar: _filter
@property int forgetGateActivation; // ivar: _forgetGateActivation
@property (readonly) NSUInteger hash;
@property *float initialBias_0; // ivar: _initialBias_0
@property *float initialBias_1; // ivar: _initialBias_1
@property *float initialWeights_0; // ivar: _initialWeights_0
@property *float initialWeights_1; // ivar: _initialWeights_1
@property int inputGateActivation; // ivar: _inputGateActivation
@property NSUInteger inputSize; // ivar: _inputSize
@property (retain) MPSLSTMDescriptor *lstmDesc; // ivar: _lstmDesc
@property (readonly) NSArray *mlpOptimizers;
@property (retain) NSMutableArray *optimizers; // ivar: _optimizers
@property int outputGateActivation; // ivar: _outputGateActivation
@property NSUInteger outputSize; // ivar: _outputSize
@property (retain) NSArray *srcMatrices; // ivar: _srcMatrices
@property (readonly) Class superclass;
@property (retain) NSMutableArray *trainingStates; // ivar: _trainingStates
@property NSUInteger weightAttributes; // ivar: _weightAttributes
@property (retain) NSMutableArray *weightGradients; // ivar: _weightGradients
@property (retain) NSMutableArray *weights; // ivar: _weights


-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 inputSize:(NSUInteger)arg1 outputSize:(NSUInteger)arg2 weightAttributes:(NSUInteger)arg3 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)matrixIDToString:(NSUInteger)arg0 ;
-(id)seqBackward:(id)arg0 dataBatch:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqBackwardCombinedMatrix:(id)arg0 inputGradient:(id)arg1 ;
-(id)seqBackwardDifferentMatrices:(id)arg0 inputGradient:(id)arg1 ;
-(id)seqForward:(id)arg0 input:(id)arg1 dataBatch:(id)arg2 runInference:(BOOL)arg3 ;
-(id)seqForwardCombinedMatrix:(id)arg0 input:(id)arg1 ;
-(id)seqForwardDifferentMatrices:(id)arg0 input:(id)arg1 ;
-(void)createKernel;
-(void)exportWeightsWithWeightMatrix:(id)arg0 weightID:(NSUInteger)arg1 destination:(*float)arg2 recurrent:(BOOL)arg3 ;
-(void)populateActivation:(*int)arg0 montrealActivationType:(NSInteger)arg1 ;
-(void)updateSourceMatrix:(id)arg0 inference:(BOOL)arg1 ;


@end


#endif