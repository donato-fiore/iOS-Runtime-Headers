// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHSLICEOP_H
#define MPSGRAPHSLICEOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphSliceOp : MPSGraphOperation {
    NSInteger _dimensionIndex;
    NSInteger _start;
    NSInteger _length;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dimension:(NSUInteger)arg3 start:(NSInteger)arg4 length:(NSInteger)arg5 name:(id)arg6 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif