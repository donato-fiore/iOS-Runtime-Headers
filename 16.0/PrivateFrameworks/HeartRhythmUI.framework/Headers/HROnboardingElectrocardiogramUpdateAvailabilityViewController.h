// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMUPDATEAVAILABILITYVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMUPDATEAVAILABILITYVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UILabel, UIView;
@protocol HRStackedButtonViewDelegate;


#import "HRElectrocardiogramWatchAppInstallability.h"
#import "HRElectrocardiogramCurrentLocationOnboardingDeterminer.h"
#import "HRStackedButtonView.h"

@interface HROnboardingElectrocardiogramUpdateAvailabilityViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>



@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) HRElectrocardiogramWatchAppInstallability *ecgAppInstallability; // ivar: _ecgAppInstallability
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (retain, nonatomic) UILabel *locationFooterLabel; // ivar: _locationFooterLabel
@property (retain, nonatomic) HRElectrocardiogramCurrentLocationOnboardingDeterminer *onboardingAvailabilityDeterminer; // ivar: _onboardingAvailabilityDeterminer
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(void)markElectrocardiogramUpdateAsViewed:(id)arg0 ;
-(CGFloat)_bodyBottomToLocationTop;
-(CGFloat)_locationFooterLastBaselineToContinueButton;
-(CGFloat)_titleBottomToBodyTop;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_footnoteFont;
-(id)_footnoteTextStyle;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(id)bodyString;
-(id)buttonTitleString;
-(id)deviceNotSupportedBodyString;
-(id)featureDisabledBodyString;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(id)locationFeatureIneligiblePromptBodyString;
-(id)locationFooterString;
-(id)locationNotFoundPromptBodyString;
-(id)locationNotFoundPromptTitleString;
-(id)titleString;
-(id)updateFeatureIneligiblePromptBodyString;
-(id)watchOSVersionTooLowBodyString;
-(void)continueAndCheckForUpdateAvailability:(id)arg0 ;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif