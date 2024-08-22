// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSESSIONMANAGER_H
#define SVXSESSIONMANAGER_H

@class AFNotifyObserver, NSDate, AFSiriTether, AFQueue, AFSpeechSynthesisRecord, AFDeviceContext, NSString;
@protocol SVXMyriadResponseDelegate, SVXModuleInstance, AFNotifyObserverDelegate, AFQueueDelegate, SVXSessionDelegate, SVXSpeechSynthesisListening, SVXDeviceContextListening, SVXDeviceSetupListening, SVXPrewarmHandling, SVXActivationHandling, SVXDeactivationHandling, SVXMyriadEventHandling, SVXMyriadRequestHandling, SVXTaskTracking, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SVXModule.h"
#import "SVXSpeechSynthesizer.h"
#import "SVXServiceCommandHandler.h"
#import "SVXMyriadDeviceManager.h"
#import "SVXSession.h"
#import "SVXSessionActivationAnnouncer.h"
#import "SVXAudioPowerUpdateAnnouncer.h"
#import "SVXSessionActivityAnnouncer.h"
#import "SVXDeviceSetupContext.h"
#import "SVXDeviceProblemsState.h"

@interface SVXSessionManager : NSObject <SVXMyriadResponseDelegate, SVXModuleInstance, AFNotifyObserverDelegate, AFQueueDelegate, SVXSessionDelegate, SVXSpeechSynthesisListening, SVXDeviceContextListening, SVXDeviceSetupListening, SVXPrewarmHandling, SVXActivationHandling, SVXDeactivationHandling, SVXMyriadEventHandling, SVXMyriadRequestHandling>

 {
    SVXModule *_module;
    AFNotifyObserver *_deviceProblemsNotifyObserver;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXServiceCommandHandler *_serviceCommandHandler;
    id *_myriadToken;
    SVXMyriadDeviceManager *_myriadDeviceManager;
    id<SVXTaskTracking> *_currentMyriadCoordinatedRequestAssertion;
    BOOL _myriadDuckingAllowed;
    NSDate *_lastStereoPartnerMyriadWin;
    AFSiriTether *_tether;
    SVXSession *_currentSession;
    SVXSessionActivationAnnouncer *_activationAnnouncer;
    SVXAudioPowerUpdateAnnouncer *_audioPowerUpdateAnnouncer;
    SVXSessionActivityAnnouncer *_activityAnnouncer;
    AFQueue *_queuedOperations;
    CGFloat _lastSessionResignActiveTimestamp;
    SVXDeviceSetupContext *_deviceSetupContext;
    AFSpeechSynthesisRecord *_speechSynthesisRecord;
    NSInteger _speechSynthesisState;
    SVXDeviceProblemsState *_deviceProblemsState;
    AFDeviceContext *_localDeviceContext;
    NSObject<OS_dispatch_queue> *_coreDuetQueue;
    BOOL _needsClearContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_currentSession:(BOOL)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)_activateWithContext:(id)arg0 activityState:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_attachToTether;
-(void)_deactivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_fetchCurrentActivityStateWithCompletion:(id)arg0 ;
-(void)_fetchCurrentAudioPowerWithType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_fetchCurrentStateWithCompletion:(id)arg0 ;
-(void)_fetchStereoPairStateWithCompletion:(id)arg0 ;
-(void)_fetchStereoPartnerLastMyriadWinDate;
-(void)_handleDeviceProblemsStateChanged:(id)arg0 ;
-(void)_handleDeviceSetupContextChanged:(id)arg0 ;
-(void)_handleDidFailAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)_handleFetchedStereoPartnerLastMyriadWinDate:(id)arg0 ;
-(void)_handleLocalDeviceContextChanged:(id)arg0 ;
-(void)_handleMyriadForActivationContext:(id)arg0 ;
-(void)_handleSession:(id)arg0 audioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)_handleSession:(id)arg0 audioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)_handleSession:(id)arg0 didActivateWithContext:(id)arg1 ;
-(void)_handleSession:(id)arg0 didBecomeActiveWithActivationContext:(id)arg1 activityUUID:(id)arg2 turnID:(id)arg3 ;
-(void)_handleSession:(id)arg0 didChangeFromState:(NSInteger)arg1 toState:(NSInteger)arg2 ;
-(void)_handleSession:(id)arg0 didDeactivateWithContext:(id)arg1 ;
-(void)_handleSession:(id)arg0 didEndUpdateAudioPowerWithType:(NSInteger)arg1 ;
-(void)_handleSession:(id)arg0 didNotActivateWithContext:(id)arg1 error:(id)arg2 ;
-(void)_handleSession:(id)arg0 didResignActiveWithDeactivationContext:(id)arg1 activityUUID:(id)arg2 ;
-(void)_handleSession:(id)arg0 didStartSoundWithID:(NSInteger)arg1 ;
-(void)_handleSession:(id)arg0 didStopSoundWithID:(NSInteger)arg1 error:(id)arg2 ;
-(void)_handleSession:(id)arg0 willActivateWithContext:(id)arg1 ;
-(void)_handleSession:(id)arg0 willBecomeActiveWithActivationContext:(id)arg1 activityUUID:(id)arg2 turnID:(id)arg3 ;
-(void)_handleSession:(id)arg0 willBeginUpdateAudioPowerWithType:(NSInteger)arg1 wrapper:(id)arg2 ;
-(void)_handleSession:(id)arg0 willChangeFromState:(NSInteger)arg1 toState:(NSInteger)arg2 ;
-(void)_handleSession:(id)arg0 willDeactivateWithContext:(id)arg1 ;
-(void)_handleSession:(id)arg0 willResignActiveWithOptions:(NSUInteger)arg1 duration:(CGFloat)arg2 activityUUID:(id)arg3 ;
-(void)_handleSession:(id)arg0 willStartSoundWithID:(NSInteger)arg1 ;
-(void)_handleSessionDidInvalidate:(id)arg0 ;
-(void)_handleSpeechSynthesizerDidCancelRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)_handleSpeechSynthesizerDidFailRequest:(id)arg0 taskTracker:(id)arg1 error:(id)arg2 ;
-(void)_handleSpeechSynthesizerDidFinishRequest:(id)arg0 utteranceInfo:(id)arg1 record:(id)arg2 taskTracker:(id)arg3 ;
-(void)_handleSpeechSynthesizerDidInterruptRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)_handleSpeechSynthesizerDidStartRequest:(id)arg0 record:(id)arg1 taskTracker:(id)arg2 ;
-(void)_handleSpeechSynthesizerWillStartRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)_handleWillProcessAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)_invalidateCurrentSession;
-(void)_myriadStereoPartnerDataChanged;
-(void)_preheatWithActivationSource:(NSInteger)arg0 ;
-(void)_prewarmWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_processNextOperations;
-(void)activateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)addActivationListener:(id)arg0 ;
-(void)addActivityListener:(id)arg0 ;
-(void)addAudioPowerUpdateListener:(id)arg0 ;
-(void)attachToTether;
-(void)continuousVoiceTriggerDetectedWithCompletion:(id)arg0 ;
-(void)deactivateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)deviceLostMyriadElection;
-(void)deviceSetupManager:(id)arg0 didUpdateContext:(id)arg1 ;
-(void)deviceWonMyriadElection;
-(void)fetchCurrentActivityStateWithCompletion:(id)arg0 ;
-(void)fetchCurrentAlarmAndTimerFiringContextWithCompletion:(id)arg0 ;
-(void)fetchCurrentAudioPowerWithType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchCurrentStateWithCompletion:(id)arg0 ;
-(void)getAudioSessionProviderWithCompletion:(id)arg0 ;
-(void)getCurrentSessionUsingBlock:(id)arg0 ;
-(void)initiateEmergency:(id)arg0 ;
-(void)localDeviceContextDidUpdate:(id)arg0 ;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)preheatWithActivationSource:(NSInteger)arg0 ;
-(void)prewarmWithContext:(id)arg0 completion:(id)arg1 ;
-(void)queue:(id)arg0 didEnqueueObjects:(id)arg1 ;
-(void)removeActivationListener:(id)arg0 ;
-(void)removeActivityListener:(id)arg0 ;
-(void)removeAudioPowerUpdateListener:(id)arg0 ;
-(void)session:(id)arg0 audioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)session:(id)arg0 audioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)session:(id)arg0 didActivateWithContext:(id)arg1 ;
-(void)session:(id)arg0 didBecomeActiveWithActivationContext:(id)arg1 activityUUID:(id)arg2 turnID:(id)arg3 ;
-(void)session:(id)arg0 didChangeFromState:(NSInteger)arg1 toState:(NSInteger)arg2 ;
-(void)session:(id)arg0 didDeactivateWithContext:(id)arg1 ;
-(void)session:(id)arg0 didEndUpdateAudioPowerWithType:(NSInteger)arg1 ;
-(void)session:(id)arg0 didFailAppLaunchWithBundleIdentifier:(id)arg1 ;
-(void)session:(id)arg0 didNotActivateWithContext:(id)arg1 error:(id)arg2 ;
-(void)session:(id)arg0 didResignActiveWithDeactivationContext:(id)arg1 activityUUID:(id)arg2 ;
-(void)session:(id)arg0 didStartSoundWithID:(NSInteger)arg1 ;
-(void)session:(id)arg0 didStopSoundWithID:(NSInteger)arg1 error:(id)arg2 ;
-(void)session:(id)arg0 willActivateWithContext:(id)arg1 ;
-(void)session:(id)arg0 willBecomeActiveWithActivationContext:(id)arg1 activityUUID:(id)arg2 turnID:(id)arg3 ;
-(void)session:(id)arg0 willBeginUpdateAudioPowerWithType:(NSInteger)arg1 wrapper:(id)arg2 ;
-(void)session:(id)arg0 willChangeFromState:(NSInteger)arg1 toState:(NSInteger)arg2 ;
-(void)session:(id)arg0 willDeactivateWithContext:(id)arg1 ;
-(void)session:(id)arg0 willProcessAppLaunchWithBundleIdentifier:(id)arg1 ;
-(void)session:(id)arg0 willResignActiveWithOptions:(NSUInteger)arg1 duration:(CGFloat)arg2 activityUUID:(id)arg3 ;
-(void)session:(id)arg0 willStartSoundWithID:(NSInteger)arg1 ;
-(void)sessionDidInvalidate:(id)arg0 ;
-(void)speechSynthesizerDidBecomeBusy;
-(void)speechSynthesizerDidBecomeIdle;
-(void)speechSynthesizerDidCancelRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerDidFailRequest:(id)arg0 taskTracker:(id)arg1 error:(id)arg2 ;
-(void)speechSynthesizerDidFinishRequest:(id)arg0 utteranceInfo:(id)arg1 record:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizerDidInterruptRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerDidStartRequest:(id)arg0 record:(id)arg1 taskTracker:(id)arg2 ;
-(void)speechSynthesizerWillEnqueueRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerWillStartRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)startWithModuleInstanceProvider:(id)arg0 platformDependencies:(id)arg1 ;
-(void)stopSpeech;
-(void)stopWithModuleInstanceProvider:(id)arg0 ;
-(void)transitionToAutomaticEndpointing;
-(void)unduckDevice;


@end


#endif