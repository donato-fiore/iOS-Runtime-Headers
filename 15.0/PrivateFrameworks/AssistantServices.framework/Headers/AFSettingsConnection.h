// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSETTINGSCONNECTION_H
#define AFSETTINGSCONNECTION_H

@class NSXPCConnection, NSArray;
@protocol OS_dispatch_queue, AFSettingsDelegate;

#import <Foundation/Foundation.h>

#import "AFVoiceInfo.h"
#import "AFInstanceContext.h"

@interface AFSettingsConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_voicesQueue;
    NSArray *_voices;
    AFVoiceInfo *_selectedVoice;
    id<AFSettingsDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AFInstanceContext *_instanceContext;
}


@property (weak, nonatomic, setter=_setDelegate:) NSObject<AFSettingsDelegate> *_delegate;


+(void)initialize;
-(id)_connection;
-(id)_filterVoices:(id)arg0 forLanguage:(id)arg1 ;
-(id)_settingsServiceWithErrorHandler:(id)arg0 ;
-(id)_synchronousSettingsServiceWithErrorHandler:(id)arg0 ;
-(id)_voices;
-(id)accounts;
-(id)description;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_clearConnection;
-(void)_clearSyncNeededForKey:(id)arg0 ;
-(void)_fetchPeerData:(id)arg0 ;
-(void)_getSharedCompanionInfo:(id)arg0 ;
-(void)_getSharedUserID:(id)arg0 ;
-(void)_handleCommand:(id)arg0 completion:(id)arg1 ;
-(void)_runServiceMaintenance;
-(void)_setAllowExplicitContent:(BOOL)arg0 ;
-(void)_setSyncNeededForReason:(id)arg0 ;
-(void)_setSyncVerificationNeededAndFullReportNeeded:(BOOL)arg0 shouldPostNotification:(BOOL)arg1 completion:(id)arg2 ;
-(void)_setVoices:(id)arg0 ;
-(void)_syncDataWithAnchorKeys:(id)arg0 forceReset:(BOOL)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)_tellDelegatePartialVerificationResult:(id)arg0 ;
-(void)_tellDelegateServerVerificationReport:(id)arg0 ;
-(void)_updateMultiUserInfoForUser:(id)arg0 score:(id)arg1 companionId:(id)arg2 companionSpeechId:(id)arg3 idsIdentifier:(id)arg4 aceHost:(id)arg5 reset:(BOOL)arg6 completion:(id)arg7 ;
-(void)_updateVoicesIncludingAssetInfo:(BOOL)arg0 completion:(id)arg1 ;
-(void)accessRecordedAudioWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)addMultiUserUser:(id)arg0 sharedId:(id)arg1 loggableSharedId:(id)arg2 enrollmentName:(id)arg3 isPrimary:(BOOL)arg4 completion:(id)arg5 ;
-(void)areSiriUODAssetsAvailable:(id)arg0 ;
-(void)barrier;
-(void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
-(void)clearAnnounceNotificationsInCarPlayType;
-(void)clearOpportuneSpeakingEdgeDetectorSignalOverride;
-(void)clearSpokenNotificationTemporarilyDisabledStatus;
-(void)configOverrides:(id)arg0 ;
-(void)createOfflineSpeechProfileWithLanguage:(id)arg0 modelOverridePath:(id)arg1 JSONData:(id)arg2 completion:(id)arg3 ;
-(void)currectNWActivityId:(id)arg0 ;
-(void)dealloc;
-(void)deleteAccountWithIdentifier:(id)arg0 ;
-(void)deleteSiriHistoryWithCompletion:(id)arg0 ;
-(void)deleteSiriHistoryWithContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)disableAndDeleteCloudSyncWithCompletion:(id)arg0 ;
-(void)dismissUI;
-(void)fetchAccountsSynchronously:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetchAccountsWithCompletion:(id)arg0 ;
-(void)fetchActiveAccount:(id)arg0 ;
-(void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg0 completion:(id)arg1 ;
-(void)fetchExperimentConfigurationsWithCompletion:(id)arg0 ;
-(void)fetchExperimentContextWithCompletion:(id)arg0 ;
-(void)fetchMultiUserVoiceIdentificationSetting:(id)arg0 ;
-(void)fetchSupportedLanguageCodes:(id)arg0 ;
-(void)fetchSupportedMultiUserLanguageCodes:(id)arg0 ;
-(void)forceMultiUserSync:(BOOL)arg0 download:(BOOL)arg1 completion:(id)arg2 ;
-(void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(id)arg0 ;
-(void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(id)arg0 ;
-(void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg0 platform:(NSInteger)arg1 completion:(id)arg2 ;
-(void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(NSInteger)arg0 completion:(id)arg1 ;
-(void)getAssetStatusForLanguage:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAssistantIsEnabledForDeviceWithSiriInfo:(id)arg0 withCompletion:(id)arg1 ;
-(void)getAudioSessionCoordinationSnapshotWithCompletion:(id)arg0 ;
-(void)getAvailableVoicesForLanguage:(id)arg0 includeAssetInfo:(BOOL)arg1 completion:(id)arg2 ;
-(void)getAvailableVoicesForRecognitionLanguage:(id)arg0 completion:(id)arg1 ;
-(void)getAvailableVoicesForRecognitionLanguage:(id)arg0 includeAssetInfo:(BOOL)arg1 completion:(id)arg2 ;
-(void)getAvailableVoicesForSynthesisLanguage:(id)arg0 completion:(id)arg1 ;
-(void)getBluetoothDeviceInfoWithAddress:(id)arg0 completion:(id)arg1 ;
-(void)getBluetoothDeviceInfoWithUID:(id)arg0 completion:(id)arg1 ;
-(void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(id)arg0 ;
-(void)getCapabilitiesDataFromReachableDevicesWithCompletion:(id)arg0 ;
-(void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(id)arg0 ;
-(void)getContextCollectorsInfoWithCompletion:(id)arg0 ;
-(void)getCrossDeviceContextWithCompletion:(id)arg0 ;
-(void)getCurrentAccessoryInfoWithCompletion:(id)arg0 ;
-(void)getCurrentContextSnapshotWithCompletion:(id)arg0 ;
-(void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(id)arg0 ;
-(void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg0 completion:(id)arg1 ;
-(void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(id)arg0 ;
-(void)getExperimentForConfigurationIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getHomeUserIdForSharedUserId:(id)arg0 completion:(id)arg1 ;
-(void)getHorsemanSupplementalLanguageDictionary:(id)arg0 ;
-(void)getManagedLocalAndRemotePeerInfoWithCompletion:(id)arg0 ;
-(void)getMeCard:(id)arg0 ;
-(void)getOfflineAssistantStatusWithCompletion:(id)arg0 ;
-(void)getOfflineDictationStatusWithCompletion:(id)arg0 ;
-(void)getOriginDeviceInfoForContextIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getPairedBluetoothDeviceInfoArrayWithCompletion:(id)arg0 ;
-(void)getPeerIdentifiers:(id)arg0 ;
-(void)getProximityTuplesWithCompletion:(id)arg0 ;
-(void)getRecordedAudioDirectoryPathsWithCompletion:(id)arg0 ;
-(void)getSharedUserIdForHomeUserId:(id)arg0 completion:(id)arg1 ;
-(void)getSiriDataSharingOptInStatusWithCompletion:(id)arg0 ;
-(void)getSiriOutputVolumeForAudioRoute:(id)arg0 completion:(id)arg1 ;
-(void)getSiriOutputVolumeWithCompletion:(id)arg0 ;
-(void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(id)arg0 ;
-(void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(id)arg0 ;
-(void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(id)arg0 ;
-(void)getStereoPairState:(id)arg0 ;
-(void)getStereoPartnerLastMyriadWinDate:(id)arg0 ;
-(void)getSupplementalLanguageDictionaryForProduct:(id)arg0 completion:(id)arg1 ;
-(void)getSupplementalLanguagesDictionary:(id)arg0 ;
-(void)getSupplementalLanguagesForProduct:(id)arg0 forBuildVersion:(id)arg1 completion:(id)arg2 ;
-(void)getSupplementalLanguagesModificationDate:(id)arg0 ;
-(void)hasEverSetLanguageCodeWithCompletion:(id)arg0 ;
-(void)homeOnboardingFlowInvoked:(BOOL)arg0 completion:(id)arg1 ;
-(void)killDaemon;
-(void)postTestResultCandidateWithRcId:(id)arg0 recognitionSausage:(id)arg1 ;
-(void)postTestResultSelectedWithRcId:(id)arg0 ;
-(void)purgeAnalyticsStoreWithCompletion:(id)arg0 ;
-(void)pushMyriadAdvertisementContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeMultiUserUser:(id)arg0 completion:(id)arg1 ;
-(void)removeMultiUserWithSharedUserID:(id)arg0 completion:(id)arg1 ;
-(void)resetAnalyticsStoreWithCompletion:(id)arg0 ;
-(void)resetExperimentForConfigurationIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)saveAccount:(id)arg0 setActive:(BOOL)arg1 ;
-(void)sendMetricsToServerWithCompletion:(id)arg0 ;
-(void)setActiveAccountIdentifier:(id)arg0 ;
-(void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)arg0 ;
-(void)setAnnounceNotificationsInCarPlayType:(NSInteger)arg0 ;
-(void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg0 forApp:(id)arg1 platform:(NSInteger)arg2 ;
-(void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg0 platform:(NSInteger)arg1 ;
-(void)setAssistantEnabled:(BOOL)arg0 ;
-(void)setAssistantLoggingEnabled:(BOOL)arg0 ;
-(void)setConfigOverrides:(id)arg0 completion:(id)arg1 ;
-(void)setDictationEnabled:(BOOL)arg0 ;
-(void)setHardcodedBluetoothProximity:(id)arg0 ;
-(void)setHorsemanSupplementalLanguageDictionary:(id)arg0 completion:(id)arg1 ;
-(void)setLanguage:(id)arg0 ;
-(void)setLanguage:(id)arg0 outputVoice:(id)arg1 ;
-(void)setLanguage:(id)arg0 outputVoice:(id)arg1 withCompletion:(id)arg2 ;
-(void)setLanguage:(id)arg0 withCompletion:(id)arg1 ;
-(void)setNanoAssistantEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)setNanoCrownActivationEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)setNanoDictationEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)setNanoLanguage:(id)arg0 withCompletion:(id)arg1 ;
-(void)setNanoOutputVoice:(id)arg0 withCompletion:(id)arg1 ;
-(void)setNanoPhraseSpotterEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)setNanoRaiseToSpeakEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)setNanoSiriDataSharingOptInStatus:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)setNanoTTSSpeakerVolume:(id)arg0 withCompletion:(id)arg1 ;
-(void)setNanoUseDeviceSpeakerForTTS:(id)arg0 withCompletion:(id)arg1 ;
-(void)setOfflineDictationProfileOverridePath:(id)arg0 completion:(id)arg1 ;
-(void)setOnDeviceDictationAvailableAlertPresented:(BOOL)arg0 ;
-(void)setOpportuneSpeakingEdgeDetectorSignalOverride:(NSInteger)arg0 ;
-(void)setOutputVoice:(id)arg0 ;
-(void)setOutputVoice:(id)arg0 withCompletion:(id)arg1 ;
-(void)setSiriDataSharingOptInAlertPresented:(BOOL)arg0 completion:(id)arg1 ;
-(void)setSiriDataSharingOptInStatus:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setSiriDesignModeEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setSiriGradingEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)setSiriOutputVolume:(float)arg0 completion:(id)arg1 ;
-(void)setSiriOutputVolume:(float)arg0 forAudioRoute:(id)arg1 completion:(id)arg2 ;
-(void)setSpokenNotificationIsAlwaysOpportune:(BOOL)arg0 ;
-(void)setSpokenNotificationProxCardSeen:(BOOL)arg0 ;
-(void)setSpokenNotificationShouldAnnounceAllNotifications:(BOOL)arg0 ;
-(void)setSpokenNotificationShouldSkipTriggerlessReplies:(BOOL)arg0 ;
-(void)setSupplementalLanguageDictionary:(id)arg0 forProduct:(id)arg1 completion:(id)arg2 ;
-(void)setSupplementalLanguages:(id)arg0 forProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(id)arg3 ;
-(void)setXPCConnectionManagementQueue:(id)arg0 ;
-(void)shouldSuppressSiriDataSharingOptInAlert:(id)arg0 ;
-(void)showMultiUserSharedUserIDsCompletion:(id)arg0 ;
-(void)showMultiUsers:(id)arg0 ;
-(void)showPrimaryUserSharedUserIDWithCompletion:(id)arg0 ;
-(void)shutdownSessionIfIdle;
-(void)siriDesignModeIsEnabled:(id)arg0 ;
-(void)siriGradingIsEnabled:(id)arg0 ;
-(void)startAudioPlaybackRequest:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)startMultiUserUIRequestWithText:(id)arg0 expectedSpeakerSharedUserID:(id)arg1 expectedSpeakerConfidenceScore:(NSUInteger)arg2 nonspeakerConfidenceScores:(id)arg3 completion:(id)arg4 ;
-(void)startObservingWirelessSplitterSession;
-(void)startRemoteRequest:(id)arg0 onPeer:(id)arg1 completion:(id)arg2 ;
-(void)startUIMockServerRequestWithReplayFileURL:(id)arg0 completion:(id)arg1 ;
-(void)startUIRequest:(id)arg0 ;
-(void)startUIRequestWithInfo:(id)arg0 ;
-(void)startUIRequestWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)startUIRequestWithSpeechAudioFileURL:(id)arg0 ;
-(void)startUIRequestWithText:(id)arg0 ;
-(void)startUIRequestWithText:(id)arg0 completion:(id)arg1 ;
-(void)stopAllAudioPlaybackRequests:(BOOL)arg0 ;
-(void)stopAudioPlaybackRequest:(id)arg0 immediately:(BOOL)arg1 ;
-(void)stopObservingWirelessSplitterSession;
-(void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(id)arg0 ;
-(void)triggerABCForType:(id)arg0 subType:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)trimRecordedAudioWithIdentifier:(id)arg0 offset:(CGFloat)arg1 duration:(CGFloat)arg2 outputFileType:(NSInteger)arg3 completion:(id)arg4 ;
-(void)updateOfflineSpeechProfileWithLanguage:(id)arg0 modelOverridePath:(id)arg1 completion:(id)arg2 ;


@end


#endif