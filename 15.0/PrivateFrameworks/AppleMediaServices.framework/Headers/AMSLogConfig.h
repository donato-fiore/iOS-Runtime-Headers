// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSLOGCONFIG_H
#define AMSLOGCONFIG_H

@class NSString;
@protocol NSCopying, NSMutableCopying, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // ivar: _backingOSLogObject
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // ivar: _propertyAccessQueue
@property (copy, nonatomic) NSString *subsystem; // ivar: _subsystem


+(BOOL)_debugLogsEnabled:(id)arg0 ;
+(id)_createLogConfigWithBaseConfig:(id)arg0 subystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithSubsystem:(id)arg0 category:(id)arg1 ;
+(id)sharedAccountsAuthenticationPluginConfig;
+(id)sharedAccountsConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedAccountsDaemonConfig;
+(id)sharedAccountsLogoutConfig;
+(id)sharedAccountsMigrationConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedAccountsMultiUserConfig;
+(id)sharedAccountsNotificationPluginConfig;
+(id)sharedAccountsOversizeConfig;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedAccountsSyncPluginConfig;
+(id)sharedAnisetteConfig;
+(id)sharedAttestationConfig;
+(id)sharedBagCacheConfig;
+(id)sharedBagConfig;
+(id)sharedConfig;
+(id)sharedConfigOversize;
+(id)sharedDataMigrationConfig;
+(id)sharedDeviceOffersConfig;
+(id)sharedFollowUpConfig;
+(id)sharedKeychainConfig;
+(id)sharedMarketingItemConfig;
+(id)sharedMediaConfig;
+(id)sharedMediaServiceOwnerConfig;
+(id)sharedPrivacyConfig;
+(id)sharedPurchaseConfig;
+(id)sharedPushNotificationConfig;
+(id)sharedRatingsProviderConfig;
+(id)sharedUserNotificationConfig;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif