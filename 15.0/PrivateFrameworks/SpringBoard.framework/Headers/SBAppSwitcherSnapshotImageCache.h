// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERSNAPSHOTIMAGECACHE_H
#define SBAPPSWITCHERSNAPSHOTIMAGECACHE_H

@class NSMutableDictionary, NSArray, NSString;
@protocol SBUIActiveOrientationObserver, OS_dispatch_queue, BSInvalidatable, SBAppSwitcherSnapshotImageCacheDelegate;

#import <Foundation/Foundation.h>

#import "SBAppSwitcherSettings.h"
#import "SBIconController.h"
#import "SBApplicationController.h"
#import "SBOrientationLockManager.h"

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver>

 {
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_cacheEntryUpdateObservers;
    NSMutableDictionary *_snapshotRequestsCurrentlyBeingLoaded;
    NSUInteger _snapshotRequestSequenceID;
    NSInteger _lastKnownInterfaceOrientation;
    NSInteger _lastKnownUserInterfaceStyle;
    SBAppSwitcherSettings *_settings;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    BOOL _shouldPurgeNilEntries;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
}


@property (copy, nonatomic) NSArray *cachableAppLayouts; // ivar: _queue_cachableAppLayouts
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName; // ivar: _debugName
@property (weak, nonatomic) NSObject<SBAppSwitcherSnapshotImageCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *fullSizeCachableAppLayouts; // ivar: _queue_fullSizeCachableAppLayouts
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL reloadsSnapshotsForActiveInterfaceOrientationChange; // ivar: _reloadsSnapshotsForActiveInterfaceOrientationChange
@property (readonly) Class superclass;


-(BOOL)_isValidAppLayout:(id)arg0 withSnapshot:(id)arg1 givenCachableAppLayouts:(id)arg2 ;
-(BOOL)_isValidSnapshotRequest:(id)arg0 ;
-(BOOL)_keepGoingForRequest:(id)arg0 ;
-(CGFloat)_scaleForDownscaledSnapshotsForAppLayout:(id)arg0 ;
-(NSInteger)_orientationForAppLayout:(id)arg0 ;
-(id)_appLayoutsInPriorityOrder;
-(id)_createSnapshotRequestWithDisplayItem:(id)arg0 inAppLayout:(id)arg1 forFullSizeSnapshot:(BOOL)arg2 ;
-(id)_initWithDelegate:(id)arg0 iconController:(id)arg1 applicationController:(id)arg2 orientationLockManager:(id)arg3 settings:(id)arg4 ;
-(id)_representedApplicationSceneEntityForDisplayItem:(id)arg0 ;
-(id)_uiImageForCGImage:(struct CGImage *)arg0 forSnapshotRequest:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGImage *)_createDecodedImageIfPossible:(struct CGImage *)arg0 ;
-(void)_addCacheEntryForImage:(id)arg0 fromRequest:(id)arg1 ;
-(void)_addObserver:(id)arg0 forDisplayItem:(id)arg1 inAppLayout:(id)arg2 ;
-(void)_asynchronouslyLoadSnapshotFromRequest:(id)arg0 ;
-(void)_cacheSnapshotForRequest:(id)arg0 withDisplayItem:(id)arg1 inAppLayout:(id)arg2 ;
-(void)_createDownscaledVariantForRequest:(id)arg0 snapshot:(id)arg1 displayItem:(id)arg2 sceneHandle:(id)arg3 application:(id)arg4 ;
-(void)_enqueueNextSnapshotRequestIfNecessary;
-(void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)arg0 forFullSizeSnapshots:(BOOL)arg1 ;
-(void)_loadSnapshotForRequest:(id)arg0 withDisplayItem:(id)arg1 inAppLayout:(id)arg2 ;
-(void)_purgeAllSnapshotRequests;
-(void)_purgeAllSnapshots;
-(void)_purgeLowPriorityFullSizeSnapshotRequests;
-(void)_purgeLowPriorityFullSizeSnapshots;
-(void)_purgeLowPrioritySnapshotRequests;
-(void)_purgeLowPrioritySnapshots;
-(void)_purgeSnapshotRequest:(id)arg0 withReason:(id)arg1 ;
-(void)_purgeSnapshotRequestsForDisplayItem:(id)arg0 withReason:(id)arg1 ;
-(void)_purgeSnapshotsForKey:(id)arg0 ;
-(void)_setShouldPurgeNilEntry:(BOOL)arg0 ;
-(void)_setSnapshotNeedsUpdateForDisplayItem:(id)arg0 ;
-(void)_snapshotChanged:(id)arg0 ;
-(void)_snapshotImage:(id)arg0 finishedLoadingForRequest:(id)arg1 ;
-(void)_updateActiveOrientationObservingIfNeeded;
-(void)_updateCache;
-(void)_updateCacheForDisplayItem:(id)arg0 ;
-(void)_updateObserversForDisplayItem:(id)arg0 inAppLayout:(id)arg1 withCacheEntry:(id)arg2 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)addSnapshotUpdateObserver:(id)arg0 forDisplayItem:(id)arg1 inAppLayout:(id)arg2 ;
-(void)dealloc;
-(void)reloadSnapshotForDisplayItem:(id)arg0 ;
-(void)reloadSnapshotsForInterfaceStyleChange:(NSInteger)arg0 ;
-(void)removeSnapshotObserver:(id)arg0 ;


@end


#endif