// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHMAXPOOL4DGRADIENTOP_H
#define MPSGRAPHMAXPOOL4DGRADIENTOP_H



#import "MPSGraphPooling4DBaseOp.h"

@interface MPSGraphMaxPool4DGradientOp : MPSGraphPooling4DBaseOp {
    BOOL _gradientWithIndices;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descriptor:(id)arg3 gradientWithIndices:(BOOL)arg4 name:(id)arg5 ;


@end


#endif