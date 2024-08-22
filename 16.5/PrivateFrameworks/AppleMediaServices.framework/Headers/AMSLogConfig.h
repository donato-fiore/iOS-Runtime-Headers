// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSLOGCONFIG_H
#define AMSLOGCONFIG_H

@class NSString;
@protocol NSCopying, NSMutableCopying, OS_os_log;

#import <Foundation/Foundation.h>


@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSObject<OS_os_log> *OSLogObject; // ivar: _OSLogObject
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (copy, nonatomic) NSString *subsystem; // ivar: _subsystem


+(BOOL)_debugLogsEnabled:(id)arg0 ;
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
+(id)sharedBiometricsConfig;
+(id)sharedConfig;
+(id)sharedConfigOversize;
+(id)sharedDataMigrationConfig;
+(id)sharedDeviceOffersConfig;
+(id)sharedEngagementConfig;
+(id)sharedFollowUpConfig;
+(id)sharedKeychainConfig;
+(id)sharedMarketingItemConfig;
+(id)sharedMediaConfig;
+(id)sharedMediaServiceOwnerConfig;
+(id)sharedMessagingUIConfig;
+(id)sharedMetricsConfig;
+(id)sharedPrivacyConfig;
+(id)sharedPromiseConfig;
+(id)sharedPurchaseConfig;
+(id)sharedPushNotificationConfig;
+(id)sharedRatingsProviderConfig;
+(id)sharedServerDataCacheConfig;
+(id)sharedTreatmentsConfig;
+(id)sharedUserNotificationConfig;
+(id)sharedWebUIConfig;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCategory:(id)arg0 backingLog:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif