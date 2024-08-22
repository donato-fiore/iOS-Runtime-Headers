// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHQUANTIZEOP_H
#define MPSGRAPHQUANTIZEOP_H

@class NSNumber;


#import "MPSGraphOperation.h"

@interface MPSGraphQuantizeOp : MPSGraphOperation {
    unsigned int _dataType;
    NSNumber *_axis;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dataType:(unsigned int)arg3 axis:(id)arg4 name:(id)arg5 ;


@end


#endif