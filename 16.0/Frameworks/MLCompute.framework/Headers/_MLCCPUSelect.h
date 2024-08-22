// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCCPUSELECT_H
#define _MLCCPUSELECT_H

@class MLCCPULayer;



@interface _MLCCPUSelect : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif