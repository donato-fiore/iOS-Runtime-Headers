// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNUNARYREDUCTIONNODE_H
#define MPSNNUNARYREDUCTIONNODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNUnaryReductionNode : MPSNNFilterNode

@property (nonatomic) ? clipRectSource; // ivar: _clipRectSource


+(id)nodeWithSource:(id)arg0 ;
-(id)gradientFilterWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;


@end


#endif