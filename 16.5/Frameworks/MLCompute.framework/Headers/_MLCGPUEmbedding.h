// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLCGPUEMBEDDING_H
#define _MLCGPUEMBEDDING_H

@class MLCGPULayer;



@interface _MLCGPUEmbedding : MLCGPULayer



+(id)layerWithDevice:(id)arg0 descriptor:(id)arg1 weights:(id)arg2 inferenceOnly:(BOOL)arg3 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 weights:(id)arg2 inferenceOnly:(BOOL)arg3 ;


@end


#endif