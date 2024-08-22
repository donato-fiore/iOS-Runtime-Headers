// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCCPUGATHER_H
#define _MLCCPUGATHER_H

@class MLCCPULayer;



@interface _MLCCPUGather : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 dimension:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 dimension:(NSUInteger)arg1 ;


@end


#endif