// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCGPUPADDING_H
#define _MLCGPUPADDING_H

@class MLCGPULayer;



@interface _MLCGPUPadding : MLCGPULayer



+(id)layerWithDevice:(id)arg0 paddingType:(int)arg1 paddingLeft:(NSUInteger)arg2 paddingRight:(NSUInteger)arg3 paddingTop:(NSUInteger)arg4 paddingBottom:(NSUInteger)arg5 constantValue:(float)arg6 dataType:(int)arg7 ;
-(id)initWithDevice:(id)arg0 paddingType:(int)arg1 paddingLeft:(NSUInteger)arg2 paddingRight:(NSUInteger)arg3 paddingTop:(NSUInteger)arg4 paddingBottom:(NSUInteger)arg5 constantValue:(float)arg6 dataType:(int)arg7 ;


@end


#endif