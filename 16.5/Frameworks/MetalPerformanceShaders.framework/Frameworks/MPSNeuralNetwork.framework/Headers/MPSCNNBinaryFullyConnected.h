// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNBINARYFULLYCONNECTED_H
#define MPSCNNBINARYFULLYCONNECTED_H



#import "MPSCNNBinaryConvolution.h"

@interface MPSCNNBinaryFullyConnected : MPSCNNBinaryConvolution



-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 convolutionData:(id)arg1 outputBiasTerms:(*float)arg2 outputScaleTerms:(*float)arg3 inputBiasTerms:(*float)arg4 inputScaleTerms:(*float)arg5 type:(NSUInteger)arg6 flags:(NSUInteger)arg7 ;
-(id)initWithDevice:(id)arg0 convolutionData:(id)arg1 scaleValue:(float)arg2 type:(NSUInteger)arg3 flags:(NSUInteger)arg4 ;
-(id)initWithDeviceImpl:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*unsigned int)arg2 outputBiasTerms:(*float)arg3 outputScaleTerms:(*float)arg4 inputBiasTerms:(*float)arg5 inputScaleTerms:(*float)arg6 type:(NSUInteger)arg7 flags:(NSUInteger)arg8 ;
-(id)initWithDeviceImpl:(id)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*unsigned int)arg2 scaleValue:(float)arg3 type:(NSUInteger)arg4 flags:(NSUInteger)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif