// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCCONVOLUTIONLAYER_H
#define MLCCONVOLUTIONLAYER_H



#import "MLCLayer.h"
#import "MLCTensor.h"
#import "MLCTensorParameter.h"
#import "MLCConvolutionDescriptor.h"

@interface MLCConvolutionLayer : MLCLayer

@property (readonly, nonatomic) int accumulatorPrecisionOption; // ivar: _accumulatorPrecisionOption
@property (readonly, retain, nonatomic) MLCTensor *biases; // ivar: _biases
@property (readonly, retain, nonatomic) MLCTensorParameter *biasesParameter; // ivar: _biasesParameter
@property (readonly, copy, nonatomic) MLCConvolutionDescriptor *descriptor; // ivar: _descriptor
@property (readonly, retain, nonatomic) MLCTensor *weights; // ivar: _weights
@property (readonly, retain, nonatomic) MLCTensorParameter *weightsParameter; // ivar: _weightsParameter


+(id)layerWithWeights:(id)arg0 biases:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)parametersCount;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithWeights:(id)arg0 biases:(id)arg1 descriptor:(id)arg2 ;
-(id)resultTensorFromSources:(id)arg0 ;
-(id)summarizedDOTDescription;
-(void)allocateGradientsForParameters;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif