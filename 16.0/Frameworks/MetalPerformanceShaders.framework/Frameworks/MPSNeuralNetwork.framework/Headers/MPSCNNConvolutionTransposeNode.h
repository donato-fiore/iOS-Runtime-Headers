// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNCONVOLUTIONTRANSPOSENODE_H
#define MPSCNNCONVOLUTIONTRANSPOSENODE_H



#import "MPSCNNConvolutionNode.h"
#import "MPSCNNConvolutionGradientStateNode.h"

@interface MPSCNNConvolutionTransposeNode : MPSCNNConvolutionNode

@property (readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;


+(id)nodeWithSource:(id)arg0 convolutionGradientState:(id)arg1 weights:(id)arg2 ;
+(id)nodeWithSource:(id)arg0 convolutionState:(id)arg1 weights:(id)arg2 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)convolutionState;
-(id)initWithSource:(id)arg0 convolutionGradientState:(id)arg1 weights:(id)arg2 ;
-(id)initWithSource:(id)arg0 convolutionState:(id)arg1 weights:(id)arg2 ;
-(id)resultState;


@end


#endif