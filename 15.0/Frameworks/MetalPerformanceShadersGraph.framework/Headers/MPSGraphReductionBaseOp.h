// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHREDUCTIONBASEOP_H
#define MPSGRAPHREDUCTIONBASEOP_H

@class NSArray;


#import "MPSGraphOperation.h"

@interface MPSGraphReductionBaseOp : MPSGraphOperation {
    NSArray *_axes;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 axes:(id)arg3 name:(id)arg4 ;


@end


#endif