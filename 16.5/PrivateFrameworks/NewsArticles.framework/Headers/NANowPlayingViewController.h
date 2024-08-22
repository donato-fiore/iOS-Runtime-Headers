// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NANOWPLAYINGVIEWCONTROLLER_H
#define NANOWPLAYINGVIEWCONTROLLER_H

@class UIViewController, UIView, UIButton, _UIGrabber;
@protocol NANowPlayingPlaybackControlsLayoutSpecProvider, NANowPlayingTitleViewLayoutSpecProvider, NANowPlayingPlaybackControlsDelegate, NANowPlayingPlaybackScrubberDelegate, NANowPlayingBottomControlsDelegate, NANowPlayingViewControllerDelegate;


#import "NANowPlayingArtworkView.h"
#import "NANowPlayingBottomControls.h"
#import "NANowPlayingPlaybackControls.h"
#import "NANowPlayingPlaybackScrubber.h"
#import "NANowPlayingTitleView.h"
#import "NANowPlayingVolumeControl.h"

@interface NANowPlayingViewController : UIViewController <NANowPlayingPlaybackControlsLayoutSpecProvider, NANowPlayingTitleViewLayoutSpecProvider, NANowPlayingPlaybackControlsDelegate, NANowPlayingPlaybackScrubberDelegate, NANowPlayingBottomControlsDelegate>



@property (retain, nonatomic) NANowPlayingArtworkView *artworkView; // ivar: _artworkView
@property (retain, nonatomic) NANowPlayingBottomControls *bottomControls; // ivar: _bottomControls
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<NANowPlayingViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly, nonatomic) UIButton *ellipsisButton;
@property (retain, nonatomic) _UIGrabber *grabberView; // ivar: _grabberView
@property (retain, nonatomic) NANowPlayingPlaybackControls *playbackControls; // ivar: _playbackControls
@property (retain, nonatomic) NANowPlayingPlaybackScrubber *playbackScrubber; // ivar: _playbackScrubber
@property (readonly, nonatomic) CGFloat publisherLogoHeight;
@property (retain, nonatomic) NANowPlayingTitleView *titleView; // ivar: _titleView
@property (retain, nonatomic) NANowPlayingVolumeControl *volumeControl; // ivar: _volumeControl


-(CGFloat)nextTrackAndRewindButtonPointSize;
-(CGFloat)playPausePointSize;
-(CGFloat)publisherLogoBottomMargin;
-(CGFloat)titleLabelFontSize;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithBackground:(id)arg0 ;
-(struct CGSize )artworkSizeForViewWidth:(CGFloat)arg0 ;
-(void)applicationWillEnterForeground;
-(void)artworkTapped:(id)arg0 ;
-(void)dismissButtonTapped:(id)arg0 ;
-(void)nowPlayingBottomControlsDidTapEllipsis:(id)arg0 ;
-(void)nowPlayingBottomControlsDidTapPlaybackSpeed:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapNextTrack:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapPause:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapPlay:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapRewind:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapSkipForward:(id)arg0 ;
-(void)seekToPosition:(CGFloat)arg0 ;
-(void)setArtwork:(id)arg0 ;
-(void)setArtwork:(id)arg0 animated:(BOOL)arg1 ;
-(void)setCurrentTime:(CGFloat)arg0 duration:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)setIsPlaying:(BOOL)arg0 waiting:(BOOL)arg1 ;
-(void)setNextTrackButtonEnabled:(BOOL)arg0 ;
-(void)setPublisherImage:(id)arg0 fallbackName:(id)arg1 ;
-(void)setRate:(CGFloat)arg0 ;
-(void)setSkipForwardButtonEnabled:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)titleViewTapped:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif