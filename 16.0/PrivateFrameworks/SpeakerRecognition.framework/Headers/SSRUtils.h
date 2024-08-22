// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRUTILS_H
#define SSRUTILS_H


#import <Foundation/Foundation.h>


@interface SSRUtils : NSObject



+(BOOL)encryptFileAt:(id)arg0 andSaveTo:(id)arg1 error:(*id)arg2 ;
+(BOOL)isCurrentDeviceCompatibleWithNewerVoiceProfileAt:(id)arg0 ;
+(BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg0 ;
+(BOOL)isSpeakerRecognitionSupportedInLocale:(id)arg0 ;
+(BOOL)markFileInTVasSUPurgeable:(id)arg0 ;
+(BOOL)ssrAudioLogsCountWithinPrivacyLimit;
+(NSInteger)getNumberOfAudioFilesInDirectory:(id)arg0 ;
+(NSUInteger)deviceCategoryForDeviceProductType:(id)arg0 ;
+(NSUInteger)explicitSpIdTypeForSpId:(NSUInteger)arg0 ;
+(NSUInteger)getVoiceProfileProductCategoryFromVersionFilePath:(id)arg0 ;
+(NSUInteger)spIdTypeForString:(id)arg0 ;
+(id)_getUtterancesFromDirectory:(id)arg0 ;
+(id)combineScoreFromPSR:(id)arg0 fromSAT:(id)arg1 withCombinedWt:(float)arg2 ;
+(id)deviceCategoryStringRepresentationForCategoryType:(NSUInteger)arg0 ;
+(id)getContentsOfDirectory:(id)arg0 ;
+(id)getEnrollmentUtterancesFromDirectory:(id)arg0 ;
+(id)getExplicitEnrollmentUtterancesFromDirectory:(id)arg0 ;
+(id)getExplicitMarkedEnrollmentUtterancesFromDirectory:(id)arg0 ;
+(id)getImplicitEnrollmentUtterancesFromDirectory:(id)arg0 ;
+(id)getImplicitUtteranceCacheDirectory;
+(id)getVoiceProfileForSiriProfileId:(id)arg0 forLanguageCode:(id)arg1 ;
+(id)getVoiceProfileIdentityFromVersionFilePath:(id)arg0 ;
+(id)getVoiceProfilesForSiriProfileId:(id)arg0 ;
+(id)moveContentsOfSrcDirectory:(id)arg0 toDestDirectory:(id)arg1 ;
+(id)psrConfigFileNameForCSSpIdType:(NSUInteger)arg0 ;
+(id)readJsonFileAtPath:(id)arg0 ;
+(id)removeItemAtPath:(id)arg0 ;
+(id)satConfigFileNameForCSSpIdType:(NSUInteger)arg0 ;
+(id)satConfigFileNameForCSSpIdType:(NSUInteger)arg0 forModelType:(NSUInteger)arg1 forAssetType:(NSUInteger)arg2 ;
+(id)spIdVoiceProfileImportRootDir;
+(id)spidAudioTrainUtterancesDir;
+(id)ssrAudioLogsDir;
+(id)stringForCSSpIdType:(NSUInteger)arg0 ;
+(id)stringForInvocationStyle:(NSUInteger)arg0 ;
+(id)stringForSpeakerRecognizerType:(NSUInteger)arg0 ;
+(id)stringForVoiceProfileRetrainerType:(NSUInteger)arg0 ;
+(void)cleanupOrphanedVoiceIdGradingFiles;
+(void)createDirectoryIfDoesNotExist:(id)arg0 ;
+(void)dumpFilesInDirectory:(id)arg0 ;
+(void)getEnrollmentUtterancesCountFromDirectory:(id)arg0 withCountBlock:(id)arg1 ;
+(void)getHomeUserIdForVoiceProfile:(id)arg0 withCompletion:(id)arg1 ;
+(void)logSpeakerRecognitionGradingMetadataAtFilepath:(id)arg0 withScoreInfo:(id)arg1 ;
+(void)markAllFilesInTVOfDirectoryAsSUPurgeable:(id)arg0 ;
+(void)segmentVoiceTriggerFromAudioFile:(id)arg0 withVTEventInfo:(id)arg1 withStorePayloadPortion:(BOOL)arg2 withCompletion:(id)arg3 ;
+(void)streamAudioFromFileUrl:(id)arg0 audioStreamBasicDescriptor:(struct AudioStreamBasicDescription )arg1 samplesPerStreamChunk:(NSUInteger)arg2 audioDataAvailableHandler:(id)arg3 ;


@end


#endif