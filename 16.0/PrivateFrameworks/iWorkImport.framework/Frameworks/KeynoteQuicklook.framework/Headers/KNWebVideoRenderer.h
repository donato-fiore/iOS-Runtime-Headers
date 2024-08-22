// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNWEBVIDEORENDERER_H
#define KNWEBVIDEORENDERER_H

@class TSDTextureSet, NSString;
@protocol KNAmbientBuildRenderer;


#import "KNBuildRenderer.h"

@interface KNWebVideoRenderer : KNBuildRenderer <KNAmbientBuildRenderer>

 {
    CGFloat _startTime;
    BOOL _needsVideoAtStartTime;
    BOOL _animationsPaused;
    CGFloat _playbackAtStartTimePauseTime;
    CGFloat _playbackAtStartTimePauseOffset;
    id *_ambientBuildStartCallbackTarget;
    SEL _ambientBuildCallbackSelector;
    BOOL _needsToSendAmbientBuildStartCallback;
    BOOL _needsToSendBuildEndCallback;
    TSDTextureSet *_posterImageTextureSet;
}


@property (weak, nonatomic) KNBuildRenderer *buildInRenderer; // ivar: _buildInRenderer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAmbientBuildStarted; // ivar: _hasAmbientBuildStarted
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldActionBuildsStopAnimations;
@property (readonly) Class superclass;


-(BOOL)addAnimationsAtLayerTime:(CGFloat)arg0 ;
-(void)animate;
-(void)forceRemoveAnimations;
-(void)interruptAndReset;
-(void)p_cancelVideoAtStartTime;
-(void)p_didFailWithError:(id)arg0 ;
-(void)p_didStartVideo;
-(void)p_didStopVideo;
-(void)p_scheduleVideoAtStartTime;
-(void)p_showVideoAtStartTime;
-(void)p_startVideo;
-(void)p_stopVideo;
-(void)p_unscheduleVideoAtStartTime;
-(void)pauseAnimations;
-(void)pauseAnimationsAtTime:(CGFloat)arg0 ;
-(void)registerForAmbientBuildStartCallback:(SEL)arg0 target:(id)arg1 ;
-(void)removeAnimationsAndFinish:(BOOL)arg0 ;
-(void)resumeAnimationsIfPaused;
-(void)resumeAnimationsIfPausedAtTime:(CGFloat)arg0 ;
-(void)stopAnimations;
-(void)updateAnimationsForLayerTime:(CGFloat)arg0 ;


@end


#endif