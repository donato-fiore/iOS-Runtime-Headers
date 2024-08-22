// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHARITHMETICOP_H
#define MPSGRAPHARITHMETICOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphArithmeticOp : MPSGraphOperation {
    NSUInteger _mathOpType;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)broadcastGradTernaryWithOutputGradient:(id)arg0 inputIndex:(NSUInteger)arg1 name:(id)arg2 ;
-(id)broadcastGradWithOutputGradient:(id)arg0 inputIndex:(NSUInteger)arg1 name:(id)arg2 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 mathOpType:(NSUInteger)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif