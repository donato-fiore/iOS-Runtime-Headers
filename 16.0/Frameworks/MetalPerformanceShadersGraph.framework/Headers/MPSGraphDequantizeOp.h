// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHDEQUANTIZEOP_H
#define MPSGRAPHDEQUANTIZEOP_H

@class NSNumber;


#import "MPSGraphOperation.h"

@interface MPSGraphDequantizeOp : MPSGraphOperation {
    unsigned int _dtype;
    NSNumber *_axis;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dtype:(unsigned int)arg3 axis:(id)arg4 name:(id)arg5 ;


@end


#endif