// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDESCRIPTIONOVERLAYVIEW_H
#define CAMDESCRIPTIONOVERLAYVIEW_H

@class UIView, UIButton, CAShapeLayer, UIVisualEffectView, UILabel;
@protocol CAMDescriptionOverlayViewDelegate;


#import "CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView.h"

@interface CAMDescriptionOverlayView : UIView

@property (readonly, nonatomic) UIButton *_acknowledgmentButton; // ivar: __acknowledgmentButton
@property (readonly, nonatomic) CAShapeLayer *_blackoutMask; // ivar: __blackoutMask
@property (readonly, nonatomic) UIView *_blackoutView; // ivar: __blackoutView
@property (readonly, nonatomic) UIVisualEffectView *_blurEffectView; // ivar: __blurEffectView
@property (nonatomic, setter=_setDescriptionFontSizeMultiplier:) CGFloat _descriptionFontSizeMultiplier; // ivar: __descriptionFontSizeMultiplier
@property (readonly, nonatomic) UILabel *_descriptionLabel; // ivar: __descriptionLabel
@property (readonly, nonatomic) UILabel *_descriptionTitleLabel; // ivar: __descriptionTitleLabel
@property (readonly, nonatomic) UIButton *_detailButton; // ivar: __detailButton
@property (nonatomic, setter=_setInfoFontSizeMultiplier:) CGFloat _infoFontSizeMultiplier; // ivar: __infoFontSizeMultiplier
@property (readonly, nonatomic) UILabel *_infoLabel; // ivar: __infoLabel
@property (readonly, nonatomic) UILabel *_infoTitleLabel; // ivar: __infoTitleLabel
@property (readonly, nonatomic) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView; // ivar: __primaryVibrancyEffectView
@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (nonatomic, getter=isAcknowledgmentButtonHighlighted) BOOL acknowledgmentButtonHighlighted;
@property (nonatomic, getter=isBlackoutFrameVisible) BOOL blackoutFrameVisible; // ivar: _blackoutFrameVisible
@property (weak, nonatomic) NSObject<CAMDescriptionOverlayViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDetailButtonHighlighted) BOOL detailButtonHighlighted;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGRect viewportFrame; // ivar: _viewportFrame


-(BOOL)_isVisible;
-(BOOL)isTitleMultiline;
-(CGFloat)_additionalSpacingForContentSize:(id)arg0 ;
-(CGFloat)additionalSpacing;
-(CGFloat)maxDescriptionTextWidthForNarrowWidth:(BOOL)arg0 isLandscape:(BOOL)arg1 usingFontSizeMultiplier:(CGFloat)arg2 ;
-(CGFloat)maxInfoTextWidthForNarrowWidth:(BOOL)arg0 isLandscape:(BOOL)arg1 usingFontSizeMultiplier:(CGFloat)arg2 ;
-(CGFloat)maxTitleTextWidthForNarrowWidth:(BOOL)arg0 isLandscape:(BOOL)arg1 ;
-(id)acknowledgmentTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)currentContentSize;
-(id)descriptionTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)descriptionTitleTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)detailTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)infoTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)infoTitleTextUsingNarrowWidth:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleTextUsingNarrowWidth:(BOOL)arg0 ;
-(void)_handleAcknowledgmentButtonTapped:(id)arg0 ;
-(void)_handleDetailButtonTapped:(id)arg0 ;
-(void)_layoutBlackoutMaskForFrame:(struct CGRect )arg0 inFrame:(struct CGRect )arg1 ;
-(void)_updateFontsUsingNarrowWidth:(BOOL)arg0 ;
-(void)_updateTextUsingNarrowWidth:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setVisible:(BOOL)arg0 animationDuration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif