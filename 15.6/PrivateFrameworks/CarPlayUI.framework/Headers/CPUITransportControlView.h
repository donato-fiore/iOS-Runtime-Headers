// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUITRANSPORTCONTROLVIEW_H
#define CPUITRANSPORTCONTROLVIEW_H

@class UIView, NSArray, NSLayoutConstraint, UIImage, UIButton, NSString;



@interface CPUITransportControlView : UIView

@property (nonatomic) CGFloat buttonHeight; // ivar: _buttonHeight
@property (nonatomic) CGFloat buttonSpacing; // ivar: _buttonSpacing
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) NSLayoutConstraint *containerHeightConstraint; // ivar: _containerHeightConstraint
@property (retain, nonatomic) UIImage *defaultFastForwardButtonImage; // ivar: _defaultFastForwardButtonImage
@property (retain, nonatomic) UIImage *defaultLeftButtonImage; // ivar: _defaultLeftButtonImage
@property (readonly, nonatomic) UIButton *fastForwardButton; // ivar: _fastForwardButton
@property (readonly, nonatomic) UIButton *leftButton; // ivar: _leftButton
@property (retain, nonatomic) NSString *pauseButtonImageName; // ivar: _pauseButtonImageName
@property (retain, nonatomic) UIImage *pauseImage; // ivar: _pauseImage
@property (retain, nonatomic) NSString *playButtonImageName; // ivar: _playButtonImageName
@property (retain, nonatomic) UIImage *playImage; // ivar: _playImage
@property (readonly, nonatomic) UIButton *playPauseButton; // ivar: _playPauseButton
@property (nonatomic) BOOL progressActive; // ivar: _progressActive


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateProgressActive;
-(void)layoutSubviews;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif