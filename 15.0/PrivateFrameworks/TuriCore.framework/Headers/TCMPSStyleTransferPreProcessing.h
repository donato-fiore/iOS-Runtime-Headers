// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSSTYLETRANSFERPREPROCESSING_H
#define TCMPSSTYLETRANSFERPREPROCESSING_H

@class MPSNNMultiplicationNode, MPSNNImageNode, MPSNNSubtractionNode;

#import <Foundation/Foundation.h>


@interface TCMPSStyleTransferPreProcessing : NSObject

@property (retain, nonatomic) MPSNNMultiplicationNode *multiplicationNode; // ivar: _multiplicationNode
@property (retain, nonatomic) MPSNNImageNode *output; // ivar: _output
@property (retain, nonatomic) MPSNNSubtractionNode *subtractionNode; // ivar: _subtractionNode


-(id)backwardPass:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputNode:(id)arg1 scaleNode:(id)arg2 meanNode:(id)arg3 ;


@end


#endif