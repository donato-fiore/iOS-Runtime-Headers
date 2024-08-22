// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNCONVOLUTIONGRADIENTNODE_H
#define MPSCNNCONVOLUTIONGRADIENTNODE_H

@class NSString;
@protocol MPSNNTrainableNode, MPSCNNConvolutionDataSource;


#import "MPSNNGradientFilterNode.h"

@interface MPSCNNConvolutionGradientNode : MPSNNGradientFilterNode <MPSNNTrainableNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger trainingStyle; // ivar: _trainingStyle
@property (readonly, nonatomic) NSObject<MPSCNNConvolutionDataSource> *weights; // ivar: _weights


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 weights:(id)arg3 ;
-(void)dealloc;


@end


#endif