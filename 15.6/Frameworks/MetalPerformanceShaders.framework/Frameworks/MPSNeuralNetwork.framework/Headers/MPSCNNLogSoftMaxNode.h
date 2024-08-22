// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNLOGSOFTMAXNODE_H
#define MPSCNNLOGSOFTMAXNODE_H



#import "MPSNNFilterNode.h"

@interface MPSCNNLogSoftMaxNode : MPSNNFilterNode



+(id)nodeWithSource:(id)arg0 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 ;


@end


#endif