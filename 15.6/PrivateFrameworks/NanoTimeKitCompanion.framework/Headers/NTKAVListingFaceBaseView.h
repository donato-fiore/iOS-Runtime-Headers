// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKAVLISTINGFACEBASEVIEW_H
#define NTKAVLISTINGFACEBASEVIEW_H

@class NSTimer, UIView;
@protocol NTKAVListing;


#import "NTKAVFaceBaseView.h"
#import "NTKTaskScheduler.h"
#import "NTKDelayedBlock.h"

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView {
    BOOL _updateWhenUnpausing;
    NTKTaskScheduler *_taskScheduler;
    BOOL _preLoadingVideoOnSleep;
    BOOL _preLoadedVideoOnSleep;
    BOOL _shouldPlayOnWake;
    BOOL _isPauseLockedout;
    NSTimer *_playOnWakeTimeout;
    NTKDelayedBlock *_playNextVideoDelayBlock;
    NTKDelayedBlock *_pauseLockoutBlock;
    UIView *_blackView;
    NSInteger _previousDataMode;
}


@property (getter=isContentUnloadedForFaceSwiping) BOOL contentUnloadedForFaceSwiping; // ivar: _contentUnloadedForFaceSwiping
@property (retain, nonatomic) NSObject<NTKAVListing> *currentListing; // ivar: _currentListing
@property (getter=isHandlingScreenWake) BOOL handlingScreenWake; // ivar: _handlingScreenWake
@property (readonly, nonatomic) BOOL paused; // ivar: _isPaused
@property (nonatomic) BOOL shouldChangeVariantForScreenWake; // ivar: _shouldChangeVariantForScreenWake
@property (readonly, nonatomic) BOOL shouldPause; // ivar: _shouldPause


-(BOOL)_changeCurrentListing;
-(BOOL)_curtainViewVisible;
-(BOOL)_timeLabelUsesLegibility;
-(id)_complicationFlickerWorkgroundAnimationWithDuration:(CGFloat)arg0 applier:(id)arg1 ;
-(id)_curtainView;
-(id)_nextListing;
-(id)_onDeckPosterImageView;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)_activatePauseLockout;
-(void)_applyDataMode;
-(void)_applyFrozen;
-(void)_applySlow;
-(void)_cancelAllTasks;
-(void)_cancelDelayedPlayback;
-(void)_cancelPauseLockout;
-(void)_cleanupAfterOrb:(BOOL)arg0 ;
-(void)_endScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_fadeFromCurtainViewWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_fadeToCurtainViewWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_handleFaceStyleDidChange;
-(void)_handleOrdinaryScreenWake;
-(void)_handleScreenWake;
-(void)_handleWristRaiseScreenWake;
-(void)_hideCurtainView;
-(void)_loadSnapshotContentViews;
-(void)_loadVideoForListing;
-(void)_pauseImmediately;
-(void)_performPreloadVideoTask;
-(void)_playNextVideo;
-(void)_playNextVideoAfterDelay:(CGFloat)arg0 ;
-(void)_playQueuedUpVideo;
-(void)_playVideo;
-(void)_playVideoForScreenWake:(id)arg0 ;
-(void)_prepareForEditing;
-(void)_prepareForOrb;
-(void)_queuePreloadVideoTask;
-(void)_reset;
-(void)_resetVideoForListing;
-(void)_selectDefaultListing;
-(void)_showCurtainView;
-(void)_startScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_transitionToPosterView:(id)arg0 ;
-(void)_unloadSnapshotContentViews;
-(void)_unpauseFromSwitcher;
-(void)_updateImageToBlur;
-(void)_updatePaused;
-(void)dealloc;
-(void)faultInFaceContentSkippedDuringSwiping;
-(void)screenDidTurnOffAnimated:(BOOL)arg0 ;
-(void)screenWillTurnOnAnimated:(BOOL)arg0 ;
-(void)setNormalComplicationDisplayWrapper:(id)arg0 forSlot:(id)arg1 ;


@end


#endif