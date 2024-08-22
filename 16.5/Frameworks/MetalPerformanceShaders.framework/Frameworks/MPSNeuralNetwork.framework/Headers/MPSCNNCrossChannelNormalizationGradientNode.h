// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNCROSSCHANNELNORMALIZATIONGRADIENTNODE_H
#define MPSCNNCROSSCHANNELNORMALIZATIONGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSCNNCrossChannelNormalizationGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) NSUInteger kernelSize; // ivar: _kernelSize


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelSize:(NSUInteger)arg3 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelSize:(NSUInteger)arg3 ;


@end


#endif