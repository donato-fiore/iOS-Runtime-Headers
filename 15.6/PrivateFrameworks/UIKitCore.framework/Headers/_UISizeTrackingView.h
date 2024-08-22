// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISIZETRACKINGVIEW_H
#define _UISIZETRACKINGVIEW_H

@class NSString;
@protocol _UIScrollToTopView, _UIRemoteViewFocusProxy, _UIViewBoundingPathChangeObserver;


#import "UIView.h"
#import "_UIRemoteViewController.h"

@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy, _UIViewBoundingPathChangeObserver>

 {
    _UIRemoteViewController *_remoteViewController;
    id *_viewControllerOperatorProxy;
    id *_textEffectsOperatorProxy;
    CGSize _intrinsicContentSize;
    CGRect _formerTextEffectsContentFrame;
    BOOL _observingTextEffectsWindowRotation;
    NSInteger _interfaceOrientation;
    ? _sizeTrackingViewFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;


+(id)viewWithRemoteViewController:(id)arg0 viewControllerOperatorProxy:(id)arg1 textEffectsOperatorProxy:(id)arg2 ;
-(BOOL)_canSendViewServiceActualBoundingPath;
-(BOOL)_fencingEffectsAreVisible;
-(BOOL)_needsTextEffectsUpdateToFrame:(struct CGRect )arg0 ;
-(BOOL)canBecomeFocused;
-(BOOL)isScrollEnabled;
-(NSInteger)_interfaceOrientationForScene:(id)arg0 ;
-(id)_boundingPathForRemoteViewService;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)_prepareForWindowDealloc;
-(void)_prepareForWindowHostingSceneRemoval;
-(void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)_setNeedsRemoteViewServiceBoundingPathUpdate;
-(void)_textEffectsWindowDidRotate:(id)arg0 ;
-(void)_updateSceneGeometries:(id)arg0 ;
-(void)_updateSceneGeometries:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(void)_updateTextEffectsGeometries:(struct CGRect )arg0 ;
-(void)_updateTextEffectsGeometries:(struct CGRect )arg0 textEffectsWindow:(id)arg1 ;
-(void)_updateTextEffectsGeometriesImmediately;
-(void)_updateTextEffectsWindowSafeAreaInsets;
-(void)_updateTextEffectsWindowSceneSize;
-(void)_willMoveToWindow:(id)arg0 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateIntrinsicContentSize:(struct CGSize )arg0 ;


@end


#endif