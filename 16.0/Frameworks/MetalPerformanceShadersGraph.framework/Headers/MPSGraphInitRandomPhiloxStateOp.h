// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHINITRANDOMPHILOXSTATEOP_H
#define MPSGRAPHINITRANDOMPHILOXSTATEOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphInitRandomPhiloxStateOp : MPSGraphOperation {
    NSUInteger _counterLow;
    NSUInteger _counterHigh;
    NSUInteger _key;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 counterLow:(NSUInteger)arg3 counterHigh:(NSUInteger)arg4 key:(NSUInteger)arg5 name:(id)arg6 ;


@end


#endif