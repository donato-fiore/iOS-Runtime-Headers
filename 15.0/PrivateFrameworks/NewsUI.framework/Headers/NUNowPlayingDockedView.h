// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNOWPLAYINGDOCKEDVIEW_H
#define NUNOWPLAYINGDOCKEDVIEW_H

@class UIView, NSString, UIButton, UILabel;
@protocol NUMagicTappableDockView, NUNowPlayingDockedViewDelegate;


#import "NUNowPlayingBackgroundView.h"

@interface NUNowPlayingDockedView : NUNowPlayingBackgroundView <NUMagicTappableDockView>



@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUNowPlayingDockedViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (readonly, nonatomic) UILabel *publisherLabel; // ivar: _publisherLabel
@property (readonly, nonatomic) UIButton *rewindButton; // ivar: _rewindButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL waiting; // ivar: _waiting


-(BOOL)handleAccessibilityMagicTap;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTitleAccessibilityLabel;
-(void)layoutSubviews;
-(void)pauseButtonTapped:(id)arg0 ;
-(void)playButtonTapped:(id)arg0 ;
-(void)rewindButtonTapped:(id)arg0 ;
-(void)setIsPlaying:(BOOL)arg0 waiting:(BOOL)arg1 ;
-(void)setMarqueeRunning:(BOOL)arg0 ;
-(void)setPublisher:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif