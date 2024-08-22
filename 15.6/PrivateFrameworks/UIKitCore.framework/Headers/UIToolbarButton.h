// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITOOLBARBUTTON_H
#define UITOOLBARBUTTON_H



#import "UIControl.h"
#import "_UIToolbarNavigationButton.h"
#import "UILabel.h"
#import "UIColor.h"

@interface UIToolbarButton : UIControl {
    CGRect _hitRect;
    _UIToolbarNavigationButton *_info;
    UILabel *_label;
    NSInteger _barStyle;
    NSInteger _style;
    UIEdgeInsets _glowAdjust;
    BOOL _onState;
    BOOL _barHeight;
    BOOL _bezel;
    CGFloat _minimumWidth;
    CGFloat _maximumWidth;
    CGFloat _labelHeight;
    UIEdgeInsets _infoInsets;
    UIColor *_toolbarTintColor;
    id *_appearanceStorage;
    BOOL _isInTopBar;
}


@property (nonatomic, setter=_setAdditionalSelectionInsets:) UIEdgeInsets _additionalSelectionInsets; // ivar: __additionalSelectionInsets
@property (nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // ivar: _appearanceGuideClass
@property (nonatomic, setter=_setCreatedByBarButtonItem:) BOOL _createdByBarButtonItem;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;


+(id)_defaultLabelColor;
+(id)_defaultLabelFont;
+(id)defaultButtonFont;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(BOOL)_canGetPadding;
-(BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_infoIsButton;
-(BOOL)_isBordered;
-(BOOL)_isBorderedOtherThanAccessibility;
-(BOOL)_shouldApplyPadding;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(BOOL)_useBarHeight;
-(BOOL)_wantsAccessibilityButtonShapes;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_backgroundVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)_paddingForLeft:(BOOL)arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_backgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)_customOrAccessibilityBackgroundImageForState:(NSUInteger)arg0 style:(NSInteger)arg1 isMini:(BOOL)arg2 ;
-(id)_info;
-(id)_titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithImage:(id)arg0 pressedImage:(id)arg1 label:(id)arg2 labelHeight:(CGFloat)arg3 withBarStyle:(NSInteger)arg4 withStyle:(NSInteger)arg5 withInsets:(struct UIEdgeInsets )arg6 possibleTitles:(id)arg7 possibleSystemItems:(id)arg8 withToolbarTintColor:(id)arg9 bezel:(BOOL)arg10 imageInsets:(struct UIEdgeInsets )arg11 glowInsets:(struct UIEdgeInsets )arg12 landscape:(BOOL)arg13 ;
-(struct CGRect )_buttonBarHitRect;
-(struct CGSize )_defaultTitleShadowOffsetForState:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIOffset )_titlePositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_adjustPushButtonForMiniBar:(BOOL)arg0 isChangingBarHeight:(BOOL)arg1 ;
-(void)_adjustToolbarButtonInfo;
-(void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg0 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(id)arg1 ;
-(void)_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBarHeight:(float)arg0 ;
-(void)_setButtonBarHitRect:(struct CGRect )arg0 ;
-(void)_setInTopBar:(BOOL)arg0 ;
-(void)_setInfoExtremityWidth:(float)arg0 isMin:(BOOL)arg1 ;
-(void)_setInfoFlexibleWidth:(BOOL)arg0 ;
-(void)_setInfoWidth:(float)arg0 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg0 ;
-(void)_setPressed:(BOOL)arg0 ;
-(void)_setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setTouchHasHighlighted:(BOOL)arg0 ;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg0 ;
-(void)_setWantsLetterpressContent;
-(void)_sizeView:(id)arg0 toPossibleTitles:(id)arg1 pressedTitle:(id)arg2 ;
-(void)_updateInfoTextColorsForState:(NSUInteger)arg0 ;
-(void)_updateShadowOffsetWithAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setToolbarTintColor:(id)arg0 ;
-(void)setUseSelectedImage:(BOOL)arg0 ;


@end


#endif