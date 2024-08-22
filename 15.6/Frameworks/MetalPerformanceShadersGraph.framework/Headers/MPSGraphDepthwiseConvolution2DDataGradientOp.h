// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHDEPTHWISECONVOLUTION2DDATAGRADIENTOP_H
#define MPSGRAPHDEPTHWISECONVOLUTION2DDATAGRADIENTOP_H



#import "MPSGraphDepthwiseConvolution2DBaseOp.h"

@interface MPSGraphDepthwiseConvolution2DDataGradientOp : MPSGraphDepthwiseConvolution2DBaseOp



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif