// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHSTRIDEDSLICEGRADIENTOP_H
#define MPSGRAPHSTRIDEDSLICEGRADIENTOP_H

@class NSArray;


#import "MPSGraphOperation.h"

@interface MPSGraphStridedSliceGradientOp : MPSGraphOperation {
    NSArray *_starts;
    NSArray *_ends;
    NSArray *_strides;
    unsigned int _begin_mask;
    unsigned int _end_mask;
    unsigned int _shrink_axis_mask;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 starts:(id)arg3 ends:(id)arg4 strides:(id)arg5 startMask:(unsigned int)arg6 endMask:(unsigned int)arg7 shrinkAxisMask:(unsigned int)arg8 name:(id)arg9 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif