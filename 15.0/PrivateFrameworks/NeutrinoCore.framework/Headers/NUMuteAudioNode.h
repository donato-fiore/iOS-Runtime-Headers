// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUMUTEAUDIONODE_H
#define NUMUTEAUDIONODE_H



#import "NURenderNode.h"

@interface NUMuteAudioNode : NURenderNode



-(BOOL)requiresAudioMix;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateVideo:(*id)arg0 ;
-(id)initWithInput:(id)arg0 ;
-(id)resolvedNodeWithCachedInputs:(id)arg0 settings:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;


@end


#endif