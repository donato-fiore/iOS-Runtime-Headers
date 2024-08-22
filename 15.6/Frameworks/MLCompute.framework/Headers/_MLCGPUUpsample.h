// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCGPUUPSAMPLE_H
#define _MLCGPUUPSAMPLE_H

@class MLCGPULayer;



@interface _MLCGPUUpsample : MLCGPULayer



+(id)layerWithDevice:(id)arg0 scaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(BOOL)arg4 ;
-(id)initWithDevice:(id)arg0 scaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(BOOL)arg4 ;


@end


#endif