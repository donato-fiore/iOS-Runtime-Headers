// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNNEURONRELU_H
#define MPSCNNNEURONRELU_H



#import "MPSCNNNeuron.h"

@interface MPSCNNNeuronReLU : MPSCNNNeuron



-(id)initWithDevice:(id)arg0 a:(float)arg1 ;
-(id)initWithDevice:(id)arg0 neuronDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 neuronDescriptor:(id)arg1 aArray:(*float)arg2 ;


@end


#endif