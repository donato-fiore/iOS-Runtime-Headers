// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNLOCALCONTRASTNORMALIZATIONGRADIENTNODE_H
#define MPSCNNLOCALCONTRASTNORMALIZATIONGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSCNNLocalContrastNormalizationGradientNode : MPSNNGradientFilterNode

@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float beta; // ivar: _beta
@property (nonatomic) float delta; // ivar: _delta
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (nonatomic) float p0; // ivar: _p0
@property (nonatomic) float pm; // ivar: _pm
@property (nonatomic) float ps; // ivar: _ps


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 ;


@end


#endif