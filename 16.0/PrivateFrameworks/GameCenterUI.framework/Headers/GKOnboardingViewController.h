// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKONBOARDINGVIEWCONTROLLER_H
#define GKONBOARDINGVIEWCONTROLLER_H

@class UIViewController, UIView, UIStackView, NSLayoutConstraint, UIImageView, NSString, UILabel, OBBoldTrayButton, OBPrivacyLinkController, UIScrollView;
@protocol UIScrollViewDelegate;



@interface GKOnboardingViewController : UIViewController <UIScrollViewDelegate>



@property (retain, nonatomic) UIView *bottomContainerView; // ivar: _bottomContainerView
@property (retain, nonatomic) UIStackView *bottomStackView; // ivar: _bottomStackView
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewBottomConstraint; // ivar: _bottomStackViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewLeadingConstraint; // ivar: _bottomStackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewTopConstraint; // ivar: _bottomStackViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewTrailingConstraint; // ivar: _bottomStackViewTrailingConstraint
@property (retain, nonatomic) UIImageView *bubbleImageView; // ivar: _bubbleImageView
@property (retain, nonatomic) UIView *buttonContainer; // ivar: _buttonContainer
@property (retain, nonatomic) UIView *continueButtonContainerInScrollView; // ivar: _continueButtonContainerInScrollView
@property (retain, nonatomic) NSLayoutConstraint *continueButtonContainerInScrollViewHeightConstraint; // ivar: _continueButtonContainerInScrollViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *continueButtonContainerWidthConstraint; // ivar: _continueButtonContainerWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *continueButtonEqualWidthPrivacyContainerConstraint; // ivar: _continueButtonEqualWidthPrivacyContainerConstraint
@property (retain, nonatomic) NSLayoutConstraint *continueButtonParitalWidthPrivacyContainerConstraint; // ivar: _continueButtonParitalWidthPrivacyContainerConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *mainTitle; // ivar: _mainTitle
@property (retain, nonatomic) UILabel *navigationTitleLabel; // ivar: _navigationTitleLabel
@property (retain, nonatomic) OBBoldTrayButton *nextButton; // ivar: _nextButton
@property (retain, nonatomic) UIView *privacyContainer; // ivar: _privacyContainer
@property (retain, nonatomic) UIView *privacyContainerInScrollView; // ivar: _privacyContainerInScrollView
@property (retain, nonatomic) NSLayoutConstraint *privacyContainerInScrollViewHeightConstraint; // ivar: _privacyContainerInScrollViewHeightConstraint
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink; // ivar: _privacyLink
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSLayoutConstraint *scrollViewToBottomContainerConstraint; // ivar: _scrollViewToBottomContainerConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewToBottomSafeAreaConstraint; // ivar: _scrollViewToBottomSafeAreaConstraint
@property (retain, nonatomic) UILabel *subTitle; // ivar: _subTitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (retain, nonatomic) UIStackView *welcomeStackView; // ivar: _welcomeStackView
@property (retain, nonatomic) NSLayoutConstraint *welcomeStackViewLeadingConstraint; // ivar: _welcomeStackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *welcomeStackViewTrailingConstraint; // ivar: _welcomeStackViewTrailingConstraint
@property (retain, nonatomic) UIStackView *whatsNewStackView; // ivar: _whatsNewStackView
@property (retain, nonatomic) NSLayoutConstraint *whatsnewStackViewLeadingConstraint; // ivar: _whatsnewStackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *whatsnewStackViewTrailingConstraint; // ivar: _whatsnewStackViewTrailingConstraint


-(BOOL)allowSignOut;
-(BOOL)allowSkip;
-(BOOL)isMainTitleVisible;
-(void)addPrivacyLink;
-(void)configureWhatsNewList;
-(void)constrainTextInView:(id)arg0 toFontSize:(CGFloat)arg1 ;
-(void)nextPressed:(id)arg0 ;
-(void)notNowPressed:(id)arg0 ;
-(void)reparentGDPRToNewParent:(id)arg0 ;
-(void)reparentView:(id)arg0 toSuperview:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)secondaryButtonPressed:(id)arg0 ;
-(void)setupNavigationBar;
-(void)showSignOutAlert;
-(void)signOutPressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNavigationTitleLabelAlpha;
-(void)updateUIBasedOnTraitCollection;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif