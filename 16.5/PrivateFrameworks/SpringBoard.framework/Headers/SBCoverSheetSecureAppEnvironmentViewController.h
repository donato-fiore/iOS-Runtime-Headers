// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOVERSHEETSECUREAPPENVIRONMENTVIEWCONTROLLER_H
#define SBCOVERSHEETSECUREAPPENVIRONMENTVIEWCONTROLLER_H

@class UIViewController, SBFTraitsParticipant, NSString, SBFZStackParticipant;
@protocol SBSystemApertureZStackPolicyAssistantDelegate, BLSBacklightStateObserving, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, SBFTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController, BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;


#import "SBTraitsSceneParticipantDelegate.h"
#import "SBSystemApertureZStackPolicyAssistant.h"
#import "SBDashBoardHostedAppViewController.h"

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBSystemApertureZStackPolicyAssistantDelegate, BLSBacklightStateObserving, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, SBFTraitsParticipantDelegate, SBTraitsSceneSettingsUpdater, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController>

 {
    id<BSInvalidatable> *_biometricMatchingAssertion;
    NSUInteger _currentOrientationMask;
    SBFTraitsParticipant *_secureAppTraitsParticipant;
    SBTraitsSceneParticipantDelegate *_secureAppTraitsParticipantDelegateHelper;
    SBSystemApertureZStackPolicyAssistant *_systemApertureZStackPolicyAssistant;
}


@property (readonly, nonatomic) BOOL contentOccludesBackground;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController; // ivar: _secureAppViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


-(BOOL)_canShowWhileLocked;
-(BOOL)canHostAnApp;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(BOOL)isHostingAnApp;
-(BOOL)needsActuationForUpdateReasons:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_currentSecureAppAction;
-(id)_traitsArbiter;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)initWithSecureAppViewController:(id)arg0 ;
-(id)participantAssociatedSceneIdentityTokens:(id)arg0 ;
-(id)participantAssociatedWindows:(id)arg0 ;
-(id)traitsParticipantForSceneHandle:(id)arg0 ;
-(void)_acquireSecureAppTraitsParticipantIfNeeded;
-(void)_actuateTraitsParticipantResolution;
-(void)_invalidateTraitsParticipantAndDelegateHelper;
-(void)_updateIdleWarnModeForAlwaysOnEnabled:(BOOL)arg0 ;
-(void)_updateSupportedOrientationsMaskForSecureAppAction;
-(void)_updateSystemApertureZStackPolicyAssistant;
-(void)backlight:(id)arg0 didChangeAlwaysOnEnabled:(BOOL)arg1 ;
-(void)conformsToCSApplicationHosting;
-(void)conformsToSBApplicationHosting;
-(void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)relinquishHiddenAssertionForHomeGrabber:(id)arg0 animated:(BOOL)arg1 ;
-(void)relinquishHomeGesture;
-(void)requestHomeGestureOwnership;
-(void)secureAppOfTypeDidBegin:(NSUInteger)arg0 ;
-(void)secureAppOfTypeDidTakeNewAssertion:(NSUInteger)arg0 ;
-(void)systemApertureZStackPolicyAssistantDidChange:(id)arg0 ;
-(void)takeHiddenAssertionForHomeGrabber:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateHomeGrabberHiddenAssertion:(BOOL)arg0 ;
-(void)updateOrientationSceneSettingsForParticipant:(id)arg0 ;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif