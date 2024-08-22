// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNNEURONGRADIENTNODE_H
#define MPSCNNNEURONGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"
#import "MPSNNNeuronDescriptor.h"

@interface MPSCNNNeuronGradientNode : MPSNNGradientFilterNode

@property (readonly, nonatomic) MPSNNNeuronDescriptor *descriptor; // ivar: _descriptor


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 descriptor:(id)arg3 ;
-(*void)newFilterNode;
-(id)initWithGradientImages:(id)arg0 forwardFilter:(id)arg1 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 descriptor:(id)arg3 ;
-(void)dealloc;


@end


#endif