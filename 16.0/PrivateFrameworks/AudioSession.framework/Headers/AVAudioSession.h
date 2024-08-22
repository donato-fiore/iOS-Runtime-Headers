// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOSESSION_H
#define AVAUDIOSESSION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "AVAudioSessionPortDescription.h"

@interface AVAudioSession : NSObject {
    *void _impl;
}


@property (readonly) BOOL allowHapticsAndSystemSoundsDuringRecording;
@property (readonly, nonatomic) NSArray *availableCategories;
@property (readonly) NSArray *availableModes;
@property (readonly) NSString *category;
@property (readonly) NSUInteger categoryOptions;
@property (readonly) BOOL isPrimary;
@property (readonly) NSString *mode;
@property (readonly) AVAudioSessionPortDescription *preferredInput;
@property (readonly, nonatomic) BOOL prefersNoInterruptionsFromSystemAlerts;
@property (readonly) NSUInteger recordPermission;
@property (readonly) NSUInteger routeSharingPolicy;


+(BOOL)categoryEnablesInput:(id)arg0 ;
+(id)auxiliarySession;
+(id)primarySession;
+(id)retrieveSessionWithID:(unsigned int)arg0 ;
+(id)sharedInstance;
-(*void)privateGetImplementation;
-(BOOL)allowAllBuiltInDataSources;
-(BOOL)allowMixableAudioWhileRecording;
-(BOOL)clearInputPreferences:(*id)arg0 ;
-(BOOL)deactivateAndSetInterruptionPriority:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)decoupledIO;
-(BOOL)eligibleForBTSmartRoutingConsideration;
-(BOOL)eligibleForBTTriangleConsideration;
-(BOOL)enableNotifications:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)fixHardwareFormatToMultiChannel:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)forceSoundCheck;
-(BOOL)iAmTheAssistant;
-(BOOL)inputIsAvailable;
-(BOOL)isActive;
-(BOOL)isDolbyAtmosAvailable;
-(BOOL)isDolbyDigitalEncoderAvailable;
-(BOOL)isEarpieceActiveNoiseCancelationEnabled;
-(BOOL)isExpanseMediaSession;
-(BOOL)isHardwareFormatFixedToMultiChannel;
-(BOOL)isInputAvailable;
-(BOOL)isInputGainSettable;
-(BOOL)isOtherAudioPlaying;
-(BOOL)isPiPAvailable;
-(BOOL)isSessionInputMuted;
-(BOOL)lastActivationStoppedNowPlayingApp;
-(BOOL)muteSessionInput:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)needsHighPowerBudgeting;
-(BOOL)overrideOutputAudioPort:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)participatesInMutePriority;
-(BOOL)participatesInNowPlayingAppPolicy;
-(BOOL)participatesInVolumePolicy;
-(BOOL)preferDecoupledIO:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)prefersMultichannelAudio;
-(BOOL)prefersNoDucking;
-(BOOL)prefersNoInterruptionsByRingtonesAndAlerts;
-(BOOL)prefersNoMicrophoneUsageIndicator;
-(BOOL)prefersToAcquireHWControlFromOtherSessions;
-(BOOL)prefersToVibeWhenVibrationsAreDisabled;
-(BOOL)privateAllowsLongFormRoutingToSpeaker;
-(BOOL)privateCreateSessionInServerUsingAudioToolbox:(*void)arg0 type:(unsigned int)arg1 identifier:(id)arg2 ;
-(BOOL)privateCreateSessionInServerUsingXPC;
-(BOOL)privateNeedsTranslationForNoSpeakerCategory:(id)arg0 ;
-(BOOL)privateRecreateSessionInServerUsingXPC;
-(BOOL)privateRequiresWatchOSRoutePicker;
-(BOOL)privateSetPropertyValue:(unsigned int)arg0 withBool:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)privateSetRouteSharingPolicy:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)recordingFromRemoteInput;
-(BOOL)requiresNoAudioResources;
-(BOOL)secondaryAudioShouldBeSilencedHint;
-(BOOL)selectIndependentRoutingContext:(*id)arg0 ;
-(BOOL)setActivationContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)setActive:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setActive:(BOOL)arg0 withFlags:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setActive:(BOOL)arg0 withOptions:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setAggregatedIOPreference:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setAllowMixableAudioWhileRecording:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setAudioClockDevice:(id)arg0 error:(*id)arg1 ;
-(BOOL)setAudioHardwareControlFlags:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setAuditTokensForProcessAssertion:(id)arg0 error:(*id)arg1 ;
-(BOOL)setBypassRingerSwitchPolicy:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setDefaultChatMode:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDisallowedPorts:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDuckToLevelDB:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDuckToLevelScalar:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDuckingFadeOutDuration:(id)arg0 fadeInDuration:(id)arg1 error:(*id)arg2 ;
-(BOOL)setEligibleForBTSmartRoutingConsideration:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setEligibleForBTTriangleConsideration:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setForceSoundCheck:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setHapticThermalGain:(float)arg0 error:(*id)arg1 ;
-(BOOL)setHostProcessAttribution:(id)arg0 error:(*id)arg1 ;
-(BOOL)setIAmTheAssistant:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setInputDataSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)setInputGain:(float)arg0 error:(*id)arg1 ;
-(BOOL)setInterruptionFadeDuration:(id)arg0 error:(*id)arg1 ;
-(BOOL)setInterruptionPriority:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setIsExpanseMediaSession:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setMXSessionProperty:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)setNeedsHighPowerBudgeting:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setOutputDataSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)setParticipatesInMutePriority:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setParticipatesInNowPlayingAppPolicy:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setParticipatesInVolumePolicy:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPowerProfile:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredHardwareSampleRate:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredIOBufferDuration:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredIOBufferFrameSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredOutputNumberOfChannels:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredOutputSampleRate:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredSampleRate:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setPrefersMultichannelAudio:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPrefersNoDucking:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPrefersNoInterruptionsByRingtonesAndAlerts:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPrefersNoMicrophoneUsageIndicator:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPrefersToAcquireHWControlFromOtherSessions:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPrefersToVibeWhenVibrationsAreDisabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setRecordingFromRemoteInput:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setReporterID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setRequiresNoAudioResources:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setRoutingContextUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)setSpeakerThermalGain:(float)arg0 error:(*id)arg1 ;
-(BOOL)setSupportsMultichannelContent:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)silenceOutput:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)subscribeToNotifications:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsMultichannelContent;
-(CGFloat)IOBufferDuration;
-(CGFloat)currentHardwareSampleRate;
-(CGFloat)inputLatency;
-(CGFloat)inputSafetyOffset;
-(CGFloat)inputSampleRate;
-(CGFloat)outputLatency;
-(CGFloat)outputSafetyOffset;
-(CGFloat)outputSampleRate;
-(CGFloat)preferredHardwareSampleRate;
-(CGFloat)preferredIOBufferDuration;
-(CGFloat)preferredOutputSampleRate;
-(CGFloat)preferredSampleRate;
-(CGFloat)sampleRate;
-(CGFloat)speechDetectionDeviceSampleRate;
-(NSInteger)audioFormat;
-(NSInteger)currentHardwareInputNumberOfChannels;
-(NSInteger)currentHardwareOutputNumberOfChannels;
-(NSInteger)inputNumberOfChannels;
-(NSInteger)inputOrientation;
-(NSInteger)interruptionPriority;
-(NSInteger)maximumInputNumberOfChannels;
-(NSInteger)maximumOutputNumberOfChannels;
-(NSInteger)outputNumberOfChannels;
-(NSInteger)preferredOutputNumberOfChannels;
-(NSInteger)privateGetCachedReporterID;
-(NSInteger)reporterID;
-(NSUInteger)IOBufferFrameSize;
-(NSUInteger)preferredIOBufferFrameSize;
-(NSUInteger)promptStyle;
-(NSUInteger)retainCount;
-(NSUInteger)sessionType;
-(float)defaultCalibratedOutputSPL;
-(float)hapticThermalGain;
-(float)inputGain;
-(float)outputVolume;
-(float)speakerThermalGain;
-(id)IOController;
-(id)activeSessionDisplayIDs;
-(id)addObserverForType:(NSUInteger)arg0 name:(id)arg1 block:(id)arg2 ;
-(id)audioClockDevice;
-(id)audioFormats;
-(id)auditTokensForProcessAssertion;
-(id)autorelease;
-(id)availableInputs;
-(id)consolidatedSourceContentInfo;
-(id)currentRoute;
-(id)decoupledInputIOController;
-(id)delegate;
-(id)getMXSessionProperty:(id)arg0 error:(*id)arg1 ;
-(id)hostProcessAttribution;
-(id)init;
-(id)initAuxiliarySession;
-(id)initSiblingSession:(unsigned int)arg0 auditToken:(struct ? )arg1 clientIdentifier:(id)arg2 ;
-(id)initWithSessionID:(unsigned int)arg0 ;
-(id)initWithSessionType:(unsigned int)arg0 ;
-(id)initWithSiriEndpointIdentifier:(id)arg0 ;
-(id)initWithSpecification:(id)arg0 ;
-(id)inputDataSource;
-(id)inputDataSources;
-(id)outputDataSource;
-(id)outputDataSources;
-(id)pickedRoute;
-(id)powerBudget;
-(id)powerProfile;
-(id)privateGetDataSources:(BOOL)arg0 ;
-(id)privateGetSelectedDataSource:(BOOL)arg0 ;
-(id)privateRefreshAvailableInputs;
-(id)retain;
-(id)routingContextUID;
-(int)privateSetBatchProperties:(id)arg0 areMXProperties:(BOOL)arg1 ;
-(int)privateSetCategoryWithOptions:(id)arg0 modes:(id)arg1 routeSharingPolicy:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(int)privateSetProperty:(id)arg0 value:(id)arg1 isMXProperty:(BOOL)arg2 ;
-(struct shared_ptr<AVAudioSessionNotificationState> )privateGetNotificationStateForType:(NSUInteger)arg0 create:(BOOL)arg1 ;
-(unsigned char)privateRegisterMXNotificationWithServer:(id)arg0 ;
-(unsigned int)opaqueSessionID;
-(void)activateWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)addCategoryOptionsToDictionary:(id)arg0 nonXPCArray:(id)arg1 category:(id)arg2 options:(NSUInteger)arg3 useXPC:(BOOL)arg4 ;
-(void)dealloc;
-(void)privateHandleAvailableSampleRatesChange;
-(void)privateHandleBeaconBudgetChange:(id)arg0 ;
-(void)privateHandleOtherPrimaryAudioPlayStateChange;
-(void)privateHandlePickableRoutesChange;
-(void)privateHandlePing;
-(void)privateHandleRoutingContextChange;
-(void)privateHandleSecondaryAudioHintChange:(id)arg0 ;
-(void)privateHandleServerConnectionCompletion:(struct ConnectionResult )arg0 ;
-(void)privateHandleServerDied;
-(void)privateInputIsAvailableChanged:(id)arg0 ;
-(void)privateInterruptionWithInfo:(id)arg0 ;
-(void)privateMarkKVOPropertiesDirty:(NSUInteger)arg0 ;
-(void)privatePostNotificationForType:(NSUInteger)arg0 name:(id)arg1 userInfo:(id)arg2 ;
-(void)privateSetAllowsLongFormRoutingToSpeaker:(BOOL)arg0 ;
-(void)privateUpdateAudioFormat:(id)arg0 ;
-(void)privateUpdateAudioFormats:(id)arg0 ;
-(void)privateUpdateDataSources:(id)arg0 forInput:(BOOL)arg1 ;
-(void)privateUpdateInputChannelCount:(id)arg0 ;
-(void)privateUpdateInputGain:(id)arg0 ;
-(void)privateUpdateOutputChannelCount:(id)arg0 ;
-(void)privateUpdateOutputVolume:(id)arg0 ;
-(void)privateUpdatePiPAvailabilityChange:(id)arg0 ;
-(void)privateUpdatePromptStyle:(id)arg0 ;
-(void)release;
-(void)removeObserverForType:(NSUInteger)arg0 observer:(id)arg1 name:(id)arg2 ;
-(void)requestRecordPermission:(id)arg0 ;
-(void)setAllowAllBuiltInDataSources:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif