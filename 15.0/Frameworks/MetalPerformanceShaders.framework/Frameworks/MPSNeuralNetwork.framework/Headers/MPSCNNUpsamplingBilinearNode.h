// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNUPSAMPLINGBILINEARNODE_H
#define MPSCNNUPSAMPLINGBILINEARNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNUpsamplingBilinearNode : MPSNNFilterNode

@property (readonly, nonatomic) BOOL alignCorners; // ivar: _alignCorners
@property (readonly, nonatomic) CGFloat scaleFactorX; // ivar: _scaleFactorX
@property (readonly, nonatomic) CGFloat scaleFactorY; // ivar: _scaleFactorY


+(id)nodeWithSource:(id)arg0 integerScaleFactorX:(NSUInteger)arg1 integerScaleFactorY:(NSUInteger)arg2 ;
+(id)nodeWithSource:(id)arg0 integerScaleFactorX:(NSUInteger)arg1 integerScaleFactorY:(NSUInteger)arg2 alignCorners:(BOOL)arg3 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 integerScaleFactorX:(NSUInteger)arg1 integerScaleFactorY:(NSUInteger)arg2 ;
-(id)initWithSource:(id)arg0 integerScaleFactorX:(NSUInteger)arg1 integerScaleFactorY:(NSUInteger)arg2 alignCorners:(BOOL)arg3 ;


@end


#endif