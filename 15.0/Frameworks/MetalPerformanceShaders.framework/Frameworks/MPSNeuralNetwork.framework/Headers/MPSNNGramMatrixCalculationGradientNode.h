// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNGRAMMATRIXCALCULATIONGRADIENTNODE_H
#define MPSNNGRAMMATRIXCALCULATIONGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSNNGramMatrixCalculationGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) float alpha; // ivar: _alpha


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;
+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 alpha:(float)arg3 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 alpha:(float)arg3 ;


@end


#endif