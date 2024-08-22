// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHDEPTHWISECONVOLUTION3DOP_H
#define MPSGRAPHDEPTHWISECONVOLUTION3DOP_H



#import "MPSGraphDepthwiseConvolution3DBaseOp.h"

@interface MPSGraphDepthwiseConvolution3DOp : MPSGraphDepthwiseConvolution3DBaseOp



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif