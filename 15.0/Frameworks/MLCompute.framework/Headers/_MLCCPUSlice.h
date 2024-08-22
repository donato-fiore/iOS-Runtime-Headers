// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCCPUSLICE_H
#define _MLCCPUSLICE_H

@class MLCCPULayer;



@interface _MLCCPUSlice : MLCCPULayer



+(BOOL)compileWithDevice:(id)arg0 deviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
+(id)layerWithDevice:(id)arg0 begin:(id)arg1 end:(id)arg2 stride:(id)arg3 ;
-(id)initWithDevice:(id)arg0 begin:(id)arg1 end:(id)arg2 stride:(id)arg3 ;


@end


#endif