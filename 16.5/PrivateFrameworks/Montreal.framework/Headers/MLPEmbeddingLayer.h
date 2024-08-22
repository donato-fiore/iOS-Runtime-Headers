// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPEMBEDDINGLAYER_H
#define MLPEMBEDDINGLAYER_H

@class NSString, MPSMatrixCopy, NSArray, MPSVector, MPSMatrixSum, MPSMatrix, MPSMatrixNeuron;
@protocol MLPLayerOptimizerProtocol;


#import "MLPLayer.h"
#import "MLPOptimizer.h"

@interface MLPEmbeddingLayer : MLPLayer <MLPLayerOptimizerProtocol>

 {
    vector<std::map<unsigned int, std::vector<unsigned int>>, std::allocator<std::map<unsigned int, std::vector<unsigned int>>>> wordIDRepetitions;
    vector<float, std::allocator<float>> weightsInitial;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger embeddingDimension; // ivar: _embeddingDimension
@property (readonly) NSUInteger hash;
@property *void initialWeights; // ivar: _initialWeights
@property (retain) MPSMatrixCopy *matrixCopy; // ivar: _matrixCopy
@property (retain) MPSMatrixCopy *matrixCopyFilter; // ivar: _matrixCopyFilter
@property (readonly) NSArray *mlpOptimizers;
@property (retain) MPSVector *offsetVector; // ivar: _offsetVector
@property (retain) MLPOptimizer *optimizer; // ivar: _optimizer
@property (retain) MPSMatrixSum *sumFilter; // ivar: _sumFilter
@property (readonly) Class superclass;
@property NSUInteger vocabSize; // ivar: _vocabSize
@property (retain) MPSMatrix *weightGradients; // ivar: _weightGradients
@property (retain) MPSMatrix *weights; // ivar: _weights
@property (retain) MPSMatrix *weights_mom; // ivar: _weights_mom
@property (retain) MPSMatrix *weights_vel; // ivar: _weights_vel
@property (retain) MPSMatrixNeuron *zeroFilter; // ivar: _zeroFilter


-(id)forward:(id)arg0 input:(id)arg1 labels:(id)arg2 runInference:(BOOL)arg3 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 inputLength:(NSUInteger)arg1 vocabSize:(NSUInteger)arg2 embeddingDimension:(NSUInteger)arg3 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)seqBackward:(id)arg0 dataBatch:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg0 input:(id)arg1 dataBatch:(id)arg2 runInference:(BOOL)arg3 ;
-(void)createKernel;
-(void)seqBackward:(id)arg0 inputGradientMatrix:(id)arg1 matrixIter:(NSUInteger)arg2 ;


@end


#endif