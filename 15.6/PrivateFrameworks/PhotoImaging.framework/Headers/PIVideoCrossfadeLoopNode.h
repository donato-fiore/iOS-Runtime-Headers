// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIVIDEOCROSSFADELOOPNODE_H
#define PIVIDEOCROSSFADELOOPNODE_H

@class NURenderNode;



@interface PIVideoCrossfadeLoopNode : NURenderNode

@property (readonly, nonatomic) ? crossfadeDuration; // ivar: _crossfadeDuration
@property (readonly, nonatomic) ? loopTimeRange; // ivar: _loopTimeRange
@property (readonly, nonatomic) ? startTime; // ivar: _startTime


-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateAudioMix:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)initWithInput:(id)arg0 timeRange:(struct ? )arg1 crossfadeDuration:(struct ? )arg2 startTime:(struct ? )arg3 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)input;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif