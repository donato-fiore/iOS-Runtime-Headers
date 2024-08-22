// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSESSION_H
#define NTPBSESSION_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface NTPBSession : PBCodable <NSCopying>

 {
    ? _userSegmentationSegmentSetIds;
    ? _userSegmentationTreatmentIds;
    ? _has;
}


@property (nonatomic) int ageBracket; // ivar: _ageBracket
@property (nonatomic) float ageBracketConfidenceLevel; // ivar: _ageBracketConfidenceLevel
@property (retain, nonatomic) NSString *amsCampaignId; // ivar: _amsCampaignId
@property (retain, nonatomic) NSString *amsPurchaseId; // ivar: _amsPurchaseId
@property (nonatomic) NSInteger appBuild; // ivar: _appBuild
@property (retain, nonatomic) NSString *appBuildNumber; // ivar: _appBuildNumber
@property (nonatomic) NSInteger appConfigTreatmentId; // ivar: _appConfigTreatmentId
@property (retain, nonatomic) NSData *appProcessLifetimeId; // ivar: _appProcessLifetimeId
@property (retain, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (retain, nonatomic) NSString *browserLanguage; // ivar: _browserLanguage
@property (retain, nonatomic) NSString *campaignId; // ivar: _campaignId
@property (nonatomic) int campaignType; // ivar: _campaignType
@property (retain, nonatomic) NSString *carrier; // ivar: _carrier
@property (nonatomic) int cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (retain, nonatomic) NSString *devicePlatform; // ivar: _devicePlatform
@property (nonatomic) int ethnicity; // ivar: _ethnicity
@property (nonatomic) float ethnicityConfidenceLevel; // ivar: _ethnicityConfidenceLevel
@property (nonatomic) int gender; // ivar: _gender
@property (nonatomic) float genderConfidenceLevel; // ivar: _genderConfidenceLevel
@property (nonatomic) BOOL hasAgeBracket;
@property (nonatomic) BOOL hasAgeBracketConfidenceLevel;
@property (readonly, nonatomic) BOOL hasAmsCampaignId;
@property (readonly, nonatomic) BOOL hasAmsPurchaseId;
@property (nonatomic) BOOL hasAppBuild;
@property (readonly, nonatomic) BOOL hasAppBuildNumber;
@property (nonatomic) BOOL hasAppConfigTreatmentId;
@property (readonly, nonatomic) BOOL hasAppProcessLifetimeId;
@property (readonly, nonatomic) BOOL hasAppVersion;
@property (readonly, nonatomic) BOOL hasBrowserLanguage;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasCarrier;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasClientName;
@property (readonly, nonatomic) BOOL hasClientVersion;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDevicePlatform;
@property (nonatomic) BOOL hasEthnicity;
@property (nonatomic) BOOL hasEthnicityConfidenceLevel;
@property (nonatomic) BOOL hasGender;
@property (nonatomic) BOOL hasGenderConfidenceLevel;
@property (nonatomic) BOOL hasIncomeBracket;
@property (nonatomic) BOOL hasIncomeBracketConfidenceLevel;
@property (nonatomic) BOOL hasIosSettingsNotificationsBadgeAppIconEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowAsBannersEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowInHistoryEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowOnLockScreenEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsSoundEnabled;
@property (nonatomic) BOOL hasIsDiagnosticsUsageEnabled;
@property (nonatomic) BOOL hasIsNewUser;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (nonatomic) BOOL hasIsPaidSubscriberFromAppStore;
@property (nonatomic) BOOL hasIsPaidSubscriberFromNews;
@property (nonatomic) BOOL hasIsPaidSubscriberFromThirdParty;
@property (nonatomic) BOOL hasIsStoreDemoModeEnabled;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasLastAppOpenDate;
@property (nonatomic) BOOL hasLocationPermissionGranted;
@property (nonatomic) BOOL hasNewsWidgetModeGroup;
@property (readonly, nonatomic) BOOL hasNewsWidgetModeGroupId;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (readonly, nonatomic) BOOL hasNotwUserId;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignId;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignType;
@property (readonly, nonatomic) BOOL hasOriginatingCreativeId;
@property (nonatomic) BOOL hasOsInstallVariant;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (nonatomic) BOOL hasPaywallConfigType;
@property (readonly, nonatomic) BOOL hasPersonalizationPortraitVariantName;
@property (readonly, nonatomic) BOOL hasPreviousAppVersion;
@property (readonly, nonatomic) BOOL hasPreviousOsVersion;
@property (nonatomic) BOOL hasPrivateDataEncrypted;
@property (nonatomic) BOOL hasPrivateDataSyncOn;
@property (readonly, nonatomic) BOOL hasProductType;
@property (nonatomic) BOOL hasProgressivePersonalizationAllowed;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (nonatomic) BOOL hasRunningObsolete;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasSessionIdWatch;
@property (nonatomic) BOOL hasSignedIntoITunes;
@property (nonatomic) BOOL hasSignedIntoIcloud;
@property (nonatomic) BOOL hasTestBucket;
@property (nonatomic) BOOL hasTextSize;
@property (nonatomic) BOOL hasUpgradedFromObsolete;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL hasUserStartDate;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (nonatomic) BOOL hasUtcOffset;
@property (readonly, nonatomic) BOOL hasWatchSessionId;
@property (nonatomic) BOOL hasWidgetDisplayMode;
@property (nonatomic) BOOL hasWidgetDisplayModeSessionEnd;
@property (nonatomic) BOOL hasWidgetModeType;
@property (readonly, nonatomic) BOOL hasWidgetSessionId;
@property (readonly, nonatomic) BOOL hasWidgetUserId;
@property (nonatomic) int incomeBracket; // ivar: _incomeBracket
@property (nonatomic) float incomeBracketConfidenceLevel; // ivar: _incomeBracketConfidenceLevel
@property (nonatomic) BOOL iosSettingsNotificationsBadgeAppIconEnabled; // ivar: _iosSettingsNotificationsBadgeAppIconEnabled
@property (nonatomic) BOOL iosSettingsNotificationsEnabled; // ivar: _iosSettingsNotificationsEnabled
@property (nonatomic) BOOL iosSettingsNotificationsShowAsBannersEnabled; // ivar: _iosSettingsNotificationsShowAsBannersEnabled
@property (nonatomic) BOOL iosSettingsNotificationsShowInHistoryEnabled; // ivar: _iosSettingsNotificationsShowInHistoryEnabled
@property (nonatomic) BOOL iosSettingsNotificationsShowOnLockScreenEnabled; // ivar: _iosSettingsNotificationsShowOnLockScreenEnabled
@property (nonatomic) BOOL iosSettingsNotificationsSoundEnabled; // ivar: _iosSettingsNotificationsSoundEnabled
@property (nonatomic) BOOL isDiagnosticsUsageEnabled; // ivar: _isDiagnosticsUsageEnabled
@property (nonatomic) BOOL isNewUser; // ivar: _isNewUser
@property (nonatomic) BOOL isPaidSubscriber; // ivar: _isPaidSubscriber
@property (nonatomic) BOOL isPaidSubscriberFromAppStore; // ivar: _isPaidSubscriberFromAppStore
@property (nonatomic) BOOL isPaidSubscriberFromNews; // ivar: _isPaidSubscriberFromNews
@property (nonatomic) BOOL isPaidSubscriberFromThirdParty; // ivar: _isPaidSubscriberFromThirdParty
@property (nonatomic) BOOL isStoreDemoModeEnabled; // ivar: _isStoreDemoModeEnabled
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) NSInteger lastAppOpenDate; // ivar: _lastAppOpenDate
@property (nonatomic) BOOL locationPermissionGranted; // ivar: _locationPermissionGranted
@property (nonatomic) int newsWidgetModeGroup; // ivar: _newsWidgetModeGroup
@property (retain, nonatomic) NSString *newsWidgetModeGroupId; // ivar: _newsWidgetModeGroupId
@property (nonatomic) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (retain, nonatomic) NSString *notwUserId; // ivar: _notwUserId
@property (retain, nonatomic) NSString *originatingCampaignId; // ivar: _originatingCampaignId
@property (retain, nonatomic) NSString *originatingCampaignType; // ivar: _originatingCampaignType
@property (retain, nonatomic) NSString *originatingCreativeId; // ivar: _originatingCreativeId
@property (nonatomic) int osInstallVariant; // ivar: _osInstallVariant
@property (retain, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (nonatomic) int paywallConfigType; // ivar: _paywallConfigType
@property (retain, nonatomic) NSString *personalizationPortraitVariantName; // ivar: _personalizationPortraitVariantName
@property (retain, nonatomic) NSString *previousAppVersion; // ivar: _previousAppVersion
@property (retain, nonatomic) NSString *previousOsVersion; // ivar: _previousOsVersion
@property (nonatomic) BOOL privateDataEncrypted; // ivar: _privateDataEncrypted
@property (nonatomic) BOOL privateDataSyncOn; // ivar: _privateDataSyncOn
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (nonatomic) BOOL progressivePersonalizationAllowed; // ivar: _progressivePersonalizationAllowed
@property (nonatomic) int reachabilityStatus; // ivar: _reachabilityStatus
@property (retain, nonatomic) NSMutableArray *regionIds; // ivar: _regionIds
@property (nonatomic) BOOL runningObsolete; // ivar: _runningObsolete
@property (retain, nonatomic) NSData *sessionId; // ivar: _sessionId
@property (retain, nonatomic) NSData *sessionIdWatch; // ivar: _sessionIdWatch
@property (nonatomic) BOOL signedIntoITunes; // ivar: _signedIntoITunes
@property (nonatomic) BOOL signedIntoIcloud; // ivar: _signedIntoIcloud
@property (nonatomic) NSInteger testBucket; // ivar: _testBucket
@property (nonatomic) int textSize; // ivar: _textSize
@property (nonatomic) BOOL upgradedFromObsolete; // ivar: _upgradedFromObsolete
@property (retain, nonatomic) NSString *userId; // ivar: _userId
@property (readonly, nonatomic) *int userSegmentationSegmentSetIds;
@property (readonly, nonatomic) NSUInteger userSegmentationSegmentSetIdsCount;
@property (readonly, nonatomic) *NSInteger userSegmentationTreatmentIds;
@property (readonly, nonatomic) NSUInteger userSegmentationTreatmentIdsCount;
@property (nonatomic) NSInteger userStartDate; // ivar: _userStartDate
@property (retain, nonatomic) NSString *userStorefrontId; // ivar: _userStorefrontId
@property (nonatomic) int utcOffset; // ivar: _utcOffset
@property (retain, nonatomic) NSString *watchSessionId; // ivar: _watchSessionId
@property (nonatomic) int widgetDisplayMode; // ivar: _widgetDisplayMode
@property (nonatomic) int widgetDisplayModeSessionEnd; // ivar: _widgetDisplayModeSessionEnd
@property (nonatomic) int widgetModeType; // ivar: _widgetModeType
@property (retain, nonatomic) NSData *widgetSessionId; // ivar: _widgetSessionId
@property (retain, nonatomic) NSString *widgetUserId; // ivar: _widgetUserId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)userSegmentationTreatmentIdsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)campaignTypeAsString:(int)arg0 ;
-(id)cellularRadioAccessTechnologyAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)newsWidgetModeGroupAsString:(int)arg0 ;
-(id)osInstallVariantAsString:(int)arg0 ;
-(id)paywallConfigTypeAsString:(int)arg0 ;
-(id)reachabilityStatusAsString:(int)arg0 ;
-(id)regionIdsAtIndex:(NSUInteger)arg0 ;
-(id)widgetDisplayModeAsString:(int)arg0 ;
-(id)widgetDisplayModeSessionEndAsString:(int)arg0 ;
-(id)widgetModeTypeAsString:(int)arg0 ;
-(int)StringAsCampaignType:(id)arg0 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg0 ;
-(int)StringAsNewsWidgetModeGroup:(id)arg0 ;
-(int)StringAsOsInstallVariant:(id)arg0 ;
-(int)StringAsPaywallConfigType:(id)arg0 ;
-(int)StringAsReachabilityStatus:(id)arg0 ;
-(int)StringAsWidgetDisplayMode:(id)arg0 ;
-(int)StringAsWidgetDisplayModeSessionEnd:(id)arg0 ;
-(int)StringAsWidgetModeType:(id)arg0 ;
-(int)userSegmentationSegmentSetIdsAtIndex:(NSUInteger)arg0 ;
-(void)addRegionIds:(id)arg0 ;
-(void)addUserSegmentationSegmentSetIds:(int)arg0 ;
-(void)addUserSegmentationTreatmentIds:(NSInteger)arg0 ;
-(void)clearRegionIds;
-(void)clearUserSegmentationSegmentSetIds;
-(void)clearUserSegmentationTreatmentIds;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif