// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUCOMPOSITIONSOURCENODE_H
#define NUCOMPOSITIONSOURCENODE_H



#import "NUSourceNode.h"
#import "NURenderPipeline.h"
#import "NUComposition.h"

@interface NUCompositionSourceNode : NUSourceNode {
    NURenderPipeline *_renderPipeline;
    NUComposition *_composition;
    ? _pixelSize;
}




-(BOOL)load:(*id)arg0 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_compositionRenderNodeForPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithComposition:(id)arg0 renderPipeline:(id)arg1 settings:(id)arg2 ;
-(id)initWithSettings:(id)arg0 ;
-(id)preparedNodeWithSourceContainer:(id)arg0 pipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(*id)arg4 ;
-(struct ? )pixelSizeWithSourceOptions:(id)arg0 ;


@end


#endif