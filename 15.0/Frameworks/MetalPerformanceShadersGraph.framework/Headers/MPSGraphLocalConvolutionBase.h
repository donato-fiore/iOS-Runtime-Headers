// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHLOCALCONVOLUTIONBASE_H
#define MPSGRAPHLOCALCONVOLUTIONBASE_H

@class NSArray;


#import "MPSGraphOperation.h"

@interface MPSGraphLocalConvolutionBase : MPSGraphOperation {
    NSUInteger _dataLayout;
    NSArray *_kernelShape;
    NSUInteger _dilationRateInX;
    NSUInteger _dilationRateInY;
}




-(id)initWithGraph:(id)arg0 inputTensors:(id)arg1 controlDependencies:(id)arg2 dataLayout:(NSUInteger)arg3 kernelShape:(id)arg4 dilationRateInX:(NSUInteger)arg5 dilationRateInY:(NSUInteger)arg6 name:(id)arg7 ;


@end


#endif