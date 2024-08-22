// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNFULLYCONNECTEDNODE_H
#define MPSCNNFULLYCONNECTEDNODE_H



#import "MPSCNNConvolutionNode.h"

@interface MPSCNNFullyConnectedNode : MPSCNNConvolutionNode



+(id)nodeWithSource:(id)arg0 weights:(id)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg0 weights:(id)arg1 ;


@end


#endif