// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUISIRIREMOTESCENEVIEWCONTROLLER_H
#define AFUISIRIREMOTESCENEVIEWCONTROLLER_H

@class NSArray, NSString, NSXPCConnection, AFApplicationInfo;
@protocol AFUIViewControllerHosting, SiriUIPresentationRemoteControlling, AFUISiriRemoteSceneViewControllerDataSource, AFUISiriRemoteSceneViewControllerDelegate;


#import "AFUISceneHostingViewController.h"

@interface AFUISiriRemoteSceneViewController : AFUISceneHostingViewController <AFUIViewControllerHosting, SiriUIPresentationRemoteControlling>

 {
    BOOL _connectionHasBeenResumed;
    NSArray *_audioCategoriesDisablingVolumeHUD;
    BOOL _expectingInvalidation;
}


@property (weak, nonatomic) NSObject<AFUISiriRemoteSceneViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUISiriRemoteSceneViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *remoteConnection; // ivar: _remoteConnection
@property (readonly) Class superclass;
@property (readonly, nonatomic) AFApplicationInfo *viewServiceApplicationInfo; // ivar: _viewServiceApplicationInfo


+(id)exportedInterface;
+(id)remoteObjectInterface;
-(BOOL)_canShowWhileLocked;
-(id)_connection;
-(id)init;
-(id)serviceViewControllerProxy;
-(id)serviceViewControllerProxyWithErrorHandler:(id)arg0 ;
-(id)sessionDelegate;
-(void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg0 ;
-(void)_handleInvalidationForReason:(NSUInteger)arg0 explanation:(id)arg1 ;
-(void)_handleSceneDidActivateWithIdentifier:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)applicationDidBecomeActive;
-(void)applicationWillEnterForeground;
-(void)applicationWillResignActive;
-(void)dealloc;
-(void)didReceiveBugButtonLongPress;
-(void)didReceiveHelpAction;
-(void)didReceiveOrbViewTapToCancelRequest;
-(void)didReceiveReportBugAction;
-(void)didReceiveShortTapActionWithRequestOptions:(id)arg0 ;
-(void)didSuccessfullyHandleCommandsInDelayedActionCommand:(id)arg0 ;
-(void)emitInstrumentationEvent:(id)arg0 ;
-(void)emitInstrumentationEvent:(id)arg0 atTime:(NSUInteger)arg1 ;
-(void)emitUIStateTransitionForSiriDismissalWithDismissalReason:(int)arg0 completion:(id)arg1 ;
-(void)getScreenshotWithReplyHandler:(id)arg0 ;
-(void)handlePasscodeUnlockWithCompletion:(id)arg0 ;
-(void)hasContentAtPoint:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)invalidateSystemApertureAssertion;
-(void)openURL:(id)arg0 bundleId:(id)arg1 inPlace:(BOOL)arg2 completion:(id)arg3 ;
-(void)orientationWillChangeTo:(NSInteger)arg0 ;
-(void)preloadPluginBundles;
-(void)preloadPresentationBundleWithIdentifier:(id)arg0 ;
-(void)presentationDidPresentKeyboard;
-(void)presentationStateUpdatedFromPresentationState:(NSInteger)arg0 toPresentationState:(NSInteger)arg1 ;
-(void)pulseHelpButton;
-(void)requestHostBlurVisible:(BOOL)arg0 reason:(NSInteger)arg1 fence:(id)arg2 ;
-(void)requestSystemApertureCollapse;
-(void)sceneController:(id)arg0 willInvalidateScene:(id)arg1 forReason:(NSUInteger)arg2 ;
-(void)serviceBulletinWithIdentifier:(id)arg0 replyHandler:(id)arg1 ;
-(void)serviceCancelHIDEventDefferal;
-(void)serviceDidDetectAudioRoutePickerTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDismissViewControllerWithStatusBarStyle:(NSInteger)arg0 ;
-(void)serviceDidEndEditing;
-(void)serviceDidEnterUITrackingMode;
-(void)serviceDidExitUITrackingMode;
-(void)serviceDidPresentConversationFromBreadcrumb;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentViewControllerWithStatusBarStyle:(NSInteger)arg0 ;
-(void)serviceDidRequestCurrentTextInput:(id)arg0 ;
-(void)serviceDidRequestKeyboard:(BOOL)arg0 ;
-(void)serviceDidRequestKeyboard:(BOOL)arg0 minimized:(BOOL)arg1 ;
-(void)serviceDidResetTextInput;
-(void)servicePresentationDidChangePeekMode:(NSUInteger)arg0 ;
-(void)servicePresentedIntentWithBundleId:(id)arg0 ;
-(void)serviceRequestsActivationSourceWithReplyHandler:(id)arg0 ;
-(void)serviceRequestsDismissalWithUserInfo:(id)arg0 withReason:(NSUInteger)arg1 ;
-(void)serviceRequestsHIDEventDefferal;
-(void)serviceStartGuidedAccess;
-(void)serviceStartRequestWithOptions:(id)arg0 ;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceViewControllerRequestsDismissalWithDismissalReason:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)serviceViewControllerRequestsKeyboardWithCompletion:(id)arg0 ;
-(void)serviceViewControllerRequestsPresentation:(id)arg0 ;
-(void)serviceWillBeginEditing;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(NSInteger)arg0 ;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(NSInteger)arg0 ;
-(void)setBottomContentInset:(CGFloat)arg0 ;
-(void)setBugReportingAvailable:(BOOL)arg0 ;
-(void)setCarDisplaySnippetMode:(NSInteger)arg0 ;
-(void)setFullScreenDimmingLayerVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg0 ;
-(void)setRequestHandlingStatus:(NSUInteger)arg0 ;
-(void)setRequestOptions:(id)arg0 ;
-(void)setSession:(id)arg0 ;
-(void)setShouldDismissForSwipesOutsideContent:(BOOL)arg0 ;
-(void)setShouldDismissForTapOutsideContent:(BOOL)arg0 ;
-(void)setShouldDismissForTapsOutsideContent:(BOOL)arg0 ;
-(void)setShouldPassTouchesThroughToSpringBoard:(BOOL)arg0 ;
-(void)setStatusBarFrame:(struct CGRect )arg0 ;
-(void)setStatusBarHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setStatusViewDisabled:(BOOL)arg0 ;
-(void)setStatusViewHeight:(CGFloat)arg0 ;
-(void)setStatusViewHidden:(BOOL)arg0 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg0 ;
-(void)setSystemContentEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)setSystemContentFrame:(struct CGRect )arg0 ;
-(void)setTypeToSiriViewHidden:(BOOL)arg0 ;
-(void)setWaitingForTelephonyToStart:(BOOL)arg0 ;
-(void)showPresentationWithIdentifier:(id)arg0 properties:(id)arg1 lockState:(NSUInteger)arg2 ;
-(void)siriDidActivateFromSource:(NSInteger)arg0 ;
-(void)siriDidDeactivate;
-(void)siriDidHidePasscodeUnlock;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg0 ;
-(void)siriKeyboardViewDidChange:(struct ? *)arg0 ;
-(void)siriWillActivateFromSource:(NSInteger)arg0 ;
-(void)siriWillBeginTearDownForDismissalReason:(NSUInteger)arg0 withOriginalDismissalOptions:(id)arg1 ;
-(void)siriWillHidePasscodeUnlockForResult:(NSInteger)arg0 ;
-(void)siriWillShowPasscodeUnlock;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg0 ;
-(void)startHostingSceneForConfiguration:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)startRequestForText:(id)arg0 ;
-(void)takeScreenshotWithCompletion:(id)arg0 ;
-(void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(NSInteger)arg0 ;
-(void)updateToPresentationWithIdentifier:(id)arg0 presentationProperties:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif