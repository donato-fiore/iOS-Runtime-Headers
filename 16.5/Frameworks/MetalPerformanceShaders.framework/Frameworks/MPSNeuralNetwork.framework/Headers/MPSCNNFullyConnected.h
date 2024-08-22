// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNFULLYCONNECTED_H
#define MPSCNNFULLYCONNECTED_H



#import "MPSCNNConvolution.h"

@interface MPSCNNFullyConnected : MPSCNNConvolution



-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 kernelOffset:(struct ? *)arg4 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 ;
-(id)initWithDevice:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 fullyConnected:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*float)arg2 biasTerms:(*float)arg3 flags:(NSUInteger)arg4 fullyConnected:(BOOL)arg5 convolutionTranspose:(BOOL)arg6 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 fullyConnected:(BOOL)arg2 convolutionTranspose:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif