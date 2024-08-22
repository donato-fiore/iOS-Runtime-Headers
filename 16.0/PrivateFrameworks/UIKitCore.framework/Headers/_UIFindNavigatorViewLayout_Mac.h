// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFINDNAVIGATORVIEWLAYOUT_MAC_H
#define _UIFINDNAVIGATORVIEWLAYOUT_MAC_H

@class UIFindNavigatorViewLayout, NSLayoutConstraint;


#import "UIStackView.h"
#import "UIView.h"
#import "UISegmentedControl.h"
#import "UISwitch.h"

@interface _UIFindNavigatorViewLayout_Mac : UIFindNavigatorViewLayout {
    UIStackView *_verticalStackView;
    UIStackView *_findStackView;
    UIStackView *_replaceStackView;
    UIStackView *_firstLineControlsStackView;
    UIStackView *_secondLineControlsStackView;
    UIView *_doneButtonSpacer;
    NSLayoutConstraint *_lineEqualWidthsConstraint;
}


@property (retain, nonatomic) UISegmentedControl *nextPreviousSegmentedControl; // ivar: _nextPreviousSegmentedControl
@property (retain, nonatomic) UISegmentedControl *replaceReplaceAllSegmentedControl; // ivar: _replaceReplaceAllSegmentedControl
@property (retain, nonatomic) UISwitch *replaceToggleSwitch; // ivar: _replaceToggleSwitch


-(BOOL)showsReplaceInOptionsMenu;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )preferredContentSize;
-(void)layoutSubviews;
-(void)prepareForLayout;
-(void)setReplaceFieldVisible:(BOOL)arg0 ;


@end


#endif