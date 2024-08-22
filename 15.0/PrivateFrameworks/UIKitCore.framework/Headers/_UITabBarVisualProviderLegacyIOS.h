// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABBARVISUALPROVIDERLEGACYIOS_H
#define _UITABBARVISUALPROVIDERLEGACYIOS_H

@class UITabBarVisualProvider, NSString;
@protocol _UIBarAppearanceChangeObserver, UIPointerInteractionDelegate, PTSettingsKeyObserver;


#import "UIPointerInteraction.h"
#import "_UIBarBackground.h"
#import "_UIBarBackgroundLayout.h"
#import "UIView.h"

@interface _UITabBarVisualProviderLegacyIOS : UITabBarVisualProvider <_UIBarAppearanceChangeObserver, UIPointerInteractionDelegate, PTSettingsKeyObserver>

 {
    UIPointerInteraction *_pointerInteraction;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    CGFloat _minimumWidthForHorizontalLayout;
    BOOL _useModernAppearance;
    NSInteger _style;
    CGFloat _backgroundTransitionProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shim_shadowHidden;
-(BOOL)useModernAppearance;
-(CGFloat)_shim_heightForCustomizingItems;
-(CGFloat)_shim_shadowAlpha;
-(CGFloat)backgroundTransitionProgress;
-(CGFloat)minimumWidthForHorizontalLayout;
-(NSInteger)_styleForTraitCollection:(id)arg0 ;
-(id)_focusedItemHighlightView;
-(id)_preferredFocusedViewCarplay;
-(id)_preferredFocusedViewiOS;
-(id)_shim_accessoryView;
-(id)_shim_compatibilityBackgroundView;
-(id)appearanceObserver;
-(id)createViewForTabBarItem:(id)arg0 ;
-(id)exchangeItem:(id)arg0 withItem:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)preferredFocusedView;
-(id)traitCollectionForChild:(id)arg0 baseTraitCollection:(id)arg1 ;
-(struct CGRect )_layoutRegion;
-(struct CGRect )_shadowFrameForBounds:(struct CGRect )arg0 height:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSizeGivenSize:(struct CGSize )arg0 ;
-(void)_applyAppearanceCustomizationsToItem:(id)arg0 ;
-(void)_configureItems:(id)arg0 ;
-(void)_layoutTabBarItems;
-(void)_shim_layoutItemsOnly;
-(void)_shim_setAccessoryView:(id)arg0 ;
-(void)_shim_setCustomBackgroundView:(id)arg0 ;
-(void)_shim_setShadowAlpha:(CGFloat)arg0 ;
-(void)_shim_setShadowHidden:(BOOL)arg0 ;
-(void)_shim_updateTabBarItemView:(id)arg0 ;
-(void)_updateAccessoryView;
-(void)_updateAppearanceForTransitionFromItem:(id)arg0 toItem:(id)arg1 ;
-(void)_updateBackground;
-(void)_updateBackgroundLegacy;
-(void)_updateBackgroundModern;
-(void)appearance:(id)arg0 categoriesChanged:(NSInteger)arg1 ;
-(void)changeAppearance;
-(void)changeItemsTo:(id)arg0 removingItems:(id)arg1 selectedItem:(id)arg2 oldSelectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(void)changeLayout;
-(void)changeSelectedItem:(id)arg0 fromItem:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepare;
-(void)setBackgroundTransitionProgress:(CGFloat)arg0 ;
-(void)setBackgroundTransitionProgress:(CGFloat)arg0 forceUpdate:(BOOL)arg1 ;
-(void)setMinimumWidthForHorizontalLayout:(CGFloat)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setUseModernAppearance:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;


@end


#endif