// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHIDESHAREPLAYCONTENTFROMSHAREDSCREENCONTROLLER_H
#define SBHIDESHAREPLAYCONTENTFROMSHAREDSCREENCONTROLLER_H

@class NSHashTable, UIViewController, NSMutableSet, UIWindow, CALayer, NSString;
@protocol SBBannerManagerTransitionObserver, SBDraggingSystemObserver, SBMousePointerHardwareConnectionObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBHideSharePlayContentFromSharedScreenController : NSObject <SBBannerManagerTransitionObserver, SBDraggingSystemObserver, SBMousePointerHardwareConnectionObserver>

 {
    NSHashTable *_trackedPresentables;
    NSHashTable *_windowsBeingHiddenWithDisableUpdateMask;
    NSHashTable *_viewControllersWithDisableUpdateMasks;
    UIViewController *_pipViewControllerBeingHiddenWithDisableUpdateMask;
    NSMutableSet *_activeAssertions;
    UIWindow *_cloneTerminatingWindow;
    CALayer *_cloneTerminatingLayer;
    BOOL _isControlCenterFullyPresentedOnMainDisplay;
    NSInteger _numberOfActiveDragSessions;
    id<BSInvalidatable> *_simulatedAssertion;
    BOOL _isObservingPIPWindowLevelsAndVisibility;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShareDaemonScenes;
-(BOOL)_deviceHasDaemonSceneThatShouldBeShared;
-(BOOL)_deviceHasDaemonSceneThatShouldBeSharedIfPossible;
-(BOOL)_isCoverSheetFullyPresented;
-(BOOL)_isCoverSheetVisible;
-(BOOL)_isPipViewControllerToHideOnMainDisplay;
-(CGFloat)_coverSheetWindowLevel;
-(id)_pipViewControllerToHide;
-(id)_systemNotesWindow;
-(id)acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)arg0 ;
-(id)init;
-(void)_addAssertion:(id)arg0 ;
-(void)_handleControlCenterDidPresent;
-(void)_handleControlCenterWillDismiss;
-(void)_removeAssertion:(id)arg0 ;
-(void)_resolveHidingBehavior;
-(void)_startHidingViewControllerFromClonedDisplaysIfNeeded:(id)arg0 ;
-(void)_startHidingWindowFromClonedDisplaysIfNeeded:(id)arg0 ;
-(void)_startObservingForActiveHideAssertionIfNeeded;
-(void)_startTrackingPresentable:(id)arg0 ;
-(void)_stopHidingViewControllerFromClonedDisplaysIfNeeded:(id)arg0 ;
-(void)_stopHidingWindowFromClonedDisplaysIfNeeded:(id)arg0 ;
-(void)_stopObservingForActiveHideAssertionIfNeeded;
-(void)_stopTrackingPresentable:(id)arg0 ;
-(void)_windowVisibilityDidChange:(id)arg0 ;
-(void)bannerManager:(id)arg0 willDismissPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)bannerManager:(id)arg0 willPresentPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)bannerManagerDidUpdateWindowLevel:(id)arg0 ;
-(void)dealloc;
-(void)dragSessionDidBegin:(id)arg0 ;
-(void)dragSessionDidEnd:(id)arg0 ;
-(void)mousePointerManager:(id)arg0 hardwarePointingDeviceAttachedDidChange:(BOOL)arg1 ;


@end


#endif