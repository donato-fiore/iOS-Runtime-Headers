// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSLOGCONFIG_H
#define SSLOGCONFIG_H

@class NSString;
@protocol NSCopying, NSMutableCopying, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSLogFileOptions.h"

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (retain, nonatomic) SSLogFileOptions *backingLogFileOptions; // ivar: _backingLogFileOptions
@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // ivar: _backingOSLogObject
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (nonatomic) NSUInteger environment; // ivar: _environment
@property (readonly, nonatomic) SSLogFileOptions *logFileOptions;
@property (copy, nonatomic) NSString *outputDirectory; // ivar: _outputDirectory
@property (copy, nonatomic) NSString *outputFilename; // ivar: _outputFilename
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // ivar: _propertyAccessQueue
@property (readonly, nonatomic) BOOL shouldLog;
@property (readonly, nonatomic) BOOL shouldLogToDisk;
@property (copy, nonatomic) NSString *subsystem; // ivar: _subsystem
@property (nonatomic) BOOL writeToDisk; // ivar: _writeToDisk


+(BOOL)_debugLogsEnabled:(id)arg0 ;
+(BOOL)_deviceIsRunningInternalBuild;
+(BOOL)_deviceIsRunningInternalOrSeedBuild;
+(BOOL)_deviceIsRunningSeedBuild;
+(id)_createLogConfigWithBaseConfig:(id)arg0 subystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithSubsystem:(id)arg0 category:(id)arg1 ;
+(id)_logFileDirectoryPathForSubsystem:(id)arg0 category:(id)arg1 ;
+(id)_logFilenameForSubsystem:(id)arg0 category:(id)arg1 ;
+(id)sharedAccountsAuthenticationConfig;
+(id)sharedAccountsConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedAccountsLogoutConfig;
+(id)sharedAccountsMigrationConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedAskPermissionExtensionConfig;
+(id)sharedBagCacheConfig;
+(id)sharedBagConfig;
+(id)sharedConfig;
+(id)sharedDaemonConfig;
+(id)sharedDaemonConfigOversize;
+(id)sharedFairPlayAnisetteConfig;
+(id)sharedFeatureEnablerMigrationConfig;
+(id)sharedFollowUpConfig;
+(id)sharedPrivacyConfig;
+(id)sharedPushNotificationConfig;
+(id)sharedStoreServicesConfig;
+(id)sharedStoreServicesConfigOversize;
+(id)sharedWriteToDiskConfig;
+(id)sharediTunesStoreConfig;
+(id)sharediTunesStoreConfigOversize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif