// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIACTIVATIONSERVICE_H
#define SIRIACTIVATIONSERVICE_H

@class NSString, NSTimer, NSMutableDictionary, AFPreferences, AFSiriTether;
@protocol SASRequestOptionsBuilderDataSource, SASHeaterDelegate, SASMyriadControllerDelegate, SASLockStateMonitorDelegate, SASBulletinManagerDelegate, SASStateChangeListener, SASPresentationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SASMyriadController.h"
#import "SASBluetoothEndpointUtility.h"
#import "SASBulletinManager.h"
#import "SASHeater.h"
#import "SASLockStateMonitor.h"
#import "SASPresentationManager.h"
#import "SASRemoteRequestManager.h"
#import "SASSystemState.h"
#import "SASTestingInputController.h"
#import "SASUnderstandingOnDeviceAssetsState.h"

@interface SiriActivationService : NSObject <SASRequestOptionsBuilderDataSource, SASHeaterDelegate, SASMyriadControllerDelegate, SASLockStateMonitorDelegate, SASBulletinManagerDelegate, SASStateChangeListener, SASPresentationManagerDelegate>

 {
    id *_buttonTrigger;
    NSString *_preheatedPresentation;
    int _voiceTriggerNotifyToken;
    NSObject<OS_dispatch_queue> *_voiceTriggerDispatchQueue;
    NSTimer *_B188ActivationTimer;
    SASMyriadController *_myriadController;
}


@property (retain, nonatomic) NSMutableDictionary *activationAssertions; // ivar: _activationAssertions
@property (nonatomic) CGFloat activationTimestamp; // ivar: _activationTimestamp
@property (retain, nonatomic) AFPreferences *afPreferences; // ivar: _afPreferences
@property (retain, nonatomic) NSMutableDictionary *avExternalButtonEvents; // ivar: _avExternalButtonEvents
@property (retain, nonatomic) SASBluetoothEndpointUtility *bluetoothEndpointUtil; // ivar: _bluetoothEndpointUtil
@property (retain, nonatomic) SASBulletinManager *bulletinManager; // ivar: _bulletinManager
@property (nonatomic) BOOL buttonDownHasOccurredSinceActivation; // ivar: _buttonDownHasOccurredSinceActivation
@property (retain, nonatomic) NSMutableDictionary *buttonEventListeners; // ivar: _buttonEventListeners
@property (nonatomic) BOOL canActivateFromDirectActionSource; // ivar: _canActivateFromDirectActionSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASHeater *heater; // ivar: _heater
@property (retain, nonatomic) SASLockStateMonitor *lockStateMonitor; // ivar: _lockStateMonitor
@property (nonatomic, getter=_pocketStateFetchingInProgressForHeadsetActivation, setter=_setPocketStateFetchingInProgressForHeadsetActivation:) BOOL pocketStateFetchingInProgressForHeadsetActivation; // ivar: _pocketStateFetchingInProgressForHeadsetActivation
@property (retain, nonatomic) SASPresentationManager *presentationManager; // ivar: _presentationManager
@property (retain, nonatomic) SASRemoteRequestManager *remoteRequestManager; // ivar: _remoteRequestManager
@property (retain, nonatomic) AFSiriTether *siriTether; // ivar: _siriTether
@property (nonatomic) BOOL siriTetherIsAttached; // ivar: _siriTetherIsAttached
@property (retain, nonatomic) NSMutableDictionary *sources; // ivar: _sources
@property (readonly) Class superclass;
@property (retain, nonatomic) SASSystemState *systemState; // ivar: _systemState
@property (retain, nonatomic) SASTestingInputController *testingInputController; // ivar: _testingInputController
@property (retain, nonatomic) SASUnderstandingOnDeviceAssetsState *uodAssetsState; // ivar: _uodAssetsState
@property (nonatomic) BOOL voiceTriggerNotifyTokenIsValid; // ivar: _voiceTriggerNotifyTokenIsValid
@property (nonatomic) BOOL xcTestingActive; // ivar: _xcTestingActive


+(id)new;
+(id)service;
-(BOOL)_buttonIsAVExternalButton:(NSInteger)arg0 ;
-(BOOL)_buttonIsTVMicrophoneButton:(NSInteger)arg0 ;
-(BOOL)_isInitialRequest;
-(BOOL)_isVoiceActivationMaskNecessaryWithRequestOptions:(id)arg0 ;
-(BOOL)_logCancelledActivationWithButtonIdentifier:(NSInteger)arg0 duration:(CGFloat)arg1 targetDuration:(CGFloat)arg2 ;
-(BOOL)_requestIsWiredMicOrBTHeadsetOrWx:(id)arg0 ;
-(BOOL)_shouldHandlePocketStateFetchForRequestOptions:(id)arg0 ;
-(BOOL)_shouldRejectActivationWithButtonIdentifier:(NSInteger)arg0 activationAssertions:(id)arg1 ;
-(BOOL)_shouldRejectNewActivations:(NSInteger)arg0 ;
-(BOOL)_siriIsEnabled;
-(BOOL)handleActivationRequest:(id)arg0 ;
-(BOOL)handleActivationRequest:(id)arg0 systemState:(id)arg1 ;
-(BOOL)isConnectedTo188;
-(BOOL)presentationsAreIdleAndQuiet;
-(BOOL)requestOptionsBuilder:(id)arg0 isAcousticIdAllowedWithActiviation:(id)arg1 ;
-(BOOL)requestOptionsBuilder:(id)arg0 isPredictedRecordRouteIsZLLWithActiviation:(id)arg1 ;
-(BOOL)requestOptionsBuilder:(id)arg0 isRequestInitialWithActiviation:(id)arg1 ;
-(BOOL)requestOptionsBuilder:(id)arg0 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg1 ;
-(NSInteger)_requestState;
-(NSUInteger)requestOptionsBuilder:(id)arg0 currentLockStateForActivation:(id)arg1 ;
-(id)_init;
-(id)_updateRequestOptionsWithTestingContextFromActivationRequest:(id)arg0 requestOptions:(id)arg1 ;
-(id)allBulletins;
-(id)bulletinForIdentifier:(id)arg0 ;
-(id)bulletinsOnLockScreen;
-(id)init;
-(id)requestOptionsBuilder:(id)arg0 optionsForOverriding:(id)arg1 withActiviation:(id)arg2 ;
-(id)requestOptionsBuilder:(id)arg0 uiPresentationIdentifierWithActivation:(id)arg1 activationPresentation:(NSInteger)arg2 ;
-(void)_B188ActivationEvent:(NSInteger)arg0 context:(id)arg1 options:(id)arg2 ;
-(void)_activatePresentationWithIdentifier:(NSInteger)arg0 requestOptions:(id)arg1 analyticsContext:(id)arg2 ;
-(void)_attachToTether;
-(void)_cancelActivationPreparationForSetup;
-(void)_cancelPendingActivationEventWithReason:(NSUInteger)arg0 ;
-(void)_defrost;
-(void)_dismissSiri:(id)arg0 ;
-(void)_handleDesignModeRequest;
-(void)_handlePocketStateFetchForScreenWakeForPresentationIdentifier:(NSInteger)arg0 ;
-(void)_handleTapSynthesisIfNeededForButtonIdentifier:(NSInteger)arg0 buttonUpTimestamp:(CGFloat)arg1 ;
-(void)_logActivationToPowerLogWithReason:(NSInteger)arg0 ;
-(void)_notifyListenersOfButtonDownWithButtonIdentifier:(NSInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)_notifyListenersOfButtonLongPressWithButtonIdentifier:(NSInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)_notifyListenersOfButtonUpWithButtonIdentifier:(NSInteger)arg0 atTimestamp:(CGFloat)arg1 ;
-(void)_notifySourcesOfActiveChange:(BOOL)arg0 ;
-(void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(BOOL)arg0 ;
-(void)_preheatPresentation;
-(void)_recordTimeIfNeededForButtonIdentifier:(NSInteger)arg0 buttonDownTimestamp:(CGFloat)arg1 ;
-(void)_registerForVoiceTrigger;
-(void)_unregisterForVoiceTrigger;
-(void)_updateCanActivateFromDirectActionSource;
-(void)activationRequestFromBluetoothKeyboardActivation:(NSInteger)arg0 ;
-(void)activationRequestFromBreadcrumb;
-(void)activationRequestFromButtonIdentifier:(NSInteger)arg0 context:(id)arg1 ;
-(void)activationRequestFromContinuityWithContext:(id)arg0 ;
-(void)activationRequestFromDirectActionEventWithContext:(id)arg0 completion:(id)arg1 ;
-(void)activationRequestFromRemotePresentationBringUpWithContext:(id)arg0 ;
-(void)activationRequestFromSimpleActivation:(NSInteger)arg0 ;
-(void)activationRequestFromSpotlightWithContext:(id)arg0 ;
-(void)activationRequestFromTestRunnerWithContext:(id)arg0 ;
-(void)activationRequestFromTestingWithContext:(id)arg0 ;
-(void)activationRequestFromVoiceTrigger;
-(void)activationRequestFromVoiceTriggerWithContext:(id)arg0 ;
-(void)bulletinManagerDidChangeBulletins:(id)arg0 ;
-(void)buttonDownFromButtonIdentifier:(NSInteger)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;
-(void)buttonLongPressFromButtonIdentifier:(NSInteger)arg0 context:(id)arg1 ;
-(void)buttonTapFromButtonIdentifier:(NSInteger)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;
-(void)buttonUpFromButtonIdentifier:(NSInteger)arg0 deviceIdentifier:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 ;
-(void)callStateChangedToIsActive:(BOOL)arg0 isOutgoing:(BOOL)arg1 ;
-(void)cancelPrewarmFromButtonIdentifier:(NSInteger)arg0 ;
-(void)deactivationRequestFromButtonIdentifier:(NSInteger)arg0 context:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)didChangeLockState:(NSUInteger)arg0 ;
-(void)dismissSiriWithOptions:(id)arg0 ;
-(void)heater:(id)arg0 cancelledPreparationWithButtonIdentifier:(NSInteger)arg1 duration:(CGFloat)arg2 targetDuration:(CGFloat)arg3 ;
-(void)heaterSuggestsPreheating:(id)arg0 ;
-(void)pongWithPresentationIdentifier:(NSInteger)arg0 ;
-(void)presentationManager:(id)arg0 didChangeShouldRejectNewActivationsTo:(BOOL)arg1 ;
-(void)presentationManager:(id)arg0 didEncounterError:(NSInteger)arg1 ;
-(void)prewarmFromButtonIdentifier:(NSInteger)arg0 longPressInterval:(CGFloat)arg1 ;
-(void)registerActivationAssertion:(id)arg0 withIdentifier:(id)arg1 ;
-(void)registerActivationSource:(id)arg0 withIdentifier:(id)arg1 ;
-(void)registerButtonEventListenerServer:(id)arg0 identifier:(id)arg1 ;
-(void)registerSiriPresentation:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)shouldAbort:(id)arg0 ;
-(void)shouldContinue:(id)arg0 ;
-(void)siriPresentationDidUpdateState:(id)arg0 ;
-(void)siriPresentationDismissedWithIdentifier:(NSInteger)arg0 ;
-(void)siriPresentationDisplayedWithIdentifier:(NSInteger)arg0 ;
-(void)siriPresentationFailureWithIdentifier:(NSInteger)arg0 error:(id)arg1 ;
-(void)siriPresentationWillDismissWithIdentifier:(NSInteger)arg0 ;
-(void)speechRequestStateDidChange:(NSInteger)arg0 ;
-(void)unregisterActivationAssertionWithIdentifier:(id)arg0 ;
-(void)unregisterActivationSourceIdentifier:(id)arg0 ;
-(void)unregisterButtonEventListenerWithIdentifier:(id)arg0 ;
-(void)unregisterSiriPresentationIdentifier:(NSInteger)arg0 ;
-(void)updatePredicatedRecordRoute;


@end


#endif