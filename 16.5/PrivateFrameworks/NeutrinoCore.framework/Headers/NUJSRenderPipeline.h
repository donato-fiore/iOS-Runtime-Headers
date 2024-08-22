// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUJSRENDERPIPELINE_H
#define NUJSRENDERPIPELINE_H

@class NSUUID;


#import "NURenderPipeline.h"
#import "NUScript.h"

@interface NUJSRenderPipeline : NURenderPipeline {
    NUScript *_script;
    NSUUID *_identifier;
}




+(id)extractFilterParams:(id)arg0 withPipelineState:(id)arg1 error:(*id)arg2 ;
+(id)extractTransforms:(id)arg0 inputImages:(id)arg1 error:(*id)arg2 ;
+(id)renderPipelineWithJavaScript:(id)arg0 ;
-(id)_pipelineFunctionInContext:(id)arg0 error:(*id)arg1 ;
-(id)_pipelineFunctionWithJavaScript:(id)arg0 sourceURL:(id)arg1 context:(id)arg2 ;
-(id)_processedRenderNodeForComposition:(id)arg0 input:(id)arg1 pipelineState:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
-(id)_processedRenderNodeForComposition:(id)arg0 input:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithScript:(id)arg0 ;
-(void)setUpContext:(id)arg0 ;


@end


#endif