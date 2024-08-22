// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMPSSTYLETRANSFERTRANSFORMERNETWORK_H
#define TCMPSSTYLETRANSFERTRANSFORMERNETWORK_H

@class MPSCNNConvolutionNode, MPSNNImageNode, MPSCNNInstanceNormalizationNode, MPSCNNNeuronSigmoidNode;

#import <Foundation/Foundation.h>

#import "TCMPSStyleTransferDecodingNode.h"
#import "TCMPSStyleTransferEncodingNode.h"
#import "TCMPSStyleTransferResidualNode.h"

@interface TCMPSStyleTransferTransformerNetwork : NSObject

@property (retain, nonatomic) MPSCNNConvolutionNode *conv; // ivar: _conv
@property (retain, nonatomic) TCMPSStyleTransferDecodingNode *decoding1; // ivar: _decoding1
@property (retain, nonatomic) TCMPSStyleTransferDecodingNode *decoding2; // ivar: _decoding2
@property (retain, nonatomic) TCMPSStyleTransferEncodingNode *encoding1; // ivar: _encoding1
@property (retain, nonatomic) TCMPSStyleTransferEncodingNode *encoding2; // ivar: _encoding2
@property (retain, nonatomic) TCMPSStyleTransferEncodingNode *encoding3; // ivar: _encoding3
@property (retain, nonatomic) MPSNNImageNode *forwardPass; // ivar: _forwardPass
@property (retain, nonatomic) MPSCNNInstanceNormalizationNode *instNorm; // ivar: _instNorm
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual1; // ivar: _residual1
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual2; // ivar: _residual2
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual3; // ivar: _residual3
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual4; // ivar: _residual4
@property (retain, nonatomic) TCMPSStyleTransferResidualNode *residual5; // ivar: _residual5
@property (retain, nonatomic) MPSCNNNeuronSigmoidNode *sigmoid; // ivar: _sigmoid


-(id)backwardPass:(id)arg0 ;
-(id)exportWeights:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputNode:(id)arg1 device:(id)arg2 cmdQueue:(id)arg3 descriptor:(id)arg4 initWeights:(id)arg5 ;
-(void)setLearningRate:(float)arg0 ;
-(void)setStyleIndex:(NSUInteger)arg0 ;


@end


#endif