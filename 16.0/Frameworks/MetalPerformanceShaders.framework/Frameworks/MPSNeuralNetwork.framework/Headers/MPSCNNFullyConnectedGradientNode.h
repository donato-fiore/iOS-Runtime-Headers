// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNFULLYCONNECTEDGRADIENTNODE_H
#define MPSCNNFULLYCONNECTEDGRADIENTNODE_H



#import "MPSCNNConvolutionGradientNode.h"

@interface MPSCNNFullyConnectedGradientNode : MPSCNNConvolutionGradientNode



+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3 ;
-(*void)newFilterNode;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3 ;


@end


#endif