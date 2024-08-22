// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMUPDATECOMPLETEVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMUPDATECOMPLETEVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UILabel, NSLayoutConstraint;
@protocol HRStackedButtonViewDelegate, HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate;


#import "HRMiniTilePlatterView.h"
#import "HRStackedButtonView.h"

@interface HROnboardingElectrocardiogramUpdateCompleteViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>



@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (weak, nonatomic) NSObject<HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate> *electrocardiogramDelegate; // ivar: _electrocardiogramDelegate
@property (retain, nonatomic) HRMiniTilePlatterView *otherDevicesTile; // ivar: _otherDevicesTile
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(id)bodyString;
-(id)buttonTitleString;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 electrocardiogramDelegate:(id)arg2 ;
-(id)otherDevicesWithUpdateAvailable;
-(id)titleString;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_showDevicesInWatchAppTapped:(id)arg0 ;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif