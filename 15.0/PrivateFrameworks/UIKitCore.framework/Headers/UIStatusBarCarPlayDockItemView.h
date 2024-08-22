// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARCARPLAYDOCKITEMVIEW_H
#define UISTATUSBARCARPLAYDOCKITEMVIEW_H

@class NSString, NSArray, NSLayoutConstraint;


#import "UIStatusBarItemView.h"
#import "UILabel.h"
#import "UIStatusBarCarPlayDockAppItemButton.h"
#import "UIView.h"

@interface UIStatusBarCarPlayDockItemView : UIStatusBarItemView

@property (copy, nonatomic) NSString *currentActiveBundleIdentifier; // ivar: _currentActiveBundleIdentifier
@property (copy, nonatomic) NSArray *currentBundleIdentifiers; // ivar: _currentBundleIdentifiers
@property (retain, nonatomic) UILabel *inCallDurationLabel; // ivar: _inCallDurationLabel
@property (retain, nonatomic) NSLayoutConstraint *inCallLabelSpacingConstraint; // ivar: _inCallLabelSpacingConstraint
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemOneButton; // ivar: _itemOneButton
@property (retain, nonatomic) NSLayoutConstraint *itemOneTopConstraint; // ivar: _itemOneTopConstraint
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemThreeButton; // ivar: _itemThreeButton
@property (retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemTwoButton; // ivar: _itemTwoButton
@property (weak, nonatomic) UIView *preferredItemViewToFocus; // ivar: _preferredItemViewToFocus
@property (nonatomic, getter=isShowingCallTimer) BOOL showingCallTimer; // ivar: _showingCallTimer


-(BOOL)allowsUserInteraction;
-(BOOL)animatesDataChange;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)_neededSizeWithCallTimer;
-(CGFloat)_neededSizeWithoutCallTimer;
-(CGFloat)extraLeftPadding;
-(CGFloat)extraRightPadding;
-(CGFloat)neededSizeForImageSet:(id)arg0 ;
-(NSUInteger)_numberOfEnabledItems;
-(id)_toItemViewForBundleIdentifier:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(void)_updateInCallDurationIfNecessary:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateForNewStyle:(id)arg0 ;


@end


#endif