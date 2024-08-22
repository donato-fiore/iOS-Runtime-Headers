// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCLIPSCRUBBERVIEW_H
#define HUCLIPSCRUBBERVIEW_H

@class UIView, UICollectionView, AVBackgroundView, UIButton;


#import "HUClipScrubberPlayheadView.h"
#import "HUBlendedSeparatorView.h"

@interface HUClipScrubberView : UIView

@property (retain, nonatomic) HUClipScrubberPlayheadView *backgroundPlayheadView; // ivar: _backgroundPlayheadView
@property (retain, nonatomic) UICollectionView *clipCollectionView; // ivar: _clipCollectionView
@property (retain, nonatomic) UIView *collectionViewContainer; // ivar: _collectionViewContainer
@property (retain, nonatomic) AVBackgroundView *contentBackgroundView; // ivar: _contentBackgroundView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (nonatomic) BOOL isPlayingMedia; // ivar: _isPlayingMedia
@property (retain, nonatomic) HUBlendedSeparatorView *leftBlendedSeparator; // ivar: _leftBlendedSeparator
@property (retain, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (retain, nonatomic) HUClipScrubberPlayheadView *playheadView; // ivar: _playheadView
@property (retain, nonatomic) UIButton *rightActionButton; // ivar: _rightActionButton
@property (retain, nonatomic) HUBlendedSeparatorView *rightBlendedSeparator; // ivar: _rightBlendedSeparator


-(id)_deleteImage;
-(id)_pauseImage;
-(id)_playImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)playOrPauseImageForEngineMode:(NSUInteger)arg0 ;
-(void)_addConstraints;
-(void)activateLiveButtonDisplay;
-(void)deactivateLiveButtonDisplay;
-(void)didUpdatePlaybackEngine:(id)arg0 ;
-(void)displayEditInterface;
-(void)hideEditInterface;
-(void)layoutSubviews;
-(void)navigateToLivePosition;
-(void)navigateToOffset:(CGFloat)arg0 ;
-(void)updateAccessoryButtonsForPlaybackEngine:(id)arg0 ;
-(void)updateDisplayMode:(NSUInteger)arg0 ;


@end


#endif