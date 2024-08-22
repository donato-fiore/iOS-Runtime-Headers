// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIAUTOLOOPMIRRORVIDEONODE_H
#define PIAUTOLOOPMIRRORVIDEONODE_H



#import "PIAutoLoopVideoNode.h"

@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode



+(int)fadeLengthForTrimRange:(struct ? )arg0 frameDuration:(struct ? )arg1 ;
-(BOOL)requiresAudioMix;
-(BOOL)requiresVideoComposition;
-(id)_evaluateAudioMix:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)_evaluateVideoComposition:(*id)arg0 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(struct ? )_conformTime:(struct ? )arg0 ;


@end


#endif