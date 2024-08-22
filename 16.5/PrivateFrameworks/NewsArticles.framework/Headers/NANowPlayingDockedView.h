// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NANOWPLAYINGDOCKEDVIEW_H
#define NANOWPLAYINGDOCKEDVIEW_H

@class UIControl, UIView, UIMenu, UIButton, UILabel;
@protocol NANowPlayingDockedViewDelegate;



@interface NANowPlayingDockedView : UIControl

@property (nonatomic) BOOL changesDisplayWhenHighlighted; // ivar: _changesDisplayWhenHighlighted
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<NANowPlayingDockedViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (readonly, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (readonly, nonatomic) UILabel *publisherLabel; // ivar: _publisherLabel
@property (readonly, nonatomic) UIButton *rewindButton; // ivar: _rewindButton
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL waiting; // ivar: _waiting


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithBackground:(id)arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(void)_updateTitleAccessibilityLabel;
-(void)layoutSubviews;
-(void)pauseButtonTapped:(id)arg0 ;
-(void)playButtonTapped:(id)arg0 ;
-(void)rewindButtonTapped:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setIsPlaying:(BOOL)arg0 waiting:(BOOL)arg1 ;
-(void)setMarqueeRunning:(BOOL)arg0 ;
-(void)setPublisher:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif