// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHCROPOP_H
#define MPSGRAPHCROPOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphCropOp : MPSGraphOperation {
    NSUInteger _amount_before;
    NSUInteger _amount_after;
    NSInteger _dimensionIndex;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dimension_index:(NSInteger)arg3 amount_before:(NSUInteger)arg4 amount_after:(NSUInteger)arg5 name:(id)arg6 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif