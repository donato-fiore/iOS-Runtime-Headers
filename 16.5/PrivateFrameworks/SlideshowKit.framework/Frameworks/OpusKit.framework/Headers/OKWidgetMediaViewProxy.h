// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKWIDGETMEDIAVIEWPROXY_H
#define OKWIDGETMEDIAVIEWPROXY_H

@class OFUIButton, UIImageView, NSURL, AVAsset, NSString, OFUIView;
@protocol OKViewControllerAudioSupport, OKVideoControllerDelegate, OKWidgetEditable, OKWidgetMediaViewProxyExports, UIGestureRecognizerDelegate;


#import "OKWidgetView.h"
#import "OKWidgetMediaVideoPlayerView.h"
#import "OKVideoPlayerController.h"
#import "OKAudioDucker.h"

@interface OKWidgetMediaViewProxy : OKWidgetView <OKViewControllerAudioSupport, OKVideoControllerDelegate, OKWidgetEditable, OKWidgetMediaViewProxyExports, UIGestureRecognizerDelegate>

 {
    OFUIButton *_videoPlayButton;
    UIImageView *_thumbnailView;
    UIEdgeInsets _mediaEdgeInsets;
    NSURL *_videoURL;
    OKWidgetMediaVideoPlayerView *_videoPlayerView;
    OKVideoPlayerController *_videoPlayerController;
    AVAsset *_videoAsset;
    BOOL _disablePlayButton;
    float _rate;
    CGFloat _seekToTime;
    NSString *_didFinishPlayingActionScript;
    OKAudioDucker *_audioDucker;
    BOOL _isVideoAssetLoaded;
    BOOL _autoplay;
    BOOL _loop;
    BOOL _didPlayInteractively;
    BOOL _readyForDisplayAndPlay;
    float _requiredDuckLevel;
    float _volume;
    NSString *_audioTrackID;
    CGPoint _offset;
    CGPoint _originalOffsetWhilePanning;
    CGFloat _scale;
    BOOL _editable;
    BOOL _isEditingPanning;
    BOOL _shouldFitRegionOfInterest;
    BOOL _needsReloadThumbnail;
    OFUIView *_faceRect;
    CGFloat _reloadThumbnailContentProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldPlayVideoWhenAvailable; // ivar: _shouldPlayVideoWhenAvailable
@property (readonly) Class superclass;


+(BOOL)shouldDrawRegionOfInterest;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)canPerformAction:(id)arg0 ;
-(BOOL)endAllEditing:(BOOL)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(BOOL)settingEditable;
-(BOOL)settingLoop;
-(BOOL)settingShouldFitRegionOfInterest;
-(BOOL)settingsAutoplay;
-(BOOL)supportsReadiness;
-(CGFloat)_localReadyProgress;
-(CGFloat)currentTime;
-(CGFloat)duration;
-(CGFloat)remainingPlayDuration;
-(CGFloat)requiredDuckLevel;
-(CGFloat)settingScale;
-(CGFloat)settingSeekToTime;
-(NSInteger)settingContentMode;
-(float)contentAspectRatio;
-(id)_contentViewToFocus;
-(id)initWithWidget:(id)arg0 ;
-(id)layoutSettingsKeys;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingUrl;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGPoint )settingOffset;
-(struct CGRect )thumbnailRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )settingMediaEdgeInsets;
-(void)_beginAudioDucking;
-(void)_cancelThumbnailOperations;
-(void)_cleanupVideo;
-(void)_hideVideoButton;
-(void)_reloadThumbnailContent;
-(void)_reloadThumbnailContent:(BOOL)arg0 loadVideo:(BOOL)arg1 ;
-(void)_setVideoContentMode:(NSInteger)arg0 ;
-(void)_setupVideo;
-(void)_setupVideoPlayButton;
-(void)_showVideoButton;
-(void)_showVideoButtonWithDelay;
-(void)_stopAudioDucking;
-(void)_unloadThumbnailContent;
-(void)beginDuckingToLevel:(CGFloat)arg0 fadeDuration:(CGFloat)arg1 ;
-(void)beginFadingWithDuration:(CGFloat)arg0 ;
-(void)calculateOffsetForRegionOfInterest;
-(void)dealloc;
-(void)drawRegionOfInterestContainerBounds;
-(void)endDucking;
-(void)hideThumbnailAndPlayVideo;
-(void)instantPause;
-(void)instantResume;
-(void)layoutSubviews;
-(void)networkStatusDidChange:(NSInteger)arg0 ;
-(void)pauseVideo:(id)arg0 ;
-(void)play;
-(void)playVideo:(id)arg0 ;
-(void)prepareForRefresh;
-(void)prepareForReload;
-(void)resetVideo;
-(void)seekToTime:(CGFloat)arg0 ;
-(void)setAntialiasing:(BOOL)arg0 ;
-(void)setPlaybackAudioVolume:(CGFloat)arg0 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg0 ;
-(void)setSettingAudioVolume:(float)arg0 ;
-(void)setSettingAutoplay:(BOOL)arg0 ;
-(void)setSettingContentMode:(NSInteger)arg0 ;
-(void)setSettingDidFinishPlayingActionScript:(id)arg0 ;
-(void)setSettingDisablePlayButton:(BOOL)arg0 ;
-(void)setSettingEditable:(BOOL)arg0 ;
-(void)setSettingLoop:(BOOL)arg0 ;
-(void)setSettingMediaEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)setSettingOffset:(struct CGPoint )arg0 ;
-(void)setSettingScale:(CGFloat)arg0 ;
-(void)setSettingSeekToTime:(CGFloat)arg0 ;
-(void)setSettingShouldFitRegionOfInterest:(BOOL)arg0 ;
-(void)setSettingUrl:(id)arg0 ;
-(void)setVideoAsset:(id)arg0 ;
-(void)setVideoURL:(id)arg0 ;
-(void)showVideoActivityIndicator:(BOOL)arg0 ;
-(void)updateOffset;
-(void)videoBecomesReady;
-(void)videoPlayerController:(id)arg0 bufferingStateDidChange:(NSUInteger)arg1 ;
-(void)videoPlayerController:(id)arg0 didFailToPlayItem:(id)arg1 ;
-(void)videoPlayerController:(id)arg0 didFinishPlayingItem:(id)arg1 ;
-(void)videoPlayerController:(id)arg0 didStartPlayingItem:(id)arg1 ;


@end


#endif