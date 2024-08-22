// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRONBOARDINGBULLETPOINTVIEWCONTROLLER_H
#define HRONBOARDINGBULLETPOINTVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UILabel, NSString, NSHashTable, NSArray, UIStackView, NSLayoutConstraint, UIView;
@protocol HRStackedButtonViewDelegate;


#import "HRStackedButtonView.h"

@interface HROnboardingBulletPointViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>



@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (readonly, nonatomic) NSString *bodyString;
@property (retain, nonatomic) NSHashTable *bulletPointBodyLabels; // ivar: _bulletPointBodyLabels
@property (readonly, nonatomic) NSArray *bulletPoints;
@property (retain, nonatomic) UIStackView *bulletPointsView; // ivar: _bulletPointsView
@property (readonly, nonatomic) NSString *buttonTitleString;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) UIView *lastBulletPointView; // ivar: _lastBulletPointView
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) NSString *titleString;


-(CGFloat)_cannotDoHeaderLastBaselineToCannotDoBodyFirstBaseline;
-(id)_bodyFont;
-(id)_boldSubheadlineFont;
-(id)_subheadlineFont;
-(struct CGSize )_bulletImageSize;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)_setUpButtonFooterView;
-(void)_setupBulletPointViews;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)updateUserInterfaceForStyle:(NSInteger)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif