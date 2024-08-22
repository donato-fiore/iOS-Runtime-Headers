// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNDROPOUTGRADIENTNODE_H
#define MPSCNNDROPOUTGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSCNNDropoutGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) float keepProbability; // ivar: _keepProbability
@property (readonly, nonatomic) ? maskStrideInPixels; // ivar: _maskStride
@property (readonly, nonatomic) NSUInteger seed; // ivar: _seed


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 keepProbability:(float)arg3 seed:(NSUInteger)arg4 maskStrideInPixels:(struct ? )arg5 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 keepProbability:(float)arg3 seed:(NSUInteger)arg4 maskStrideInPixels:(struct ? )arg5 ;


@end


#endif