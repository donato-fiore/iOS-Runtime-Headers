// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNCONVOLUTIONNODE_H
#define MPSCNNCONVOLUTIONNODE_H

@class NSString;
@protocol MPSNNTrainableNode, MPSCNNConvolutionDataSource;


#import "MPSNNFilterNode.h"
#import "MPSCNNConvolutionGradientStateNode.h"
#import "MPSCNNConvolutionStateNode.h"

@interface MPSCNNConvolutionNode : MPSNNFilterNode <MPSNNTrainableNode>



@property (nonatomic) NSUInteger accumulatorPrecision; // ivar: _accumulatorPrecision
@property (readonly, nonatomic) MPSCNNConvolutionGradientStateNode *convolutionGradientState;
@property (readonly, nonatomic) MPSCNNConvolutionStateNode *convolutionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger trainingStyle; // ivar: _trainingStyle
@property (readonly, nonatomic) NSObject<MPSCNNConvolutionDataSource> *weights; // ivar: _weights


+(id)nodeWithSource:(id)arg0 weights:(id)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 weights:(id)arg1 ;
-(id)initWithSource:(id)arg0 weights:(id)arg1 state:(id)arg2 ;
-(id)resultState;
-(void)dealloc;


@end


#endif