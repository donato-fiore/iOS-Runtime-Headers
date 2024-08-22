// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPCONVOLUTIONBASE_H
#define MLPCONVOLUTIONBASE_H



#import "MLPImageLayer.h"

@interface MLPConvolutionBase : MLPImageLayer

@property NSUInteger kernelHeight; // ivar: _kernelHeight
@property NSUInteger kernelStride; // ivar: _kernelStride
@property NSUInteger kernelWidth; // ivar: _kernelWidth


-(NSUInteger)computeOutputLengthWithInputLength:(NSInteger)arg0 kernelWidth:(NSInteger)arg1 kernelStride:(NSInteger)arg2 ;


@end


#endif