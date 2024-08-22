// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARCARPLAYDOCKAPPITEMBUTTON_H
#define UISTATUSBARCARPLAYDOCKAPPITEMBUTTON_H

@class NSLayoutConstraint, NSString;
@protocol NSCopying;


#import "UIButton.h"
#import "UIImageView.h"

@interface UIStatusBarCarPlayDockAppItemButton : UIButton <NSCopying>

 {
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_widthConstraint;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) UIImageView *badgeView; // ivar: _badgeView
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL hasBadge; // ivar: _hasBadge
@property (retain, nonatomic) UIImageView *iconHighlightImageView; // ivar: _iconHighlightImageView
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (readonly, nonatomic) BOOL itemHasBundleIdentifier;


-(BOOL)canBecomeFocused;
-(BOOL)shouldShowBadge;
-(float)charge;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setBadgeHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setCharge:(float)arg0 ;


@end


#endif