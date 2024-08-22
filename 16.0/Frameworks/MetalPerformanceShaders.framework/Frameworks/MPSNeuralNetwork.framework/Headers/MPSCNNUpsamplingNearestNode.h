// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNUPSAMPLINGNEARESTNODE_H
#define MPSCNNUPSAMPLINGNEARESTNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNUpsamplingNearestNode : MPSNNFilterNode

@property (readonly, nonatomic) CGFloat scaleFactorX; // ivar: _scaleFactorX
@property (readonly, nonatomic) CGFloat scaleFactorY; // ivar: _scaleFactorY


+(id)nodeWithSource:(id)arg0 integerScaleFactorX:(NSUInteger)arg1 integerScaleFactorY:(NSUInteger)arg2 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 integerScaleFactorX:(NSUInteger)arg1 integerScaleFactorY:(NSUInteger)arg2 ;


@end


#endif