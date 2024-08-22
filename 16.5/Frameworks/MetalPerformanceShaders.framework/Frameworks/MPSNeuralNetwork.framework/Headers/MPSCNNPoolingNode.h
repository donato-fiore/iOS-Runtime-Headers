// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNPOOLINGNODE_H
#define MPSCNNPOOLINGNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNPoolingNode : MPSNNFilterNode

@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) NSUInteger strideInPixelsX; // ivar: _strideInPixelsX
@property (readonly, nonatomic) NSUInteger strideInPixelsY; // ivar: _strideInPixelsY


+(id)nodeWithSource:(id)arg0 filterSize:(NSUInteger)arg1 ;
+(id)nodeWithSource:(id)arg0 filterSize:(NSUInteger)arg1 stride:(NSUInteger)arg2 ;
-(*void)newFilterNode;
-(id)initWithSource:(id)arg0 filterSize:(NSUInteger)arg1 ;
-(id)initWithSource:(id)arg0 filterSize:(NSUInteger)arg1 stride:(NSUInteger)arg2 ;
-(id)initWithSource:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 ;


@end


#endif