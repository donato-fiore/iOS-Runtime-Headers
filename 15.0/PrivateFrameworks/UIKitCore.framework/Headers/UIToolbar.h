// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITOOLBAR_H
#define UITOOLBAR_H

@class NSString, NSArray;
@protocol UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, UIGestureRecognizerDelegatePrivate, UIBarPositioning, _UIToolbarDelegateInternal, UIToolbarDelegate;


#import "UIView.h"
#import "_UIToolbarVisualProvider.h"
#import "UIAccessibilityHUDGestureManager.h"
#import "UIColor.h"
#import "UIBarButtonItem.h"
#import "UIToolbarAppearance.h"

@interface UIToolbar : UIView <UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, UIGestureRecognizerDelegatePrivate, UIBarPositioning>

 {
    id<_UIToolbarDelegateInternal> *_delegate;
    ? _toolbarFlags;
    id *__appearanceStorage;
    _UIToolbarVisualProvider *_visualProvider;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    NSUInteger _disableAutolayoutWarnings;
}


@property (nonatomic, setter=_setAppearanceHint:) NSInteger _appearanceHint;
@property (copy, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *_backdropViewLayerGroupName;
@property (nonatomic, setter=_setBackgroundTransitionProgress:) CGFloat _backgroundTransitionProgress;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (readonly, nonatomic) NSInteger _barTranslucence;
@property (nonatomic, setter=_setDisableBlurTinting:) BOOL _disableBlurTinting;
@property (nonatomic, setter=_setHidesShadow:) BOOL _hidesShadow;
@property (readonly, nonatomic) NSInteger _hintFromCurrentAppearance;
@property (nonatomic, setter=_setItemDistribution:) NSInteger _itemDistribution;
@property (nonatomic, getter=_isLocked, setter=_setLocked:) BOOL _locked;
@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // ivar: _shadowView
@property (readonly, nonatomic) BOOL _shouldStretchDuringCrossfadeTransition;
@property (nonatomic, setter=_setWantsLetterpressContent:) BOOL _wantsLetterpressContent; // ivar: __wantsLetterpressContent
@property (nonatomic) BOOL autoHidesToolbarInFullscreen; // ivar: _autoHidesToolbarInFullscreen
@property (copy, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (readonly, nonatomic) NSInteger barPosition; // ivar: _barPosition
@property (nonatomic) NSInteger barStyle;
@property (retain, nonatomic) UIColor *barTintColor; // ivar: _barTintColor
@property (retain, nonatomic) UIBarButtonItem *centerItem; // ivar: _centerItem
@property (nonatomic) BOOL centerTextButtons; // ivar: _centerTextButtons
@property (copy, nonatomic) UIToolbarAppearance *compactAppearance; // ivar: _compactAppearance
@property (copy, nonatomic) UIToolbarAppearance *compactScrollEdgeAppearance; // ivar: _compactScrollEdgeAppearance
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIToolbarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic, getter=isMinibar) BOOL minibar;
@property (copy, nonatomic) UIToolbarAppearance *scrollEdgeAppearance; // ivar: _scrollEdgeAppearance
@property (copy, nonatomic) UIToolbarAppearance *standardAppearance; // ivar: _standardAppearance
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;


+(BOOL)_forceLegacyVisualProvider;
+(CGFloat)defaultHeight;
+(CGFloat)defaultHeightForBarSize:(int)arg0 ;
+(id)_visualProviderForToolbar:(id)arg0 ;
+(id)defaultButtonFont;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(BOOL)_linkedBeforeWhitetailAndInitializedFromCoder;
-(BOOL)_subclassImplementsDrawRect;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_defaultAutolayoutSpacing;
-(NSInteger)_expectedInterfaceOrientation;
-(id)__appearanceStorage;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)_effectiveBarTintColor;
-(id)_itemAtPoint:(struct CGPoint )arg0 ;
-(id)_traitCollectionForChildEnvironment:(id)arg0 ;
-(id)backgroundImageForToolbarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)initInView:(id)arg0 withFrame:(struct CGRect )arg1 withItemList:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)shadowImageForToolbarPosition:(NSInteger)arg0 ;
-(struct CGRect )_frameOfBarButtonItem:(id)arg0 ;
-(struct CGSize )defaultSizeForOrientation:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_46877859;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;
-(void)_customViewChangedForButtonItem:(id)arg0 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_doCommonToolbarInit;
-(void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg0 ;
-(void)_frameOrBoundsChangedWithVisibleSizeChange:(BOOL)arg0 wasMinibar:(BOOL)arg1 ;
-(void)_installDefaultAppearance;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg0 ;
-(void)_prepareForWindowDealloc;
-(void)_sendAction:(id)arg0 withEvent:(id)arg1 ;
-(void)_setButtonBackgroundImage:(id)arg0 mini:(id)arg1 forStates:(NSUInteger)arg2 ;
-(void)_setForceTopBarAppearance:(BOOL)arg0 ;
-(void)_setNeedsBackgroundViewUpdate;
-(void)_setVisualAltitude:(CGFloat)arg0 ;
-(void)_setVisualAltitudeBias:(struct CGSize )arg0 ;
-(void)_setupAXHUDGestureIfNecessary;
-(void)_updateBackgroundView;
-(void)_updateBarForStyle;
-(void)backdropView:(id)arg0 didChangeToGraphicsQuality:(NSInteger)arg1 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)setBackgroundImage:(id)arg0 forToolbarPosition:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setShadowImage:(id)arg0 forToolbarPosition:(NSInteger)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif