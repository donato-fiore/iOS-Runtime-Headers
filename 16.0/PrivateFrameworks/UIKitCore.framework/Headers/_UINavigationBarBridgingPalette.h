// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARBRIDGINGPALETTE_H
#define _UINAVIGATIONBARBRIDGINGPALETTE_H

@class UINavigationBarPalette, NSString;
@protocol _UINavigationPalette;


#import "UIView.h"
#import "UINavigationController.h"

@interface _UINavigationBarBridgingPalette : UINavigationBarPalette <_UINavigationPalette>

 {
    UIView *_temporaryBackgroundView;
}


@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property (readonly, nonatomic) NSUInteger boundaryEdge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *navController;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) UIEdgeInsets preferredContentInsets;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;


-(BOOL)_shouldUpdateBackground;
-(BOOL)isAttached;
-(BOOL)paletteIsHidden;
-(id)_attachedPinningTopBar;
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
-(void)resetBackgroundConstraints;
-(void)setFrame:(struct CGRect )arg0 isAnimating:(BOOL)arg1 ;
-(void)setSize:(struct CGSize )arg0 ;


@end


#endif