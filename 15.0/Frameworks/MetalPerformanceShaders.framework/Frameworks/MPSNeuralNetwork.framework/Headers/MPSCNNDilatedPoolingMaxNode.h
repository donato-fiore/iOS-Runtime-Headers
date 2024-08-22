// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNDILATEDPOOLINGMAXNODE_H
#define MPSCNNDILATEDPOOLINGMAXNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNDilatedPoolingMaxNode : MPSNNFilterNode {
    NSUInteger _kernelWidth;
    NSUInteger _kernelHeight;
    NSUInteger _strideInPixelsX;
    NSUInteger _strideInPixelsY;
}


@property (readonly, nonatomic) NSUInteger dilationRateX; // ivar: _dilationRateX
@property (readonly, nonatomic) NSUInteger dilationRateY; // ivar: _dilationRateY


+(id)nodeWithSource:(id)arg0 filterSize:(NSUInteger)arg1 ;
+(id)nodeWithSource:(id)arg0 filterSize:(NSUInteger)arg1 stride:(NSUInteger)arg2 dilationRate:(NSUInteger)arg3 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 filterSize:(NSUInteger)arg1 ;
-(id)initWithSource:(id)arg0 filterSize:(NSUInteger)arg1 stride:(NSUInteger)arg2 dilationRate:(NSUInteger)arg3 ;
-(id)initWithSource:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 dilationRateX:(NSUInteger)arg5 dilationRateY:(NSUInteger)arg6 ;


@end


#endif