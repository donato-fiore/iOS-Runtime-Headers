// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHRESIZEBASEOP_H
#define MPSGRAPHRESIZEBASEOP_H



#import "MPSGraphOperation.h"

@interface MPSGraphResizeBaseOp : MPSGraphOperation {
    NSUInteger _mode;
    NSUInteger _nearestRoundingMode;
    BOOL _centerResult;
    BOOL _alignCorners;
    NSUInteger _layout;
}




-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 mode:(NSUInteger)arg3 nearestRoundingMode:(NSUInteger)arg4 centerResult:(BOOL)arg5 alignCorners:(BOOL)arg6 layout:(NSUInteger)arg7 name:(id)arg8 ;


@end


#endif