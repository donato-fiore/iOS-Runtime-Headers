// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDCONFIGURATION_H
#define ICCLOUDCONFIGURATION_H

@class NSTimer, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "ICCloudThrottlingPolicy.h"

@interface ICCloudConfiguration : NSObject

@property (retain, nonatomic) NSTimer *downloadTimer; // ivar: _downloadTimer
@property (nonatomic) NSUInteger durationForNextPasswordReask; // ivar: _durationForNextPasswordReask
@property (nonatomic) NSUInteger launchTaskMaxRetries; // ivar: _launchTaskMaxRetries
@property (nonatomic) NSUInteger maxAttachmentsPerNote; // ivar: _maxAttachmentsPerNote
@property (nonatomic) NSUInteger maxInlineAssetSizeBytes; // ivar: _maxInlineAssetSizeBytes
@property (nonatomic) NSUInteger maxSubAttachmentsPerAttachment; // ivar: _maxSubAttachmentsPerAttachment
@property (retain, nonatomic) NSNumber *maximumAttachmentSizeMB; // ivar: _maximumAttachmentSizeMB
@property (nonatomic) NSUInteger mentionNotificationMaxRetries; // ivar: _mentionNotificationMaxRetries
@property (copy, nonatomic) NSString *minimumClientVersion; // ivar: _minimumClientVersion
@property (nonatomic) NSUInteger resultsLimitPerSyncOperation; // ivar: _resultsLimitPerSyncOperation
@property (nonatomic) NSUInteger serverSideUpdateTaskMaxFailureCount; // ivar: _serverSideUpdateTaskMaxFailureCount
@property (nonatomic) BOOL shouldPerformTopHitSearch; // ivar: _shouldPerformTopHitSearch
@property (nonatomic) BOOL shouldSyncWhenEnteringForeground; // ivar: _shouldSyncWhenEnteringForeground
@property (nonatomic) CGFloat syncInterval; // ivar: _syncInterval
@property (retain, nonatomic) ICCloudThrottlingPolicy *throttlingPolicy; // ivar: _throttlingPolicy
@property (nonatomic) NSUInteger unsupportedNoteDeviceCheckIntervalSeconds; // ivar: _unsupportedNoteDeviceCheckIntervalSeconds


+(BOOL)isConfigurationValid:(id)arg0 ;
+(id)availableConfigurationURLs;
+(id)cachedConfigurationURL;
+(id)defaultConfigurationURL;
+(id)sharedConfiguration;
+(void)setDefaultConfigurationURL:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)downloadConfigurationFromRemoteURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadRemoteConfiguration:(id)arg0 ;
-(void)loadConfigurationFromURL:(id)arg0 ;
-(void)loadLocalConfigurationFile;
-(void)setConfigurationFromDictionary:(id)arg0 ;


@end


#endif