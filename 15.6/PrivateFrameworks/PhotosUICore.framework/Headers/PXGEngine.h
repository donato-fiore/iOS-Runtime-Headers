// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGENGINE_H
#define PXGENGINE_H

@class NSMutableSet, NSString, UIView<PXGHitTestEnvironment>, NSMutableArray, NSArray;
@protocol PXGLayoutUpdateDelegate, PXGTextureManagerDelegate, PXGRendererDelegate, PXTilingScrollControllerUpdateDelegate, PXChangeObserver, PXGEngineDelegate, PXDisplayLinkProtocol, PXGRenderer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGAnimator.h"
#import "PXGSpriteDataStore.h"
#import "PXGChangeDetails.h"
#import "PXGLayout.h"
#import "PXGSpriteMetadataStore.h"
#import "PXGViewEnvironment.h"
#import "PXGAXCoalescingResponder.h"
#import "PXGEntityManager.h"
#import "PXMediaProvider.h"
#import "PXScrollViewController.h"
#import "PXScrollViewSpeedometer.h"
#import "PXGTextureManager.h"

@interface PXGEngine : NSObject <PXGLayoutUpdateDelegate, PXGTextureManagerDelegate, PXGRendererDelegate, PXTilingScrollControllerUpdateDelegate, PXChangeObserver>

 {
    PXGAnimator *_animator;
    ? _delegateRespondsTo;
    PXGSpriteDataStore *_layoutSpriteDataStore;
    PXGChangeDetails *_layoutChangeDetails;
    CGPoint _viewportShift;
    CGPoint _previousVisibleOrigin;
    PXGSpriteDataStore *_animationPresentationSpriteDataStore;
    PXGSpriteDataStore *_animationTargetSpriteDataStore;
    PXGLayout *_animationLayout;
    PXGChangeDetails *_animationChangeDetails;
    PXGSpriteMetadataStore *_presentationSpriteMetadaStore;
    ? _updateFlags;
    NSUInteger _previousUpdateEntities;
    ? _previousInteractionState;
    NSUInteger _pendingUpdateEntities;
    BOOL _keepDisplayLinkAlive;
    CGFloat _renderForTargetTimestamp;
    CGFloat _lastRenderCompletionTimestamp;
    BOOL _animatorWasAnimatingAtBeginningOfFrame;
    BOOL _isUpdatingScrollView;
    BOOL _isUpdatingTextureManager;
    BOOL _isUpdatingRenderer;
    BOOL _viewSizeDidChange;
    BOOL _lowMemoryMode;
    id *_pendingIsInvisibleForSomeTimeBlock;
    BOOL _extensionHostIsInBackground;
    PXGViewEnvironment *_pendingViewEnvironment;
}


@property (readonly, nonatomic) NSMutableSet *activeInteractions; // ivar: _activeInteractions
@property (copy, nonatomic) id *animationRenderingCompletionHandler; // ivar: _animationRenderingCompletionHandler
@property (readonly, nonatomic) PXGAXCoalescingResponder *coalescingAXResponder; // ivar: _coalescingAXResponder
@property (readonly, nonatomic) NSInteger currentFrameTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL debugEngineUpdates;
@property (weak, nonatomic) NSObject<PXGEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // ivar: _didDisappear
@property (nonatomic) BOOL didRenderThisFrame; // ivar: _didRenderThisFrame
@property (readonly, nonatomic) NSObject<PXDisplayLinkProtocol> *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) NSObject<PXGRenderer> *drivingRenderer; // ivar: _drivingRenderer
@property (readonly, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (nonatomic) BOOL expectingScrollEvents; // ivar: _expectingScrollEvents
@property (nonatomic) BOOL gotScrollEventThisFrame; // ivar: _gotScrollEventThisFrame
@property (readonly) NSUInteger hash;
@property (nonatomic) ? interactionState; // ivar: _interactionState
@property (weak, nonatomic) UIView<PXGHitTestEnvironment> *interactionView; // ivar: _interactionView
@property (readonly, nonatomic) NSMutableSet *interactions; // ivar: _interactions
@property (nonatomic) BOOL isExporting; // ivar: _isExporting
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (nonatomic) BOOL isInvisibleForSomeTime; // ivar: _isInvisibleForSomeTime
@property (nonatomic) CGFloat lastScrollEventTime; // ivar: _lastScrollEventTime
@property (retain, nonatomic) PXGLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (nonatomic) BOOL lowMemoryMode;
@property (retain, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) BOOL missedScrollEventThisFrame; // ivar: _missedScrollEventThisFrame
@property (readonly, nonatomic) NSMutableArray *pendingContentLoadedNotificationBlocks; // ivar: _pendingContentLoadedNotificationBlocks
@property (readonly, nonatomic) PXGAnimator *ppt_animator;
@property (readonly, nonatomic) NSArray *renderers; // ivar: _renderers
@property (copy, nonatomic) id *renderingCompletionHandler; // ivar: _renderingCompletionHandler
@property (readonly, nonatomic) _PXGEngineScrollState scrollState; // ivar: _scrollState
@property (retain, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (retain, nonatomic) PXScrollViewSpeedometer *scrollViewSpeedometer; // ivar: _scrollViewSpeedometer
@property (nonatomic) BOOL slowAnimationsEnabled; // ivar: _slowAnimationsEnabled
@property (readonly, nonatomic) *? stats; // ivar: _stats
@property (nonatomic) BOOL statsTrackingEnabled; // ivar: _statsTrackingEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXGTextureManager *textureManager; // ivar: _textureManager
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment; // ivar: _viewEnvironment
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (nonatomic) BOOL wantsImmediateUpdates; // ivar: _wantsImmediateUpdates


-(BOOL)_isInBackground;
-(BOOL)_shouldDeferContentOffsetUpdates;
-(BOOL)_shouldDeferRenderUntilNextFrame;
-(BOOL)_shouldWaitForScrollEvent;
-(BOOL)copyPresentedSpriteFor:(id)arg0 geometry:(struct ? *)arg1 style:(struct ? *)arg2 info:(struct ? *)arg3 ;
-(id)init;
-(id)initForExportWithPixelBufferDestination:(id)arg0 layoutQueue:(id)arg1 displayLinkClass:(Class)arg2 ;
-(id)initWithAnimator:(id)arg0 renderers:(id)arg1 displayLinkClass:(Class)arg2 layoutQueue:(id)arg3 ;
-(void)__setNeedsUpdate;
-(void)_deferredInvalidate:(NSUInteger)arg0 ;
-(void)_enumerateRenderers:(id)arg0 ;
-(void)_extensionHostDidEnterBackground:(id)arg0 ;
-(void)_extensionHostWillEnterForeground:(id)arg0 ;
-(void)_forceInvalidate:(NSUInteger)arg0 ;
-(void)_handleTimeoutForNotificationBlock:(id)arg0 ;
-(void)_hasBeenInvisibleForSomeTime;
-(void)_invalidateOrDefer:(NSUInteger)arg0 ;
-(void)_notifyContentLoadedObserversIfNeeded;
-(void)_performRender;
-(void)_propagateTextureConverters;
-(void)_releaseResources;
-(void)_resetChangeDetails;
-(void)_retargetAnimations;
-(void)_setNeedsRender;
-(void)_updateAnimatorWithTargetTimestamp:(CGFloat)arg0 ;
-(void)_updateDisplayLink;
-(void)_updateIfNeededWithReason:(id)arg0 ;
-(void)_updateInteractionState;
-(void)_updateInvisibleTextureManager;
-(void)_updateLayout;
-(void)_updateLayoutInteractions;
-(void)_updateScrollStateWithReason:(NSUInteger)arg0 ;
-(void)_updateTextureManager;
-(void)allowSecondRenderThisFrame;
-(void)dealloc;
-(void)ensureUpdatedLayout;
-(void)enumerateSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)handleDisplayLink:(id)arg0 ;
-(void)handleScreensDidWakeNotification:(id)arg0 ;
-(void)layoutNeedsRenderUpdate:(id)arg0 ;
-(void)layoutNeedsUpdate:(id)arg0 ;
-(void)notifyContentFullyLoadedWithTimeout:(CGFloat)arg0 block:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)registerAllTextureProvidersWithMediaProvider:(id)arg0 ;
-(void)registerAllTextureProvidersWithMediaProvider:(id)arg0 pixelBufferSourcesProvider:(id)arg1 namedImagesBundle:(id)arg2 ;
-(void)registerTextureProvider:(id)arg0 forMediaKind:(int)arg1 ;
-(void)renderer:(id)arg0 viewportSizeWillChange:(struct CGSize )arg1 ;
-(void)rendererDidChangeTextureConverter:(id)arg0 ;
-(void)rendererNeedsUpdate:(id)arg0 ;
-(void)rendererPerformRender:(id)arg0 ;
-(void)test_installRenderSnapshotHandler:(id)arg0 ;
-(void)textureManagerNeedsUpdate:(id)arg0 ;
-(void)tilingScrollControllerDidScroll:(id)arg0 ;
-(void)tilingScrollControllerDidUpdate:(id)arg0 ;
-(void)updateIfNeeded;


@end


#endif