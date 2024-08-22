// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHCONVOLUTION3DDATAGRADIENTOP_H
#define MPSGRAPHCONVOLUTION3DDATAGRADIENTOP_H



#import "MPSGraphConvolution3DBaseOp.h"

@interface MPSGraphConvolution3DDataGradientOp : MPSGraphConvolution3DBaseOp



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif