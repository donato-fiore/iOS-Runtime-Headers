// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERPAGEVIEW_H
#define SBAPPSWITCHERPAGEVIEW_H

@class UIView, NSString, UIView<SBAppSwitcherPageContentView>;
@protocol PTSettingsKeyObserver, SBAppSwitcherPageViewDelegate;


#import "SBHitTestExtendedView.h"
#import "SBWallpaperEffectView.h"
#import "SBAppSwitcherSettings.h"
#import "SBAppSwitcherPageShadowView.h"

@interface SBAppSwitcherPageView : SBHitTestExtendedView <PTSettingsKeyObserver>

 {
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    SBWallpaperEffectView *_wallpaperOverlayView;
    UIView *_lighteningView;
    UIView *_viewClippingView;
    UIView *_contentContainerView;
    SBAppSwitcherSettings *_settings;
}


@property (readonly, nonatomic) UIView *_overlayClippingView; // ivar: _overlayClippingView
@property (readonly, nonatomic) SBAppSwitcherPageShadowView *_shadowView; // ivar: _shadowView
@property (nonatomic, getter=isActive) BOOL active;
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
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) UIView *overlay; // ivar: _overlayView
@property (nonatomic) CGFloat overlayAlpha;
@property (nonatomic) CGSize overlayViewSize; // ivar: _overlayViewSize
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (nonatomic) CGFloat shadowOffset; // ivar: _shadowOffset
@property (nonatomic) NSInteger shadowStyle; // ivar: _shadowStyle
@property (nonatomic) BOOL shouldClipContentView; // ivar: _shouldClipContentView
@property (nonatomic) BOOL shouldScaleOverlayToFillBounds; // ivar: _shouldScaleOverlayToFillBounds
@property (readonly) Class superclass;
@property (nonatomic) CGFloat switcherCardScale; // ivar: _switcherCardScale
@property (retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // ivar: _view
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) CGFloat wallpaperOverlayAlpha; // ivar: _wallpaperOverlayAlpha


-(BOOL)_supportsAsymmetricalCornerRadii;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addContentView:(id)arg0 ;
-(void)_layoutOverlayView;
-(void)_updateCornerRadius;
-(void)_updateDimmingViewAlpha;
-(void)_updateEffectOverlayViews;
-(void)_updateLighteningAlpha;
-(void)_updateShadowPresence;
-(void)_updateWallpaperOverlayAlpha;
-(void)invalidate;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif