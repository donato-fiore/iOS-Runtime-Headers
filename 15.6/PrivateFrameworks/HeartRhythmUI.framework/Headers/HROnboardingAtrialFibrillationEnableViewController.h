// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGATRIALFIBRILLATIONENABLEVIEWCONTROLLER_H
#define HRONBOARDINGATRIALFIBRILLATIONENABLEVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UILabel, NSLayoutConstraint, UIView;
@protocol HRStackedButtonViewDelegate;


#import "HRStackedButtonView.h"

@interface HROnboardingAtrialFibrillationEnableViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>



@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) UILabel *footnoteLabel; // ivar: _footnoteLabel
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)_footnoteToButton;
-(CGFloat)_titleLastBaselineToBodyFirstBaseline;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_footnoteFont;
-(id)_footnoteFontTextStyle;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(id)createHeroView;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;


@end


#endif