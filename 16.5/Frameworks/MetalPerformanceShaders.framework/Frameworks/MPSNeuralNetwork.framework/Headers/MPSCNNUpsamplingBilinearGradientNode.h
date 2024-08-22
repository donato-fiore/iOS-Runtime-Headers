// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNUPSAMPLINGBILINEARGRADIENTNODE_H
#define MPSCNNUPSAMPLINGBILINEARGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSCNNUpsamplingBilinearGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) CGFloat scaleFactorX; // ivar: _scaleFactorX
@property (readonly, nonatomic) CGFloat scaleFactorY; // ivar: _scaleFactorY


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 scaleFactorX:(CGFloat)arg3 scaleFactorY:(CGFloat)arg4 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 scaleFactorX:(CGFloat)arg3 scaleFactorY:(CGFloat)arg4 ;


@end


#endif