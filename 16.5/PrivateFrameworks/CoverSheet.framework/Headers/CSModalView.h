// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSMODALVIEW_H
#define CSMODALVIEW_H

@class UIView, UILayoutGuide, NSLayoutConstraint, NSString, UIImage, UIImageView, _UILegibilitySettings, UIColor, UIButton, UILabel;
@protocol SBLockScreenModalView, CSModalViewDelegate;


#import "CSCoverSheetViewBase.h"
#import "CSStatusTextViewController.h"
#import "CSModalButton.h"

@interface CSModalView : CSCoverSheetViewBase <SBLockScreenModalView>

 {
    UIView *_centralGroupView;
    UILayoutGuide *_dateViewLayoutGuide;
    NSLayoutConstraint *_dateViewVerticalConstraint;
    NSLayoutConstraint *_centralGroupTopConstraint;
    NSLayoutConstraint *_centralGroupBottomConstraint;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSString *_overrideFooterText;
    CSStatusTextViewController *_statusTextViewController;
    BOOL _needsTitleConstraints;
    BOOL _needsSubTitleConstraints;
    BOOL _needsSecondarySubTitleConstraints;
    BOOL _needsPrimaryActionConstraints;
    BOOL _needsSecondaryActionConstraints;
    BOOL _needsImageConstraints;
    BOOL _needsDetailViewConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSModalViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *detailView; // ivar: _detailView
@property (copy, nonatomic) NSString *footerText;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic, getter=_imageView, setter=_setImageView:) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic, getter=_primaryActionButton, setter=_setPrimaryActionButton:) CSModalButton *primaryActionButton; // ivar: _primaryActionButton
@property (retain, nonatomic) UIColor *primaryActionButtonBackgroundColor;
@property (copy, nonatomic) NSString *primaryActionButtonText;
@property (retain, nonatomic, getter=_secondaryActionButton, setter=_setSecondaryActionButton:) UIButton *secondaryActionButton; // ivar: _secondaryActionButton
@property (copy, nonatomic) NSString *secondaryActionButtonText;
@property (copy, nonatomic) UIColor *secondaryActionButtonTextColor;
@property (retain, nonatomic, getter=_secondarySubtitleLabel, setter=_setSecondarySubtitleLabel:) UILabel *secondarySubtitleLabel; // ivar: _secondarySubtitleLabel
@property (copy, nonatomic) NSString *secondarySubtitleText;
@property (nonatomic) BOOL showsDateView; // ivar: _showsDateView
@property (nonatomic) BOOL showsStatusText; // ivar: _showsStatusText
@property (retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *subtitleText;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (nonatomic) BOOL wantsEnhancedSecondaryActionButton; // ivar: _wantsEnhancedSecondaryActionButton


+(CGFloat)_bottomBaselineOffsetForPortrait:(BOOL)arg0 ;
+(CGFloat)_modalViewBottomBaselineOffsetPortrait;
-(BOOL)_hasPortraitDimensions;
-(BOOL)_isPortraitForDelegate:(id)arg0 ;
-(BOOL)_replaceView:(id)arg0 withNewView:(id)arg1 inParentView:(id)arg2 ;
-(CGFloat)_timeLabelBaselineY;
-(CGFloat)_timeToSubtitleLabelBaselineDifferenceY;
-(id)_fontWithTextStyle:(id)arg0 cappedToSize:(id)arg1 ;
-(id)_labelWithNumberOfLines:(NSUInteger)arg0 font:(id)arg1 ;
-(id)_preferredContentSizeCategoryCappedToSize:(id)arg0 ;
-(id)_primaryActionFont;
-(id)_secondaryActionFont;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)secondaryActionButton;
-(struct CGRect )_dateTimeFrame;
-(void)_buttonTapped:(id)arg0 ;
-(void)_createAppropriateSecondaryActionButtonIfNecessary;
-(void)_createEnhancedSecondaryActionButtonIfNecessary;
-(void)_createPrimaryActionButtonIfNecessary;
-(void)_createSecondaryActionButtonIfNecessary;
-(void)_positionBottomElementWithLayoutAnchor:(id)arg0 lessThanOrEqual:(BOOL)arg1 ;
-(void)hideSecondarySubtitleLabel:(BOOL)arg0 ;
-(void)hideSubtitleLabel:(BOOL)arg0 ;
-(void)hideTitleLabel:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setOverrideSecondarySubtitleFont:(id)arg0 ;
-(void)setOverrideSecondarySubtitleTextColor:(id)arg0 ;
-(void)updateConstraints;


@end


#endif