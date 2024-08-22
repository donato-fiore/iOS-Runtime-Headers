// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNSOFTMAXNODE_H
#define MPSCNNSOFTMAXNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNSoftMaxNode : MPSNNFilterNode



+(id)nodeWithSource:(id)arg0 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 ;


@end


#endif