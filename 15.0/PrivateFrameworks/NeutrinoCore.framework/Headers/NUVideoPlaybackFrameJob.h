// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUVIDEOPLAYBACKFRAMEJOB_H
#define NUVIDEOPLAYBACKFRAMEJOB_H



#import "NURenderJob.h"

@interface NUVideoPlaybackFrameJob : NURenderJob



-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputVideoFrame;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(id)frameRequest;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithVideoFrameRequest:(id)arg0 ;
-(id)newRenderPipelineStateForEvaluationMode:(NSInteger)arg0 ;
-(id)renderer:(*id)arg0 ;
-(id)result;
-(id)scalePolicy;


@end


#endif