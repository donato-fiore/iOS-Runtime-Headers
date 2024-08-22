// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMEXPLANATIONVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMEXPLANATIONVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UILabel, NSLayoutConstraint;
@protocol HRStackedButtonViewDelegate;


#import "HRVideoPlayerView.h"
#import "HRStackedButtonView.h"

@interface HROnboardingElectrocardiogramExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>



@property (retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView; // ivar: _animatedWatchRhythmVideoView
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)_titleBottomToVideoViewTop;
-(CGFloat)_videoViewBottomToBodyFirstBaseline;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)_setUpButtonFooterView;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif