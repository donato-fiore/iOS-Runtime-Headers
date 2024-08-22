// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRVOICEPROFILEMANAGER_H
#define SSRVOICEPROFILEMANAGER_H

@class NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSRVoiceProfileManager : NSObject

@property (nonatomic) NSUInteger currentDeviceCategory; // ivar: _currentDeviceCategory
@property (retain, nonatomic) NSUUID *endpointUUID; // ivar: _endpointUUID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
+(id)sharedInstanceWithEndpointId:(id)arg0 ;
-(BOOL)_checkIfDownloadRequiredForProfileId:(id)arg0 ;
-(BOOL)_isDirectory:(id)arg0 ;
-(BOOL)_isLegacyEnrollmentMarkedWith:(id)arg0 forLanguageCode:(id)arg1 ;
-(BOOL)_isMarkedForVoiceProfileTrainingSyncForLanguage:(id)arg0 ;
-(BOOL)_isRemoteVoiceTriggerAvailable;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg0 ;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg0 withBackupMetaBlob:(id)arg1 ;
-(BOOL)isSATEnrolledForSiriProfileId:(id)arg0 forLanguageCode:(id)arg1 ;
-(BOOL)isSATEnrollmentMigratedForSiriProfileId:(id)arg0 forLanguageCode:(id)arg1 ;
-(BOOL)isSpeakerRecognitionAvailable;
-(BOOL)triggerVoiceProfileDuplicatesCleanup;
-(id)SSRBasePathForAppDomain:(id)arg0 ;
-(id)SSRSpeakerProfilesBasePath;
-(id)_CSSATCachePath;
-(id)_CSSATCachePathForAppDomain:(id)arg0 ;
-(id)_CSSATDownloadPath;
-(id)_CSSATLegacyUploadPath;
-(id)_CSSATUploadPathForSiriProfileId:(id)arg0 ;
-(id)_copyVoiceProfileAtPath:(id)arg0 toPath:(id)arg1 ;
-(id)_downloadAndEnrollVoiceProfileForProfileId:(id)arg0 withDownloadTriggerBlock:(id)arg1 ;
-(id)_enableVoiceTriggerIfLanguageMatches:(id)arg0 ;
-(id)_enrollVoiceProfileForSiriProfileId:(id)arg0 fromCacheDirectoryPath:(id)arg1 withCategoryType:(NSUInteger)arg2 ;
-(id)_getUserVoiceProfileDownloadCacheDirectoryForProfileId:(id)arg0 forDeviceCategory:(NSUInteger)arg1 forVoiceProfileVersion:(NSUInteger)arg2 ;
-(id)_getUserVoiceProfileDownloadCacheDirectoryWithUpdatePath:(id)arg0 ;
-(id)_getVoiceProfilePathsToBeUploadedForSiriProfileId:(id)arg0 ;
-(id)_getVoiceProfilesForSiriProfileId:(id)arg0 withLanguageCode:(id)arg1 ;
-(id)_prepareVoiceProfileWithSiriProfileId:(id)arg0 withUploadBlock:(id)arg1 ;
-(id)baseDir;
-(id)deleteUserVoiceProfile:(id)arg0 ;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg0 ;
-(id)discardSiriEnrollmentForProfileId:(id)arg0 forLanguageCode:(id)arg1 ;
-(id)getCacheDirectoryForAppDomain:(id)arg0 ;
-(id)getCachedVoiceProfileAvailabilityMetaBlob;
-(id)getSATEnrollmentPath;
-(id)getUserVoiceProfileUpdateDirectory;
-(id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(*id)arg0 ;
-(id)getVoiceProfileAnalyticsForAppDomain:(id)arg0 withLocale:(id)arg1 ;
-(id)init;
-(id)initWithEndpointId:(id)arg0 ;
-(id)markSATEnrollmentSuccessForVoiceProfile:(id)arg0 ;
-(id)modelDirectoryPathForProfile:(id)arg0 ;
-(id)newVoiceProfileWithLocale:(id)arg0 withAppDomain:(id)arg1 ;
-(id)provisionedVoiceProfilesForAppDomain:(id)arg0 withLocale:(id)arg1 ;
-(id)provisionedVoiceProfilesForLocale:(id)arg0 ;
-(id)updateVoiceProfile:(id)arg0 withUserName:(id)arg1 ;
-(id)voiceProfileForId:(id)arg0 ;
-(void)_copyExplicitEnrollmentFilesFromPath:(id)arg0 toPath:(id)arg1 withCompletion:(id)arg2 ;
// -(void)_downloadVoiceProfileForProfileId:(id)arg0 forDeviceCategory:(NSUInteger)arg1 withDownloadTriggerBlock:(id)arg2 withCompletion:(unk)arg3  ;
-(void)_markVoiceProfileTrainingSyncForLanguage:(id)arg0 ;
-(void)addUtterances:(id)arg0 toProfile:(id)arg1 withContext:(id)arg2 withCompletion:(id)arg3 ;
-(void)cleanupVoiceProfileModelFilesForLocale:(id)arg0 ;
-(void)deleteAllVoiceProfilesForAppDomain:(id)arg0 ;
-(void)discardSiriEnrollmentForLanguageCode:(id)arg0 ;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg0 ;
-(void)isVoiceProfileUploadedToiCloudForLanguageCode:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)notifyImplicitTrainingUtteranceAvailable:(id)arg0 forVoiceProfileId:(id)arg1 withRecordDeviceInfo:(id)arg2 withRecordCtxt:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(id)arg6 ;
// -(void)notifyUserVoiceProfileDownloadReadyForUser:(id)arg0 getData:(id)arg1 completion:(unk)arg2  ;
-(void)notifyUserVoiceProfileUpdateReady;
-(void)notifyUserVoiceProfileUploadComplete;
-(void)notifyUserVoiceProfileUploadCompleteForSiriProfileId:(id)arg0 withError:(id)arg1 ;
-(void)pruneImplicitUtterancesOfProfile:(id)arg0 withAsset:(id)arg1 ;
-(void)triggerRetrainingVoiceProfile:(id)arg0 withContext:(id)arg1 withCompletion:(id)arg2 ;
-(void)triggerVoiceProfileCleanupWithCompletion:(id)arg0 ;
-(void)triggerVoiceProfileDownload;
-(void)triggerVoiceProfileMigrationWithCompletion:(id)arg0 ;
// -(void)uploadUserVoiceProfileForSiriProfileId:(id)arg0 withUploadTrigger:(id)arg1 completion:(unk)arg2  ;


@end


#endif