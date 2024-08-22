// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMSETUPCOMPLETEVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMSETUPCOMPLETEVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UIActivityIndicatorView, UILabel, NSLayoutConstraint, HKElectrocardiogram, UITapGestureRecognizer, HKElectrocardiogramCardView, HKAnchoredObjectQuery, NSLayoutYAxisAnchor;
@protocol HRStackedButtonViewDelegate, HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate;


#import "HRStackedButtonView.h"

@interface HROnboardingElectrocardiogramSetupCompleteViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) UILabel *classificationLabel; // ivar: _classificationLabel
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram; // ivar: _electrocardiogram
@property (retain, nonatomic) UITapGestureRecognizer *electrocardiogramCardTapGestureRecognizer; // ivar: _electrocardiogramCardTapGestureRecognizer
@property (retain, nonatomic) HKElectrocardiogramCardView *electrocardiogramCardView; // ivar: _electrocardiogramCardView
@property (weak, nonatomic) NSObject<HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate> *electrocardiogramDelegate; // ivar: _electrocardiogramDelegate
@property (retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery; // ivar: _electrocardiogramQuery
@property (nonatomic) BOOL firstViewDidLayoutSubviews; // ivar: _firstViewDidLayoutSubviews
@property (readonly, nonatomic) BOOL isSampleInteractive; // ivar: _isSampleInteractive
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutYAxisAnchor *viewBottomAnchor; // ivar: _viewBottomAnchor


-(CGFloat)_classificationTextDistance;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_classificationAttributedTextForElectrocardiogram:(id)arg0 activeAlgorithmVersion:(NSInteger)arg1 ;
-(id)_subheadlineFont;
-(id)initForOnboarding:(BOOL)arg0 isSampleInteractive:(BOOL)arg1 electrocardiogramDelegate:(id)arg2 ;
-(void)_electrocardiogramCardViewTapped:(id)arg0 ;
-(void)_recomputeState;
-(void)_resetUI;
-(void)_setUpConstraints;
-(void)_setUpElectrocardiogramQuery;
-(void)_setUpUI;
-(void)_setupBodyLabelForSetupCompleteState:(NSInteger)arg0 ;
-(void)_stopElectrocardiogramQuery;
-(void)_updateUI;
-(void)_updateUIForElectrocardiogram:(id)arg0 ;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif