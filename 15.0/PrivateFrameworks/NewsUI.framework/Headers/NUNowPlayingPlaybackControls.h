// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNOWPLAYINGPLAYBACKCONTROLS_H
#define NUNOWPLAYINGPLAYBACKCONTROLS_H

@class UIView, UIButton;
@protocol NUNowPlayingPlaybackControlsDelegate, NUNowPlayingPlaybackControlsLayoutSpecProvider;



@interface NUNowPlayingPlaybackControls : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<NUNowPlayingPlaybackControlsDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat inset; // ivar: _inset
@property (nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (weak, nonatomic) NSObject<NUNowPlayingPlaybackControlsLayoutSpecProvider> *layoutSpecProvider; // ivar: _layoutSpecProvider
@property (retain, nonatomic) UIButton *nextTrackButton; // ivar: _nextTrackButton
@property (nonatomic) BOOL nextTrackButtonEnabled;
@property (retain, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (retain, nonatomic) UIButton *rewindButton; // ivar: _rewindButton


-(id)buttonColor;
-(id)disabledButtonColor;
-(id)initWithFrame:(struct CGRect )arg0 inset:(CGFloat)arg1 layoutSpecProvider:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)nextTrackButtonTapped:(id)arg0 ;
-(void)pauseButtonTapped:(id)arg0 ;
-(void)playButtonTapped:(id)arg0 ;
-(void)rewindButtonTapped:(id)arg0 ;


@end


#endif