// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERPIPELINE_H
#define NURENDERPIPELINE_H


#import <Foundation/Foundation.h>


@interface NURenderPipeline : NSObject



-(id)_processedRenderNodeForComposition:(id)arg0 input:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)_runPipelineFiltersForRenderNode:(id)arg0 composition:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)processedRenderNodeForComposition:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;


@end


#endif