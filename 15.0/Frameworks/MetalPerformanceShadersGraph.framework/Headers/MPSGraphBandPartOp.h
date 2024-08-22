// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHBANDPARTOP_H
#define MPSGRAPHBANDPARTOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphBandPartOp : MPSGraphOperation



-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dataType:(unsigned int)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif