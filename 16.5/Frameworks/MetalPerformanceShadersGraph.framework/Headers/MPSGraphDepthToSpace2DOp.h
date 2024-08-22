// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHDEPTHTOSPACE2DOP_H
#define MPSGRAPHDEPTHTOSPACE2DOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphDepthToSpace2DOp : MPSGraphOperation {
    NSUInteger _blockSize;
    BOOL _pixelShuffleOrder;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 blockSize:(NSUInteger)arg3 usePixelShuffleOrder:(BOOL)arg4 name:(id)arg5 ;
-(id)partialDerivativeForInputTensor:(id)arg0 incomingGradient:(id)arg1 inputIndex:(NSUInteger)arg2 name:(id)arg3 ;


@end


#endif