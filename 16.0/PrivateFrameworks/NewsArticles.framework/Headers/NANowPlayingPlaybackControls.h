// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NANOWPLAYINGPLAYBACKCONTROLS_H
#define NANOWPLAYINGPLAYBACKCONTROLS_H

@class UIView, UIButton;
@protocol NANowPlayingPlaybackControlsDelegate, NANowPlayingPlaybackControlsLayoutSpecProvider;



@interface NANowPlayingPlaybackControls : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<NANowPlayingPlaybackControlsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *forwardButton; // ivar: _forwardButton
@property (nonatomic) CGFloat inset; // ivar: _inset
@property (nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (weak, nonatomic) NSObject<NANowPlayingPlaybackControlsLayoutSpecProvider> *layoutSpecProvider; // ivar: _layoutSpecProvider
@property (nonatomic) BOOL nextTrackButtonEnabled; // ivar: _nextTrackButtonEnabled
@property (retain, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (retain, nonatomic) UIButton *rewindButton; // ivar: _rewindButton
@property (nonatomic) BOOL skipForwardButtonEnabled; // ivar: _skipForwardButtonEnabled


-(id)buttonColor;
-(id)disabledButtonColor;
-(id)initWithFrame:(struct CGRect )arg0 inset:(CGFloat)arg1 layoutSpecProvider:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)nextTrackButtonTapped:(id)arg0 ;
-(void)pauseButtonTapped:(id)arg0 ;
-(void)playButtonTapped:(id)arg0 ;
-(void)rewindButtonTapped:(id)arg0 ;
-(void)skipForwardButtonTapped:(id)arg0 ;
-(void)updateForwardButton;


@end


#endif