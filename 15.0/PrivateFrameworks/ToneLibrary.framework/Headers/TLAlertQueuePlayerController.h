// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLALERTQUEUEPLAYERCONTROLLER_H
#define TLALERTQUEUEPLAYERCONTROLLER_H

@class NSString, AVAsset, AVQueuePlayer, AVAudioSession;
@protocol TLAlertPlaybackBackEndController, NSCopying;

#import <Foundation/Foundation.h>

#import "TLAudioQueue.h"
#import "TLAlertQueuePlayerStateDescriptor.h"
#import "TLAttentionAwarenessEffectCoordinator.h"

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController>

 {
    TLAudioQueue *_audioQueue;
    os_unfair_lock_s _lock;
    TLAlertQueuePlayerStateDescriptor *_stateDescriptor;
    NSString *_playingToneIdentifier;
    AVAsset *_toneAssetForPendingPlayingAlert;
    BOOL _hasToneAssetForPendingPlayingAlert;
    BOOL _isStoppingPlayingAlert;
    BOOL _isWaitingToCompleteReloadPlaybackRequest;
    BOOL _isObservingQueuePlayer;
    AVQueuePlayer *_queuePlayer;
    BOOL _isAudioEnvironmentSetup;
    BOOL _isUsingAuxiliaryAudioSession;
    AVAudioSession *_audioSession;
    NSString *_previousAudioCategory;
    NSUInteger _previousAudioCategoryOptions;
    NSString *_previousAudioMode;
    BOOL _isBypassingRingerSwitchPolicy;
    BOOL _isIgnoringAccessibilityDisabledVibrationSetting;
    BOOL _isAudioSessionActive;
    NSUInteger _audioSessionDeactivationPreventionRequestsCount;
    BOOL _isObservingAudioSessionInterruptionNotification;
    id<NSCopying> *_attentionPollingToken;
    TLAttentionAwarenessEffectCoordinator *_effectCoordinator;
    BOOL _isAttentionAwarenessSubsystemFullyInitialized;
    NSInteger _lastAttentionPollingEventType;
    ? _externalEnvironmentValues;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldApplyAttentionAwarenessEffectsForAlert:(id)arg0 ;
+(BOOL)_shouldApplyStandardDelayAndAudioVolumeRampForAlert:(id)arg0 externalEnvironmentValues:(struct ? )arg1 ;
+(BOOL)_shouldBypassRingerSwitchPolicyForAlert:(id)arg0 ;
+(BOOL)_shouldEnsureActiveAudioSessionWhenStartingPlaybackForAlert:(id)arg0 ;
+(BOOL)_shouldHandleAudioSessionActivationForAlert:(id)arg0 ;
+(BOOL)_shouldRepeatVibrationForAlert:(id)arg0 externalEnvironmentValues:(struct ? )arg1 ;
+(BOOL)_shouldUseAuxiliaryAudioSessionForAlert:(id)arg0 ;
+(BOOL)_shouldVibrateForAlert:(id)arg0 ;
+(CGFloat)_audioPlaybackInitiationDelayForAlert:(id)arg0 externalEnvironmentValues:(struct ? )arg1 ;
+(CGFloat)_audioVolumeRampingDurationForAlert:(id)arg0 externalEnvironmentValues:(struct ? )arg1 toneAssetDuration:(CGFloat)arg2 ;
+(NSInteger)_audioVolumeApplicationPolicyForAlert:(id)arg0 externalEnvironmentValues:(struct ? )arg1 ;
+(NSInteger)_clientPriorityForAlert:(id)arg0 ;
+(NSUInteger)_audioCategoryOptionsForAlert:(id)arg0 externalEnvironmentValues:(struct ? )arg1 ;
+(id)_audioCategoryForAlert:(id)arg0 externalEnvironmentValues:(struct ? )arg1 ;
+(id)_audioModeForAlert:(id)arg0 audioCategory:(id)arg1 ;
+(id)_celestialAudioCategoryForAudioSessionCategory:(id)arg0 ;
+(id)_clientNameForAlert:(id)arg0 ;
+(id)_propertyKeysOfInterestForToneAssets;
+(struct ? )_externalEnvironmentValuesForAlert:(id)arg0 ;
-(BOOL)_canPlayToneAsset:(id)arg0 ;
-(BOOL)_isPreventingAudioSessionDeactivation;
-(BOOL)stopPlayingAlerts:(id)arg0 withOptions:(id)arg1 playbackCompletionType:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(float)_audioVolumeForAlert:(id)arg0 audioCategory:(id)arg1 ;
-(id)_fallbackToneIdentifierForStateDescriptor:(id)arg0 ;
-(id)init;
-(void)_activateAudioSessionIfNeededForStateDescriptor:(id)arg0 ;
-(void)_applyAudioVolume:(float)arg0 forAlert:(id)arg1 ;
-(void)_beginPreventingAudioSessionDeactivation;
-(void)_createQueuePlayerIfNecessaryForStateDescriptor:(id)arg0 ;
-(void)_deactivateAudioSessionIfNeededForStateDescriptor:(id)arg0 ;
-(void)_destroyQueuePlayerForStateDescriptor:(id)arg0 ;
-(void)_didEndPlayingAlertForStateDescriptor:(id)arg0 ;
-(void)_didReceiveAttentionPollingEventOfType:(NSInteger)arg0 stateDescriptor:(id)arg1 ;
-(void)_endPreventingAudioSessionDeactivationForStateDescriptor:(id)arg0 ;
-(void)_handleActivationAssertionStatusChangeForAlert:(id)arg0 updatedStatus:(BOOL)arg1 previousStateDescriptor:(id)arg2 updatedStateDescriptor:(id)arg3 ;
-(void)_handleAudioSessionInterruptionNotification:(id)arg0 ;
-(void)_handleAudioSessionInterruptionOfType:(NSUInteger)arg0 withOptions:(NSUInteger)arg1 ;
-(void)_initiateAudioPlaybackForStateDescriptor:(id)arg0 audioVolumeRampingDuration:(CGFloat)arg1 ;
-(void)_performDelayedAudioPlaybackInitiationForStateDescriptor:(id)arg0 audioVolumeRampingDuration:(CGFloat)arg1 ;
-(void)_playAlertForStateDescriptor:(id)arg0 previousStateDescriptor:(id)arg1 ;
-(void)_prepareAudioEnvironmentForStateDescriptor:(id)arg0 ;
-(void)_queuePlayer:(id)arg0 currentItemStatusWasUpdatedToValue:(NSInteger)arg1 ;
-(void)_queuePlayer:(id)arg0 currentItemWasUpdatedFromValue:(id)arg1 ;
-(void)_reloadPlaybackForStateDescriptor:(id)arg0 withToneIdentifier:(id)arg1 ;
-(void)_resetClientPriorityForStateDescriptor:(id)arg0 ;
-(void)_resetFlagsForSwitchingAuxiliaryAudioSession;
-(void)_restoreAudioEnvironmentForStateDescriptor:(id)arg0 ;
-(void)_startObservingAudioSessionInterruptionNotificationsForStateDescriptor:(id)arg0 ;
-(void)_startObservingQueuePlayer;
-(void)_startPlaybackForStateDescriptor:(id)arg0 usingAssetWithLoadedProperties:(id)arg1 shouldConfirmAlertStillPlaying:(BOOL)arg2 ;
-(void)_startPlaybackForStateDescriptor:(id)arg0 usingConfirmedPlayableAsset:(id)arg1 ;
-(void)_startPlaybackForStateDescriptor:(id)arg0 usingConfirmedPlayableAsset:(id)arg1 hasAlreadyDetectedUserAttention:(BOOL)arg2 ;
-(void)_stopObservingAudioSessionInterruptionNotificationsForStateDescriptor:(id)arg0 ;
-(void)_stopObservingQueuePlayer;
-(void)_stopPlaybackForStateDescriptor:(id)arg0 ;
-(void)_stopPlaybackForStateDescriptor:(id)arg0 withOptions:(id)arg1 playerWasAlreadyPausedExternally:(BOOL)arg2 ;
-(void)_stopPlayingAlertForStateDescriptor:(id)arg0 withOptions:(id)arg1 playbackCompletionType:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_willBeginPlayingAlertForStateDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg0 updatedStatus:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playAlert:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg0 toValue:(float)arg1 ;


@end


#endif