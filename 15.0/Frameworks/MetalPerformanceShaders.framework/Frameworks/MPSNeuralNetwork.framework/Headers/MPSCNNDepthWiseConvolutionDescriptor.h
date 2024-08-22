// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNDEPTHWISECONVOLUTIONDESCRIPTOR_H
#define MPSCNNDEPTHWISECONVOLUTIONDESCRIPTOR_H



#import "MPSCNNConvolutionDescriptor.h"

@interface MPSCNNDepthWiseConvolutionDescriptor : MPSCNNConvolutionDescriptor

@property (readonly, nonatomic) NSUInteger channelMultiplier;


-(id)debugDescription;
-(id)init;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 ;


@end


#endif