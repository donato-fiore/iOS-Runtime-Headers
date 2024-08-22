// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUIDISPLAYMANAGER_H
#define AXUIDISPLAYMANAGER_H

@class SBSSystemApertureLayoutMonitor, NSMutableDictionary, NSString, SBSAccessibilityWindowHostingController;
@protocol UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate, SBSSystemApertureLayoutMonitoring;

#import <Foundation/Foundation.h>

#import "AXUIAlertStyleProvider.h"
#import "AXUIServiceManager.h"

@interface AXUIDisplayManager : NSObject <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate, SBSSystemApertureLayoutMonitoring>

 {
    SBSSystemApertureLayoutMonitor *_layoutMonitor;
    CGRect _foreheadRect;
}


@property (retain, nonatomic) NSMutableDictionary *activeContentViewControllers; // ivar: _activeContentViewControllers
@property (nonatomic) NSInteger activeInterfaceOrientation; // ivar: _activeInterfaceOrientation
@property (retain, nonatomic) NSMutableDictionary *activeWindows; // ivar: _activeWindows
@property (retain, nonatomic) NSMutableDictionary *addContentViewControllerBlocks; // ivar: _addContentViewControllerBlocks
@property (retain, nonatomic) NSMutableDictionary *alertQueues; // ivar: _alertQueues
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AXUIAlertStyleProvider *defaultAlertStyleProvider; // ivar: _defaultAlertStyleProvider
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *externalScenes; // ivar: _externalScenes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *mainScenes; // ivar: _mainScenes
@property (retain, nonatomic) NSMutableDictionary *nubbitContexts; // ivar: _nubbitContexts
@property (nonatomic) NSUInteger numberOfAttemptsToInitializeActiveInterfaceOrientation; // ivar: _numberOfAttemptsToInitializeActiveInterfaceOrientation
@property (retain, nonatomic) NSMutableDictionary *passiveContentViewControllers; // ivar: _passiveContentViewControllers
@property (retain, nonatomic) NSMutableDictionary *passiveWindows; // ivar: _passiveWindows
@property (copy, nonatomic) NSString *reachabilityHandlerIdentifier; // ivar: _reachabilityHandlerIdentifier
@property (nonatomic) CGFloat reachabilityOffset; // ivar: _reachabilityOffset
@property (retain, nonatomic) NSMutableDictionary *sceneClients; // ivar: _sceneClients
@property (weak, nonatomic) AXUIServiceManager *serviceManager; // ivar: _serviceManager
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemServerActionHandlerIdentifier; // ivar: _systemServerActionHandlerIdentifier
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (retain, nonatomic) NSMutableDictionary *visibleAlertContexts; // ivar: _visibleAlertContexts
@property (retain, nonatomic) SBSAccessibilityWindowHostingController *windowHostingController; // ivar: _windowHostingController


+(id)sharedDisplayManager;
-(BOOL)_axIsPointInForeheadRect:(struct CGPoint )arg0 ;
-(BOOL)_hasVisibleAlertWithType:(NSUInteger)arg0 ;
-(BOOL)_serviceWantsToPreventAutorotation:(id)arg0 ;
-(BOOL)sceneRequestedForSceneClientIdentifier:(id)arg0 ;
-(CGFloat)_originalDurationForRotationFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 withAdjustedDuration:(CGFloat)arg2 ;
-(CGFloat)desiredWindowLevelForService:(id)arg0 forContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(id)_boundingViewForNubbit:(id)arg0 ;
-(id)_contentViewControllersWithUserInteractionEnabled:(BOOL)arg0 forService:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_gravityBehaviorForNubbit:(id)arg0 velocity:(struct CGPoint )arg1 boundingView:(id)arg2 ;
-(id)_nubbitContextForGestureRecognizer:(id)arg0 ;
-(id)_nubbitContextKeyForNubbit:(id)arg0 ;
-(id)_transactionIdentifierForDisplayingAlertWithContext:(id)arg0 service:(id)arg1 ;
-(id)_transactionIdentifierForDisplayingContentViewController:(id)arg0 service:(id)arg1 ;
-(id)_windowWithUserInteractionEnabled:(BOOL)arg0 windowLevel:(CGFloat)arg1 createIfNeeded:(BOOL)arg2 purposeIdentifier:(id)arg3 ;
-(id)_windowWithUserInteractionEnabled:(BOOL)arg0 windowLevel:(CGFloat)arg1 createIfNeeded:(BOOL)arg2 purposeIdentifier:(id)arg3 userInterfaceStyle:(NSInteger)arg4 allowSystemAppHosting:(BOOL)arg5 windowScene:(id)arg6 savedWindowScene:(id)arg7 ;
-(id)contentViewControllersWithUserInteractionEnabled:(BOOL)arg0 forService:(id)arg1 ;
-(id)init;
-(id)initWithServiceManager:(id)arg0 ;
-(id)showAlertWithText:(id)arg0 subtitleText:(id)arg1 iconImage:(id)arg2 type:(NSUInteger)arg3 forService:(id)arg4 ;
-(id)showAlertWithText:(id)arg0 subtitleText:(id)arg1 iconImage:(id)arg2 type:(NSUInteger)arg3 priority:(NSUInteger)arg4 duration:(CGFloat)arg5 forService:(id)arg6 ;
-(id)showAlertWithText:(id)arg0 subtitleText:(id)arg1 iconImage:(id)arg2 type:(NSUInteger)arg3 priority:(NSUInteger)arg4 duration:(CGFloat)arg5 userInfo:(id)arg6 forService:(id)arg7 ;
-(id)windowSceneForSceneClientIdentifier:(id)arg0 external:(BOOL)arg1 ;
-(void)_addContentViewController:(id)arg0 toWindow:(id)arg1 forService:(id)arg2 context:(*void)arg3 completion:(id)arg4 ;
-(void)_addDynamicAnimationsForNubbitContext:(id)arg0 ;
-(void)_attemptToInitializeActiveInterfaceOrientation;
-(void)_beginMoveForNubbitContext:(id)arg0 ;
-(void)_changeNubbitPositionForNubbitContext:(id)arg0 ;
-(void)_didHideOrDequeueAlertWithContext:(id)arg0 ;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)_disposeOfContentViewControllersWithUserInteractionEnabled:(BOOL)arg0 forService:(id)arg1 ;
-(void)_endMoveForNubbitContext:(id)arg0 ;
-(void)_enumerateWindowsUsingBlock:(id)arg0 ;
-(void)_externalDisplaySceneConnected:(id)arg0 forSceneClientIdentifier:(id)arg1 ;
-(void)_externalDisplaySceneDisconnected:(id)arg0 forSceneClientIdentifier:(id)arg1 ;
-(void)_handleMoveNubbitGestureRecognizer:(id)arg0 ;
-(void)_handleNextAlertForType:(NSUInteger)arg0 ;
-(void)_hideAlertWithContext:(id)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)_reachabilityToggledWithPayload:(id)arg0 ;
-(void)_reapHiddenWindows;
-(void)_removeContentViewController:(id)arg0 forService:(id)arg1 completion:(id)arg2 ;
-(void)_removeDynamicAnimationsForNubbitContext:(id)arg0 ;
-(void)_scheduleFadeForNubbitContext:(id)arg0 ;
-(void)_showAlertWithContext:(id)arg0 ;
-(void)_showOrEnqueueAlertWithContext:(id)arg0 ;
-(void)_undoFadeForNubbitContext:(id)arg0 ;
-(void)_windowSceneConnected:(id)arg0 forSceneClientIdentifier:(id)arg1 ;
-(void)_windowSceneDisconnected:(id)arg0 forSceneClientIdentifier:(id)arg1 ;
-(void)addContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 ;
-(void)addContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 allowSystemAppHosting:(BOOL)arg3 ;
-(void)addContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 context:(*void)arg3 completion:(id)arg4 ;
-(void)addContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 context:(*void)arg3 userInterfaceStyle:(NSInteger)arg4 allowSystemAppHosting:(BOOL)arg5 forWindowScene:(id)arg6 completion:(id)arg7 ;
-(void)addContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 context:(*void)arg3 userInterfaceStyle:(NSInteger)arg4 completion:(id)arg5 ;
-(void)addContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 forSceneClientIdentifier:(id)arg3 ;
-(void)addContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 forSceneClientIdentifier:(id)arg3 context:(*void)arg4 userInterfaceStyle:(NSInteger)arg5 allowSystemAppHosting:(BOOL)arg6 forWindowScene:(id)arg7 completion:(id)arg8 ;
-(void)cancelNubbitFade:(id)arg0 ;
-(void)collisionBehavior:(id)arg0 beganContactForItem:(id)arg1 withBoundaryIdentifier:(id)arg2 atPoint:(struct CGPoint )arg3 ;
-(void)dealloc;
-(void)destroyWindowSceneIfNeeded:(id)arg0 ;
-(void)dynamicAnimatorDidPause:(id)arg0 ;
-(void)enumerateContentViewControllersUsingBlock:(id)arg0 ;
-(void)hideAlertWithIdentifier:(id)arg0 forService:(id)arg1 ;
-(void)pinNubbitToEdge:(id)arg0 ;
-(void)registerNubbit:(id)arg0 delegate:(id)arg1 ;
-(void)removeContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 ;
-(void)removeContentViewController:(id)arg0 withUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 context:(*void)arg3 completion:(id)arg4 ;
-(void)removeWindowSceneForSceneClientIdentifier:(id)arg0 external:(BOOL)arg1 ;
// -(void)saveAddContentViewControllerBlock:(id)arg0 forSceneClientIdentifier:(unk)arg1  ;
-(void)saveWindowScene:(id)arg0 forSceneClientIdentifier:(id)arg1 external:(BOOL)arg2 ;
-(void)serviceDidConnect:(id)arg0 clientWithIdentifier:(id)arg1 ;
-(void)systemApertureLayoutDidChange:(id)arg0 ;
-(void)systemAppServerReady;
-(void)unregisterNubbit:(id)arg0 ;
-(void)unregisterNubbit:(id)arg0 shouldUndoFade:(BOOL)arg1 ;


@end


#endif