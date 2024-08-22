// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCCPUEMBEDDING_H
#define _MLCCPUEMBEDDING_H

@class MLCCPULayer;



@interface _MLCCPUEmbedding : MLCCPULayer



+(id)layerWithDevice:(id)arg0 descriptor:(id)arg1 weights:(id)arg2 inferenceOnly:(BOOL)arg3 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 weights:(id)arg2 inferenceOnly:(BOOL)arg3 ;


@end


#endif