// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHTRANSPOSEOP_H
#define MPSGRAPHTRANSPOSEOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphTransposeOp : MPSGraphOperation {
    NSUInteger _dimensionIndex;
    NSUInteger _dimensionIndex2;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dimension:(NSUInteger)arg3 withDimension:(NSUInteger)arg4 name:(id)arg5 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif