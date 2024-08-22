// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGVIEW_H
#define PXGVIEW_H

@class UIView, UIColor, NSString, NSArray, MTKView, NSDictionary;
@protocol PXDiagnosticsEnvironment, PXGEngineDelegate, PXScrollViewControllerObserver, PXGLayoutScrollDelegate, PXGLayoutViewDelegate, PXSettingsKeyObserver, UIGestureRecognizerDelegate, PXGAXResponder, PXGDiagnosticsProvider, PXDebugHierarchyProvider, PXTapToRadarDiagnosticProvider, PXGHitTestEnvironment, PXGViewAccessibilityDelegate, PXGViewDiagnosticsSource, PXAnonymousScrollView;


#import "PXGDebugHUDLayer.h"
#import "PXGRectDiagnosticsLayer.h"
#import "PXGAXCoalescingResponder.h"
#import "PXGEngine.h"
#import "PXGMetalRenderer.h"
#import "PXGLayout.h"
#import "PXScrollViewController.h"
#import "PXGAnchor.h"
#import "PXScrollViewSpeedometer.h"
#import "PXUpdater.h"
#import "PXGViewRenderer.h"

@interface PXGView : UIView <PXDiagnosticsEnvironment, PXGEngineDelegate, PXScrollViewControllerObserver, PXGLayoutScrollDelegate, PXGLayoutViewDelegate, PXSettingsKeyObserver, UIGestureRecognizerDelegate, PXGAXResponder, PXGDiagnosticsProvider, PXDebugHierarchyProvider, PXTapToRadarDiagnosticProvider, PXGHitTestEnvironment>

 {
    PXGDebugHUDLayer *_debugHUDLayer;
    PXGRectDiagnosticsLayer *_rectDiagnosticsLayer;
    PXGAXCoalescingResponder *_coalescingAXResponder;
    UIColor *_backgroundColor;
}


@property (weak, nonatomic) NSObject<PXGViewAccessibilityDelegate> *accessibilityDelegate; // ivar: _accessibilityDelegate
@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: axNextResponder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *debugHierarchyIdentifiers;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (retain, nonatomic) NSObject<PXGViewDiagnosticsSource> *diagnosticsSource; // ivar: _diagnosticsSource
@property (readonly, nonatomic) PXGEngine *engine; // ivar: _engine
@property (readonly, nonatomic) BOOL hasExtendedColorDisplay;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets hitTestPadding; // ivar: _hitTestPadding
@property (nonatomic) BOOL isAccessibilityEnabled; // ivar: _isAccessibilityEnabled
@property (nonatomic) BOOL isAnimatingScroll; // ivar: _isAnimatingScroll
@property (nonatomic) BOOL isSceneBackgrounded; // ivar: _isSceneBackgrounded
@property (nonatomic) BOOL isScrolling; // ivar: _isScrolling
@property (nonatomic) BOOL lowMemoryModeEnabled; // ivar: _lowMemoryModeEnabled
@property (readonly, nonatomic) PXGMetalRenderer *metalRenderer; // ivar: _metalRenderer
@property (readonly, nonatomic) MTKView *metalView; // ivar: _metalView
@property (copy, nonatomic) id *nextDidLayoutHandler; // ivar: _nextDidLayoutHandler
@property (nonatomic) NSUInteger offscreenEffectQuality; // ivar: _offscreenEffectQuality
@property (copy, nonatomic, setter=ppt_setCurrentTestOptions:) NSDictionary *ppt_currentTestOptions; // ivar: _ppt_currentTestOptions
@property (readonly, nonatomic) NSDictionary *ppt_extraResults;
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *ppt_mainScrollView;
@property (readonly, nonatomic) NSString *preferredFileNameForExportingDebugHierarchy;
@property (nonatomic) BOOL resizeDrawableManually; // ivar: _resizeDrawableManually
@property (retain, nonatomic) PXGLayout *rootLayout;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (retain, nonatomic) PXGAnchor *scrollingAnimationAnchor; // ivar: _scrollingAnimationAnchor
@property (readonly, nonatomic) PXScrollViewSpeedometer *scrollingSpeedometer; // ivar: _scrollingSpeedometer
@property (nonatomic) BOOL shouldScrollViewContentInsetAlwaysAdjustToAvoidSafeArea; // ivar: _shouldScrollViewContentInsetAlwaysAdjustToAvoidSafeArea
@property (nonatomic) BOOL shouldWorkaround18475431; // ivar: _shouldWorkaround18475431
@property (nonatomic) BOOL showDebugHUD; // ivar: _showDebugHUD
@property (nonatomic) BOOL showPerspectiveDebug; // ivar: _showPerspectiveDebug
@property (nonatomic) BOOL slowAnimationsEnabled;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXGViewRenderer *viewRenderer; // ivar: _viewRenderer


+(BOOL)forceAccessibilityEnabled;
+(NSInteger)screenPixelCount;
+(NSUInteger)supportLevel;
+(id)allDescriptions;
+(id)debugHierarchyChildGroupingID;
+(id)debugHierarchyObjectsInGroupWithID:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 ;
+(void)enumerateAllViewsUsingBlock:(id)arg0 ;
+(void)setForceAccessibilityEnabled:(BOOL)arg0 ;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)engine:(id)arg0 shouldRenderLayout:(id)arg1 sprites:(id)arg2 ;
-(BOOL)exportDebugHierarchyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)handlePrimaryStoryInteractionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isObjectReference:(id)arg0 visuallyBeforeObjectReference:(id)arg1 ;
-(BOOL)isVisible;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)backgroundColor;
-(id)contentCoordinateSpaceForLayout:(id)arg0 ;
-(id)curatedLibraryHitTestResultsInRect:(struct CGRect )arg0 withControl:(NSInteger)arg1 ;
-(id)dropTargetObjectReferenceForLocation:(struct CGPoint )arg0 ;
-(id)firstCuratedLibraryHitTestResultsAtPoint:(struct CGPoint )arg0 withControl:(NSInteger)arg1 ;
-(id)handleStoryTouchAtPoint:(SEL)arg0 ;
-(id)hitTestResultAtPoint:(struct CGPoint )arg0 ;
-(id)hitTestResultAtPoint:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 passingTest:(id)arg2 ;
-(id)hitTestResultsAtPoint:(struct CGPoint )arg0 ;
-(id)hitTestResultsAtPoint:(struct CGPoint )arg0 padding:(struct UIEdgeInsets )arg1 passingTest:(id)arg2 ;
-(id)hitTestResultsAtPoint:(struct CGPoint )arg0 withIdentifiers:(id)arg1 ;
-(id)hitTestResultsInDirection:(NSUInteger)arg0 fromSpriteReference:(id)arg1 ;
-(id)hitTestResultsInRect:(struct CGRect )arg0 passingTest:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 allowedPresentationTypes:(id)arg1 ;
-(id)layout:(id)arg0 viewForSpriteIndex:(unsigned int)arg1 ;
-(id)preferredFocusEnvironments;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)regionOfInterestForHitTestResult:(id)arg0 ;
-(id)regionOfInterestForObjectReference:(id)arg0 ;
-(id)regionOfInterestForSpriteReference:(id)arg0 ;
-(id)storyHitTestResultAtPoint:(struct CGPoint )arg0 ;
-(id)trackingContainerViewForSpriteIndex:(unsigned int)arg0 ;
-(id)viewForSpriteIndex:(unsigned int)arg0 ;
-(id)viewForSpriteReference:(id)arg0 ;
-(struct CGImage *)textureSnapshotForSpriteReference:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromLayout:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toLayout:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromLayout:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toLayout:(id)arg1 ;
-(void)_ensureEndAnimatedScroll;
-(void)_handleSceneDidEnterBackground:(id)arg0 ;
-(void)_handleSceneWillEnterForeground:(id)arg0 ;
-(void)_installNextDidLayoutHandler:(id)arg0 ;
-(void)_invalidateScrollableAxis;
-(void)_setNeedsUpdate;
-(void)_updateAccessibility;
-(void)_updateDebugHUD;
-(void)_updateEngineLowMemoryMode;
-(void)_updateFocusItemProvider;
-(void)_updateIsVisible;
-(void)_updateLayoutScreenScale;
-(void)_updateLayoutViewEnvironment;
-(void)_updateMetalView;
-(void)_updateRectDiagnosticsLayer;
-(void)_updateScrollableAxis;
-(void)_updateUserInterfaceDirection;
-(void)_willChangeBoundsSizeFrom:(struct CGRect )arg0 toBounds:(struct CGRect )arg1 ;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)disablePreheating;
-(void)engine:(id)arg0 updateDebugHUDWithStats:(struct ? *)arg1 ;
-(void)engineSetNeedsUpdate:(id)arg0 ;
-(void)ensureUpdatedLayout;
-(void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint )arg0 usingBlock:(id)arg1 ;
-(void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint )arg0 withControls:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateCuratedLibraryHitTestResultsInDirection:(NSUInteger)arg0 fromSpriteReference:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateCuratedLibraryHitTestResultsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateDebugHierarchyWithIdentifier:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)forceFullUpdate;
-(void)forceUpdate;
-(void)handlePan:(id)arg0 ;
-(void)installAnimationRenderingCompletionHandler:(id)arg0 ;
-(void)installLayoutCompletionHandler:(id)arg0 ;
-(void)installRenderingCompletionHandler:(id)arg0 ;
-(void)notifyContentFullyLoadedWithTimeout:(CGFloat)arg0 block:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)ppt_cleanUpAfterTest:(id)arg0 isScrollTest:(BOOL)arg1 ;
-(void)ppt_prepareForTest:(id)arg0 withOptions:(id)arg1 isScrollTest:(BOOL)arg2 ;
-(void)registerAllTextureProvidersWithMediaProvider:(id)arg0 ;
-(void)registerAllTextureProvidersWithMediaProvider:(id)arg0 pixelBufferSourcesProvider:(id)arg1 namedImagesBundle:(id)arg2 ;
-(void)registerTextureProvider:(id)arg0 forMediaKind:(int)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)scrollViewControllerDidEndScrolling:(id)arg0 ;
-(void)scrollViewControllerDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewControllerDidLayoutSubviews:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrollingAnimation:(id)arg0 towardsContentEdges:(NSUInteger)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setNeedsUpdateOfScrollableAxisForLayout:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)test_installRenderSnapshotHandler:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif