// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCGPULAYERNORMALIZATION_H
#define _MLCGPULAYERNORMALIZATION_H

@class MLCGPULayer;



@interface _MLCGPULayerNormalization : MLCGPULayer



+(id)layerWithDevice:(id)arg0 normalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 isFusedWithArithmeticLayer:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg0 normalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 isFusedWithArithmeticLayer:(BOOL)arg5 ;


@end


#endif