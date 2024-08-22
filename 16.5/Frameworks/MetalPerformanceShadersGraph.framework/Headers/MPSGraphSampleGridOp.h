// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHSAMPLEGRIDOP_H
#define MPSGRAPHSAMPLEGRIDOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphSampleGridOp : MPSGraphOperation {
    BOOL _normalizeCoordinates;
    BOOL _relativeCoordinates;
    BOOL _alignCorners;
    NSInteger _paddingMode;
    NSUInteger _samplingMode;
    NSUInteger _nearestRoundingMode;
    NSUInteger _layout;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 layout:(NSUInteger)arg3 normalizeCoordinates:(BOOL)arg4 relativeCoordinates:(BOOL)arg5 alignCorners:(BOOL)arg6 paddingMode:(NSInteger)arg7 samplingMode:(NSUInteger)arg8 nearestRoundingMode:(NSUInteger)arg9 name:(id)arg10 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif