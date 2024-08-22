// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABBAR_H
#define UITABBAR_H

@class NSArray, NSString;
@protocol _UIShadowedView, UIBarPositioning, _UITabBarDelegateInternal, UITabBarDelegate;


#import "UIView.h"
#import "UITabBarCustomizeView.h"
#import "_UITabBarAppearanceStorage.h"
#import "_UITabBarVisualProvider.h"
#import "_UITabBarAccessoryView.h"
#import "UIImage.h"
#import "UIColor.h"
#import "UITabBarItem.h"
#import "UITabBarAppearance.h"

@interface UITabBar : UIView <_UIShadowedView, UIBarPositioning, _UITabBarDelegateInternal>

 {
    UITabBarCustomizeView *_customizeView;
    NSArray *_items;
    NSArray *_customizationItems;
    NSInteger _barOrientation;
    ? _tabBarFlags;
    _UITabBarAppearanceStorage *_appearanceStorage;
    _UITabBarVisualProvider *_visualProvider;
    _UITabBarAccessoryView *_leadingBarAccessoryView;
    _UITabBarAccessoryView *_trailingBarAccessoryView;
}


@property (retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView;
@property (copy, nonatomic, setter=_setBackdropGroupName:) NSString *_backdropGroupName;
@property (nonatomic, setter=_setBackgroundNeedsUpdate:) BOOL _backgroundNeedsUpdate;
@property (nonatomic, setter=_setBackgroundTransitionProgress:) CGFloat _backgroundTransitionProgress;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setBarMetrics:) NSInteger _barMetrics; // ivar: _barMetrics
@property (nonatomic, setter=_setBarOrientation:) NSInteger _barOrientation;
@property (nonatomic, setter=_setBlurEnabled:) BOOL _blurEnabled;
@property (nonatomic, setter=_setDisableBlurTinting:) BOOL _disableBlurTinting;
@property (readonly, nonatomic) NSInteger _expectedInterfaceOrientation;
@property (retain, nonatomic) UIView *_expectedSuperviewFollowingAnimation; // ivar: __expectedSuperviewFollowingAnimation
@property (readonly, nonatomic) UIView *_externalViewForSafeAreaInsets;
@property (nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow; // ivar: _hidesShadow
@property (nonatomic, setter=_setImageStyle:) NSInteger _imageStyle; // ivar: _imageStyle
@property (nonatomic, setter=_setInterTabButtonSpacing:) CGFloat _interTabButtonSpacing;
@property (readonly, nonatomic) _UITabBarAccessoryView *_leadingBarAccessoryView;
@property (nonatomic, setter=_setMinimumWidthForHorizontalLayout:) CGFloat _minimumWidthForHorizontalLayout;
@property (nonatomic, setter=_setNextSelectionSlideDuration:) CGFloat _nextSelectionSlideDuration;
@property (nonatomic, setter=_setScrollsItems:) BOOL _scrollsItems; // ivar: _scrollsItems
@property (nonatomic, setter=_setShowsHighlightedState:) BOOL _showsHighlightedState; // ivar: _showsHighlightedState
@property (nonatomic, setter=_setTabBarSizing:) NSInteger _tabBarSizing; // ivar: _tabBarSizing
@property (nonatomic, setter=_setTabButtonWidth:) CGFloat _tabButtonWidth;
@property (readonly, nonatomic) _UITabBarAccessoryView *_trailingBarAccessoryView;
@property (nonatomic, setter=_setVibrantLabels:) BOOL _vibrantLabels;
@property (retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName;
@property (copy, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (retain, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) NSInteger barPosition;
@property (nonatomic) NSInteger barStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (readonly, nonatomic, getter=isCustomizing) BOOL customizing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_deferViewUpdateToFocusUpdate, setter=_setDeferViewUpdateToFocusUpdate:) BOOL deferViewUpdateToFocusUpdate;
@property (weak, nonatomic) NSObject<UITabBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_displayStyle, setter=_setDisplayStyle:) NSInteger displayStyle; // ivar: _displayStyle
@property (readonly, nonatomic, getter=_focusedIndex) NSInteger focusedIndex;
@property (nonatomic, getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:) BOOL focusedItemHighlightShouldBeVisible;
@property (readonly, nonatomic, getter=_focusedTabBarItem) UITabBarItem *focusedTabBarItem;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:) BOOL hiddenAwaitingFocus;
@property (nonatomic) NSInteger itemPositioning; // ivar: _itemPositioning
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (nonatomic) CGFloat itemWidth; // ivar: _itemDimension
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) UIView *leadingAccessoryView;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic, getter=_pendingFocusAction, setter=_setPendingFocusAction:) BOOL pendingFocusAction;
@property (nonatomic, getter=_preferredFocusHeading, setter=_setPreferredFocusHeading:) NSUInteger preferredFocusHeading; // ivar: _preferredFocusHeading
@property (copy, nonatomic) UITabBarAppearance *scrollEdgeAppearance; // ivar: _scrollEdgeAppearance
@property (retain, nonatomic) UIColor *selectedImageTintColor;
@property (weak, nonatomic) UITabBarItem *selectedItem; // ivar: _selectedItem
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (retain, nonatomic) UIImage *shadowImage;
@property (copy, nonatomic) UITabBarAppearance *standardAppearance; // ivar: _standardAppearance
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIView *trailingAccessoryView;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (copy, nonatomic) UIColor *unselectedItemTintColor;
@property (readonly, nonatomic, getter=_useVibrantItems) BOOL useVibrantItems;


+(id)_unselectedTabTintColorForView:(id)arg0 ;
+(id)_visualProviderForTabBar:(id)arg0 ;
+(void)_initializeForIdiom:(NSInteger)arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_isEligibleForFocusOcclusion;
-(BOOL)_subclassImplementsDrawRect;
-(BOOL)canBecomeFocused;
-(BOOL)endCustomizingAnimated:(BOOL)arg0 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isSpringLoaded;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_defaultAutolayoutSpacing;
-(CGFloat)_heightForCustomizingItems;
-(CGFloat)_scaleFactorForItems:(id)arg0 spacing:(CGFloat)arg1 dimension:(CGFloat)arg2 maxWidth:(CGFloat)arg3 ;
-(CGFloat)_shadowAlpha;
-(CGFloat)_totalDimensionForItems:(id)arg0 spacing:(CGFloat)arg1 dimension:(CGFloat)arg2 scaleFactor:(CGFloat)arg3 ;
-(NSInteger)_effectiveBarOrientation;
-(NSUInteger)_edgesPropagatingSafeAreaInsetsToDescendants;
-(id)_appearanceStorage;
-(id)_defaultUnselectedTintColorForDefaultTV;
-(id)_dividerImageForLeftButtonState:(NSUInteger)arg0 rightButtonState:(NSUInteger)arg1 ;
-(id)_effectiveBarTintColor;
-(id)_effectiveUnselectedLabelTintColor;
-(id)_effectiveUnselectedTabTintColorConsideringView:(id)arg0 ;
-(id)_effectiveUnselectedTintColor;
-(id)_normalInheritedTintColor;
-(id)_shadowView;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_tabBarItemForButtonAtPoint:(struct CGPoint )arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusedView;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg0 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_adjustButtonSelection:(id)arg0 ;
-(void)_buttonCancel:(id)arg0 ;
-(void)_buttonDown:(id)arg0 ;
-(void)_buttonDownDelayed:(id)arg0 ;
-(void)_buttonUp:(id)arg0 ;
-(void)_configureTabBarReplacingItem:(id)arg0 withNewItem:(id)arg1 swapping:(BOOL)arg2 ;
-(void)_customizeDoneButtonAction:(id)arg0 ;
-(void)_customizeWithAvailableItems:(id)arg0 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_dismissCustomizeSheet:(BOOL)arg0 ;
-(void)_doCommonTabBarInit;
-(void)_doCommonTabBarPreInit;
-(void)_effectiveBarTintColorDidChange;
-(void)_ensureUnfocusedItemsAreNotSelected;
-(void)_installDefaultAppearance;
-(void)_makeCurrentButtonFirstResponder;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_positionAllItems;
-(void)_sendAction:(id)arg0 withEvent:(id)arg1 ;
-(void)_setDividerImage:(id)arg0 forLeftButtonState:(NSUInteger)arg1 rightButtonState:(NSUInteger)arg2 ;
-(void)_setLabelFont:(id)arg0 ;
-(void)_setLabelShadowColor:(id)arg0 ;
-(void)_setLabelShadowOffset:(struct CGSize )arg0 ;
-(void)_setLabelTextColor:(id)arg0 selectedTextColor:(id)arg1 ;
-(void)_setShadowAlpha:(CGFloat)arg0 ;
-(void)_tabBarFinishedAnimating;
-(void)_updateTabBarItemView:(id)arg0 ;
-(void)_useModernAppearance;
-(void)addConstraint:(id)arg0 ;
-(void)beginCustomizingItems:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)dismissCustomizeSheet:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeConstraint:(id)arg0 ;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setSpringLoaded:(BOOL)arg0 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif