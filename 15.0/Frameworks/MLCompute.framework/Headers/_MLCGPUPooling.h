// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCGPUPOOLING_H
#define _MLCGPUPOOLING_H

@class MLCGPULayer;



@interface _MLCGPUPooling : MLCGPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 descriptor:(id)arg1 paddingSizes:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 paddingSizes:(NSUInteger)arg2 ;


@end


#endif