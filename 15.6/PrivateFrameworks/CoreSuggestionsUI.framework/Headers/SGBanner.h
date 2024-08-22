// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGBANNER_H
#define SGBANNER_H

@class UIControl, NSString, NSAttributedString, UILabel, UIButton, UIImageView, NSLayoutConstraint, NSLayoutXAxisAnchor, NSArray;
@protocol SGTappableTextViewDelegate, SGBannerProtocol, SGSuggestionDelegate, SGSuggestion;


#import "SGTappableTextView.h"
#import "SGSuggestionStore.h"

@interface SGBanner : UIControl <SGTappableTextViewDelegate, SGBannerProtocol>

 {
    SGTappableTextView *_subtitleLabel;
    NSString *_actionTitle;
    BOOL _needsSubtitleUpdate;
    NSString *_subtitle;
    NSAttributedString *_attributedSubtitle;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIImageView *_secondImageView;
    UIImageView *_firstImageView;
    UIImageView *_disclosureImageView;
    NSLayoutConstraint *_imageCenterYConstraint;
    NSLayoutConstraint *_verticalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_horisontalSpaceBetweenImagesConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_closeButtonHorizontalPositionConstraint;
    NSLayoutConstraint *_closeButtonWidthConstraint;
    NSLayoutConstraint *_disclosureImageViewHorizontalPositionConstraint;
    NSInteger _currentStyle;
}


@property (nonatomic) NSInteger accessoryType; // ivar: _accessoryType
@property (nonatomic) NSInteger actionButtonType;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor; // ivar: _closeButtonCenterXAnchor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *images; // ivar: _images
@property (readonly, nonatomic) CGRect popoverSourceRect;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSObject<SGSuggestion> *suggestion;
@property (copy, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(CGFloat)_imageCenterOffsetFromTitleBaselineConstant;
+(CGFloat)_interLabelBaselineDeltaConstant;
+(CGFloat)_topMarginConstant;
+(id)_cancelImage;
+(id)_disclosureChevronImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_installLayoutConstraints;
-(void)_onAction:(id)arg0 ;
-(void)_onDismiss:(id)arg0 ;
-(void)_setupViews;
-(void)_updateBackground;
-(void)_updateCurrentAppearance;
-(void)_updateFonts;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tappableTextView:(id)arg0 didTapRange:(struct _NSRange )arg1 ;
-(void)updateConstraints;


@end


#endif