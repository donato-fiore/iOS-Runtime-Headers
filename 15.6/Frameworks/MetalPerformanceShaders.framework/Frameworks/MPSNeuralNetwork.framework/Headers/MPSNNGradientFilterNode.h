// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNGRADIENTFILTERNODE_H
#define MPSNNGRADIENTFILTERNODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNGradientFilterNode : MPSNNFilterNode



-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithGradientImages:(id)arg0 sourceImages:(id)arg1 binaryGradientState:(id)arg2 paddingPolicy:(id)arg3 ;
-(id)initWithGradientImages:(id)arg0 sourceImages:(id)arg1 gradientState:(id)arg2 paddingPolicy:(id)arg3 ;
-(id)resultState;
-(id)resultStates;


@end


#endif