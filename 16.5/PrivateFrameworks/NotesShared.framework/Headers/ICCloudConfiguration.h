// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCLOUDCONFIGURATION_H
#define ICCLOUDCONFIGURATION_H

@class NSDictionary, NSTimer, NSUserDefaults, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "ICCloudThrottlingPolicy.h"

@interface ICCloudConfiguration : NSObject {
    NSDictionary *_configurationDictionary;
    os_unfair_lock_s _lock;
    NSTimer *_downloadTimer;
    NSUserDefaults *_userDefaults;
}


@property (readonly, nonatomic) NSUInteger appStoreRatingCohortPercentage; // ivar: _appStoreRatingCohortPercentage
@property (readonly, nonatomic) CGFloat appStoreRatingIdleTimeInterval; // ivar: _appStoreRatingIdleTimeInterval
@property (readonly, nonatomic) NSUInteger appStoreRatingLaunchCount; // ivar: _appStoreRatingLaunchCount
@property (readonly, nonatomic) NSUInteger appStoreRatingLaunchDayPeriod; // ivar: _appStoreRatingLaunchDayPeriod
@property (readonly, nonatomic) NSUInteger appStoreRatingNoteCount; // ivar: _appStoreRatingNoteCount
@property (readonly, nonatomic) NSUInteger appStoreRatingOldestLaunchDayPeriod; // ivar: _appStoreRatingOldestLaunchDayPeriod
@property (readonly, nonatomic) NSUInteger appStoreRatingRequestDayPeriod; // ivar: _appStoreRatingRequestDayPeriod
@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, nonatomic) NSUInteger durationForNextPasswordReask; // ivar: _durationForNextPasswordReask
@property (readonly, nonatomic) BOOL fastSyncEnabled; // ivar: _fastSyncEnabled
@property (readonly, nonatomic) NSUInteger fastSyncMaximumMessageSizeBytes; // ivar: _fastSyncMaximumMessageSizeBytes
@property (readonly, nonatomic) BOOL fastSyncPaperKitEnableEphemeralRecords; // ivar: _fastSyncPaperKitEnableEphemeralRecords
@property (readonly, nonatomic) BOOL fastSyncPaperKitEnablePCSEncryption; // ivar: _fastSyncPaperKitEnablePCSEncryption
@property (readonly, nonatomic) CGFloat fastSyncPresenceDebounceDuration; // ivar: _fastSyncPresenceDebounceDuration
@property (readonly, nonatomic) NSUInteger launchTaskMaxRetries; // ivar: _launchTaskMaxRetries
@property (readonly, nonatomic) NSUInteger maxAttachmentsPerNote; // ivar: _maxAttachmentsPerNote
@property (readonly, nonatomic) NSUInteger maxInlineAssetSizeBytes; // ivar: _maxInlineAssetSizeBytes
@property (readonly, nonatomic) NSUInteger maxSubAttachmentsPerAttachment; // ivar: _maxSubAttachmentsPerAttachment
@property (readonly, copy, nonatomic) NSNumber *maximumAttachmentSizeMB; // ivar: _maximumAttachmentSizeMB
@property (readonly, nonatomic) NSUInteger mentionNotificationMaxRetries; // ivar: _mentionNotificationMaxRetries
@property (readonly, copy, nonatomic) NSString *minimumClientVersion; // ivar: _minimumClientVersion
@property (readonly, nonatomic) BOOL requestUserNotificationAuthorizationAtLaunch; // ivar: _requestUserNotificationAuthorizationAtLaunch
@property (readonly, nonatomic) NSUInteger resultsLimitPerSyncOperation; // ivar: _resultsLimitPerSyncOperation
@property (readonly, nonatomic) NSUInteger serverSideUpdateTaskMaxFailureCount; // ivar: _serverSideUpdateTaskMaxFailureCount
@property (readonly, nonatomic) BOOL shouldPerformTopHitSearch; // ivar: _shouldPerformTopHitSearch
@property (readonly, nonatomic) BOOL shouldSyncWhenEnteringForeground; // ivar: _shouldSyncWhenEnteringForeground
@property (readonly, nonatomic) ICCloudThrottlingPolicy *throttlingPolicy; // ivar: _throttlingPolicy
@property (readonly, nonatomic) NSUInteger unsupportedNoteDeviceCheckIntervalSeconds; // ivar: _unsupportedNoteDeviceCheckIntervalSeconds


+(BOOL)isConfigurationValid:(id)arg0 ;
+(id)availableConfigurationURLs;
+(id)cachedConfigurationURL;
+(id)defaultConfigurationURL;
+(id)overridableValueForKey:(id)arg0 inConfigurationDictionary:(id)arg1 userDefaults:(id)arg2 ;
+(id)sharedConfiguration;
+(void)loadSharedConfigurationWithCompletionHandler:(id)arg0 ;
+(void)loadSharedConfigurationWithQoSClass:(unsigned int)arg0 completionHandler:(id)arg1 ;
+(void)setDefaultConfigurationURL:(id)arg0 ;
-(id)initWithConfigurationDictionary:(id)arg0 userDefaults:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg0 ;
-(id)overridableValueForKey:(id)arg0 inConfigurationDictionary:(id)arg1 ;
-(void)dealloc;
-(void)downloadConfigurationFromRemoteURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadRemoteConfiguration:(id)arg0 ;
-(void)loadConfigurationFromURL:(id)arg0 ;
-(void)loadConfigurationFromURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadLocalConfigurationFile;
-(void)setConfigurationFromDictionary:(id)arg0 ;


@end


#endif