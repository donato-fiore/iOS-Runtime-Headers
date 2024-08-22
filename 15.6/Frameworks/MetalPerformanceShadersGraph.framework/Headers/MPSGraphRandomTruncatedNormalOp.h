// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHRANDOMTRUNCATEDNORMALOP_H
#define MPSGRAPHRANDOMTRUNCATEDNORMALOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphRandomTruncatedNormalOp : MPSGraphOperation {
    unsigned int _dataType;
    NSUInteger _samplingMethod;
    float _mean;
    float _standardDeviation;
    float _maximum;
    float _minimum;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 name:(id)arg4 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif