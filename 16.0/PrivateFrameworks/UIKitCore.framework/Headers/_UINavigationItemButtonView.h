// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONITEMBUTTONVIEW_H
#define _UINAVIGATIONITEMBUTTONVIEW_H

@class UINavigationItemView, NSString;
@protocol UIGestureRecognizerDelegate;


#import "_UIBarButtonItemAppearanceStorage.h"
#import "UIImageView.h"
#import "UIColor.h"

@interface _UINavigationItemButtonView : UINavigationItemView <UIGestureRecognizerDelegate>

 {
    NSInteger _style;
    BOOL _pressed;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    BOOL _customBackgroundImageChangedToOrFromNil;
    UIImageView *_backgroundImageView;
    UIImageView *_imageView;
}


@property (nonatomic, setter=_setAbbreviatedTitleIndex:) NSUInteger _abbreviatedTitleIndex; // ivar: _abbreviatedTitleIndex
@property (retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // ivar: _accessibilityBackgroundTintColor
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) BOOL _wantsBlendModeForAccessibilityBackgrounds; // ivar: _wantsBlendModeForAccessibilityBackgrounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(BOOL)_suppressesBackIndicatorView;
-(BOOL)_useSilverLookForBarStyle:(NSInteger)arg0 ;
-(BOOL)_wantsAccessibilityButtonShapes;
-(BOOL)canBecomeFocused;
-(BOOL)customBackgroundImageChangedToOrFromNil;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)hasCustomBackgroundImage;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)pressed;
-(CGFloat)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)_backgroundVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)_titleYAdjustmentCustomization;
-(Class)_appearanceGuideClass;
-(id)_appearanceStorage;
-(id)_backButtonBackgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)_currentCustomBackgroundNeedsDarkening:(*BOOL)arg0 ;
-(id)_currentTextColorForBarStyle:(NSInteger)arg0 ;
-(id)_currentTextShadowColorForBarStyle:(NSInteger)arg0 ;
-(id)_defaultFont;
-(id)_titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)backgroundImageView;
-(id)image;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithNavigationItem:(id)arg0 ;
-(id)title;
-(struct CGSize )_currentTextShadowOffsetForBarStyle:(NSInteger)arg0 ;
-(struct CGSize )imageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIOffset )_backButtonTitlePositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg0 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_applyBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(id)arg1 ;
-(void)_backSelectGestureChanged:(id)arg0 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_installBackSelectGestureRecognizer;
-(void)_resetRenderingModesForAccessibilityBackgrounds;
-(void)_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_uninstallBackSelectGestureRecognizer;
-(void)_updateBackSelectGestureRecognizer;
-(void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPressed:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 initialPress:(BOOL)arg1 ;
-(void)setStyle:(NSInteger)arg0 ;
-(void)setStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif