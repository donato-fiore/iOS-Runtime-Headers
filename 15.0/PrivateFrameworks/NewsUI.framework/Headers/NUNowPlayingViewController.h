// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNOWPLAYINGVIEWCONTROLLER_H
#define NUNOWPLAYINGVIEWCONTROLLER_H

@class UIViewController, UIView, UIButton, _UIGrabber;
@protocol NUNowPlayingPlaybackControlsLayoutSpecProvider, NUNowPlayingTitleViewLayoutSpecProvider, NUNowPlayingPlaybackControlsDelegate, NUNowPlayingPlaybackScrubberDelegate, NUNowPlayingBottomControlsDelegate, NUNowPlayingViewControllerDelegate;


#import "NUNowPlayingArtworkView.h"
#import "NUNowPlayingBottomControls.h"
#import "NUNowPlayingPlaybackControls.h"
#import "NUNowPlayingPlaybackScrubber.h"
#import "NUNowPlayingTitleView.h"
#import "NUNowPlayingVolumeControl.h"

@interface NUNowPlayingViewController : UIViewController <NUNowPlayingPlaybackControlsLayoutSpecProvider, NUNowPlayingTitleViewLayoutSpecProvider, NUNowPlayingPlaybackControlsDelegate, NUNowPlayingPlaybackScrubberDelegate, NUNowPlayingBottomControlsDelegate>



@property (retain, nonatomic) NUNowPlayingArtworkView *artworkView; // ivar: _artworkView
@property (retain, nonatomic) NUNowPlayingBottomControls *bottomControls; // ivar: _bottomControls
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<NUNowPlayingViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (retain, nonatomic) _UIGrabber *grabberView; // ivar: _grabberView
@property (retain, nonatomic) NUNowPlayingPlaybackControls *playbackControls; // ivar: _playbackControls
@property (retain, nonatomic) NUNowPlayingPlaybackScrubber *playbackScrubber; // ivar: _playbackScrubber
@property (readonly, nonatomic) CGFloat publisherLogoHeight;
@property (retain, nonatomic) NUNowPlayingTitleView *titleView; // ivar: _titleView
@property (retain, nonatomic) NUNowPlayingVolumeControl *volumeControl; // ivar: _volumeControl


-(CGFloat)nextTrackAndRewindButtonPointSize;
-(CGFloat)playPausePointSize;
-(CGFloat)publisherLogoBottomMargin;
-(CGFloat)titleLabelFontSize;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(struct CGSize )artworkSizeForViewWidth:(CGFloat)arg0 ;
-(void)applicationWillEnterForeground;
-(void)artworkTapped:(id)arg0 ;
-(void)dismissButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)nowPlayingBottomControlsDidTapEllipsis:(id)arg0 ;
-(void)nowPlayingBottomControlsDidTapPlaybackSpeed:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapNextTrack:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapPause:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapPlay:(id)arg0 ;
-(void)nowPlayingPlaybackControlsDidTapRewind:(id)arg0 ;
-(void)seekToPosition:(CGFloat)arg0 ;
-(void)setArtwork:(id)arg0 ;
-(void)setArtwork:(id)arg0 animated:(BOOL)arg1 ;
-(void)setArtwork:(id)arg0 backgroundImage:(id)arg1 ;
-(void)setArtwork:(id)arg0 backgroundImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentTime:(CGFloat)arg0 duration:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)setIsPlaying:(BOOL)arg0 waiting:(BOOL)arg1 ;
-(void)setNextTrackButtonEnabled:(BOOL)arg0 ;
-(void)setPublisherImage:(id)arg0 fallbackName:(id)arg1 ;
-(void)setRate:(CGFloat)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)titleViewTapped:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif