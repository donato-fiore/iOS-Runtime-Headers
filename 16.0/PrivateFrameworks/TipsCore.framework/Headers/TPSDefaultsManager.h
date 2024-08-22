// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSDEFAULTSMANAGER_H
#define TPSDEFAULTSMANAGER_H


#import <Foundation/Foundation.h>


@interface TPSDefaultsManager : NSObject



+(BOOL)allowsHardwareWelcomeNotification;
+(BOOL)alwaysUseNotificationsModel;
+(BOOL)alwaysUseNotificationsRules;
+(BOOL)boolDefaultsForKey:(id)arg0 ;
+(BOOL)checkOfflineContentOnLaunch;
+(BOOL)ignoreCloud;
+(BOOL)ignoreTargetingValidator;
+(BOOL)notificationsModelNo;
+(BOOL)notificationsModelYes;
+(BOOL)resetDaemonData;
+(BOOL)resetDataCache;
+(BOOL)showAllCollections;
+(BOOL)showCollectionIntro;
+(BOOL)showPagingLabelOnLongPress;
+(BOOL)suppressNotifications;
+(BOOL)suppressTipKitContent;
+(CGFloat)contextualEventLookBackDaysInSeconds;
+(CGFloat)discoverabilitySuppressionInterval;
+(CGFloat)hintMaxDurationTimeInterval;
+(CGFloat)sessionTimeoutIntervalInSeconds;
+(CGFloat)timeIntervalDefaultsForKey:(id)arg0 ;
+(CGFloat)welcomeNotificationDelay;
+(CGFloat)welcomeNotificationGracePeriod;
+(NSInteger)crunchingIntervalInDays;
+(NSInteger)discoverabilityOverrideMaxDisplayCount;
+(NSInteger)integerDefaultsForKey:(id)arg0 ;
+(NSInteger)triggerMinObservationCount;
+(id)assetRatioIdentifier;
+(id)assetRequestHostURL;
+(id)assetURL;
+(id)contextualEventDaysSinceLastMajorUpdateInSeconds;
+(id)deviceModel;
+(id)displayContentForContext;
+(id)featuredCollection;
+(id)hintActionText;
+(id)hintActionURL;
+(id)hintBody;
+(id)hintCustomizationID;
+(id)hintMonitoringEvents;
+(id)hintTitle;
+(id)holdoutGroup;
+(id)lastMajorVersionUpdateDate;
+(id)matchedClientConditions;
+(id)minVersionForSpatialAudio;
+(id)notificationDocument;
+(id)objectDefaultsForKey:(id)arg0 ;
+(id)platform;
+(id)releaseType;
+(id)requestHostURL;
+(id)requestInterval;
+(id)requestLanguage;
+(id)requestModel;
+(id)requestPlatform;
+(id)requestURL;
+(id)requestVersion;
+(id)standardNotificationInterval;
+(id)widgetDocument;


@end


#endif