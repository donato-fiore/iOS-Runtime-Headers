// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNSPATIALNORMALIZATIONGRADIENTNODE_H
#define MPSCNNSPATIALNORMALIZATIONGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSCNNSpatialNormalizationGradientNode : MPSNNGradientFilterNode

@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float beta; // ivar: _beta
@property (nonatomic) float delta; // ivar: _delta
@property (nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelSize:(NSUInteger)arg3 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelSize:(NSUInteger)arg3 ;


@end


#endif