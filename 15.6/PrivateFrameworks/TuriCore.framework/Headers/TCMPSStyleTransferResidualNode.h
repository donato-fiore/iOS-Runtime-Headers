// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMPSSTYLETRANSFERRESIDUALNODE_H
#define TCMPSSTYLETRANSFERRESIDUALNODE_H

@class MPSNNAdditionNode, MPSCNNConvolutionNode, MPSCNNInstanceNormalizationNode, MPSNNImageNode, MPSCNNNeuronReLUNode;

#import <Foundation/Foundation.h>


@interface TCMPSStyleTransferResidualNode : NSObject

@property (retain, nonatomic) MPSNNAdditionNode *add; // ivar: _add
@property (retain, nonatomic) MPSCNNConvolutionNode *conv1; // ivar: _conv1
@property (retain, nonatomic) MPSCNNConvolutionNode *conv2; // ivar: _conv2
@property (retain, nonatomic) MPSCNNInstanceNormalizationNode *instNorm1; // ivar: _instNorm1
@property (retain, nonatomic) MPSCNNInstanceNormalizationNode *instNorm2; // ivar: _instNorm2
@property (retain, nonatomic) MPSNNImageNode *output; // ivar: _output
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu1; // ivar: _relu1


-(id)backwardPass:(id)arg0 ;
-(id)exportWeights:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputNode:(id)arg1 device:(id)arg2 cmdQueue:(id)arg3 descriptor:(id)arg4 initWeights:(id)arg5 ;
-(void)setLearningRate:(float)arg0 ;
-(void)setStyleIndex:(NSUInteger)arg0 ;


@end


#endif