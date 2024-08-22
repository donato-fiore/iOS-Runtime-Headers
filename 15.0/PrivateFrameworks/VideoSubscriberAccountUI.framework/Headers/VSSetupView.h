// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSETUPVIEW_H
#define VSSETUPVIEW_H

@class UIView, NSString, UIButton, UIFont, UIImage, UIStackView;
@protocol VSSetupViewDelegate;


#import "VSFontCenter.h"

@interface VSSetupView : UIView

@property (retain, nonatomic) NSString *appAgeRatingBadge; // ivar: _appAgeRatingBadge
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) UIButton *appsButton; // ivar: _appsButton
@property (copy, nonatomic) NSString *appsButtonTitle; // ivar: _appsButtonTitle
@property (retain, nonatomic) UIButton *beginButton; // ivar: _beginButton
@property (copy, nonatomic) NSString *beginButtonTitle; // ivar: _beginButtonTitle
@property (retain, nonatomic) UIFont *defaultSkipButtonFont; // ivar: _defaultSkipButtonFont
@property (nonatomic) CGFloat defaultSkipButtonSpacing; // ivar: _defaultSkipButtonSpacing
@property (weak, nonatomic) NSObject<VSSetupViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (retain, nonatomic) NSString *footnote; // ivar: _footnote
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) BOOL shouldOverrideSkipButtonStyle; // ivar: _shouldOverrideSkipButtonStyle
@property (nonatomic) BOOL shouldShowAboutButton; // ivar: _shouldShowAboutButton
@property (nonatomic) BOOL shouldShowAppsButton; // ivar: _shouldShowAppsButton
@property (retain, nonatomic) UIButton *skipButton; // ivar: _skipButton
@property (retain, nonatomic) UIFont *skipButtonFont; // ivar: _skipButtonFont
@property (copy, nonatomic) NSString *skipButtonTitle; // ivar: _skipButtonTitle
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIView *tvAppPrivacyButtonContainer; // ivar: _tvAppPrivacyButtonContainer
@property (readonly, nonatomic) UIView *tvProviderPrivacyButtonContainer; // ivar: _tvProviderPrivacyButtonContainer


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_appsButtonPressed:(id)arg0 ;
-(void)_beginButtonPressed:(id)arg0 ;
-(void)_skipButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif