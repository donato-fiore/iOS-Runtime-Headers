// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNPERMUTENODE_H
#define MPSNNPERMUTENODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNPermuteNode : MPSNNFilterNode {
    MPSNNDimensionOrder _order;
}




+(id)nodeWithSource:(id)arg0 dimensionOrder:(struct MPSNNDimensionOrder )arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 dimensionOrder:(struct MPSNNDimensionOrder )arg1 ;


@end


#endif