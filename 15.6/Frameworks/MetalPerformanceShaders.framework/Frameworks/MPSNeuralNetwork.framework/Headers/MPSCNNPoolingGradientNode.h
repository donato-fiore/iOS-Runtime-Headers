// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNPOOLINGGRADIENTNODE_H
#define MPSCNNPOOLINGGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSCNNPoolingGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) NSUInteger strideInPixelsX; // ivar: _strideInPixelsX
@property (readonly, nonatomic) NSUInteger strideInPixelsY; // ivar: _strideInPixelsY


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 strideInPixelsX:(NSUInteger)arg5 strideInPixelsY:(NSUInteger)arg6 paddingPolicy:(id)arg7 ;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 strideInPixelsX:(NSUInteger)arg5 strideInPixelsY:(NSUInteger)arg6 paddingPolicy:(id)arg7 ;


@end


#endif