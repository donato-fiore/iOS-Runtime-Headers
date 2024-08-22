// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHSCATTERALONGAXISOP_H
#define MPSGRAPHSCATTERALONGAXISOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphScatterAlongAxisOp : MPSGraphOperation {
    NSInteger _mode;
}




-(*void)makeMLIROpWithBuilder:(*void)arg0 symbolTable:(*void)arg1 inputValues:(*void)arg2 opInitialization:(BOOL)arg3 name:(id)arg4 ;
-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 mode:(NSInteger)arg3 name:(id)arg4 ;


@end


#endif