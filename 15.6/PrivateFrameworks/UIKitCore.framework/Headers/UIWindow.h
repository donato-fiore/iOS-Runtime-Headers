// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWINDOW_H
#define UIWINDOW_H

@class NSString, UIScene<_UISceneUIWindowHosting>, NSUndoManager, CALayer, NSMutableArray, NSMutableSet, NSHashTable, UISCurrentUserInterfaceStyleValue, CAContext, NSArray;
@protocol NSISEngineDelegate, _UIFocusEventRecognizerDelegate, _UIFocusMovementActionForwarding, _UIContextBindable, UIActivityItemsConfigurationReading, UIFocusItem;


#import "UIView.h"
#import "UIViewController.h"
#import "UIResponder.h"
#import "_UISystemGestureGateGestureRecognizer.h"
#import "UITraitCollection.h"
#import "UIAccessibilityHUDView.h"
#import "_UIWindowAnimationController.h"
#import "_UIContextBinder.h"
#import "_UIWindowOrientationUpdate.h"
#import "UIKeyboardLayoutGuide.h"
#import "_UIViewControllerNullAnimationTransitionCoordinator.h"
#import "_UIFocusEventRecognizer.h"
#import "_UIRootPresentationController.h"
#import "UIScreen.h"
#import "UIWindowScene.h"

@interface UIWindow : UIView <NSISEngineDelegate, _UIFocusEventRecognizerDelegate, _UIFocusMovementActionForwarding, _UIContextBindable>

 {
    NSString *_debugName;
    NSInteger _sceneOrientation;
    NSInteger _sceneClientOrientation;
    BOOL _notedOverlayInsetChange;
    UIViewController *_delegateViewController;
    CGFloat _windowLevel;
    CGFloat _windowSublevel;
    UIScene<_UISceneUIWindowHosting> *_windowHostingScene;
    UIResponder *_firstResponder;
    id *_touchData;
    NSInteger _viewOrientation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    CALayer *_sceneTransformLayer;
    CALayer *_transformLayer;
    CALayer *_rootLayer;
    NSMutableArray *_rotationViewControllers;
    NSMutableSet *_subtreeMonitors;
    ? _windowFlags;
    id *_windowController;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    UITraitCollection *_traitCollection;
    UITraitCollection *_destinationTraitCollection;
    *__CFDictionary _touchMap;
    NSInteger _containedGestureRecognizerMaximumState;
    CGFloat _lastTouchTimestamp;
    BOOL _systemGesturesArePossible;
    NSInteger _verticalSizeClassStateRestorationOverride;
    NSInteger _horizontalSizeClassStateRestorationOverride;
    UIAccessibilityHUDView *_accessibilityHUD;
    NSHashTable *_windowLevelObservers;
    UISCurrentUserInterfaceStyleValue *_currentUserInterfaceStyleValue;
    NSString *_roleHint;
}


@property (nonatomic, setter=__setHostViewUnderlapsStatusBar:) BOOL __hostViewUnderlapsStatusBar; // ivar: ___hostViewUnderlapsStatusBar
@property (readonly, nonatomic) ? __sizeClassPair;
@property (readonly, nonatomic) NSObject<UIActivityItemsConfigurationReading> *_activityItemsConfigurationForScene;
@property (retain, nonatomic, getter=_animationController, setter=_setAnimationController:) _UIWindowAnimationController *_animationController; // ivar: __animationController
@property (readonly, nonatomic, getter=_isApplicationKeyWindow) BOOL _applicationKeyWindow;
@property (readonly, nonatomic) ? _bindingDescription;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext; // ivar: _layerContext
@property (nonatomic, setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) BOOL _containedGestureRecognizersShouldRespectGestureServerInstructions; // ivar: __containedGestureRecognizersShouldRespectGestureServerInstructions
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder; // ivar: _contextBinder
@property (retain, nonatomic) NSMutableArray *_currentKeyboardTrackingLayoutGuides; // ivar: _currentKeyboardTrackingLayoutGuides
@property (retain, nonatomic, setter=_setDeferredOrientationUpdate:) _UIWindowOrientationUpdate *_deferredOrientationUpdate; // ivar: _deferredOrientationUpdate
@property (readonly, nonatomic, getter=_keyboardLayoutGuide) UIKeyboardLayoutGuide *_keyboardLayoutGuide; // ivar: _keyboardLayoutGuide
@property (weak, nonatomic, setter=_setLastFirstResponder:) UIResponder *_lastFirstResponder; // ivar: _lastFirstResponder
@property (weak, nonatomic, setter=_setLastNextResponder:) UIResponder *_lastNextResponder; // ivar: _lastNextResponder
@property (readonly, nonatomic) BOOL _preventsRootPresentationController;
@property (copy, nonatomic, setter=_setRootViewConstraints:) NSArray *_rootViewConstraints; // ivar: _rootViewConstraints
@property (nonatomic, setter=_setShouldDisableTransformLayerScalingForSnapshotting:) BOOL _shouldDisableTransformLayerScalingForSnapshotting; // ivar: _shouldDisableTransformLayerScalingForSnapshotting
@property (copy, nonatomic, setter=_setShouldPreventRotationHook:) id *_shouldPreventRotationHook; // ivar: __shouldPreventRotationHook
@property (retain, nonatomic, setter=_setTraitCollectionChangeTransitionCoordinator:) _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator; // ivar: _traitCollectionChangeTransitionCoordinator
@property (readonly, nonatomic) BOOL _usesLegacySupportedOrientationChecks; // ivar: __usesLegacySupportedOrientationChecks
@property (copy, nonatomic, setter=_setWindowInternalConstraints:) NSArray *_windowInternalConstraints; // ivar: _windowInternalConstraints
@property (readonly, nonatomic) BOOL canBecomeKeyWindow;
@property (nonatomic, setter=setCanResizeToFitContent:) BOOL canResizeToFitContent; // ivar: _canResizeToFitContent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_focusEventRecognizer) _UIFocusEventRecognizer *focusEventRecognizer; // ivar: _focusEventRecognizer
@property (readonly, weak, nonatomic, getter=_focusResponder) UIResponder *focusResponder;
@property (nonatomic, getter=_fromWindowOrientation, setter=_setFromWindowOrientation:) NSInteger fromWindowOrientation; // ivar: _fromWindowOrientation
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isKeyWindow) BOOL keyWindow;
@property (weak, nonatomic, getter=_rememberedFocusedItem, setter=_setRememberedFocusedItem:) NSObject<UIFocusItem> *rememberedFocusedItem; // ivar: _rememberedFocusedItem
@property (retain, nonatomic, getter=_rootPresentationController, setter=_setRootPresentationController:) _UIRootPresentationController *rootPresentationController; // ivar: _rootPresentationController
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (retain, nonatomic) UIScreen *screen;
@property (readonly, nonatomic, getter=_shouldInstallRootPresentationController) BOOL shouldInstallRootPresentationController;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_supportsFocus) BOOL supportsFocus;
@property (readonly, nonatomic, getter=_isSystemGestureWindow) BOOL systemGestureWindow;
@property (nonatomic, getter=_toWindowOrientation, setter=_setToWindowOrientation:) NSInteger toWindowOrientation; // ivar: _toWindowOrientation
@property (nonatomic) CGFloat windowLevel;
@property (weak, nonatomic) UIWindowScene *windowScene;


+(*void)createIOSurfaceFromDisplayConfiguration:(id)arg0 ;
+(*void)createIOSurfaceFromScreen:(id)arg0 ;
+(*void)createIOSurfaceOnScreen:(id)arg0 withContextIds:(*unsigned int)arg1 count:(NSUInteger)arg2 frame:(struct CGRect )arg3 baseTransform:(struct CGAffineTransform )arg4 ;
+(*void)createIOSurfaceOnScreen:(id)arg0 withContextIds:(*unsigned int)arg1 count:(NSUInteger)arg2 frame:(struct CGRect )arg3 usePurpleGfx:(BOOL)arg4 outTransform:(struct CGAffineTransform *)arg5 ;
+(*void)createIOSurfaceWithContextIds:(*unsigned int)arg0 count:(NSUInteger)arg1 frame:(struct CGRect )arg2 ;
+(*void)createIOSurfaceWithContextIds:(*unsigned int)arg0 count:(NSUInteger)arg1 frame:(struct CGRect )arg2 outTransform:(struct CGAffineTransform *)arg3 ;
+(*void)createIOSurfaceWithContextIds:(*unsigned int)arg0 count:(NSUInteger)arg1 frame:(struct CGRect )arg2 usePurpleGfx:(BOOL)arg3 outTransform:(struct CGAffineTransform *)arg4 ;
+(*void)createScreenIOSurface;
+(BOOL)_allWindowsKeepContextInBackground;
+(BOOL)_clearPreCommitHandlerRegistration;
+(BOOL)_isSecure;
+(BOOL)_isSystemWindow;
+(BOOL)_prefersStatusBarHiddenInWindow:(id)arg0 animationProvider:(*id)arg1 ;
+(BOOL)_prefersStatusBarHiddenInWindow:(id)arg0 targetOrientation:(NSInteger)arg1 animationProvider:(*id)arg2 ;
+(BOOL)_shouldSoftAssertOnSetScreen;
+(BOOL)_temporary_shouldSizeWindowsAutomaticallyPlistOverrideSet;
+(BOOL)_transformLayerRotationsAreEnabled;
+(BOOL)shouldRestrictViewsForSplashboard;
+(Class)layerClass;
+(NSInteger)_preferredStatusBarStyleInWindow:(id)arg0 withPartStyles:(*id)arg1 animationProvider:(*id)arg2 ;
+(id)_applicationKeyWindow;
+(id)_externalKeyWindow;
+(id)_findWindowForControllingOverallAppearance;
+(id)_findWindowForControllingOverallAppearanceInWindowScene:(id)arg0 ;
+(id)_findWithDisplayPoint:(struct CGPoint )arg0 ;
+(id)_globalHitTestForLocation:(struct CGPoint )arg0 inWindowServerHitTestWindow:(id)arg1 withEvent:(id)arg2 ;
+(id)_hitTestToPoint:(struct CGPoint )arg0 forEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
+(id)_synchronizedDrawingFence;
+(id)_topVisibleWindowPassingTest:(id)arg0 ;
+(id)_windowWithContextId:(unsigned int)arg0 ;
+(id)allWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 ;
+(id)allWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 forScreen:(id)arg2 ;
+(id)keyWindow;
+(id)restrictedSplashboardClasses;
+(struct CGRect )constrainFrameToScreen:(struct CGRect )arg0 ;
+(unsigned int)_synchronizeDrawingAcrossProcesses;
+(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 allowMutation:(BOOL)arg2 withBlock:(id)arg3 ;
+(void)_executeDeferredOrientationUpdates;
+(void)_noteStatusBarHeightChanged:(CGFloat)arg0 oldHeight:(CGFloat)arg1 ;
+(void)_popKeyWindow:(id)arg0 ;
+(void)_pushKeyWindow:(id)arg0 ;
+(void)_removeWindowFromStack:(id)arg0 ;
+(void)_setAllWindowsKeepContextInBackground:(BOOL)arg0 ;
+(void)_setTransformLayerRotationsAreEnabled:(BOOL)arg0 ;
+(void)_synchronizeDrawing;
+(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg0 ;
+(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg0 withPreCommitHandler:(id)arg1 ;
+(void)_synchronizeDrawingWithCAFence:(id)arg0 preCommitHandler:(id)arg1 ;
+(void)_synchronizeDrawingWithFence:(id)arg0 ;
+(void)_synchronizeDrawingWithFence:(id)arg0 preCommitHandler:(id)arg1 ;
+(void)_synchronizeDrawingWithPreCommitHandler:(id)arg0 ;
+(void)_unregisterChargedView:(id)arg0 ;
+(void)adjustFocusForAccessibilityIfNeeded:(id)arg0 ;
+(void)adjustForAccessibilityIfNeeded:(id)arg0 ;
+(void)initialize;
+(void)setRestrictedSplashboardClasses:(id)arg0 ;
+(void)setShouldRestrictViewsForSplashboard:(BOOL)arg0 ;
-(*void)createIOSurface;
-(*void)createIOSurfaceWithFrame:(struct CGRect )arg0 ;
-(BOOL)_allowsLinkPreviewInteractionInViewServices;
-(BOOL)_allowsOcclusionDetectionOverride;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_appearsInLoupe;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)_cachedTraitCollectionIsValid;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_canBecomeLayoutEngineDelegate;
-(BOOL)_canIgnoreInteractionEvents;
-(BOOL)_canPromoteFromKeyWindowStack;
-(BOOL)_constrainsHoverEventHitTesting;
-(BOOL)_containedInAbsoluteResponderChain;
-(BOOL)_definesDynamicTintColor;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_disableGroupOpacity;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_focusEventRecognizer:(id)arg0 didRecognizeFocusMovementRequest:(id)arg1 ;
-(BOOL)_guardSizeTransitionFromAnimations;
-(BOOL)_hasAmbiguousLayout;
-(BOOL)_hasContext;
-(BOOL)_hasSystemGestureGate;
-(BOOL)_ignoresHitTest;
-(BOOL)_includeInDefaultImageSnapshot;
-(BOOL)_isAlwaysKeyboardWindow;
-(BOOL)_isAnyWindowRotating;
-(BOOL)_isConstrainedByScreenJail;
-(BOOL)_isHostedInAnotherProcess;
-(BOOL)_isHostingPortalViews;
-(BOOL)_isInAWindow;
-(BOOL)_isLoweringAnchoringConstraints;
-(BOOL)_isRemoteKeyboardWindow;
-(BOOL)_isResigningFirstResponderFromHost;
-(BOOL)_isSceneSized;
-(BOOL)_isScrollingEnabledForView:(id)arg0 ;
-(BOOL)_isSecure;
-(BOOL)_isSettingFirstResponder;
-(BOOL)_isStatusBarWindow;
-(BOOL)_isTextEffectsWindow;
-(BOOL)_isTextEffectsWindowHosting;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)_isVisible;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_needsShakesWhenInactive;
-(BOOL)_requiresKeyboardPresentationFence;
-(BOOL)_resizeWindowFrameToSceneBoundsIfNecessary;
-(BOOL)_reversesLinearFocusWrapping;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 checkForDismissal:(BOOL)arg1 isRotationDisabled:(*BOOL)arg2 ;
-(BOOL)_shouldControlAutorotation;
-(BOOL)_shouldCreateContextAsSecure;
-(BOOL)_shouldDelayTouchForSystemGestures:(id)arg0 ;
-(BOOL)_shouldForceTraitPropagationThroughHierarchy;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_shouldPropagateTraitCollectionChanges;
-(BOOL)_shouldRecognizeEventsInFocusEventRecognizer:(id)arg0 ;
-(BOOL)_shouldResizeWithScene;
-(BOOL)_shouldScaleByPixelDoubling;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg0 ;
-(BOOL)_shouldUseRemoteContext;
-(BOOL)_supportsBecomeFirstResponderWhenPossible;
-(BOOL)_systemGestureRecognitionIsPossible;
-(BOOL)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg0 ;
-(BOOL)_transformLayerIncludesScreenRotation;
-(BOOL)_updatesSafeAreaInsetsOnRead;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_wantsFocusEngine;
-(BOOL)_wantsSceneAssociation;
-(BOOL)_windowControlsStatusBarOrientation;
-(BOOL)_windowOwnsInterfaceOrientation;
-(BOOL)_windowOwnsInterfaceOrientationTransform;
-(BOOL)autorotates;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)hasAmbiguousLayout;
-(BOOL)inhibitManualTransform;
-(BOOL)inhibitSetupOrientation;
-(BOOL)inhibitTextEffectsRotation;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isInterfaceAutorotationDisabled;
-(BOOL)isInternalWindow;
-(BOOL)isRotating;
-(BOOL)isTrackingKeyboard;
-(BOOL)isUsingOnePartRotationAnimation;
-(BOOL)keepContextInBackground;
-(BOOL)resizesToFullScreen;
-(BOOL)updateKeyboardOffset:(struct UIOffset )arg0 ;
-(BOOL)updateKeyboardSize:(struct CGSize )arg0 ;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;
-(CGFloat)_bindableLevel;
-(CGFloat)_chargeMultiplicationFactor;
-(CGFloat)_classicOffset;
-(CGFloat)_convertVisualAltitude:(CGFloat)arg0 fromWindow:(id)arg1 ;
-(CGFloat)_convertVisualAltitude:(CGFloat)arg0 toWindow:(id)arg1 ;
-(CGFloat)_rotationDuration;
-(CGFloat)_touchSloppinessFactor;
-(CGFloat)level;
-(NSInteger)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)arg0 ;
-(NSInteger)_orientationForClassicPresentation;
-(NSInteger)_orientationForRootTransform;
-(NSInteger)_orientationForSceneTransform;
-(NSInteger)_orientationForViewTransform;
-(NSInteger)_orientationInSceneSpace;
-(NSInteger)_overriddenInterfaceOrientation;
-(NSInteger)_sceneClientOrientation;
-(NSInteger)_sceneOrientation;
-(NSInteger)_subclassPreferredFocusedViewPrioritizationType;
-(NSInteger)_windowInterfaceOrientation;
-(NSInteger)interfaceOrientation;
-(NSUInteger)_edgeForTouch:(id)arg0 ;
-(NSUInteger)_edgesForSystemGesturesTouchDelay;
-(NSUInteger)_expectedWindowInternalConstraintsCount;
-(NSUInteger)_supportedInterfaceOrientationsForRootViewController;
-(id)__clientsForRotationCallbacks;
-(id)_aboveWindowScrollView;
-(id)_accessibilityHUDContainerViewForView:(id)arg0 ;
-(id)_appearanceContainer;
-(id)_associatingSceneLayer;
-(id)_bindingLayer;
-(id)_boundingPath;
-(id)_canvas;
-(id)_centerExpressionInContainer:(id)arg0 vertical:(BOOL)arg1 contentInsetScale:(CGFloat)arg2 engine:(id)arg3 ;
-(id)_clientsForRotation;
-(id)_contextOptionsWithInitialOptions:(id)arg0 ;
-(id)_debugName;
-(id)_deepestActionResponder;
-(id)_delegateViewController;
-(id)_descendantWithAmbiguousLayout;
-(id)_eventRoutingScene;
-(id)_exclusiveTouchView;
-(id)_firstResponder;
-(id)_focusMovementSystemForFocusEventRecognizer:(id)arg0 ;
-(id)_focusedView;
-(id)_hitTestLocation:(struct CGPoint )arg0 inScene:(id)arg1 withWindowServerHitTestWindow:(id)arg2 event:(id)arg3 ;
-(id)_hostingHandle;
-(id)_hostingWindow;
-(id)_initWithFrame:(struct CGRect )arg0 attached:(BOOL)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 attached:(BOOL)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 canvas:(id)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 displayConfiguration:(id)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 scene:(id)arg2 attached:(BOOL)arg3 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 windowScene:(id)arg2 ;
-(id)_initWithOrientation:(NSInteger)arg0 ;
-(id)_keyboardSceneSettings;
-(id)_layerForCoordinateSpaceConversion;
-(id)_layerForTimeOffsetModification;
-(id)_layoutEngineCreateIfNecessary;
-(id)_layoutEngineIfAvailable;
-(id)_normalInheritedTintColor;
-(id)_overridingPreferredFocusEnvironment;
-(id)_redundantConstraints;
-(id)_registeredScrollToTopViews;
-(id)_responderForKeyEvents;
-(id)_responderSelectionContainerViewForResponder:(id)arg0 ;
-(id)_responderWindow;
-(id)_roleHint;
-(id)_rootForKeyResponderCycle;
-(id)_rootSheetPresentationController;
-(id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg0 ;
-(id)_rotationViewControllers;
-(id)_scene;
-(id)_subtreeMonitorsForView:(id)arg0 ;
-(id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint )arg0 withEvent:(id)arg1 excludingWindow:(id)arg2 ;
-(id)_targetWindowForPathIndex:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(id)_touchData;
-(id)_traitCollectionForSize:(struct CGSize )arg0 parentCollection:(id)arg1 ;
-(id)_traitCollectionForSize:(struct CGSize )arg0 parentCollection:(id)arg1 localOverrideCollection:(id)arg2 ;
-(id)_traitCollectionForSize:(struct CGSize )arg0 screen:(id)arg1 ;
-(id)_traitCollectionWhenRotated;
-(id)_uiWindowSceneFromFBSScene:(id)arg0 ;
-(id)_uiib_candidateRedundantConstraints;
-(id)_uiib_layoutEngineCreatingIfNecessary;
-(id)_window;
-(id)_windowHostingScene;
-(id)contentView;
-(id)delegate;
-(id)firstResponder;
-(id)gestureParent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentRect:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)nextResponder;
-(id)parentFocusEnvironment;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(id)representation;
-(id)restorationIdentifier;
-(id)traitCollection;
-(id)undoManager;
-(int)bitsPerComponent;
-(int)windowOutput;
-(struct CGAffineTransform )_viewTransformForInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGPoint )_constrainTouchLocationToScene:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertDoublePointFromSceneReferenceSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertDoublePointToSceneReferenceSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertOffset:(struct CGPoint )arg0 fromWindow:(id)arg1 ;
-(struct CGPoint )_convertOffset:(struct CGPoint )arg0 toWindow:(id)arg1 ;
-(struct CGPoint )_convertOffsetFromSceneReferenceSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertOffsetToSceneReferenceSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertPointFromSceneReferenceSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertPointToSceneReferenceSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_transformDisplayToWindowCoordinates:(struct CGPoint )arg0 ;
-(struct CGPoint )convertDeviceToWindow:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromWindow:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toWindow:(id)arg1 ;
-(struct CGPoint )convertWindowToDevice:(struct CGPoint )arg0 ;
-(struct CGPoint )warpPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_convertRectFromSceneReferenceSpace:(struct CGRect )arg0 ;
-(struct CGRect )_convertRectToSceneReferenceSpace:(struct CGRect )arg0 ;
-(struct CGRect )_referenceFrameFromSceneUsingScreenBounds:(BOOL)arg0 ;
-(struct CGRect )_sceneBounds;
-(struct CGRect )_sceneReferenceBounds;
-(struct CGRect )_usableBounds;
-(struct CGRect )_usableSceneBounds;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromWindow:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toWindow:(id)arg1 ;
-(struct UIEdgeInsets )_managedSafeAreaInsets;
-(struct UIEdgeInsets )_normalizedSafeAreaInsets;
-(struct UIEdgeInsets )_overlayInsets;
-(struct UIEdgeInsets )_safeAreaInsetsInSuperview:(id)arg0 ;
-(struct UIEdgeInsets )_sceneSafeAreaInsetsIncludingStatusBar:(BOOL)arg0 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(struct __CFDictionary *)_touchMap;
-(unsigned int)_contextId;
-(void)_addRotationViewController:(id)arg0 ;
-(void)_addWindowLevelChangedObserver:(id)arg0 ;
-(void)_adjustFramePositionIfNecessary;
-(void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect )arg0 ;
-(void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect )arg0 ;
-(void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint )arg0 ;
-(void)_cancelEnqueuedDeferredOrientationUpdateIfNeeded;
-(void)_clearPendingKeyboardChanges;
-(void)_clearSizeClassesForStateRestoration;
-(void)_commonInit;
-(void)_commonInitAttachedWindow:(BOOL)arg0 debugName:(id)arg1 scene:(id)arg2 ;
-(void)_commonInitDebugName:(id)arg0 uiScene:(id)arg1 ;
-(void)_configureContextOptions:(id)arg0 ;
-(void)_configureRootLayer:(id)arg0 sceneTransformLayer:(id)arg1 transformLayer:(id)arg2 ;
-(void)_constraints_subviewWillChangeSuperview:(id)arg0 ;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(void)_didCreateRootPresentationController;
-(void)_didMoveFromScene:(id)arg0 toScene:(id)arg1 ;
-(void)_didMoveFromScreen:(id)arg0 toScreen:(id)arg1 ;
-(void)_didSnapshot;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_dismissAccessibilityHUD;
-(void)_enqueueDeferredOrientationUpdateIfNeeded;
-(void)_executeDeferredOrientationUpdate;
-(void)_fadeCalloutBarIfNeededForTouchInView:(id)arg0 ;
-(void)_finishedFirstHalfRotation:(id)arg0 finished:(BOOL)arg1 context:(id)arg2 ;
-(void)_finishedFullRotation:(BOOL)arg0 context:(id)arg1 skipNotification:(BOOL)arg2 ;
-(void)_finishedFullRotation:(id)arg0 finished:(id)arg1 context:(id)arg2 ;
-(void)_focusEventRecognizer:(id)arg0 didRecognizeFastScrollingRequest:(id)arg1 ;
-(void)_forceTwoPartRotationAnimation:(BOOL)arg0 ;
-(void)_forwardFocusMovementAction:(id)arg0 ;
-(void)_handleDeviceOrientationChange:(id)arg0 ;
-(void)_handleSBActiveInterfaceOrientationChange:(id)arg0 ;
-(void)_handleStatusBarOrientationChange:(id)arg0 ;
-(void)_initializeLayoutEngine;
-(void)_initializeLayoutEngineDiscardingOldIfNeeded:(BOOL)arg0 ;
-(void)_installFocusEventRecognizer;
-(void)_installFocusIfNeededForFocusSystemSceneComponent:(id)arg0 ;
-(void)_invalidateWindowInternalConstraints;
-(void)_localOverrideTraitCollectionDidChange;
-(void)_localOverrideTraitCollectionWillChange:(id)arg0 ;
-(void)_mainQueue_makeKeyAndVisible;
-(void)_makeExternalKeyWindow;
-(void)_matchDeviceOrientation;
-(void)_moveWithEvent:(id)arg0 ;
-(void)_noteOverlayInsetsDidChange;
-(void)_notifyRotatableViewOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_orderFrontWithoutMakingKey;
-(void)_parentWillTransitionToTraitCollection:(id)arg0 ;
-(void)_performTouchContinuationWithOverrideHitTestedView:(id)arg0 ;
-(void)_positionHeaderView:(id)arg0 andFooterView:(id)arg1 outsideContentViewForInterfaceOrientation:(NSInteger)arg2 ;
-(void)_prepareHierarchyForWindowHostingSceneRemoval;
-(void)_propagateTraitCollectionChangedForStateRestorationWithTransitionCoordinator:(id)arg0 ;
-(void)_registerChargedView:(id)arg0 ;
-(void)_registerScrollToTopView:(id)arg0 ;
-(void)_registerSubtreeMonitor:(id)arg0 ;
-(void)_removeAllViewControllersFromWindowHierarchyFromDealloc:(BOOL)arg0 ;
-(void)_removeFocusEventRecognizer;
-(void)_removeFocusIfNeededForFocusSystemSceneComponent:(id)arg0 ;
-(void)_removeRotationViewController:(id)arg0 ;
-(void)_removeWindowLevelChangedObserver:(id)arg0 ;
-(void)_resizeWindowToFullScreenIfNecessary;
-(void)_restoreFirstResponder;
-(void)_rotateToBounds:(struct CGRect )arg0 withAnimator:(id)arg1 transitionContext:(id)arg2 ;
-(void)_rotateWindowToOrientation:(NSInteger)arg0 updateStatusBar:(BOOL)arg1 duration:(CGFloat)arg2 skipCallbacks:(BOOL)arg3 ;
-(void)_sceneBoundsDidChange;
-(void)_sceneSettingsSafeAreaInsetsDidChange;
-(void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)_sendButtonsForEvent:(id)arg0 ;
-(void)_sendTouchesForEvent:(id)arg0 ;
-(void)_setCanvas:(id)arg0 ;
-(void)_setDelegateViewController:(id)arg0 ;
-(void)_setExclusiveTouchView:(id)arg0 ;
-(void)_setFirstResponder:(id)arg0 ;
-(void)_setHidden:(BOOL)arg0 forced:(BOOL)arg1 ;
-(void)_setIsLoweringAnchoringConstraints:(BOOL)arg0 ;
-(void)_setIsResigningFirstResponderFromHost:(BOOL)arg0 ;
-(void)_setIsSettingFirstResponder:(BOOL)arg0 ;
-(void)_setNeedsBoundingPathUpdate;
-(void)_setRoleHint:(id)arg0 ;
-(void)_setRotatableClient:(id)arg0 toOrientation:(NSInteger)arg1 updateStatusBar:(BOOL)arg2 duration:(CGFloat)arg3 force:(BOOL)arg4 isRotating:(BOOL)arg5 ;
-(void)_setRotatableViewOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_setRotatableViewOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 force:(BOOL)arg2 ;
-(void)_setRotatableViewOrientation:(NSInteger)arg0 updateStatusBar:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)_setRotatableViewOrientation:(NSInteger)arg0 updateStatusBar:(BOOL)arg1 duration:(CGFloat)arg2 force:(BOOL)arg3 ;
-(void)_setScene:(id)arg0 ;
-(void)_setSecure:(BOOL)arg0 ;
-(void)_setStateRestorationVerticalSizeClass:(NSInteger)arg0 horizontalSizeClass:(NSInteger)arg1 ;
-(void)_setSystemGestureRecognitionIsPossible:(BOOL)arg0 andTouchesAreCancelled:(BOOL)arg1 ;
-(void)_setTouchMap:(struct __CFDictionary *)arg0 ;
-(void)_setWindowControlsStatusBarOrientation:(BOOL)arg0 ;
-(void)_setWindowHostingScene:(id)arg0 ;
-(void)_setWindowInterfaceOrientation:(NSInteger)arg0 ;
-(void)_showAccessibilityHUDItem:(id)arg0 forView:(id)arg1 ;
-(void)_slideHeaderView:(id)arg0 andFooterView:(id)arg1 offScreen:(BOOL)arg2 forInterfaceOrientation:(NSInteger)arg3 ;
-(void)_switchToLayoutEngine:(id)arg0 ;
-(void)_tintColorDidChange;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;
-(void)_transformLayerShouldMaskToBounds:(BOOL)arg0 ;
-(void)_uiib_invalidateWindowInternalConstraints;
-(void)_unregisterChargedView:(id)arg0 ;
-(void)_unregisterScrollToTopView:(id)arg0 ;
-(void)_unregisterSubtreeMonitor:(id)arg0 ;
-(void)_updateAutorotationResponse:(BOOL)arg0 ;
-(void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)arg0 ;
-(void)_updateInterfaceOrientationFromActiveInterfaceOrientation;
-(void)_updateInterfaceOrientationFromActiveInterfaceOrientation:(BOOL)arg0 ;
-(void)_updateInterfaceOrientationFromActiveInterfaceOrientationIfRotationEnabled:(BOOL)arg0 ;
-(void)_updateInterfaceOrientationFromDeviceOrientation;
-(void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg0 ;
-(void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg0 ;
-(void)_updateIsSceneSizedFlag;
-(void)_updateLayerOrderingAndSetLayerHidden:(BOOL)arg0 ;
-(void)_updateLayerOrderingAndSetLayerHidden:(BOOL)arg0 actionBlock:(id)arg1 ;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(void)_updateSystemConstraints;
-(void)_updateToInterfaceOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 force:(BOOL)arg2 ;
-(void)_updateToNotificationProvidedInterfaceOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateTransformLayer;
-(void)_updateWindowEngineHostConstraintsWithSizing:(BOOL)arg0 ;
-(void)_updateWindowTraits;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg0 ;
-(void)_willChangeToSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 screen:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_willSnapshot;
-(void)_willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_willUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_writeLayerTreeToPath:(id)arg0 ;
-(void)addKeyboardLayoutGuideIfNeeded:(id)arg0 ;
-(void)addRootViewControllerViewIfPossible;
-(void)awakeFromNib;
-(void)becomeKeyWindow;
-(void)beginDisablingInterfaceAutorotation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endDisablingInterfaceAutorotation;
-(void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg0 ;
-(void)exerciseAmbiguityInLayout;
-(void)handleStatusBarChangeFromHeight:(CGFloat)arg0 toHeight:(CGFloat)arg1 ;
-(void)keyboardDidHide;
-(void)makeKey:(id)arg0 ;
-(void)makeKeyAndOrderFront:(id)arg0 ;
-(void)makeKeyAndVisible;
-(void)makeKeyWindow;
-(void)matchDeviceOrientation:(id)arg0 ;
-(void)orderFront:(id)arg0 ;
-(void)orderOut:(id)arg0 ;
-(void)redo:(id)arg0 ;
-(void)removeFromSuperview;
-(void)removeKeyboardLayoutGuideIfNeeded:(id)arg0 ;
-(void)resignKeyWindow;
-(void)sendEvent:(id)arg0 ;
-(void)setAutorotates:(BOOL)arg0 ;
-(void)setAutorotates:(BOOL)arg0 forceUpdateInterfaceOrientation:(BOOL)arg1 ;
-(void)setBecomeKeyOnOrderFront:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setContentView:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setKeepContextInBackground:(BOOL)arg0 ;
-(void)setLevel:(CGFloat)arg0 ;
-(void)setResizesToFullScreen:(BOOL)arg0 ;
-(void)setRestorationIdentifier:(id)arg0 ;
-(void)setupForOrientation:(NSInteger)arg0 ;
-(void)toggleKeyboardLayoutGuideAnimation:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)undo:(id)arg0 ;
-(void)updateKeyboardAnimationOptions:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)updateKeyboardDockedState:(BOOL)arg0 ;
-(void)updateKeyboardForAssistantBar:(BOOL)arg0 ;
-(void)updateKeyboardTransitionState:(BOOL)arg0 ;


@end


#endif