// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIAUTOLOOPVIDEONODE_H
#define PIAUTOLOOPVIDEONODE_H

@class NURenderNode;



@interface PIAutoLoopVideoNode : NURenderNode

@property (readonly, nonatomic) ? fadeDuration;
@property (readonly, nonatomic) int fadeLength; // ivar: _fadeLength
@property (readonly, nonatomic) ? fadeStartTime;
@property (readonly, nonatomic) ? frameDuration; // ivar: _frameDuration
@property (readonly, nonatomic) NURenderNode *input;
@property (readonly, nonatomic) ? loopDuration;
@property (readonly, nonatomic) int loopPeriod; // ivar: _loopPeriod
@property (readonly, nonatomic) int loopStart; // ivar: _loopStart
@property (readonly, nonatomic) ? startTime;


+(id)loopParamsForTrimRange:(struct ? )arg0 frameDuration:(struct ? )arg1 ;
+(int)fadeLengthForTrimRange:(struct ? )arg0 frameDuration:(struct ? )arg1 ;
+(int)loopPeriodForTrimRange:(struct ? )arg0 frameDuration:(struct ? )arg1 ;
+(int)loopStartForTrimRange:(struct ? )arg0 frameDuration:(struct ? )arg1 ;
-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateAudioMix:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)_evaluateVideoProperties:(*id)arg0 ;
-(id)initWithInput:(id)arg0 frameDuration:(struct ? )arg1 trimRange:(struct ? )arg2 settings:(id)arg3 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif