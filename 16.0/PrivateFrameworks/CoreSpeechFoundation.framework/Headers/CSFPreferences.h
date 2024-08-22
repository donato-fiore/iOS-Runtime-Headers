// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFPREFERENCES_H
#define CSFPREFERENCES_H


#import <Foundation/Foundation.h>


@interface CSFPreferences : NSObject



+(id)sharedPreferences;
-(BOOL)_isAdaptiveSiriVolumeDisabled;
-(BOOL)_isDirectory:(id)arg0 ;
-(BOOL)_isRemoteVoiceTriggerAvailable;
-(BOOL)_storeModeEnabled;
-(BOOL)audioInjectionEnabled;
-(BOOL)audioInjectionEnabledWithKey:(struct __CFString *)arg0 ;
-(BOOL)bypassPersonalizedHeySiri;
-(BOOL)bypassSpeakerIdForMitigation;
-(BOOL)bypassTrialAssets;
-(BOOL)companionSyncVoiceTriggerUtterancesEnabled;
-(BOOL)enableAudioInjection:(BOOL)arg0 ;
-(BOOL)enableAudioInjection:(BOOL)arg0 withKey:(struct __CFString *)arg1 ;
-(BOOL)enableProgrammableAudioInjection:(BOOL)arg0 ;
-(BOOL)fileLoggingIsEnabled;
-(BOOL)forceVoiceTriggerAOPMode;
-(BOOL)forceVoiceTriggerAPMode;
-(BOOL)getBooleanAccessorySettingValueForKey:(id)arg0 forAccessory:(id)arg1 ;
-(BOOL)isAdBlockerAudioLoggingEnabled;
-(BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
-(BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
-(BOOL)isAlarmPlayingOnAccessory:(id)arg0 ;
-(BOOL)isAttentiveSiriAudioLoggingEnabled;
-(BOOL)isEndpointAssetBypassTrialEnabled;
-(BOOL)isEndpointAssetOverridingEnabled;
-(BOOL)isEndpointEnhancedLoggingEnabled;
-(BOOL)isMediaPlayingOnAccessory:(id)arg0 ;
-(BOOL)isMitigationAssetOverridingEnabled;
-(BOOL)isModelBenchmarkingEnabled;
-(BOOL)isMphVTEnabled;
-(BOOL)isMultiChannelAudioLoggingEnabled;
-(BOOL)isP2PTransferEnabled;
-(BOOL)isPHSSupported;
-(BOOL)isReducedPHSThresholdEnabled;
-(BOOL)isSelfTriggerEnabledGibraltar;
-(BOOL)isSelfTriggerFileLoggingEnabled;
-(BOOL)isSpeakerRecognitionAvailable;
-(BOOL)isTimerPlayingOnAccessory:(id)arg0 ;
-(BOOL)isVoiceTriggerAssetOverridingEnabled;
-(BOOL)jarvisAudioLoggingEnabled;
-(BOOL)myriadFileLoggingEnabled;
-(BOOL)opportuneSpeakListenerBypassEnabled;
-(BOOL)overwritingVoiceTriggerMLock;
-(BOOL)personalizedSiriEnrollmentAudioLoggingEnabled;
-(BOOL)phraseSpotterEnabled;
-(BOOL)programmableAudioInjectionEnabled;
-(BOOL)secondPassAudioLoggingEnabled;
-(BOOL)shouldOverwriteRemoteVADScore;
-(BOOL)shouldOverwriteVoiceTriggerMLock;
-(BOOL)smartSiriVolumeContextAwareEnabled;
-(BOOL)smartSiriVolumeContextAwareLoggingEnabled;
-(BOOL)smartSiriVolumeSoftVolumeEnabled;
-(BOOL)speakerRecognitionAudioLoggingEnabled;
-(BOOL)startOfSpeechAudioLoggingEnabled;
-(BOOL)twoShotNotificationEnabled;
-(BOOL)useSiriActivationSPIForHomePod;
-(BOOL)useSiriActivationSPIForwatchOS;
-(BOOL)useSpeexForAudioInjection;
-(BOOL)voiceTriggerEnabled;
-(CGFloat)audioSessionActivationDelay;
-(CGFloat)getMediaPlaybackInterruptedTime:(id)arg0 ;
-(CGFloat)remoteVoiceTriggerDelayTime;
-(CGFloat)remoteVoiceTriggerEndpointTimeoutWithDefault:(CGFloat)arg0 ;
-(NSInteger)geckoLoggingLevel;
-(NSInteger)getJarvisTriggerMode;
-(NSUInteger)maxNumGradingFiles;
-(NSUInteger)maxNumLoggingFiles;
-(NSUInteger)speakerIdScoreReportingType;
-(float)adaptiveSiriVolumePermanentOffset;
-(float)getAttendingTimeoutConfig;
-(float)overwritingRemoteVADScore;
-(id)assistantAudioFileLogDirectory;
-(id)assistantLogDirectory;
-(id)audioInjectionFilePath;
-(id)baseDir;
-(id)fakeEndpointAssetPath;
-(id)fakeHearstModelPath;
-(id)fakeMitigationAssetPath;
-(id)fakeVoiceTriggerAssetPath;
-(id)fileLoggingLevel;
-(id)geckoAudioLogDirectory;
-(id)getIdleUserPreventSleepAssertionAcquitionDate;
-(id)getSSVLogFilePathWithSessionIdentifier:(id)arg0 ;
-(id)getStartOfSpeechAudioLogFilePath;
-(id)interstitialAbsoluteDirForLevel:(NSInteger)arg0 ;
-(id)interstitialRelativeDirForLevel:(NSInteger)arg0 ;
-(id)languageCodeDarwin;
-(id)mhLogDirectory;
-(id)myriadHashDirectory;
-(id)myriadHashFilePath;
-(id)readSpeakerIdScoreOverrrideConfig;
-(id)remoteGradingDataDirectory;
-(id)remoteP2pLogDirectory;
-(id)ssvLogDirectory;
-(id)trialBaseAssetDirectory;
-(id)voiceTriggerAudioLogDirectory;
-(int)adaptiveSiriVolumeRecentIntent;
-(void)_clearAccessorySettingForKeys:(id)arg0 forAccessory:(id)arg1 ;
-(void)_updatePreferenceSettingsForAccessory:(id)arg0 settingsUpdateBlock:(id)arg1 ;
-(void)clearAlarmPlayingStatusOnAccessory:(id)arg0 ;
-(void)clearMediaPlaybackInterruptedTimeOnAccessory:(id)arg0 ;
-(void)clearMediaPlayingStatusOnAccessory:(id)arg0 ;
-(void)clearMyriadSettingsOnAccessory:(id)arg0 ;
-(void)clearTimerPlayingStatusOnAccessory:(id)arg0 ;
-(void)disableAdaptiveSiriVolume:(id)arg0 ;
-(void)enableEndpointEnhancedLogging:(id)arg0 ;
-(void)getASVUserIntent:(id)arg0 ;
-(void)setASVUserIntent:(id)arg0 ;
-(void)setAudioInjectionFilePath:(id)arg0 ;
-(void)setBooleanAccessorySettingValue:(BOOL)arg0 forKey:(id)arg1 forAccessory:(id)arg2 ;
-(void)setFakeHearstModelPath:(id)arg0 ;
-(void)setFileLoggingIsEnabled:(BOOL)arg0 ;
-(void)setFileLoggingLevel:(id)arg0 ;
-(void)setHearstFirstPassModelVersion:(id)arg0 ;
-(void)setHearstSecondPassModelVersion:(id)arg0 ;
-(void)setIdleUserPreventSleepAssertionAcquitionDate:(id)arg0 ;
-(void)setIsAlarmPlayingOnAccessory:(id)arg0 isAlarmPlaying:(BOOL)arg1 ;
-(void)setIsMediaPlayingOnAccessory:(id)arg0 isMediaPlaying:(BOOL)arg1 isInterrupted:(BOOL)arg2 interruptedTime:(CGFloat)arg3 ;
-(void)setIsTimerPlayingOnAccessory:(id)arg0 isTimerPlaying:(BOOL)arg1 ;
-(void)setJarvisTriggerMode:(NSInteger)arg0 ;
-(void)setMediaPlayingSettingForAccessory:(id)arg0 isMediaPlaying:(BOOL)arg1 isInterrupted:(BOOL)arg2 interruptedTime:(CGFloat)arg3 ;
-(void)setRemoteDarwinEverConnectedWithNotifyKey:(char *)arg0 ;
-(void)setSelfTriggerEnabledGibraltar:(BOOL)arg0 ;
-(void)setSiriLanguageCodeDarwin:(id)arg0 ;
-(void)setVoiceTriggerEverUsed;


@end


#endif