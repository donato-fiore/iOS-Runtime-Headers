// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXPLANATIONVIEW_H
#define PKEXPLANATIONVIEW_H

@class UIView, UIImageView, UILabel, UIButton, UITextView, UIActivityIndicatorView, NSAttributedString, NSString, UIImage, UIFont, LAUICheckmarkLayer, OBPrivacyLinkController, UIScrollView, UIColor;
@protocol UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate, PKExplanationViewDelegate;


#import "_PKUIKVisibilityBackdropView.h"
#import "PKPaymentSetupDockView.h"

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate>

 {
    NSInteger _context;
    BOOL _privacyFooterShouldPin;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    _PKUIKVisibilityBackdropView *_backdropView;
    CGFloat _backdropWeight;
    CGRect _lastSeenValidBounds;
    CGRect _titleLabelFrame;
    CGRect _titleLabelLastLineBounds;
    CGFloat _titleLabelLastLineDescent;
    UIImageView *_bodyImageView;
    UIButton *_bodyButton;
    UITextView *_secondaryBodyTextView;
    UIView *_topBackgroundView;
}


@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (copy, nonatomic) NSAttributedString *attributedBodyText; // ivar: _attributedBodyText
@property (copy, nonatomic) NSAttributedString *attributedSecondaryBodyText; // ivar: _attributedSecondaryBodyText
@property (nonatomic) NSInteger bodyButtonNumberOfLines; // ivar: _bodyButtonNumberOfLines
@property (copy, nonatomic) NSString *bodyButtonText; // ivar: _bodyButtonText
@property (nonatomic) NSUInteger bodyDataDetectorTypes; // ivar: _bodyDataDetectorTypes
@property (retain, nonatomic) UIImage *bodyImage; // ivar: _bodyImage
@property (readonly, nonatomic) UIImageView *bodyImageView;
@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (nonatomic) NSInteger bodyTextAlignment; // ivar: _bodyTextAlignment
@property (readonly, nonatomic) UIFont *bodyTextFont;
@property (retain, nonatomic) UITextView *bodyTextView; // ivar: _bodyTextView
@property (retain, nonatomic) UIView *bodyView; // ivar: _bodyView
@property (nonatomic) CGFloat bodyViewPadding; // ivar: _bodyViewPadding
@property (readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer; // ivar: _checkmarkLayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKExplanationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView; // ivar: _dockView
@property (nonatomic) BOOL forceShowSetupLaterButton; // ivar: _forceShowSetupLaterButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (nonatomic) BOOL hideTitleText; // ivar: _hideTitleText
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *logoImageView; // ivar: _logoImageView
@property (nonatomic) CGSize logoImageViewTargetSize; // ivar: _logoImageViewTargetSize
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink; // ivar: _privacyLink
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL showPrivacyView; // ivar: _showPrivacyView
@property (readonly) Class superclass;
@property (copy, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (nonatomic) CGFloat titleHyphenationFactor; // ivar: _titleHyphenationFactor
@property (retain, nonatomic) UIImage *titleImage; // ivar: _titleImage
@property (nonatomic) BOOL titleShouldReserveSpaceForAccessories; // ivar: _titleShouldReserveSpaceForAccessories
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) BOOL titleTextAdjustsFontSizeToWidth; // ivar: _titleTextAdjustsFontSizeToWidth
@property (nonatomic) NSInteger titleTextAlignment; // ivar: _titleTextAlignment
@property (nonatomic) int titleTextNumberOfLines; // ivar: _titleTextNumberOfLines
@property (retain, nonatomic) UIColor *topBackgroundColor; // ivar: _topBackgroundColor
@property (nonatomic) CGFloat topLogoPadding; // ivar: _topLogoPadding
@property (nonatomic) CGFloat topMargin; // ivar: _topMargin


-(BOOL)_isBuddyiPad;
-(BOOL)_showTitleLogoImageView;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)_createBodyTextView;
-(id)init;
-(id)initWithContext:(NSInteger)arg0 ;
-(id)initWithContext:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_bodyButtonTapped;
-(void)_calculateBlur;
-(void)_continue;
-(void)_createSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setupLater;
-(void)_updateCachedTitleLabelLastLine;
-(void)_updateCheckmarkColor;
-(void)_updateTitleLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif