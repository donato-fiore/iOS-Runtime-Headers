// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHSINGLEGATERNNOP_H
#define MPSGRAPHSINGLEGATERNNOP_H



#import "MPSGraphSingleGateRNNBaseOp.h"

@interface MPSGraphSingleGateRNNOp : MPSGraphSingleGateRNNBaseOp



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 name:(id)arg4 ;
-(id)partialDerivativesForInputTensors:(id)arg0 incomingGradients:(id)arg1 name:(id)arg2 ;


@end


#endif