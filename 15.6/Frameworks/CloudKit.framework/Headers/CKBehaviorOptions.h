// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(CGFloat)flowControlRegeneration;
-(CGFloat)flowControlRegenerationOverride;
-(CGFloat)maximumQueuedFetchWaitTime;
-(CGFloat)maximumThrottleSeconds;
-(CGFloat)minTTRPromptInterval;
-(CGFloat)packageGCPeriod;
-(CGFloat)publicIdentitiesExpirationTimeout;
-(CGFloat)shareAcceptorRetrievingDialogDelay;
-(CGFloat)shareAcceptorRetrievingDialogMinPeriod;
-(CGFloat)sqlBatchTime;
-(NSInteger)flowControlBudget;
-(NSInteger)flowControlBudgetOverride;
-(NSInteger)maxRecordPCSMasterKeyRolls;
-(NSInteger)sqlBatchCount;
-(NSUInteger)PCSCacheSize;
-(NSUInteger)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)assetEvictionGracePeriodWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)maxBatchSize;
-(NSUInteger)maxPackageDownloadsPerBatchWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)maxPackageUploadsPerBatchWithDefaultValue:(NSUInteger)arg0 ;
-(NSUInteger)recordCacheSizeLimit;
-(NSUInteger)savedErrorCount;
-(char *)CKCtlPrompt;
-(id)_getDictionaryOptionForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)_init;
-(id)buildVersion;
-(id)configBaseURL;
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
-(void)setAllowKeyRollingInAllContainers:(BOOL)arg0 ;
-(void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)arg0 ;
-(void)setDeviceCountOverride:(id)arg0 ;
-(void)setFakeManateeEnabled:(BOOL)arg0 ;
-(void)setFakeManateeOverride:(BOOL)arg0 ;
-(void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)arg0 ;
-(void)setIgnoreUploadRequestPushNotifications:(BOOL)arg0 ;
-(void)setIsCurrentAppleAccountSuspended:(BOOL)arg0 ;
-(void)setPCSCacheValidTime:(NSInteger)arg0 ;
-(void)setRecordNamesForFakingDecryptionFailure:(id)arg0 ;
-(void)setShareURLToAccountIDSystemAcceptationOverrides:(id)arg0 ;
-(void)setUsePreauth:(BOOL)arg0 ;


@end


#endif