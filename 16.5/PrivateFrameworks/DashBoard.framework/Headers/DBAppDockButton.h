// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBAPPDOCKBUTTON_H
#define DBAPPDOCKBUTTON_H

@class UIImageView, NSString, NSLayoutConstraint;
@protocol SBLeafIconObserver, NSCopying, DBIconProviding;


#import "DBStatusBarButton.h"
#import "DBLeafIcon.h"

@interface DBAppDockButton : DBStatusBarButton <SBLeafIconObserver, NSCopying>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) UIImageView *badgeView; // ivar: _badgeView
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBLeafIcon *icon; // ivar: _icon
@property (retain, nonatomic) UIImageView *iconFocusRingImageView; // ivar: _iconFocusRingImageView
@property (retain, nonatomic) UIImageView *iconFocusRingUnreadImageView; // ivar: _iconFocusRingUnreadImageView
@property (retain, nonatomic) NSLayoutConstraint *iconFocusRingUnreadImageViewCenterConstraint; // ivar: _iconFocusRingUnreadImageViewCenterConstraint
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (weak, nonatomic) NSObject<DBIconProviding> *iconProvider; // ivar: _iconProvider
@property (nonatomic) BOOL showBadge; // ivar: _showBadge
@property (readonly) Class superclass;


-(BOOL)canBecomeFocused;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIconProvider:(id)arg0 ;
-(void)_setupImagesIfNecessary;
-(void)_updateCenterXConstraintConstant;
-(void)_updateFocusRings;
-(void)_updateImageForBundleIdentifier:(BOOL)arg0 crossfade:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)iconAccessoriesDidUpdate:(id)arg0 ;
-(void)iconImageDidUpdate:(id)arg0 ;
-(void)setBadgeHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setFocusHighlightColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif