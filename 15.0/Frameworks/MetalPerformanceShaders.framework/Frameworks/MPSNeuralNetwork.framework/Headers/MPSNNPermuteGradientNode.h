// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNPERMUTEGRADIENTNODE_H
#define MPSNNPERMUTEGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSNNPermuteGradientNode : MPSNNGradientFilterNode



+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;
-(*void)newFilterNode;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;


@end


#endif