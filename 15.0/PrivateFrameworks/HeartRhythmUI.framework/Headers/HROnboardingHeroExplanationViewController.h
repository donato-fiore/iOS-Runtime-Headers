// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRONBOARDINGHEROEXPLANATIONVIEWCONTROLLER_H
#define HRONBOARDINGHEROEXPLANATIONVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UILabel, NSString, NSLayoutConstraint, UIView;
@protocol HRStackedButtonViewDelegate;


#import "HRStackedButtonView.h"

@interface HROnboardingHeroExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>



@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (readonly, nonatomic) NSString *bodyString;
@property (readonly, nonatomic) NSString *buttonTitleString;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) NSString *titleString;


-(CGFloat)_titleLastBaselineToBodyTop;
-(CGFloat)_titleTopToFirstBaseline;
-(CGFloat)_titleTopToFirstBaselineLeading;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(id)createHeroView;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)_setUpButtonFooterView;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif