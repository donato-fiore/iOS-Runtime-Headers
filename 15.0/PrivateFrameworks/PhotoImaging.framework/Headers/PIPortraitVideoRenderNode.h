// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPORTRAITVIDEORENDERNODE_H
#define PIPORTRAITVIDEORENDERNODE_H

@class NURenderNode, NSArray, PTGlobalRenderingMetadata, PTRenderPipeline;
@protocol PTRenderState;


#import "PIPortraitVideoMetadataSample.h"

@interface PIPortraitVideoRenderNode : NURenderNode

@property (copy, nonatomic) NSArray *apertureKeyframes; // ivar: _apertureKeyframes
@property (copy, nonatomic) NSArray *disparityKeyframes; // ivar: _disparityKeyframes
@property (retain, nonatomic) PTGlobalRenderingMetadata *globalRenderingMetadata; // ivar: _globalRenderingMetadata
@property (nonatomic) CGSize pipelineColorSize; // ivar: _pipelineColorSize
@property (nonatomic) CGSize pipelineDisparitySize; // ivar: _pipelineDisparitySize
@property (retain, nonatomic) PTRenderPipeline *portraitRenderPipeline; // ivar: _portraitRenderPipeline
@property (retain, nonatomic) NSObject<PTRenderState> *portraitRenderState; // ivar: _portraitRenderState
@property (nonatomic) ? renderTime; // ivar: _renderTime
@property (retain, nonatomic) PIPortraitVideoMetadataSample *timedRenderingMetadata; // ivar: _timedRenderingMetadata


-(BOOL)_allocatePortraitRenderPipelineWithImageInput:(id)arg0 disparityInput:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)evaluateSettings:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)initWithInput:(id)arg0 disparityInput:(id)arg1 disparityKeyframes:(id)arg2 apertureKeyframes:(id)arg3 debugMode:(NSInteger)arg4 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)uniqueInputNode;
-(struct CGSize )_scaledSizeForInput:(id)arg0 scale:(struct ? )arg1 error:(*id)arg2 ;
-(void)_updateRenderStateWithCameraInfo:(id)arg0 ;


@end


#endif