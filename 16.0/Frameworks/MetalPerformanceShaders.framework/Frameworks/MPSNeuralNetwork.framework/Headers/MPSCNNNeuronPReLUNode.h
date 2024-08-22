// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNNEURONPRELUNODE_H
#define MPSCNNNEURONPRELUNODE_H

@class NSData;


#import "MPSCNNNeuronNode.h"

@interface MPSCNNNeuronPReLUNode : MPSCNNNeuronNode {
    NSData *_aData;
}




+(id)nodeWithSource:(id)arg0 aData:(id)arg1 ;
-(id)descriptor;
-(id)initWithSource:(id)arg0 aData:(id)arg1 ;
-(void)dealloc;


@end


#endif