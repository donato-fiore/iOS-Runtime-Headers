// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGATRIALFIBRILLATIONINTROVIEWCONTROLLER_H
#define HRONBOARDINGATRIALFIBRILLATIONINTROVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, NSNumber, UILabel, NSLayoutConstraint, NSString, UIView, UIButton, NSArray;
@protocol HRStackedButtonViewDelegate, UITextFieldDelegate;


#import "HRStackedButtonView.h"

@interface HROnboardingAtrialFibrillationIntroViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, UITextFieldDelegate>



@property (retain, nonatomic) NSNumber *activeWatchNeedsLocationCheck; // ivar: _activeWatchNeedsLocationCheck
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *footnoteLabel; // ivar: _footnoteLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (retain, nonatomic) UIButton *learnMoreButton; // ivar: _learnMoreButton
@property (retain, nonatomic) NSArray *learnMoreCollapsedConstraints; // ivar: _learnMoreCollapsedConstraints
@property (nonatomic) BOOL learnMoreContentExpanded; // ivar: _learnMoreContentExpanded
@property (retain, nonatomic) UIView *learnMoreContentView; // ivar: _learnMoreContentView
@property (retain, nonatomic) NSArray *learnMoreExpandedConstraints; // ivar: _learnMoreExpandedConstraints
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)_assetImageBottomToTitleFirstBaseline;
-(CGFloat)_footnoteLeading;
-(CGFloat)_titleLastBaselineToBodyFirstBaseline;
-(CGFloat)_viewLastBaselineToContinueButton;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_createHeroView;
-(id)_createLearnMoreExpandedView;
-(id)_footnoteFont;
-(id)_footnoteTextStyle;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(id)bodyString;
-(id)buttonTitleString;
-(id)featureDisabledBodyString;
-(id)footnoteString;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(id)learnMoreString;
-(id)locationFeatureAlertAckButtonString;
-(id)locationFeatureIneligiblePromptBodyString;
-(id)locationNotFoundPromptBodyString;
-(id)seedExpiredBodyString;
-(id)titleString;
-(id)watchOSVersionTooLowBodyString;
-(void)_isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(id)arg0 ;
-(void)_presentFeatureAlertWithMessage:(id)arg0 ;
-(void)_setUpLearnMoreConstraints;
-(void)_setUpLearnMoreViews;
-(void)_setUpStackedButtonView;
-(void)_updateViewsForContentExpansionState:(BOOL)arg0 ;
-(void)learnMoreButtonTapped:(id)arg0 ;
-(void)presentLearnMoreAlertWithFeatureDisabledMessage;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;


@end


#endif