// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHSAMPLEGRIDDATAGRADIENTOP_H
#define MPSGRAPHSAMPLEGRIDDATAGRADIENTOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphSampleGridDataGradientOp : MPSGraphOperation {
    BOOL _normalizeCoordinates;
    BOOL _relativeCoordinates;
    NSInteger _paddingMode;
    NSUInteger _samplingMode;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 normalizeCoordinates:(BOOL)arg3 relativeCoordinates:(BOOL)arg4 paddingMode:(NSInteger)arg5 samplingMode:(NSUInteger)arg6 name:(id)arg7 ;


@end


#endif