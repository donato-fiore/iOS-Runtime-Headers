// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHLOCALCONVOLUTIONWEIGHTGRADIENTOP_H
#define MPSGRAPHLOCALCONVOLUTIONWEIGHTGRADIENTOP_H



#import "MPSGraphLocalConvolutionBase.h"

@interface MPSGraphLocalConvolutionWeightGradientOp : MPSGraphLocalConvolutionBase



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dataLayout:(NSUInteger)arg3 kernelShape:(id)arg4 dilationRateInX:(NSUInteger)arg5 dilationRateInY:(NSUInteger)arg6 name:(id)arg7 ;


@end


#endif