// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHSORTOP_H
#define MPSGRAPHSORTOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphSortOp : MPSGraphOperation {
    BOOL _descending;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 descending:(BOOL)arg3 name:(id)arg4 ;


@end


#endif