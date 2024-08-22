// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNLOGSOFTMAXGRADIENTNODE_H
#define MPSCNNLOGSOFTMAXGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSCNNLogSoftMaxGradientNode : MPSNNGradientFilterNode



+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;


@end


#endif