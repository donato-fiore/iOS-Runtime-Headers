// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERRECENTSOVERLAYVIEW_H
#define AVTSTICKERRECENTSOVERLAYVIEW_H

@class UIVisualEffectView, UIView, NSLayoutConstraint, UIButton, UIImage, UIImageView, NSArray, NSString, UILabel, UITapGestureRecognizer;
@protocol AVTStickerRecentsOverlayDelegate;


#import "AVTCircularButton.h"
#import "AVTStickerRecentsOverlayViewLayout.h"

@interface AVTStickerRecentsOverlayView : UIVisualEffectView

@property (readonly, nonatomic) UIView *animatableView;
@property (retain, nonatomic) UIView *centeredContainerView; // ivar: _centeredContainerView
@property (retain, nonatomic) AVTCircularButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) NSLayoutConstraint *containerLeadingConstraint; // ivar: _containerLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *containerTopConstraint; // ivar: _containerTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *containerTrailingConstraint; // ivar: _containerTrailingConstraint
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *currentLayout; // ivar: _currentLayout
@property (weak, nonatomic) NSObject<AVTStickerRecentsOverlayDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSLayoutConstraint *hideSubtitleConstraint; // ivar: _hideSubtitleConstraint
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // ivar: _imageHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageToTitleConstraint; // ivar: _imageToTitleConstraint
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *landscapeLayout; // ivar: _landscapeLayout
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) AVTStickerRecentsOverlayViewLayout *portraitLayout; // ivar: _portraitLayout
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleToSubtitleConstraint; // ivar: _titleToSubtitleConstraint


+(id)disclosureOverlayView;
+(id)overlayViewForMemojiCreation;
+(id)standardOverlayView;
+(id)stickerButtonImage;
-(id)appropriateLayout;
-(id)initWithFrame:(struct CGRect )arg0 title:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 image:(id)arg4 ;
-(void)didTapCloseButton:(id)arg0 ;
-(void)didTapContentView:(id)arg0 ;
-(void)didTapContinueButton:(id)arg0 ;
-(void)dismissAnimatedWithDuration:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setupConstraints;
-(void)updateConstraints;


@end


#endif