// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABBARBUTTON_H
#define UITABBARBUTTON_H

@class NSMutableDictionary, NSArray, NSString;
@protocol UISpringLoadedInteractionSupporting;


#import "UIControl.h"
#import "UITabBarSwappableImageView.h"
#import "UIVisualEffectView.h"
#import "UITabBarButtonLabel.h"
#import "_UIBadgeView.h"
#import "UIImageView.h"
#import "UIImage.h"
#import "UIColor.h"
#import "UIView.h"
#import "_UITabBarItemData.h"
#import "UIVibrancyEffect.h"
#import "UITabBar.h"

@interface UITabBarButton : UIControl <UISpringLoadedInteractionSupporting>

 {
    CGRect _hitRect;
    UITabBarSwappableImageView *_imageView;
    UIVisualEffectView *_vibrancyEffectView;
    UITabBarButtonLabel *_label;
    _UIBadgeView *_badge;
    UIImageView *_selectedIndicator;
    UIEdgeInsets _imageInsets;
    UIEdgeInsets _imageLandscapeInsets;
    UIImage *_customSelectedIndicatorImage;
    UIOffset _labelOffset;
    NSMutableDictionary *_buttonTintColorsForState;
    NSMutableDictionary *_contentTintColorsForState;
    UIColor *_defaultUnselectedLabelTintColor;
    UIColor *_badgeColor;
    NSMutableDictionary *_badgeTextAttributesForState;
    UIOffset _badgeOffset;
    UIView *_highContrastFocusIndicator;
    BOOL _selected;
}


@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // ivar: _appearanceGuideClass
@property (readonly, nonatomic) CGRect _contentRect;
@property (readonly, nonatomic, getter=isDefaultTVLayout) BOOL _defaultTVLayout;
@property (readonly, nonatomic) UIColor *_defaultUnselectedLabelTintColor;
@property (nonatomic, getter=_isSelected, setter=_setSelected:) BOOL _selected;
@property (nonatomic, setter=_setShowsHighlightedState:) BOOL _showsHighlightedState; // ivar: _showsHighlightedState
@property (retain, nonatomic) NSArray *carplayConstraints; // ivar: _carplayConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *focusView; // ivar: _focusView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UITabBarItemData *itemAppearanceData; // ivar: _itemAppearanceData
@property (retain, nonatomic) UIVibrancyEffect *itemVibrantEffect; // ivar: _itemVibrantEffect
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UITabBar *tabBar; // ivar: _tabBar
@property (retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor;


+(id)_defaultLabelColor;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)canBecomeFocused;
-(BOOL)iconShouldUseVibrancyForState:(NSInteger)arg0 ;
-(BOOL)isDefaultColor:(id)arg0 forState:(NSInteger)arg1 ;
-(BOOL)labelShouldUseVibrancyForState:(NSInteger)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)defaultAlphaForState:(NSInteger)arg0 ;
-(NSInteger)_currentItemState;
-(NSInteger)_focusTouchSensitivityStyle;
-(NSInteger)defaultCompositingModeForState:(NSInteger)arg0 ;
-(id)_buttonTintColorForState:(NSUInteger)arg0 ;
-(id)_contentTintColorForState:(NSUInteger)arg0 ;
-(id)_info;
-(id)_selectedIndicatorImage;
-(id)_selectedIndicatorView;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)badgeBackgroundColorForState:(NSInteger)arg0 ;
-(id)badgeTextAttributesForState:(NSInteger)arg0 ;
-(id)defaultColorForState:(NSInteger)arg0 ;
-(id)iconColorForState:(NSInteger)arg0 ;
-(id)initWithImage:(id)arg0 landscapeImage:(id)arg1 selectedImage:(id)arg2 landscapeSelectedImage:(id)arg3 label:(id)arg4 withInsets:(struct UIEdgeInsets )arg5 landscapeInsets:(struct UIEdgeInsets )arg6 tabBar:(id)arg7 ;
-(id)initWithImage:(id)arg0 selectedImage:(id)arg1 label:(id)arg2 withInsets:(struct UIEdgeInsets )arg3 tabBar:(id)arg4 ;
-(id)titleTextAttributesForState:(NSInteger)arg0 ;
-(struct CGRect )_defaultFocusRegionFrame;
-(struct CGRect )_responderSelectionRect;
-(struct CGRect )_responderSelectionRectForWindow:(id)arg0 ;
-(struct CGSize )_appleTV_sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )_horizontalLayout_sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIOffset )_titlePositionAdjustment;
-(struct UIOffset )badgePositionAdjustmentForState:(NSInteger)arg0 ;
-(struct UIOffset )badgeTitlePositionAdjustmentForState:(NSInteger)arg0 ;
-(struct UIOffset )titlePositionAdjustmentForState:(NSInteger)arg0 ;
-(void)_UIAppearance_setBadgeColor:(id)arg0 ;
-(void)_UIAppearance_setBadgeTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset )arg0 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_appleTV_layoutSubviews;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(id)arg1 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_ios_layoutSubviews;
-(void)_positionBadge;
-(void)_positionBadgeAfterChangesIfNecessary:(id)arg0 ;
-(void)_reducedTransparencyDidChange:(id)arg0 ;
-(void)_removeCarplayConstraints;
-(void)_sendFocusAction;
-(void)_setBadgeColor:(id)arg0 ;
-(void)_setBadgeOffset:(struct UIOffset )arg0 ;
-(void)_setBadgeTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setBadgeValue:(id)arg0 ;
-(void)_setButtonTintColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setContentTintColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setCustomSelectedIndicatorImage:(id)arg0 ;
-(void)_setTitlePositionAdjustment:(struct UIOffset )arg0 ;
-(void)_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setupCarplayConstraints;
-(void)_setupSymbolConfigurationsForIdiom:(NSInteger)arg0 ;
-(void)_showBoundsViewAt:(struct CGRect )arg0 alignmentViewAt:(CGFloat)arg1 forSymbolImage:(BOOL)arg2 ;
-(void)_showSelectedIndicator:(BOOL)arg0 changeSelection:(BOOL)arg1 ;
-(void)_updateAfterTraitCollectionOrAccessibilityDidChangeTV;
-(void)_updateBadgeAppearanceAndLayoutNow:(BOOL)arg0 ;
-(void)_updateSelectedIndicatorFrame;
-(void)_updateSelectedIndicatorView;
-(void)_updateToMatchCurrentState;
-(void)_updateVibrancyEffectView;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)set_info:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif