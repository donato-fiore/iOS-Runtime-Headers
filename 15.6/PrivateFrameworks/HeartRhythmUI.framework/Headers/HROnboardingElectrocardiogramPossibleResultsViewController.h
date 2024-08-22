// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMPOSSIBLERESULTSVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMPOSSIBLERESULTSVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, NSLayoutConstraint, UILabel, HKElectrocardiogram, NSLayoutAnchor;
@protocol HRLinkTextViewDelegate, HRStackedButtonViewDelegate;


#import "HROnboardingElectrocardiogramResultView.h"
#import "HRStackedButtonView.h"

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HKOnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate>



@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *atrialFibrillationResultView; // ivar: _atrialFibrillationResultView
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *bottomResultView; // ivar: _bottomResultView
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) UILabel *disclaimerLabel; // ivar: _disclaimerLabel
@property (retain, nonatomic) NSLayoutConstraint *disclaimerLabelTopConstraint; // ivar: _disclaimerLabelTopConstraint
@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram; // ivar: _electrocardiogram
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *highOrLowHeartRateResultView; // ivar: _highOrLowHeartRateResultView
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *inconclusiveResultView; // ivar: _inconclusiveResultView
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *onlyResultView; // ivar: _onlyResultView
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *sinusRhythmResultReview; // ivar: _sinusRhythmResultReview
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutAnchor *viewTopAnchor; // ivar: _viewTopAnchor


-(id)_resultViewForSample:(id)arg0 activeAlgorithmVersion:(NSInteger)arg1 ;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(id)initWithSample:(id)arg0 ;
-(void)_adjustDisclaimerLabelConstraints;
-(void)_adjustStackedButtonViewLocationForViewContentHeight;
-(void)_pauseResultViewVideos;
-(void)_playResultViewVideos;
-(void)_setUpAllResultViewConstraints;
-(void)_setUpAllResultViews;
-(void)_setUpBottomResultViewConstraint;
-(void)_setUpDisclaimerLabel;
-(void)_setUpOnlyResultView;
-(void)_setUpOnlyResultViewConstraints;
-(void)_setUpStackedButtonView;
-(void)_setUpTitle;
-(void)_setUpTitleConstraints;
-(void)_updateForCurrentSizeCategory;
-(void)linkTextView:(id)arg0 didTapOnLinkInRange:(struct _NSRange )arg1 ;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif