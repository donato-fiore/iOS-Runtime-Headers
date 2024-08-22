// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNNEURONLINEAR_H
#define MPSCNNNEURONLINEAR_H



#import "MPSCNNNeuron.h"

@interface MPSCNNNeuronLinear : MPSCNNNeuron



-(id)initWithDevice:(id)arg0 a:(float)arg1 b:(float)arg2 ;
-(id)initWithDevice:(id)arg0 neuronDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 neuronDescriptor:(id)arg1 aArray:(*float)arg2 ;


@end


#endif