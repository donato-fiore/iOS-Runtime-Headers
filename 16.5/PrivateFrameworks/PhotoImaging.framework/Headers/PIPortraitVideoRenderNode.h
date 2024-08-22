// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPORTRAITVIDEORENDERNODE_H
#define PIPORTRAITVIDEORENDERNODE_H

@class NURenderNode, NSArray, PTGlobalRenderingMetadata;


#import "PIPortraitVideoMetadataSample.h"

@interface PIPortraitVideoRenderNode : NURenderNode

@property (readonly, copy, nonatomic) NSArray *apertureKeyframes;
@property (readonly, nonatomic) NSInteger debugMode;
@property (readonly, copy, nonatomic) NSArray *disparityKeyframes;
@property (readonly, nonatomic) PTGlobalRenderingMetadata *globalMetadata;
@property (readonly, nonatomic) int renderQuality;
@property (readonly, nonatomic) ? renderTime;
@property (readonly, nonatomic) PIPortraitVideoMetadataSample *timedMetadata;


-(BOOL)_prewarmPortraitRendererWithPipelineState:(id)arg0 error:(*id)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(BOOL)useSourceBuffersDirectly;
-(id)_evaluateImage:(*id)arg0 ;
-(id)initWithInput:(id)arg0 disparityInput:(id)arg1 disparityKeyframes:(id)arg2 apertureKeyframes:(id)arg3 debugMode:(NSInteger)arg4 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)sourceTransferFunction;
-(id)uniqueInputNode;
-(int)_portraitQualityForRenderScale:(struct ? )arg0 ;
-(struct ? )_targetScaleForScale:(struct ? )arg0 ;
-(struct __CVBuffer *)_sourceBufferFromInput:(id)arg0 error:(*id)arg1 ;


@end


#endif