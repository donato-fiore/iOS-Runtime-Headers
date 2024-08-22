// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPLOSSLAYER_H
#define MLPLOSSLAYER_H

@class MPSMatrixCopy, MPSMatrixLogSoftMax, MPSMatrixSoftMax, MPSNDArrayMultiplication, MPSMatrixNeuron, MPSNDArrayReductionSum;


#import "MLPImageLayer.h"

@interface MLPLossLayer : MLPImageLayer

@property (retain) MPSMatrixCopy *matrixLargeCopyFilter; // ivar: _matrixLargeCopyFilter
@property (retain) MPSMatrixLogSoftMax *matrixLogSoftMax; // ivar: _matrixLogSoftMax
@property (retain) MPSMatrixCopy *matrixSingleCopyFilter; // ivar: _matrixSingleCopyFilter
@property (retain) MPSMatrixSoftMax *matrixSoftMax; // ivar: _matrixSoftMax
@property (retain) MPSNDArrayMultiplication *multiplication; // ivar: _multiplication
@property (retain) MPSMatrixNeuron *negativeNeuron; // ivar: _negativeNeuron
@property (retain) MPSNDArrayReductionSum *reductionSum; // ivar: _reductionSum


-(id)backward:(id)arg0 inputGradient:(id)arg1 ;
-(id)forward:(id)arg0 input:(id)arg1 labels:(id)arg2 runInference:(BOOL)arg3 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)imageInferenceForward:(id)arg0 input:(id)arg1 lossLabels:(id)arg2 ;
-(id)imageTrainingForward:(id)arg0 input:(id)arg1 lossLabels:(id)arg2 ;
-(id)initWithName:(id)arg0 inputLength:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 neuronType:(int)arg3 neuronParams:(id)arg4 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)initWithName:(id)arg0 previousLayer:(id)arg1 neuronType:(int)arg2 neuronParams:(id)arg3 ;
-(id)seqBackward:(id)arg0 dataBatch:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg0 input:(id)arg1 dataBatch:(id)arg2 runInference:(BOOL)arg3 ;
-(id)seqForward:(id)arg0 inputMatrix:(id)arg1 dataBatch:(id)arg2 runInference:(BOOL)arg3 ;
-(id)seqInferenceForward:(id)arg0 inputMatrix:(id)arg1 dataBatch:(id)arg2 ;
-(id)seqTrainingForward:(id)arg0 inputMatrix:(id)arg1 dataBatch:(id)arg2 computeLossGradient:(BOOL)arg3 ;
-(id)seqTrainingForward:(id)arg0 subMatrix:(id)arg1 reductionSumResults:(id)arg2 alphaVec:(id)arg3 labels:(id)arg4 rowOffset:(NSUInteger)arg5 computeNRows:(NSUInteger)arg6 computeLossGradient:(BOOL)arg7 ;
-(void)createKernel;
-(void)updatePreviousLayer:(id)arg0 nextLayer:(id)arg1 network:(id)arg2 ;


@end


#endif