// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHTOPKOP_H
#define MPSGRAPHTOPKOP_H



#import "MPSGraphTopKBaseOp.h"

@interface MPSGraphTopKOp : MPSGraphTopKBaseOp



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;
-(id)partialDerivativesForInputTensors:(id)arg0 incomingGradients:(id)arg1 name:(id)arg2 ;


@end


#endif