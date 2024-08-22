// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERPAGEVIEW_H
#define SBAPPSWITCHERPAGEVIEW_H

@class UIView, NSString, UIView<SBAppSwitcherPageContentView>;
@protocol PTSettingsKeyObserver, SBSystemPointerInteractionDelegate, SBAppSwitcherPageViewDelegate;


#import "SBHitTestExtendedView.h"
#import "SBWallpaperEffectView.h"
#import "SBAppSwitcherSettings.h"
#import "SBAppSwitcherWallpaperGradientView.h"
#import "SBAppResizeGrabberView.h"
#import "SBSystemPointerInteractionManager.h"
#import "SBAppSwitcherPageShadowView.h"

@interface SBAppSwitcherPageView : SBHitTestExtendedView <PTSettingsKeyObserver, SBSystemPointerInteractionDelegate>

 {
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    SBWallpaperEffectView *_wallpaperOverlayView;
    UIView *_tintView;
    UIView *_viewClippingView;
    UIView *_contentContainerView;
    SBAppSwitcherSettings *_settings;
    SBAppSwitcherWallpaperGradientView *_wallpaperGradientView;
    SBAppResizeGrabberView *_topLeftResizeGrabberPillView;
    SBAppResizeGrabberView *_topRightResizeGrabberPillView;
    SBAppResizeGrabberView *_bottomLeftResizeGrabberPillView;
    SBAppResizeGrabberView *_bottomRightResizeGrabberPillView;
    CGRect _pointerRegion;
    NSUInteger _hoveringOverEdge;
    BOOL _resizingAllowed;
    BOOL _occludedInContinuousExposeStage;
    UIView *_pointerHitTestBlocker;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
}


@property (readonly, nonatomic) UIView *_overlayClippingView; // ivar: _overlayClippingView
@property (readonly, nonatomic) SBAppSwitcherPageShadowView *_shadowView; // ivar: _shadowView
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) NSUInteger allowedTouchResizeCorners; // ivar: _allowedTouchResizeCorners
@property (nonatomic) BOOL blocksTouches;
@property (nonatomic) CGFloat contentAlpha;
@property (nonatomic) CGRect contentClippingFrame; // ivar: _contentClippingFrame
@property (nonatomic) UIRectCornerRadii cornerRadii; // ivar: _cornerRadii
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAppSwitcherPageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dimmingAlpha; // ivar: _dimmingAlpha
@property (nonatomic) CGSize fullyPresentedSize; // ivar: _fullyPresentedSize
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger highlightType; // ivar: _highlightType
@property (nonatomic) CGFloat lighteningAlpha; // ivar: _lighteningAlpha
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (nonatomic) BOOL needsBackgroundWallpaperTreatment; // ivar: _needsBackgroundWallpaperTreatment
@property (nonatomic) BOOL needsWallpaperGradientTreatment; // ivar: _needsWallpaperGradientTreatment
@property (nonatomic, getter=isOccludedInContinuousExposeStage) BOOL occludedInContinuousExposeStage;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) UIView *overlay; // ivar: _overlayView
@property (nonatomic) CGFloat overlayAlpha;
@property (nonatomic) CGSize overlayViewSize; // ivar: _overlayViewSize
@property (nonatomic) CGFloat pointerInteractionHitTestPadding; // ivar: _pointerInteractionHitTestPadding
@property (nonatomic, getter=areResizeGrabbersVisible) BOOL resizeGrabbersVisible; // ivar: _resizeGrabbersVisible
@property (nonatomic, getter=isResizingAllowed) BOOL resizingAllowed;
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (nonatomic) CGFloat shadowOffset; // ivar: _shadowOffset
@property (nonatomic) NSInteger shadowStyle; // ivar: _shadowStyle
@property (nonatomic) BOOL shouldClipContentView; // ivar: _shouldClipContentView
@property (nonatomic) BOOL shouldScaleOverlayToFillBounds; // ivar: _shouldScaleOverlayToFillBounds
@property (readonly) Class superclass;
@property (nonatomic) CGFloat switcherCardScale; // ivar: _switcherCardScale
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle
@property (retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // ivar: _view
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) SBSwitcherGradientWallpaperAttributes wallpaperGradientAttributes; // ivar: _wallpaperGradientAttributes
@property (nonatomic) CGFloat wallpaperOverlayAlpha; // ivar: _wallpaperOverlayAlpha


-(BOOL)_supportsAsymmetricalCornerRadii;
-(BOOL)shouldBeginPointerInteractionRequest:(id)arg0 atLocation:(struct CGPoint )arg1 forView:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)regionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(struct CGRect )_contentViewFrame;
-(struct UIEdgeInsets )pointerInteractionHitTestInsetsForView:(id)arg0 ;
-(void)_addContentView:(id)arg0 ;
-(void)_createOrDestroyWallpaperGradientView;
-(void)_createOrDestroyWallpaperOverlayView;
-(void)_layoutOverlayView;
-(void)_updateCornerRadius;
-(void)_updateDimmingViewAlpha;
-(void)_updateEffectOverlayViews;
-(void)_updateGrabberVisibilities;
-(void)_updateShadowPresence;
-(void)_updateTintViewAlpha;
-(void)_updateWallpaperGradientAttributes;
-(void)_updateWallpaperOverlayAlpha;
-(void)invalidate;
-(void)pointerWillExitRegion;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif