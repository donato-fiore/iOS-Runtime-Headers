// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPDENSELAYER_H
#define MLPDENSELAYER_H

@class MPSVector, NSString, NSArray, MPSMatrix;
@protocol MLPLayerOptimizerProtocol;


#import "MLPMatrixLayer.h"
#import "MLPOptimizer.h"

@interface MLPDenseLayer : MLPMatrixLayer <MLPLayerOptimizerProtocol>



@property (retain) MPSVector *biasVector; // ivar: _biasVector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property *void initialBias; // ivar: _initialBias
@property *void initialWeights; // ivar: _initialWeights
@property (readonly) NSArray *mlpOptimizers;
@property (retain) MLPOptimizer *optimizerBiases; // ivar: _optimizerBiases
@property (retain) MLPOptimizer *optimizerWeights; // ivar: _optimizerWeights
@property (readonly) Class superclass;
@property (retain) MPSMatrix *weights; // ivar: _weights


-(id)backward:(id)arg0 index:(id)arg1 inputGradientMatrix:(id)arg2 ;
-(id)backward:(id)arg0 inputGradient:(id)arg1 ;
-(id)forward:(id)arg0 input:(id)arg1 labels:(id)arg2 runInference:(BOOL)arg3 ;
-(id)forward:(id)arg0 inputMatrix:(id)arg1 index:(id)arg2 runInference:(BOOL)arg3 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 numInputs:(NSUInteger)arg1 numOutputs:(NSUInteger)arg2 neuronType:(int)arg3 neuronParams:(id)arg4 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)initWithName:(id)arg0 previousLayer:(id)arg1 numOutputs:(NSUInteger)arg2 neuronType:(int)arg3 neuronParams:(id)arg4 ;
-(id)seqBackward:(id)arg0 dataBatch:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg0 input:(id)arg1 dataBatch:(id)arg2 runInference:(BOOL)arg3 ;
-(void)createKernel;


@end


#endif