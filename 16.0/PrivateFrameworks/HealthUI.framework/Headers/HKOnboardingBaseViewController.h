// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKONBOARDINGBASEVIEWCONTROLLER_H
#define HKONBOARDINGBASEVIEWCONTROLLER_H

@class NSString, UIView, UIScrollView, NSLayoutConstraint;
@protocol HKOnboardingPageViewControllerDelegate;


#import "HKViewController.h"

@interface HKOnboardingBaseViewController : HKViewController

@property (copy, nonatomic) NSString *cancelWithConfirmAlertAbortActionTitle; // ivar: _cancelWithConfirmAlertAbortActionTitle
@property (copy, nonatomic) NSString *cancelWithConfirmAlertContinueActionTitle; // ivar: _cancelWithConfirmAlertContinueActionTitle
@property (copy, nonatomic) NSString *cancelWithConfirmAlertTitle; // ivar: _cancelWithConfirmAlertTitle
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSObject<HKOnboardingPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (nonatomic) NSInteger leftButtonType; // ivar: _leftButtonType
@property (readonly, nonatomic, getter=isOnboarding) BOOL onboarding; // ivar: _onboarding
@property (nonatomic) NSInteger rightButtonType; // ivar: _rightButtonType
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // ivar: _scrollViewBottomConstraint
@property (nonatomic) NSInteger upgradingFromAlgorithmVersion; // ivar: _upgradingFromAlgorithmVersion


-(CGFloat)_titleTopToFirstBaselineLeading;
-(CGFloat)contentTop;
-(CGFloat)titleTopToFirstBaseline;
-(id)_buttonForButtonType:(NSInteger)arg0 ;
-(id)_cancelButton;
-(id)_cancelWithConfirmButton;
-(id)_closeButton;
-(id)_skipButton;
-(id)_titleFontTextStyle;
-(id)initForOnboarding:(BOOL)arg0 ;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(id)titleFont;
-(void)_adjustScrollViewForFooterView;
-(void)_setUpNavigationBar;
-(void)cancelWithConfirmButtonTapped:(id)arg0 ;
-(void)closeButtonTapped:(id)arg0 ;
-(void)presentAlertWithMessage:(id)arg0 ;
-(void)presentAlertWithMessage:(id)arg0 title:(id)arg1 ;
-(void)presentLearnMoreAlertWithMessage:(id)arg0 learnMoreTapped:(id)arg1 ;
-(void)removeFooterView;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)skipButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUserInterfaceForStyle:(NSInteger)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif