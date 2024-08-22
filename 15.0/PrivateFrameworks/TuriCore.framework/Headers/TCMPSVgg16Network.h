// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSVGG16NETWORK_H
#define TCMPSVGG16NETWORK_H

@class MPSNNImageNode;

#import <Foundation/Foundation.h>

#import "TCMPSVgg16Block1.h"
#import "TCMPSVgg16Block2.h"

@interface TCMPSVgg16Network : NSObject

@property (retain, nonatomic) TCMPSVgg16Block1 *block1; // ivar: _block1
@property (retain, nonatomic) TCMPSVgg16Block1 *block2; // ivar: _block2
@property (retain, nonatomic) TCMPSVgg16Block2 *block3; // ivar: _block3
@property (retain, nonatomic) TCMPSVgg16Block2 *block4; // ivar: _block4
@property (retain, nonatomic) MPSNNImageNode *output; // ivar: _output
@property (retain, nonatomic) MPSNNImageNode *reluOut1; // ivar: _reluOut1
@property (retain, nonatomic) MPSNNImageNode *reluOut2; // ivar: _reluOut2
@property (retain, nonatomic) MPSNNImageNode *reluOut3; // ivar: _reluOut3
@property (retain, nonatomic) MPSNNImageNode *reluOut4; // ivar: _reluOut4


-(id)backwardPass:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputNode:(id)arg1 device:(id)arg2 cmdQueue:(id)arg3 descriptor:(id)arg4 initWeights:(id)arg5 ;
-(void)setLearningRate:(float)arg0 ;


@end


#endif