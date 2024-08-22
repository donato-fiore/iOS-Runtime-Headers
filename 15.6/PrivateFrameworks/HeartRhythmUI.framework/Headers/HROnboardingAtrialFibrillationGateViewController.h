// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGATRIALFIBRILLATIONGATEVIEWCONTROLLER_H
#define HRONBOARDINGATRIALFIBRILLATIONGATEVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, HKSeparatorLineView, UIStackView, UILabel, NSLayoutConstraint, NSDate, NSString, NSNumber, UIView, UIImageView;
@protocol HRStackedButtonViewDelegate, HKOnboardingCompactDatePickerViewDelegate;


#import "HRStackedButtonView.h"

@interface HROnboardingAtrialFibrillationGateViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, HKOnboardingCompactDatePickerViewDelegate>



@property (retain, nonatomic) HKSeparatorLineView *birthdayBottomSeparator; // ivar: _birthdayBottomSeparator
@property (retain, nonatomic) UIStackView *birthdayEntryView; // ivar: _birthdayEntryView
@property (retain, nonatomic) UILabel *birthdayFooterLabel; // ivar: _birthdayFooterLabel
@property (retain, nonatomic) HKSeparatorLineView *birthdayTopSeparator; // ivar: _birthdayTopSeparator
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) NSDate *dateOfBirth; // ivar: _dateOfBirth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *diagnosis; // ivar: _diagnosis
@property (retain, nonatomic) HKSeparatorLineView *diagnosisBottomSeparator; // ivar: _diagnosisBottomSeparator
@property (retain, nonatomic) UILabel *diagnosisFooterLabel; // ivar: _diagnosisFooterLabel
@property (retain, nonatomic) HKSeparatorLineView *diagnosisMiddleSeparator; // ivar: _diagnosisMiddleSeparator
@property (retain, nonatomic) UIView *diagnosisNoBackground; // ivar: _diagnosisNoBackground
@property (retain, nonatomic) UIImageView *diagnosisNoCheckmark; // ivar: _diagnosisNoCheckmark
@property (retain, nonatomic) UILabel *diagnosisNoLabel; // ivar: _diagnosisNoLabel
@property (retain, nonatomic) UIStackView *diagnosisNoRow; // ivar: _diagnosisNoRow
@property (retain, nonatomic) UILabel *diagnosisPromptLabel; // ivar: _diagnosisPromptLabel
@property (retain, nonatomic) HKSeparatorLineView *diagnosisTopSeparator; // ivar: _diagnosisTopSeparator
@property (retain, nonatomic) UIView *diagnosisYesBackground; // ivar: _diagnosisYesBackground
@property (retain, nonatomic) UIImageView *diagnosisYesCheckmark; // ivar: _diagnosisYesCheckmark
@property (retain, nonatomic) UILabel *diagnosisYesLabel; // ivar: _diagnosisYesLabel
@property (retain, nonatomic) UIStackView *diagnosisYesRow; // ivar: _diagnosisYesRow
@property (nonatomic) BOOL didLayoutSubviewsOnce; // ivar: _didLayoutSubviewsOnce
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_meetsAgeRequirement;
-(BOOL)_meetsDiagnosisRequirement;
-(CGFloat)_ageEntryFooterToDiagnosisPromptFirstBaseline;
-(CGFloat)_ageEntryLastBaselineToBottomSeparator;
-(CGFloat)_ageEntryTopSeparatorToFirstBaseline;
-(CGFloat)_separatorToFooterFirstBaseline;
-(id)_ageEntryTitleFont;
-(id)_bodyFont;
-(id)_defaultDOB;
-(id)_footnoteFont;
-(id)ageIneligiblePromptAckButtonString;
-(id)ageIneligiblePromptBodyString;
-(id)ageIneligiblePromptTitleString;
-(id)ageLimit;
-(id)ageWithDate:(id)arg0 ;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)_diagnosisRowTapped:(id)arg0 ;
-(void)_setUpBirthdayEntryView;
-(void)_setUpButtonFooterView;
-(void)_setUpDiagnosisRowWithTitle:(id)arg0 value:(BOOL)arg1 ;
-(void)_updateButtonState;
-(void)compactDatePickerView:(id)arg0 didChangeValue:(id)arg1 ;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif