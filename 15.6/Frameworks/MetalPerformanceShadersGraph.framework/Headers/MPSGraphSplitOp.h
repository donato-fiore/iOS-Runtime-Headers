// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHSPLITOP_H
#define MPSGRAPHSPLITOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphSplitOp : MPSGraphOperation {
    NSInteger _dimensionIndex;
    NSUInteger _numSplits;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dimension:(NSInteger)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dimension:(NSInteger)arg3 numSplits:(NSUInteger)arg4 name:(id)arg5 ;
-(id)partialDerivativesForInputTensors:(id)arg0 incomingGradients:(id)arg1 name:(id)arg2 ;


@end


#endif