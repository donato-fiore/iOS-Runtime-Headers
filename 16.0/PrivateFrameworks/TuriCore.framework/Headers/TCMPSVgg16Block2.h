// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMPSVGG16BLOCK2_H
#define TCMPSVGG16BLOCK2_H

@class MPSCNNConvolutionNode, MPSNNImageNode, MPSCNNPoolingAverageNode, MPSCNNNeuronReLUNode;

#import <Foundation/Foundation.h>


@interface TCMPSVgg16Block2 : NSObject

@property (retain, nonatomic) MPSCNNConvolutionNode *conv1; // ivar: _conv1
@property (retain, nonatomic) MPSCNNConvolutionNode *conv2; // ivar: _conv2
@property (retain, nonatomic) MPSCNNConvolutionNode *conv3; // ivar: _conv3
@property (retain, nonatomic) MPSNNImageNode *features; // ivar: _features
@property (retain, nonatomic) MPSNNImageNode *output; // ivar: _output
@property (retain, nonatomic) MPSCNNPoolingAverageNode *pooling; // ivar: _pooling
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu1; // ivar: _relu1
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu2; // ivar: _relu2
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu3; // ivar: _relu3


-(id)backwardPass:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputNode:(id)arg1 device:(id)arg2 cmdQueue:(id)arg3 descriptor:(id)arg4 initWeights:(id)arg5 ;
-(void)setLearningRate:(float)arg0 ;


@end


#endif