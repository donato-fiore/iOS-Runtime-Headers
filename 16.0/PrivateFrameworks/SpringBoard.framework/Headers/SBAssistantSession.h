// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBASSISTANTSESSION_H
#define SBASSISTANTSESSION_H

@class SBWindow<SBAssistantWindowProtocol>, NSString, BSEventQueue, UIApplicationSceneDeactivationAssertion, SiriPresentationOptions, SiriPresentationSpringBoardMainScreenViewController;
@protocol CSExternalBehaviorProviding, SBAssistantGestureManagerDelegate, BSInvalidatable, SBAssistantSessionDelegate;

#import <Foundation/Foundation.h>

#import "SBFluidDismissalState.h"
#import "SBAssistantRootViewController.h"
#import "SBAssistantContext.h"
#import "SBAssistantGestureManager.h"
#import "SBWindow.h"
#import "SBWindowScene.h"

@interface SBAssistantSession : NSObject <CSExternalBehaviorProviding, SBAssistantGestureManagerDelegate>

 {
    SBFluidDismissalState *_fluidDismissalState;
    id<BSInvalidatable> *_traitsOrientationPolicySpecifier;
}


@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (retain, nonatomic) SBWindow<SBAssistantWindowProtocol> *assistantWindow; // ivar: _assistantWindow
@property (readonly, nonatomic) SBAssistantContext *context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BSInvalidatable> *deferOrientationUpdatesAssertion; // ivar: _deferOrientationUpdatesAssertion
@property (weak, nonatomic) NSObject<SBAssistantSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BSInvalidatable> *displayLayoutAssertion; // ivar: _displayLayoutAssertion
@property (retain, nonatomic) SBAssistantGestureManager *gestureManager; // ivar: _gestureManager
@property (nonatomic) BOOL hasDismissed; // ivar: _hasDismissed
@property (nonatomic) BOOL hasPresented; // ivar: _hasPresented
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BSInvalidatable> *hideApplicationModelAlertsAssertion; // ivar: _hideApplicationModelAlertsAssertion
@property (nonatomic, getter=isHidingOtherWindows) BOOL hidingOtherWindows; // ivar: _hidingOtherWindows
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) BSEventQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion; // ivar: _resignActiveAssertion
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly, nonatomic) SiriPresentationOptions *siriPresentationOptions; // ivar: _siriPresentationOptions
@property (readonly, nonatomic) SiriPresentationSpringBoardMainScreenViewController *siriPresentationViewController; // ivar: _siriPresentationViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationAssertion; // ivar: _suspendWallpaperAnimationAssertion
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (readonly, nonatomic) SBWindow *window;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;


-(BOOL)contentObscuresScreen;
-(id)_newTraitsOrientationPolicySpecifier;
-(id)initWithSiriPresentationViewController:(id)arg0 siriPresentationOptions:(id)arg1 gestureConfiguration:(id)arg2 windowScene:(id)arg3 context:(id)arg4 operationQueue:(id)arg5 ;
-(void)_dockFrameDidChange:(id)arg0 ;
-(void)_notifyViewDidAppear;
-(void)_notifyViewDidDisappear;
-(void)_notifyViewWillAppear;
-(void)_notifyViewWillDisappear;
-(void)_restoreOrientation;
-(void)_setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_setStatusBarHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_toggleModalAlertHidingAssertion:(BOOL)arg0 ;
-(void)_updateDockViewFrame:(struct CGRect )arg0 ;
-(void)_updateOrbLocation:(id)arg0 ;
-(void)_updateOrientationLock;
-(void)_viewDidAppear:(BOOL)arg0 ;
-(void)_viewDidDisappear:(BOOL)arg0 ;
-(void)_viewWillAppear:(BOOL)arg0 ;
-(void)_viewWillDisappear:(BOOL)arg0 ;
-(void)assertWindowLevel:(CGFloat)arg0 ;
-(void)assistantGestureManagerDidRecognizeDismissGesture:(id)arg0 preferredDismissalOptions:(id)arg1 ;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dealloc;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 completion:(id)arg1 ;
-(void)dismissWithFactory:(id)arg0 dismissalOptions:(id)arg1 completion:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentWithFactory:(id)arg0 completion:(id)arg1 ;


@end


#endif