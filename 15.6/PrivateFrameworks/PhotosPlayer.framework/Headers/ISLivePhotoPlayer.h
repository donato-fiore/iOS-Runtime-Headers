// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISLIVEPHOTOPLAYER_H
#define ISLIVEPHOTOPLAYER_H

@class NSMutableSet, NSDate, NSString, NSSet;
@protocol ISLivePhotoSettleBehaviorDelegate, ISChangeObserver;


#import "ISBasePlayer.h"
#import "ISLivePhotoVitalityFilter.h"

@interface ISLivePhotoPlayer : ISBasePlayer <ISLivePhotoSettleBehaviorDelegate, ISChangeObserver>

 {
    NSMutableSet *_playbackFilters;
    uint8_t _fadeInRequestID;
    ? _isValid;
    CGFloat _lastAppliedScale;
}


@property (readonly, nonatomic) BOOL _canPlayVitality;
@property (nonatomic, setter=_setSettleAutomaticallyWhenReady:) BOOL _settleAutomaticallyWhenReady; // ivar: __settleAutomaticallyWhenReady
@property (nonatomic, setter=_setShouldPlayVitalityWhenReady:) BOOL _shouldPlayVitalityWhenReady; // ivar: __shouldPlayVitalityWhenReady
@property (nonatomic, setter=_setShouldPrepareForHintWhenReady:) BOOL _shouldPrepareForHintWhenReady; // ivar: __shouldPrepareForHintWhenReady
@property (nonatomic, setter=_setShouldPrepareForVitalityWhenReady:) BOOL _shouldPrepareForVitalityWhenReady; // ivar: __shouldPrepareForVitalityWhenReady
@property (nonatomic, setter=_setStyleToPlayWhenReady:) NSInteger _styleToPlayWhenReady; // ivar: __styleToPlayWhenReady
@property (retain, nonatomic, setter=_setVitalityTimeoutDate:) NSDate *_vitalityTimeoutDate; // ivar: __vitalityTimeoutDate
@property (nonatomic, setter=_setCurrentPlaybackStyle:) NSInteger currentPlaybackStyle; // ivar: _currentPlaybackStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHinting, setter=_setHinting:) BOOL hinting; // ivar: _hinting
@property (nonatomic) BOOL immediatelyShowsPhotoWhenPlaybackEnds; // ivar: _immediatelyShowsPhotoWhenPlaybackEnds
@property (nonatomic, setter=_setIsAttemptingToPlayback:) BOOL isAttemptingToPlayback; // ivar: _isAttemptingToPlayback
@property (nonatomic, getter=isPlaybackAllowed) BOOL playbackAllowed; // ivar: _playbackAllowed
@property (readonly, nonatomic) NSSet *playbackFilters;
@property (nonatomic, getter=isPlayingVitality, setter=_setPlayingVitality:) BOOL playingVitality; // ivar: _playingVitality
@property (readonly, nonatomic) ? seekTime; // ivar: _seekTime
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetReadiness; // ivar: _targetReadiness
@property (nonatomic) ? trimTimeRange; // ivar: _trimTimeRange
@property (retain, nonatomic) ISLivePhotoVitalityFilter *vitalityFilter; // ivar: _vitalityFilter


-(BOOL)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg0 ;
-(CGFloat)_coalescedPlaybackFilterHintProgress;
-(CGFloat)_photoTransitionDuration;
-(CGFloat)lastAppliedScale;
-(CGFloat)videoWillPlayToPhotoInterval;
-(NSInteger)_coalescedPlaybackFilterState;
-(id)_createVitalityBehavior;
-(id)init;
-(void)_configurePlaybackFilter:(id)arg0 ;
-(void)_configurePlaybackFilters;
-(void)_fadeInAudio;
-(void)_handlePlaybackFilterDidChange;
-(void)_handleVitalityFilterDidChange:(id)arg0 ;
-(void)_invalidateApertureMode;
-(void)_invalidateScale;
-(void)_playIfNeeded;
-(void)_prepareForVitalityIfNeeded;
-(void)_updateApertureModeIfNeeded;
-(void)_updateHintingAndVitality;
-(void)_updatePlayerItemLoadingTarget;
-(void)_updateScaleIfNeeded;
-(void)activeBehaviorDidChange;
-(void)addPlaybackFilter:(id)arg0 ;
-(void)configurePlayerItem;
-(void)didPerformChanges;
-(void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg0 ;
-(void)livePhotoPlaybackBehaviorDidFinish:(id)arg0 ;
-(void)livePhotoPlaybackBehaviorWillTransitionToPhoto:(id)arg0 ;
-(void)livePhotoSettleBehaviorDidFinish:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)playHintWhenReady;
-(void)playVitality;
-(void)playerItemDidChange;
-(void)prepareForHintWhenReady;
-(void)prepareForVitality;
-(void)removePlaybackFilter:(id)arg0 ;
-(void)setIsAttemptingToPlayback:(BOOL)arg0 ;
-(void)startPlaybackWithStyle:(NSInteger)arg0 ;
-(void)startPlaybackWithStyle:(NSInteger)arg0 settleAutomatically:(BOOL)arg1 ;
-(void)startPlaybackWithStyleWhenReady:(NSInteger)arg0 ;
-(void)startPlaybackWithStyleWhenReady:(NSInteger)arg0 settleAutomatically:(BOOL)arg1 ;
-(void)statusDidChange;
-(void)stopPlayback;
-(void)stopPlaybackAnimated:(BOOL)arg0 ;
-(void)vitalityBehaviorDidBeginPlaying:(id)arg0 ;
-(void)vitalityBehaviorDidEndPlaying:(id)arg0 ;


@end


#endif