// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHMAKELISTOP_H
#define MPSGRAPHMAKELISTOP_H

@class NSNumber;


#import "MPSGraphOperation.h"
#import "MPSGraphType.h"

@interface MPSGraphMakeListOp : MPSGraphOperation {
    MPSGraphType *_elementType;
    NSNumber *_maxSize;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 elementType:(id)arg3 maxSize:(id)arg4 name:(id)arg5 ;


@end


#endif