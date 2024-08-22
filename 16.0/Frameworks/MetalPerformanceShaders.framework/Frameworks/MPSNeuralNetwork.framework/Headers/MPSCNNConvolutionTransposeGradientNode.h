// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNCONVOLUTIONTRANSPOSEGRADIENTNODE_H
#define MPSCNNCONVOLUTIONTRANSPOSEGRADIENTNODE_H



#import "MPSCNNConvolutionGradientNode.h"

@interface MPSCNNConvolutionTransposeGradientNode : MPSCNNConvolutionGradientNode



+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 convolutionTransposeGradientState:(id)arg2 weights:(id)arg3 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 convolutionTransposeGradientState:(id)arg2 weights:(id)arg3 ;


@end


#endif