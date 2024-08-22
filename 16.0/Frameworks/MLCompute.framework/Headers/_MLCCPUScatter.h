// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCCPUSCATTER_H
#define _MLCCPUSCATTER_H

@class MLCCPULayer;



@interface _MLCCPUScatter : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 dimension:(NSUInteger)arg1 reduceType:(int)arg2 ;
-(id)initWithDevice:(id)arg0 dimension:(NSUInteger)arg1 reduceType:(int)arg2 ;


@end


#endif