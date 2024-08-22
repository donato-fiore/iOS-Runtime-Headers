// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRSPEEDBUMPVIEWCONTROLLER_H
#define HRSPEEDBUMPVIEWCONTROLLER_H

@class HKOnboardingBaseViewController, UILabel, NSArray, NSLayoutConstraint, NSString, UIView;
@protocol HRStackedButtonViewDelegate, UIScrollViewDelegate;


#import "HRSpeedBumpItem.h"
#import "HRStackedButtonView.h"

@interface HRSpeedBumpViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, UIScrollViewDelegate>



@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSArray *bubbleViews; // ivar: _bubbleViews
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialContentOffset; // ivar: _initialContentOffset
@property (retain, nonatomic) HRSpeedBumpItem *item; // ivar: _item
@property (nonatomic) UIView *latestVisibleBubbleView; // ivar: _latestVisibleBubbleView
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView; // ivar: _stackedButtonView
@property (nonatomic) BOOL stateAnimating; // ivar: _stateAnimating
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)_titleLastBaselineToBodyTop;
-(id)_bodyFont;
-(id)initWithSpeedBumpItem:(id)arg0 onboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(NSInteger)arg2 ;
-(void)_scrollBubbleViewToVisible:(id)arg0 ;
-(void)_setUpBodyConstraints;
-(void)_setUpBodyLabel;
-(void)_setUpBubbleViewConstraints;
-(void)_setUpBubbleViews;
-(void)_setUpStackedButtonView;
-(void)_setUpTitleConstraints;
-(void)_setUpTitleLabel;
-(void)_updateContentViewBottomConstraintWithAnchor:(id)arg0 constant:(CGFloat)arg1 ;
-(void)_updateUIWithLatestVisibleBubbleView:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)stackedButtonView:(id)arg0 didTapButtonAtIndex:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif