// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHELFLIVECONTENTOVERLAYCOORDINATOR_H
#define SBSHELFLIVECONTENTOVERLAYCOORDINATOR_H

@class NSMutableDictionary, NSString;
@protocol SBAppSwitcherSnapshotImageCacheObserver, SBSwitcherLiveContentOverlayCoordinating, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBShelfLiveContentOverlayCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface SBShelfLiveContentOverlayCoordinator : NSObject <SBAppSwitcherSnapshotImageCacheObserver, SBSwitcherLiveContentOverlayCoordinating>

 {
    NSMutableDictionary *_leafAppLayoutsToOverlays;
    BOOL _isSnapshotCacheObserver;
}


@property (nonatomic) NSInteger containerOrientation; // ivar: containerOrientation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayCoordinatorDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended; // ivar: liveContentOverlayUpdatesSuspended
@property (readonly, weak, nonatomic) NSObject<SBShelfLiveContentOverlayCoordinatorDelegate> *shelfDelegate; // ivar: _shelfDelegate
@property (readonly) Class superclass;


-(BOOL)performSwitcherKeyboardShortcutAction:(NSInteger)arg0 ;
-(BOOL)wantsEdgeProtectForHomeGestureForAppLayout:(id)arg0 ;
-(BOOL)wantsHomeAffordanceAutoHideForAppLayout:(id)arg0 ;
-(id)appLayoutForKeyboardFocusedScene;
-(id)initWithShelfDelegate:(id)arg0 ;
-(id)liveAppLayoutsMatchingKeyboardFocusedApp:(BOOL)arg0 foundAtIndex:(*NSInteger)arg1 ;
-(void)_addOverlaysIfNeededForTransitionContext:(id)arg0 ;
-(void)appLayoutDidBecomeHidden:(id)arg0 ;
-(void)appLayoutWillBecomeVisible:(id)arg0 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)didUpdateCacheEntry:(id)arg0 ;
-(void)invalidate;
-(void)itemContainerForAppLayout:(id)arg0 willBeReusedForAppLayout:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)willRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 alongsideContainerView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif