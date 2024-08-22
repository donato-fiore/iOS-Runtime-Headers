// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMRESULTVIEW_H
#define HRONBOARDINGELECTROCARDIOGRAMRESULTVIEW_H

@class UIView, NSString, NSLayoutConstraint, UIButton, UILabel, HKSeparatorLineView;


#import "HRPaddingLabel.h"
#import "HRVideoPlayerView.h"

@interface HROnboardingElectrocardiogramResultView : UIView

@property (nonatomic, getter=isAlwaysExpanded) BOOL alwaysExpanded; // ivar: _alwaysExpanded
@property (copy, nonatomic) NSString *badge; // ivar: _badge
@property (retain, nonatomic) HRPaddingLabel *badgeLabel; // ivar: _badgeLabel
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) UIView *expandedView; // ivar: _expandedView
@property (nonatomic, getter=isHidingNumberedTitle) BOOL hideNumberedTitle; // ivar: _hideNumberedTitle
@property (retain, nonatomic) UIButton *learnMoreButton; // ivar: _learnMoreButton
@property (copy, nonatomic) NSString *numberedTitle; // ivar: _numberedTitle
@property (retain, nonatomic) UILabel *numberedTitleLabel; // ivar: _numberedTitleLabel
@property (retain, nonatomic) HRVideoPlayerView *playerView; // ivar: _playerView
@property (retain, nonatomic) NSLayoutConstraint *playerViewOrVisibleBodyLabelTopConstraint; // ivar: _playerViewOrVisibleBodyLabelTopConstraint
@property (retain, nonatomic) HKSeparatorLineView *separatorLineView; // ivar: _separatorLineView
@property (nonatomic) BOOL shouldHideSeparatorLine; // ivar: _shouldHideSeparatorLine
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *visibleBody; // ivar: _visibleBody
@property (retain, nonatomic) UILabel *visibleBodyLabel; // ivar: _visibleBodyLabel


+(id)resultViewWithItem:(id)arg0 ;
-(id)initWithBadge:(id)arg0 title:(id)arg1 numberedTitle:(id)arg2 visibleBodyText:(id)arg3 video:(id)arg4 expandedView:(id)arg5 ;
-(void)_setUpConstraints;
-(void)_setUpNumberedTitleLabelConstraints;
-(void)_setUpPlayerViewTopConstraint;
-(void)_setUpUI;
-(void)_setUpVisibleBodyLabelTopConstraint;
-(void)_updateExpandedViewState;
-(void)_updateNumberedTitleViewState;
-(void)learnMoreButtonTapped:(id)arg0 ;


@end


#endif