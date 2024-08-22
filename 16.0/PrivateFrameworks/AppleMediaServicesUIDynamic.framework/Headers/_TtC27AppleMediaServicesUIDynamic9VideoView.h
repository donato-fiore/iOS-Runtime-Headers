// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC9VIDEOVIEW_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC9VIDEOVIEW_H

@class UIView, AVPlayerViewController, UIColor;
@protocol UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate;


#import "_TtC27AppleMediaServicesUIDynamic10PlayButton.h"

@interface _TtC27AppleMediaServicesUIDynamic9VideoView : UIView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate>

 {
    ? objectGraph;
    ? fullScreenDelegate;
    ? videoPlayerDelegate;
    ? previewFrameArtwork;
    ? animatePreviewFrameTransitions;
    ? videoPlayer;
    ? playerViewController;
    ? templateMediaEvent;
    ? templateClickEvent;
    ? networkInquiry;
    ? video;
    ? playButton;
    ? additionalControlInsets;
    ? prominentPlayButtonLocationOverride;
    ? preferredUnobscuredArea;
    ? videoUrl;
    ? unmuteAfterVideoPlayerCreation;
    ? playbackId;
    ? delegate;
    ? isFullScreen;
    ? isTransitioningToFullscreen;
    ? configuration;
    ? wasAudioOnPreFullScreen;
    ? prefersMinimalPlaybackControls;
    ? currentTouch;
    ? releaseAssetsAtNextPauseState;
}


@property (nonatomic, readonly) BOOL accessibilityIsPlaying;
@property (nonatomic, readonly) _TtC27AppleMediaServicesUIDynamic10PlayButton *accessibilityPlayButton;
@property (nonatomic, readonly) AVPlayerViewController *accessibilityPlayerViewController;
@property (nonatomic, readonly) BOOL accessibilityShouldBePlaying;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)accessibilityUpdatePlayerControllerControls;
-(void)didChangeAutoPlayVideoSetting;
-(void)handleMediaServicesReset;
-(void)layoutSubviews;
-(void)playerViewController:(id)arg0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateAudioSessionCategoryWithIsAudioOn:(BOOL)arg0 ;


@end


#endif