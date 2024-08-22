// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARPALETTE_H
#define _UINAVIGATIONBARPALETTE_H

@class NSString;
@protocol _UINavigationPalette, UIPointerInteractionDelegate;


#import "UIView.h"
#import "_UIPointerInteractionAssistant.h"
#import "UINavigationController.h"
#import "UINavigationItem.h"

@interface _UINavigationBarPalette : UIView <_UINavigationPalette, UIPointerInteractionDelegate>



@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setContentViewMarginType:) NSUInteger _contentViewMarginType; // ivar: __contentViewMarginType
@property (nonatomic, setter=_setDisplaysWhenSearchActive:) BOOL _displaysWhenSearchActive; // ivar: __displaysWhenSearchActive
@property (nonatomic, setter=_setLayoutPriority:) NSInteger _layoutPriority; // ivar: __layoutPriority
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // ivar: _assistant
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, nonatomic) NSUInteger boundaryEdge;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetMinimumHeight; // ivar: _didSetMinimumHeight
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (readonly, nonatomic) UINavigationController *navController;
@property (weak, nonatomic) UINavigationItem *owningNavigationItem; // ivar: _owningNavigationItem
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) UIEdgeInsets preferredContentInsets;
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *temporaryBackgroundView; // ivar: _temporaryBackgroundView
@property (nonatomic) BOOL transitioning; // ivar: _transitioning
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;


+(id)defaultContentViewWithFrame:(struct CGRect )arg0 ;
-(BOOL)_shouldUpdateBackground;
-(BOOL)isAttached;
-(BOOL)paletteIsHidden;
-(id)_attachedPinningTopBar;
-(id)initWithContentView:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_clearAssistants;
-(void)_configureConstraintsForBackground:(id)arg0 ;
-(void)_configurePaletteConstraintsForBoundary;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_resetConstraintConstants:(CGFloat)arg0 ;
-(void)_resetHeightConstraintConstant;
-(void)_setAttached:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)_setLeftConstraintConstant:(CGFloat)arg0 ;
-(void)_setSize:(struct CGSize )arg0 ;
-(void)_setTopConstraintConstant:(CGFloat)arg0 ;
-(void)_setupBackgroundViewIfNecessary;
-(void)_updateBackgroundConstraintsIfNecessary;
-(void)_updateBackgroundView;
-(void)addSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)resetBackgroundConstraints;
-(void)setFrame:(struct CGRect )arg0 isAnimating:(BOOL)arg1 ;


@end


#endif