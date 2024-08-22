// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXCORESESSION_H
#define MXCORESESSION_H

@class NSDictionary, NSArray, NSString, NSNumber, NSDate, RBSAssertion;
@protocol OS_dispatch_source, OS_os_transaction;


#import "MXCoreSessionBase.h"
#import "MXCoreSession.h"

@interface MXCoreSession : MXCoreSessionBase

@property (retain) NSDictionary *activationContext; // ivar: _activationContext
@property (retain) NSArray *activeRoutesWhenInterrupted; // ivar: _activeRoutesWhenInterrupted
@property (nonatomic) BOOL addSharedAudioRouteToRoutablePorts; // ivar: _addSharedAudioRouteToRoutablePorts
@property (retain) NSString *aggregateDeviceClockUID; // ivar: _aggregateDeviceClockUID
@property (nonatomic) BOOL allowMixableAudioWhileRecording; // ivar: _allowMixableAudioWhileRecording
@property (nonatomic) BOOL allowSystemSoundsWhileRecording; // ivar: _allowSystemSoundsWhileRecording
@property (retain) NSArray *allowedPortTypes; // ivar: _allowedPortTypes
@property (retain) NSArray *allowedRouteTypes; // ivar: _allowedRouteTypes
@property (nonatomic) BOOL allowedToBeNowPlayingApp; // ivar: _allowedToBeNowPlayingApp
@property (nonatomic) BOOL allowsBluetoothRecordingCustomization; // ivar: _allowsBluetoothRecordingCustomization
@property (nonatomic) BOOL allowsDefaultBuiltInRouteCustomization; // ivar: _allowsDefaultBuiltInRouteCustomization
@property (nonatomic) unsigned int applicationState; // ivar: _applicationState
@property (retain) NSDictionary *audioBehaviour; // ivar: _audioBehaviour
@property (retain) NSArray *audioDestinationPriority; // ivar: _audioDestinationPriority
@property (nonatomic) BOOL audioHWControlFlagsSetByClient; // ivar: _audioHWControlFlagsSetByClient
@property (nonatomic) float audioQueueDuckVolume; // ivar: _audioQueueDuckVolume
@property (nonatomic) float audioQueueFadeDuration; // ivar: _audioQueueFadeDuration
@property (nonatomic) ? auditToken; // ivar: _auditToken
@property (nonatomic) BOOL auditTokenSetByClient; // ivar: _auditTokenSetByClient
@property (retain) NSDictionary *bundleIdToPAAccessIntervalMap; // ivar: _bundleIdToPAAccessIntervalMap
@property (retain) NSDictionary *cameraParameters; // ivar: _cameraParameters
@property (nonatomic) BOOL clientIsPlaying; // ivar: _clientIsPlaying
@property (nonatomic) unsigned int clientPriority; // ivar: _clientPriority
@property (nonatomic) BOOL createSpeakerDevice; // ivar: _createSpeakerDevice
@property (nonatomic) unsigned int currentlyControllingFlags; // ivar: _currentlyControllingFlags
@property (nonatomic) int deactivateTimerDelay; // ivar: _deactivateTimerDelay
@property (retain) NSString *defaultBuiltInRoutePreference; // ivar: _defaultBuiltInRoutePreference
@property (nonatomic) BOOL defaultBuiltInRoutePreferenceSetByClient; // ivar: _defaultBuiltInRoutePreferenceSetByClient
@property (retain) NSString *defaultVPChatMode; // ivar: _defaultVPChatMode
@property (retain) NSNumber *desiredInputGainScalar; // ivar: _desiredInputGainScalar
@property (nonatomic) BOOL disallowAudioFormatChanges; // ivar: _disallowAudioFormatChanges
@property (nonatomic) BOOL doNotNotifyOtherSessionsOnNextInactive; // ivar: _doNotNotifyOtherSessionsOnNextInactive
@property (nonatomic) BOOL doNotResetAudioCategoryOnNextInactive; // ivar: _doNotResetAudioCategoryOnNextInactive
@property (nonatomic) BOOL doesInterAppAudio; // ivar: _doesInterAppAudio
@property (nonatomic) BOOL doesntActuallyPlayAudio; // ivar: _doesntActuallyPlayAudio
@property (nonatomic) BOOL dontTakeOverHardware; // ivar: _dontTakeOverHardware
@property (nonatomic) BOOL duckCommandSentToCarSession; // ivar: _duckCommandSentToCarSession
@property (nonatomic) float duckFadeDuration; // ivar: _duckFadeDuration
@property (nonatomic) BOOL duckFadeDurationSetByClient; // ivar: _duckFadeDurationSetByClient
@property (nonatomic) float duckToLevelDB; // ivar: _duckToLevelDB
@property (nonatomic) BOOL duckToLevelDBSetByClient; // ivar: _duckToLevelDBSetByClient
@property (nonatomic) float duckToLevelScalar; // ivar: _duckToLevelScalar
@property (nonatomic) BOOL duckToLevelScalarSetByClient; // ivar: _duckToLevelScalarSetByClient
@property (nonatomic) BOOL duckedOnVAD; // ivar: _duckedOnVAD
@property (retain) NSArray *duckerSourceAudioBudgetRef; // ivar: _duckerSourceAudioBudgetRef
@property (retain) NSArray *duckerSourceSessionRef; // ivar: _duckerSourceSessionRef
@property (retain) NSArray *duckerSourceSystemSoundRef; // ivar: _duckerSourceSystemSoundRef
@property (nonatomic) BOOL enableBluetoothRecordingPreference; // ivar: _enableBluetoothRecordingPreference
@property (nonatomic) BOOL enableBluetoothRecordingPreferenceSetByClient; // ivar: _enableBluetoothRecordingPreferenceSetByClient
@property (retain) NSArray *excludedPortsList; // ivar: _excludedPortsList
@property (retain, nonatomic) NSObject<OS_dispatch_source> *extendBackgroundAppAssertionTimer; // ivar: _extendBackgroundAppAssertionTimer
@property (nonatomic) BOOL forceSoundCheck; // ivar: _forceSoundCheck
@property (nonatomic) BOOL handsOverInterruptionsToInterruptor; // ivar: _handsOverInterruptionsToInterruptor
@property (nonatomic) BOOL hapticEngineIsPlaying; // ivar: _hapticEngineIsPlaying
@property (nonatomic) BOOL hasEntitlementToRecordAudioInAnExtension; // ivar: _hasEntitlementToRecordAudioInAnExtension
@property (nonatomic) BOOL hasEntitlementToRecordDuringCall; // ivar: _hasEntitlementToRecordDuringCall
@property (nonatomic) BOOL hasEntitlementToSetEmergencyAlertPriority; // ivar: _hasEntitlementToSetEmergencyAlertPriority
@property (nonatomic) BOOL hasEntitlementToStartRecordingInTheBackground; // ivar: _hasEntitlementToStartRecordingInTheBackground
@property (nonatomic) BOOL hasEntitlementToSupportProcessAssertionAuditTokens; // ivar: _hasEntitlementToSupportProcessAssertionAuditTokens
@property (nonatomic) BOOL hasEntitlementToSuppressRecordingStateToSystemStatus; // ivar: _hasEntitlementToSuppressRecordingStateToSystemStatus
@property (nonatomic) BOOL hasFetchedBackgroundPrivileges; // ivar: _hasFetchedBackgroundPrivileges
@property (nonatomic) BOOL hasFetchedGPSPrivileges; // ivar: _hasFetchedGPSPrivileges
@property (nonatomic) BOOL hasGPSPrivileges; // ivar: _hasGPSPrivileges
@property (nonatomic) BOOL hasInput; // ivar: _hasInput
@property (nonatomic) BOOL hasPhoneCallBehavior; // ivar: _hasPhoneCallBehavior
@property (retain) NSArray *hostProcessAttribution; // ivar: _hostProcessAttribution
@property (retain) NSArray *hostProcessInfo; // ivar: _hostProcessInfo
@property (retain) NSDictionary *hostProcessPlaybackAssertions; // ivar: _hostProcessPlaybackAssertions
@property (nonatomic) unsigned int hwControlFlags; // ivar: _hwControlFlags
@property (nonatomic) unsigned int idleSleepPreventor; // ivar: _idleSleepPreventor
@property (nonatomic) BOOL idleSleepPreventorAllocated; // ivar: _idleSleepPreventorAllocated
@property (retain) NSDate *idleSleepPreventorCreationTime; // ivar: _idleSleepPreventorCreationTime
@property (retain) NSString *idleSleepPreventorName; // ivar: _idleSleepPreventorName
@property (retain, nonatomic) NSObject<OS_dispatch_source> *idleSleepPreventorUpdaterTimer; // ivar: _idleSleepPreventorUpdaterTimer
@property (nonatomic) BOOL ignoreRingerSwitch; // ivar: _ignoreRingerSwitch
@property (retain, nonatomic) NSObject<OS_dispatch_source> *interruptSessionWithoutValidAssertionsTimer; // ivar: _interruptSessionWithoutValidAssertionsTimer
@property (nonatomic) MXCoreSession *interruptingSession; // ivar: _interruptingSession
@property (nonatomic) BOOL interruptionFadeDurationSetByClient; // ivar: _interruptionFadeDurationSetByClient
@property (nonatomic) unsigned int interruptionStyle; // ivar: _interruptionStyle
@property (nonatomic) BOOL interruptionStyleSetByClient; // ivar: _interruptionStyleSetByClient
@property (nonatomic) BOOL isActiveOverAirPlayVideo; // ivar: _isActiveOverAirPlayVideo
@property (nonatomic) BOOL isAllowedToPlayInBackground; // ivar: _isAllowedToPlayInBackground
@property (nonatomic) BOOL isAudioOnlyAirPlayVideoActive; // ivar: _isAudioOnlyAirPlayVideoActive
@property (nonatomic) BOOL isAudioSession; // ivar: _isAudioSession
@property (nonatomic) BOOL isCarSession; // ivar: _isCarSession
@property (nonatomic) BOOL isDucked; // ivar: _isDucked
@property (nonatomic) BOOL isEligibleForBTSmartRoutingConsideration; // ivar: _isEligibleForBTSmartRoutingConsideration
@property (nonatomic) BOOL isEligibleForBTTriangleConsideration; // ivar: _isEligibleForBTTriangleConsideration
@property (nonatomic) BOOL isEligibleForNowPlayingAppConsideration; // ivar: _isEligibleForNowPlayingAppConsideration
@property (nonatomic) BOOL isFigInstantiatedAudioSession; // ivar: _isFigInstantiatedAudioSession
@property (nonatomic) BOOL isIDSMXCoreSession; // ivar: _isIDSMXCoreSession
@property (nonatomic) BOOL isLongFormAudio; // ivar: _isLongFormAudio
@property (nonatomic) BOOL isNowPlayingApp; // ivar: _isNowPlayingApp
@property (nonatomic) BOOL isPiPPossible; // ivar: _isPiPPossible
@property (retain) NSDate *isPlayingStartTime; // ivar: _isPlayingStartTime
@property (retain) NSDate *isPlayingStopTime; // ivar: _isPlayingStopTime
@property (nonatomic) BOOL isRecordingMuted; // ivar: _isRecordingMuted
@property (nonatomic) BOOL isShadowSessionForFigSBAR; // ivar: _isShadowSessionForFigSBAR
@property (nonatomic) BOOL isSharePlayCallSession; // ivar: _isSharePlayCallSession
@property (nonatomic) BOOL isSharePlayCapableCallSession; // ivar: _isSharePlayCapableCallSession
@property (nonatomic) BOOL isSharePlayMediaSession; // ivar: _isSharePlayMediaSession
@property (nonatomic) BOOL isUsingCamera; // ivar: _isUsingCamera
@property (nonatomic) BOOL isVibrating; // ivar: _isVibrating
@property (nonatomic) BOOL makesMusicResume; // ivar: _makesMusicResume
@property (nonatomic) BOOL mixesWithEveryone; // ivar: _mixesWithEveryone
@property (nonatomic) unsigned int mode; // ivar: _mode
@property (nonatomic) BOOL mustRestoreCurrentlyControllingFlags; // ivar: _mustRestoreCurrentlyControllingFlags
@property (nonatomic) BOOL mustUseDefaultClientPriority; // ivar: _mustUseDefaultClientPriority
@property (nonatomic) BOOL mutesAudioBasedOnRingerSwitchState; // ivar: _mutesAudioBasedOnRingerSwitchState
@property (nonatomic) BOOL needToEndInterruption; // ivar: _needToEndInterruption
@property (nonatomic) BOOL needsAudioBudget; // ivar: _needsAudioBudget
@property (nonatomic) BOOL notFullyInactive; // ivar: _notFullyInactive
@property (retain) NSDictionary *notificationsSubscribedTo; // ivar: _notificationsSubscribedTo
@property (nonatomic) BOOL nowPlayingAppThatWasStoppedOnMostRecentActivationWasDoingSpokenAudio; // ivar: _nowPlayingAppThatWasStoppedOnMostRecentActivationWasDoingSpokenAudio
@property (nonatomic) BOOL nowPlayingAppWasStoppedOnMostRecentActivation; // ivar: _nowPlayingAppWasStoppedOnMostRecentActivation
@property (nonatomic) BOOL optOutOfMutePriority; // ivar: _optOutOfMutePriority
@property (nonatomic) unsigned int orientationOverride; // ivar: _orientationOverride
@property (retain) NSArray *overridePortsList; // ivar: _overridePortsList
@property (retain) NSArray *parentProcessAuditTokens; // ivar: _parentProcessAuditTokens
@property (nonatomic) int pidToInheritAppStateFrom; // ivar: _pidToInheritAppStateFrom
@property (retain) RBSAssertion *playbackAssertionRef; // ivar: _playbackAssertionRef
@property (nonatomic) NSObject<OS_os_transaction> *playingOSTransaction; // ivar: _playingOSTransaction
@property (retain) NSDictionary *powerProfile; // ivar: _powerProfile
@property (nonatomic) BOOL preferredDecoupledInputOutput; // ivar: _preferredDecoupledInputOutput
@property (retain) NSString *preferredHardwareFormat; // ivar: _preferredHardwareFormat
@property (nonatomic) float preferredIOBufferDuration; // ivar: _preferredIOBufferDuration
@property (nonatomic) int preferredIOBufferFrames; // ivar: _preferredIOBufferFrames
@property (nonatomic) CGFloat preferredInputSampleRate; // ivar: _preferredInputSampleRate
@property (nonatomic) int preferredNumberOfInputChannels; // ivar: _preferredNumberOfInputChannels
@property (nonatomic) int preferredNumberOfOutputChannels; // ivar: _preferredNumberOfOutputChannels
@property (nonatomic) CGFloat preferredOutputSampleRate; // ivar: _preferredOutputSampleRate
@property (nonatomic) int preferredStereoInputOrientation; // ivar: _preferredStereoInputOrientation
@property (nonatomic) BOOL prefersMultichannelAudio; // ivar: _prefersMultichannelAudio
@property (nonatomic) BOOL prefersNoDucking; // ivar: _prefersNoDucking
@property (nonatomic) BOOL prefersNoInterruptionWhenSecureMicrophoneIsEngaged; // ivar: _prefersNoInterruptionWhenSecureMicrophoneIsEngaged
@property (nonatomic) BOOL prefersNoInterruptionsByMixableSessions; // ivar: _prefersNoInterruptionsByMixableSessions
@property (nonatomic) BOOL prefersNoInterruptionsByRingtonesAndAlerts; // ivar: _prefersNoInterruptionsByRingtonesAndAlerts
@property (nonatomic) BOOL prefersSuppressingRecordingState; // ivar: _prefersSuppressingRecordingState
@property (nonatomic) BOOL prefersToPlayDuringWombat; // ivar: _prefersToPlayDuringWombat
@property (nonatomic) BOOL prefersToTakeHWControlFlagsFromAnotherSession; // ivar: _prefersToTakeHWControlFlagsFromAnotherSession
@property (nonatomic) BOOL prefersToVibeWhenVibrationsAreDisabled; // ivar: _prefersToVibeWhenVibrationsAreDisabled
@property (nonatomic) BOOL recentlyWantedToPauseSpokenAudio; // ivar: _recentlyWantedToPauseSpokenAudio
@property (nonatomic) BOOL requiresAggregatedInputOutput; // ivar: _requiresAggregatedInputOutput
@property (retain) RBSAssertion *resumeAssertionRef; // ivar: _resumeAssertionRef
@property (retain, nonatomic) NSObject<OS_dispatch_source> *resumeBackgroundAppUpdaterTimer; // ivar: _resumeBackgroundAppUpdaterTimer
@property (nonatomic) int routeSharingPolicy; // ivar: _routeSharingPolicy
@property (nonatomic) BOOL routingContextSetByClient; // ivar: _routingContextSetByClient
@property (nonatomic) unsigned int savedCurrentlyControllingFlags; // ivar: _savedCurrentlyControllingFlags
@property (nonatomic) unsigned int savedHWControlFlagsForClientThatDoesNotActuallyPlayAudio; // ivar: _savedHWControlFlagsForClientThatDoesNotActuallyPlayAudio
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sessionDeactivateTimer; // ivar: _sessionDeactivateTimer
@property (nonatomic) unsigned int shadowingAudioSessionID; // ivar: _shadowingAudioSessionID
@property (nonatomic) BOOL silentMuted; // ivar: _silentMuted
@property (retain) NSString *siriInputDeviceUUID; // ivar: _siriInputDeviceUUID
@property (nonatomic) BOOL someMXSessionIsPlaying; // ivar: _someMXSessionIsPlaying
@property (nonatomic) unsigned int starkBorrowCount; // ivar: _starkBorrowCount
@property (nonatomic) BOOL stopsWhenDeviceLocks; // ivar: _stopsWhenDeviceLocks
@property (retain) NSArray *subPortPreferences; // ivar: _subPortPreferences
@property (nonatomic) BOOL systemSoundHasModifiedCurrentlyControllingFlags; // ivar: _systemSoundHasModifiedCurrentlyControllingFlags
@property (nonatomic) NSInteger timestampWhenMostRecentResumableEndInterruptionWasSent; // ivar: _timestampWhenMostRecentResumableEndInterruptionWasSent
@property (nonatomic) NSInteger timestampWhenMostRecentlyInterrupted; // ivar: _timestampWhenMostRecentlyInterrupted
@property (nonatomic) NSInteger timestampWhenRecordingInBackgroundMostRecentlyStopped; // ivar: _timestampWhenRecordingInBackgroundMostRecentlyStopped
@property (nonatomic) BOOL tookControlOfStarkMainAudio; // ivar: _tookControlOfStarkMainAudio
@property (nonatomic) BOOL triggeredRemoteInterruption; // ivar: _triggeredRemoteInterruption
@property (nonatomic) float unduckFadeDuration; // ivar: _unduckFadeDuration
@property (nonatomic) BOOL unduckFadeDurationSetByClient; // ivar: _unduckFadeDurationSetByClient
@property (nonatomic) BOOL userMuted; // ivar: _userMuted
@property (nonatomic) NSObject<OS_os_transaction> *vibratingOSTransaction; // ivar: _vibratingOSTransaction
@property (retain) NSDictionary *vibrationData; // ivar: _vibrationData
@property (retain) NSDictionary *vpBlockConfiguration; // ivar: _vpBlockConfiguration
@property (nonatomic) BOOL waitingForEndInterruptionWhenDeviceUnlocksOrInForeground; // ivar: _waitingForEndInterruptionWhenDeviceUnlocksOrInForeground
@property (retain) NSString *waitingForRemoteInterruptionDoneIdentifier; // ivar: _waitingForRemoteInterruptionDoneIdentifier
@property (nonatomic) BOOL waitingToResume; // ivar: _waitingToResume
@property (nonatomic) BOOL waitingToResumeWhenDeviceUnlocksOrInForeground; // ivar: _waitingToResumeWhenDeviceUnlocksOrInForeground
@property (nonatomic) BOOL waitingToSendEndInterruptionToSpokenAudioApp; // ivar: _waitingToSendEndInterruptionToSpokenAudioApp
@property (nonatomic) BOOL wantsAutomaticClusterPairingOnPlaybackStart; // ivar: _wantsAutomaticClusterPairingOnPlaybackStart
@property (nonatomic) BOOL wantsToBeVolumeButtonClient; // ivar: _wantsToBeVolumeButtonClient
@property (nonatomic) BOOL wantsToPauseSpokenAudio; // ivar: _wantsToPauseSpokenAudio
@property (nonatomic) BOOL wantsToSendResumableEndInterruptionWhenBackgrounded; // ivar: _wantsToSendResumableEndInterruptionWhenBackgrounded
@property (nonatomic) BOOL wantsVibrationNotifications; // ivar: _wantsVibrationNotifications
@property (nonatomic) BOOL wantsVolumeChangesWhenPaused; // ivar: _wantsVolumeChangesWhenPaused
@property (nonatomic) BOOL wantsVolumeChangesWhenPausedOrInactive; // ivar: _wantsVolumeChangesWhenPausedOrInactive
@property (nonatomic) BOOL wasInterruptedByNowPlayingApp; // ivar: _wasInterruptedByNowPlayingApp
@property (nonatomic) BOOL wasInterruptedWhileRecording; // ivar: _wasInterruptedWhileRecording
@property (nonatomic) BOOL wasInterruptedWhileSuspended; // ivar: _wasInterruptedWhileSuspended
@property (nonatomic) BOOL wasMutedBeforeInterruption; // ivar: _wasMutedBeforeInterruption
@property (nonatomic) BOOL wasRecordingBeforeBeingInterrupted; // ivar: _wasRecordingBeforeBeingInterrupted
@property (nonatomic) BOOL willSetScreenDarkModeOnVAD; // ivar: _willSetScreenDarkModeOnVAD


-(*CGFloat)getPreferredOutputSampleRatePointer;
-(*int)getPreferredIOBufferFramesPointer;
-(id)copyDetailedRouteDescription;
-(id)init;
-(void)dealloc;
-(void)updateApplicationStateAndPIDToInheritAppStateFrom;


@end


#endif