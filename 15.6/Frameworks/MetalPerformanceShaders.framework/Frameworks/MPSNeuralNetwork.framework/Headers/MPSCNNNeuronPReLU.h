// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNNEURONPRELU_H
#define MPSCNNNEURONPRELU_H

@class NSData;


#import "MPSCNNNeuron.h"

@interface MPSCNNNeuronPReLU : MPSCNNNeuron {
    NSData *_aData;
}




-(id)initWithDevice:(id)arg0 a:(*float)arg1 count:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 neuronDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 neuronDescriptor:(id)arg1 aArray:(*float)arg2 ;


@end


#endif