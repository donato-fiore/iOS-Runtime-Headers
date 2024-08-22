// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHRESIZEBASEOP_H
#define MPSGRAPHRESIZEBASEOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphResizeBaseOp : MPSGraphOperation {
    NSUInteger _mode;
    BOOL _centerResult;
    BOOL _alignCorners;
    NSUInteger _layout;
}




-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 mode:(NSUInteger)arg3 centerResult:(BOOL)arg4 alignCorners:(BOOL)arg5 layout:(NSUInteger)arg6 name:(id)arg7 ;


@end


#endif