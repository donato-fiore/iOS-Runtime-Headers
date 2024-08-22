// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKONBOARDINGSETUPVIEW_H
#define HKONBOARDINGSETUPVIEW_H

@class UIView, UILabel, NSString, UIButton;
@protocol HKOnboardingSetupViewDelegate;



@interface HKOnboardingSetupView : UIView

@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (readonly, nonatomic) NSString *bodyString;
@property (readonly, nonatomic) NSString *buttonTitleString;
@property (weak, nonatomic) NSObject<HKOnboardingSetupViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (retain, nonatomic) UIButton *onboardingButton; // ivar: _onboardingButton
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) NSString *titleString;


-(id)createHeroView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didTapOnboardingButton;
-(void)_setUpConstraints;


@end


#endif