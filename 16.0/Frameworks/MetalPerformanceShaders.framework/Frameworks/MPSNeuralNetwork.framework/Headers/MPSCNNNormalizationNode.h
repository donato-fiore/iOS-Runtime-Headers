// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNNORMALIZATIONNODE_H
#define MPSCNNNORMALIZATIONNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNNormalizationNode : MPSNNFilterNode

@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float beta; // ivar: _beta
@property (nonatomic) float delta; // ivar: _delta


+(id)nodeWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;


@end


#endif