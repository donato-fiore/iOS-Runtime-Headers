// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBEHAVIOROPTIONS_H
#define CKBEHAVIOROPTIONS_H

@class NSUserDefaults, NSString;

#import <Foundation/Foundation.h>


@interface CKBehaviorOptions : NSObject {
    NSUserDefaults *_automatedDeviceGroupDefaults;
}


@property (retain, nonatomic) NSString *automatedDeviceGroup; // ivar: _automatedDeviceGroup
@property BOOL didReadAutomatedDeviceGroup; // ivar: _didReadAutomatedDeviceGroup


+(id)sharedOptions;
-(BOOL)CFNetworkLogging;
-(BOOL)allowExpiredDNSBehavior;
-(BOOL)allowKeyRollingInAllContainers;
-(BOOL)compressRequests;
-(BOOL)disableCaching;
-(BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg0 ;
-(BOOL)evictRecentAssets;
-(BOOL)fakeManateeEnabled;
-(BOOL)fakeManateeOverride;
-(BOOL)isAppleInternalInstall;
-(BOOL)isCurrentAppleAccountSuspended;
-(BOOL)isDeveloperInstall;
-(BOOL)logTraffic;
-(BOOL)pipelineFetchAllChangesRequests;
-(BOOL)rollRecordMasterKeysOnUnshare;
-(BOOL)rollRecordPCSMasterKeys;
-(BOOL)rollZonePCSIdentities;
-(BOOL)rollZoneSharingKeys;
-(BOOL)sandboxCloudD;
-(BOOL)sendDebugHeader;
-(BOOL)shouldDecryptRecordsBeforeSave;
-(BOOL)shouldProfileSQL;
-(BOOL)useEncryption;
-(BOOL)useEnhancedPCSEncryptionContext;
-(BOOL)useModTimeInAssetCacheEviction;
-(BOOL)usePreauth;
-(CGFloat)PCSCacheMinTime;
-(CGFloat)PCSCacheValidTime;
-(CGFloat)maximumQueuedFetchWaitTime;
-(CGFloat)maximumThrottleSeconds;
-(CGFloat)minTTRPromptInterval;
-(CGFloat)packageGCPeriod;
-(CGFloat)publicIdentitiesExpirationTimeout;
-(CGFloat)recordCacheExpireDelay;
-(CGFloat)shareAcceptorRetrievingDialogDelay;
-(CGFloat)shareAcceptorRetrievingDialogMinPeriod;
-(CGFloat)sqlBatchTime;
-(NSInteger)maxRecordPCSMasterKeyRolls;
-(NSInteger)releaseType;
-(NSInteger)sqlBatchCount;
-(NSUInteger)PCSCacheSize;
-(NSUInteger)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)assetEvictionGracePeriodWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)maxBatchSize;
-(NSUInteger)maxPackageDownloadsPerBatchWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)maxPackageUploadsPerBatchWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)maximumMergeableDeltaRequestSize;
-(NSUInteger)recordCacheEntryCountLimit;
-(NSUInteger)recordCacheSizeLimit;
-(NSUInteger)savedErrorCount;
-(char *)CKCtlPrompt;
-(id)_getDictionaryOptionForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)_init;
-(id)altDSIDsToManateeAvailabilitiesOverrides;
-(id)buildVersion;
-(id)configBaseURL;
-(id)containerIdentifierToEmailOverrides;
-(id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
-(id)customCloudDBBaseURL;
-(id)customCodeServiceBaseURL;
-(id)customDeviceServiceBaseURL;
-(id)customMetricsServiceBaseURL;
-(id)customShareServiceBaseURL;
-(id)deviceCountOverride;
-(id)productName;
-(id)productVersion;
-(id)recordNamesForFakingDecryptionFailure;
-(id)setupBaseURL;
-(id)shareURLToAccountIDSystemAcceptationOverrides;
-(id)sharingOptionsSummaryString;
-(id)testRunIDHeader;
-(id)transcoderFunctionName;
-(id)transcoderPermittedRemoteMeasurement;
-(id)transcoderServiceName;
-(id)vettedEmailsTestFormat;
-(int)PCSRetryCount;
-(int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg0 ;
-(int)cachedRecordExpiryTime;
-(int)clientThrottleQueueWidth;
-(int)defaultRetryAfter;
-(int)longlivedOperationMaxRetryCount;
-(int)xpcConnectionTimeoutSecondsWithDefaultValue:(int)arg0 ;
-(void)_setArrayPref:(id)arg0 forKey:(id)arg1 ;
-(void)_setPref:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetMaximumMergeableDeltaRequestSize;
-(void)setAllowKeyRollingInAllContainers:(BOOL)arg0 ;
-(void)setAltDSIDsToManateeAvailabilitiesOverrides:(id)arg0 ;
-(void)setBuildVersion:(id)arg0 ;
-(void)setCFNetworkLogging:(BOOL)arg0 ;
-(void)setCKCtlPrompt:(char *)arg0 ;
-(void)setCachedRecordExpiryTime:(int)arg0 ;
-(void)setCompressRequests:(BOOL)arg0 ;
-(void)setConfigBaseURL:(id)arg0 ;
-(void)setContainerIdentifierToEmailOverrides:(id)arg0 ;
-(void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)arg0 ;
-(void)setCustomCloudDBBaseURL:(id)arg0 ;
-(void)setCustomCodeServiceBaseURL:(id)arg0 ;
-(void)setCustomDeviceServiceBaseURL:(id)arg0 ;
-(void)setCustomMetricsServiceBaseURL:(id)arg0 ;
-(void)setCustomShareServiceBaseURL:(id)arg0 ;
-(void)setDeviceCountOverride:(id)arg0 ;
-(void)setDisableCaching:(BOOL)arg0 ;
-(void)setFakeManateeEnabled:(BOOL)arg0 ;
-(void)setFakeManateeOverride:(BOOL)arg0 ;
-(void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)arg0 ;
-(void)setIsCurrentAppleAccountSuspended:(BOOL)arg0 ;
-(void)setLogTraffic:(BOOL)arg0 ;
-(void)setMaximumMergeableDeltaRequestSize:(NSUInteger)arg0 ;
-(void)setModTimeInAssetCacheEviction:(BOOL)arg0 ;
-(void)setOperationTimeout:(CGFloat)arg0 ;
-(void)setOptimisticPCS:(BOOL)arg0 ;
-(void)setPCSCacheValidTime:(NSInteger)arg0 ;
-(void)setProductName:(id)arg0 ;
-(void)setProductVersion:(id)arg0 ;
-(void)setRecordNamesForFakingDecryptionFailure:(id)arg0 ;
-(void)setRollRecordMasterKeysOnUnshare:(BOOL)arg0 ;
-(void)setRollRecordPCSMasterKeys:(BOOL)arg0 ;
-(void)setRollZonePCSIdentities:(BOOL)arg0 ;
-(void)setRollZoneSharingKeys:(BOOL)arg0 ;
-(void)setSendDebugHeader:(BOOL)arg0 ;
-(void)setSetupBaseURL:(id)arg0 ;
-(void)setShareURLToAccountIDSystemAcceptationOverrides:(id)arg0 ;
-(void)setSharingOptionsSummaryString:(id)arg0 ;
-(void)setShouldProfileSQL:(BOOL)arg0 ;
-(void)setSqlBatchCount:(NSInteger)arg0 ;
-(void)setSqlBatchTime:(CGFloat)arg0 ;
-(void)setTestRunIDHeader:(id)arg0 ;
-(void)setTrafficLogMaximumDataSize:(int)arg0 ;
-(void)setTranscoderFunctionName:(id)arg0 ;
-(void)setTranscoderPermittedRemoteMeasurement:(id)arg0 ;
-(void)setTranscoderServiceName:(id)arg0 ;
-(void)setUseEncryption:(BOOL)arg0 ;
-(void)setUseEnhancedPCSEncryptionContext:(BOOL)arg0 ;
-(void)setUsePreauth:(BOOL)arg0 ;
-(void)setUseStingray:(BOOL)arg0 ;


@end


#endif