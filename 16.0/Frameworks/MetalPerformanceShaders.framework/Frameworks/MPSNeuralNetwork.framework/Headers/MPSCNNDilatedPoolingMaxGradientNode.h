// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNDILATEDPOOLINGMAXGRADIENTNODE_H
#define MPSCNNDILATEDPOOLINGMAXGRADIENTNODE_H



#import "MPSCNNPoolingGradientNode.h"

@interface MPSCNNDilatedPoolingMaxGradientNode : MPSCNNPoolingGradientNode

@property (readonly, nonatomic) NSUInteger dilationRateX; // ivar: _dilationRateX
@property (readonly, nonatomic) NSUInteger dilationRateY; // ivar: _dilationRateY


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 strideInPixelsX:(NSUInteger)arg5 strideInPixelsY:(NSUInteger)arg6 dilationRateX:(NSUInteger)arg7 dilationRateY:(NSUInteger)arg8 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 strideInPixelsX:(NSUInteger)arg5 strideInPixelsY:(NSUInteger)arg6 dilationRateX:(NSUInteger)arg7 dilationRateY:(NSUInteger)arg8 ;


@end


#endif