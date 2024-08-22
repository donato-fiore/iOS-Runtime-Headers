// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMAVAILABILITYVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMAVAILABILITYVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, HKHeartRhythmAvailability, HKSeparatorLineView, UIStackView, UILabel, NSLayoutConstraint, NSDate, NSString, UIView;
@protocol HRStackedButtonViewDelegate, HKOnboardingCompactDatePickerViewDelegate;


#import "HRStackedButtonView.h"

@interface HROnboardingElectrocardiogramAvailabilityViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, HKOnboardingCompactDatePickerViewDelegate>



@property (retain, nonatomic) HKHeartRhythmAvailability *availability; // ivar: _availability
@property (retain, nonatomic) HKSeparatorLineView *birthdayBottomSeparator; // ivar: _birthdayBottomSeparator
@property (retain, nonatomic) UIStackView *birthdayEntryView; // ivar: _birthdayEntryView
@property (retain, nonatomic) UILabel *birthdayFooterLabel; // ivar: _birthdayFooterLabel
@property (retain, nonatomic) UILabel *birthdayPromptLabel; // ivar: _birthdayPromptLabel
@property (retain, nonatomic) HKSeparatorLineView *birthdayTopSeparator; // ivar: _birthdayTopSeparator
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) NSDate *dateOfBirth; // ivar: _dateOfBirth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (retain, nonatomic) UILabel *locationFooterLabel; // ivar: _locationFooterLabel
@property (nonatomic) NSInteger provenance; // ivar: _provenance
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_meetsAgeRequirement;
-(CGFloat)_ageEntryLastBaselineToBottomSeparator;
-(CGFloat)_ageEntryTopSeparatorToFirstBaseline;
-(CGFloat)_agePromptLastBaselineToAgeEntryTop;
-(CGFloat)_birthdayFooterLastBaselineToContinueButton;
-(CGFloat)_bodyBottomToAgePromptTop;
-(CGFloat)_bottomSeparatorToBirthdayFooterFirstBaseline;
-(CGFloat)_titleBottomToBodyTop;
-(id)_ageEntryTitleFont;
-(id)_birthdayPromptFont;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_defaultDOB;
-(id)_footnoteFont;
-(id)_footnoteTextStyle;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(id)ageIneligiblePromptAckButtonString;
-(id)ageIneligiblePromptBodyString;
-(id)ageIneligiblePromptTitleString;
-(id)ageLimit;
-(id)ageWithDate:(id)arg0 ;
-(id)birthdayFooterString;
-(id)bodyString;
-(id)buttonTitleString;
-(id)createHeroView;
-(id)createLearnMoreExpandedView;
-(id)deviceNotSupportedBodyString;
-(id)disclaimerString;
-(id)featureDisabledBodyString;
-(id)initForOnboarding:(BOOL)arg0 provenance:(NSInteger)arg1 ;
-(id)learnMoreString;
-(id)locationFeatureIneligiblePromptBodyString;
-(id)locationFooterString;
-(id)locationNotFoundPromptBodyString;
-(id)titleString;
-(id)watchOSVersionTooLowBodyString;
-(void)_setupBirthdayEntryView;
-(void)_trackElectrocardiogramOnboardingStepIfNeeded:(NSInteger)arg0 countryCode:(id)arg1 algorithmVersion:(id)arg2 ;
-(void)_updateDateOfBirthDisplay;
-(void)compactDatePickerView:(id)arg0 didChangeValue:(id)arg1 ;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;


@end


#endif