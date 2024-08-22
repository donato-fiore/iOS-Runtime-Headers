// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCRESTRICTIONMANAGER_H
#define MCRESTRICTIONMANAGER_H

@class NSDictionary, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCRestrictionManager : NSObject

@property (readonly, copy, nonatomic) NSDictionary *combinedProfileRestrictions;
@property (readonly, nonatomic) NSDictionary *currentRestrictions;
@property (readonly, nonatomic) NSDictionary *defaultRestrictions;
@property (readonly, nonatomic) NSDictionary *defaultSettings;
@property (readonly, copy, nonatomic) NSDictionary *effectiveUserSettings;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (readonly, nonatomic) NSMutableDictionary *memberQueueCombinedProfileRestrictions;
@property (readonly, nonatomic) NSMutableDictionary *memberQueueCombinedSystemProfileRestrictions;
@property (retain, nonatomic) NSMutableDictionary *memberQueueEffectiveUserSettings; // ivar: _memberQueueEffectiveUserSettings
@property (retain, nonatomic) NSArray *memberQueueEffectiveWhitelistedAppsAndOptions; // ivar: _memberQueueEffectiveWhitelistedAppsAndOptions
@property (retain, nonatomic) NSMutableDictionary *memberQueueRestrictions; // ivar: _memberQueueRestrictions
@property (retain, nonatomic) NSMutableDictionary *memberQueueSettingsEvents; // ivar: _memberQueueSettingsEvents
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemClientRestrictions; // ivar: _memberQueueSystemClientRestrictions
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemNamespacedUserSettings; // ivar: _memberQueueSystemNamespacedUserSettings
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemProfileRestrictions; // ivar: _memberQueueSystemProfileRestrictions
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemUserSettings; // ivar: _memberQueueSystemUserSettings
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserClientRestrictions; // ivar: _memberQueueUserClientRestrictions
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserNamespacedUserSettings; // ivar: _memberQueueUserNamespacedUserSettings
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserProfileRestrictions; // ivar: _memberQueueUserProfileRestrictions
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserUserSettings; // ivar: _memberQueueUserUserSettings
@property (readonly, copy, nonatomic) NSDictionary *systemProfileRestrictions;
@property (readonly, copy, nonatomic) NSDictionary *systemUserSettings;
@property (readonly, copy, nonatomic) NSDictionary *userProfileRestrictions;
@property (readonly, copy, nonatomic) NSDictionary *userSettings;
@property (readonly, copy, nonatomic) NSDictionary *userUserSettings;


+(BOOL)boolSetting:(id)arg0 valueChangedBetweenOldSettings:(id)arg1 andNewSettings:(id)arg2 ;
+(BOOL)intersectedValuesForFeature:(id)arg0 changedBetweenOldRestrictions:(id)arg1 andNewRestrictions:(id)arg2 ;
+(BOOL)intersectedValuesSetting:(id)arg0 valueChangedBetweenOldSettings:(id)arg1 andNewSettings:(id)arg2 ;
+(BOOL)isInSingleAppModeWithSettingsDictionary:(id)arg0 ;
+(BOOL)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg0 ;
+(BOOL)isSingleAppModeLogoutAllowedWithSettingsDictionary:(id)arg0 ;
+(BOOL)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg0 ;
+(BOOL)isWhitelistedAppsRestrictionEnforcedWithRestrictionsDictionary:(id)arg0 ;
+(BOOL)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg0 ;
+(BOOL)restrictedBool:(id)arg0 changedBetweenOldRestrictions:(id)arg1 andNewRestrictions:(id)arg2 ;
+(BOOL)restrictedValue:(id)arg0 changedBetweenOldRestrictions:(id)arg1 andNewRestrictions:(id)arg2 ;
+(BOOL)unionValuesForFeature:(id)arg0 changedBetweenOldRestrictions:(id)arg1 andNewRestrictions:(id)arg2 ;
+(BOOL)unionValuesSetting:(id)arg0 valueChangedBetweenOldSettings:(id)arg1 andNewSettings:(id)arg2 ;
+(BOOL)valueSetting:(id)arg0 valueChangedBetweenOldSettings:(id)arg1 andNewSettings:(id)arg2 ;
+(id)_addRestrictionPayloadKeysDictionary:(id)arg0 toRestrictionPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2 ;
+(id)_filterRestrictionDictionary:(id)arg0 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2 ;
+(id)_filterRestrictionPayloadKeysDictionary:(id)arg0 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2 ;
+(id)_lockedDownRestrictionPayloadKeysWithPayloadKeysDictionary:(id)arg0 forRestrictionKey:(id)arg1 ;
+(id)_payloadKeysDictionaryAfterAddingFeature:(id)arg0 toRestrictionPayloadKeysDictionary:(id)arg1 forRestrictionKey:(id)arg2 ;
+(id)addRestrictionPayloadKeysDictionary:(id)arg0 toRestrictionPayloadKeysDictionary:(id)arg1 ;
+(id)allowedGrandfatheredRestrictionPayloadKeysDictionary;
// +(id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg0 managedAppBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(BOOL)arg3 mayOpenFromUnmanagedToManaged:(BOOL)arg4 mayOpenFromManagedToUnmanaged:(BOOL)arg5 isAppBundleIDExemptBlock:(id)arg6 isAppBundleIDAccountBasedBlock:(unk)arg7  ;
+(id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg0 managedAppBundleIDs:(id)arg1 hostAppIsManaged:(BOOL)arg2 mayOpenFromUnmanagedToManaged:(BOOL)arg3 mayOpenFromManagedToUnmanaged:(BOOL)arg4 ;
// +(id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg0 managedAppBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(BOOL)arg3 mayOpenFromUnmanagedToManaged:(BOOL)arg4 mayOpenFromManagedToUnmanaged:(BOOL)arg5 isAppBundleIDExemptBlock:(id)arg6 isAppBundleIDAccountBasedBlock:(unk)arg7  ;
+(id)applyRestrictions:(id)arg0 forFeature:(id)arg1 toParametersForBoolSetting:(id)arg2 ;
+(id)defaultIntersectedValuesForSetting:(id)arg0 ;
+(id)defaultParametersForBoolSetting:(id)arg0 ;
+(id)defaultParametersForIntersectedValuesSetting:(id)arg0 ;
+(id)defaultParametersForUnionValuesSetting:(id)arg0 ;
+(id)defaultParametersForValueSetting:(id)arg0 ;
+(id)defaultRestrictionFilePath;
+(id)defaultUnionValuesForSetting:(id)arg0 ;
+(id)defaultValueForSetting:(id)arg0 ;
+(id)effectiveGrandfatheredRestrictionPayloadKeysDictionary;
+(id)explicitlyRestrictedAppsBySetting;
+(id)explicitlyRestrictedEphemeralMultiUserApps;
+(id)filterGrandfatheredRestrictionsIfNeededFromRestrictions:(id)arg0 ;
+(id)filterRestrictionDictionary:(id)arg0 acceptedKeysDict:(id)arg1 ;
+(id)filterRestrictionDictionary:(id)arg0 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg1 ;
+(id)filterRestrictionDictionary:(id)arg0 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg1 ;
+(id)filterRestrictionDictionaryForPublicUse:(id)arg0 ;
+(id)filterRestrictionPayloadKeysDictionary:(id)arg0 removingPayloadKeysInRestrictionPayloadKeysDictionary:(id)arg1 ;
+(id)filterUserSettingsForPublicUse:(id)arg0 ;
+(id)grandfatheredRestrictionPayloadKeysDictionary;
+(id)intersectedValuesForFeature:(id)arg0 withRestrictionsDictionary:(id)arg1 ;
+(id)intersectedValuesSettingForFeature:(id)arg0 withUserSettingDectionary:(id)arg1 ;
+(id)maximumValueForSetting:(id)arg0 ;
+(id)minimumValueForSetting:(id)arg0 ;
+(id)newEffectiveSettingsByApplyingRestrictions:(id)arg0 toSettings:(id)arg1 ;
+(id)objectForFeature:(id)arg0 withRestrictionsDictionary:(id)arg1 ;
+(id)parametersForBoolSetting:(id)arg0 withUserSettingDictionary:(id)arg1 ;
+(id)parametersForIntersectedSetting:(id)arg0 withUserSettingDictionary:(id)arg1 ;
+(id)parametersForSetting:(id)arg0 ofType:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(id)parametersForUnionSetting:(id)arg0 withUserSettingDictionary:(id)arg1 ;
+(id)parametersForValueSetting:(id)arg0 withUserSettingDictionary:(id)arg1 ;
+(id)restrictionKeys;
+(id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg0 toRestrictionsDictionary:(id)arg1 outChangeDetected:(*BOOL)arg2 outError:(*id)arg3 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg0 defaultRestrictions:(id)arg1 profileRestrictions:(id)arg2 clientRestrictions:(id)arg3 outRestrictionsChanged:(*BOOL)arg4 outError:(*id)arg5 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg0 defaultRestrictions:(id)arg1 systemProfileRestrictions:(id)arg2 userProfileRestrictions:(id)arg3 systemClientRestrictions:(id)arg4 userClientRestrictions:(id)arg5 outRestrictionsChanged:(*BOOL)arg6 outError:(*id)arg7 ;
+(id)sharedManager;
+(id)systemMetadataValueForKey:(id)arg0 ;
+(id)unionValuesForFeature:(id)arg0 withRestrictionsDictionary:(id)arg1 ;
+(id)unionValuesSettingForFeature:(id)arg0 withUserSettingDictionary:(id)arg1 ;
+(id)valueForFeature:(id)arg0 withRestrictionsDictionary:(id)arg1 ;
+(id)valueSettingForFeature:(id)arg0 withUserSettingDictionary:(id)arg1 ;
+(int)appWhitelistStateWithSettingsDictionary:(id)arg0 restrictionsDictionary:(id)arg1 ;
+(int)boolSettingForFeature:(id)arg0 outAsk:(*BOOL)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)boolSettingForFeature:(id)arg0 withNewUserSetting:(id)arg1 currentSettings:(id)arg2 ;
+(int)boolSettingForFeature:(id)arg0 withUserSettingDictionary:(id)arg1 ;
+(int)defaultBoolValueForSetting:(id)arg0 ;
+(int)defaultBoolValueForSetting:(id)arg0 outAsk:(*BOOL)arg1 ;
+(int)restrictedBoolForFeature:(id)arg0 withRestrictionsDictionary:(id)arg1 ;
-(BOOL)_isBoolSettingLockedDown:(id)arg0 ;
-(BOOL)_isValueSettingLockedDown:(id)arg0 effectiveSetting:(id)arg1 ;
-(BOOL)allowedToRunAppWithBundleID:(id)arg0 ;
-(BOOL)applyConfiguration:(id)arg0 toDomain:(NSUInteger)arg1 inNamespace:(id)arg2 fromSender:(id)arg3 ;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg0 ;
-(BOOL)isInSingleAppMode;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg0 ;
-(BOOL)isSettingLockedDownByRestrictions:(id)arg0 ;
-(BOOL)isSingleAppModeLogoutAllowed;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg0 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg0 ;
-(id)_effectiveIntersectedValuesForSetting:(id)arg0 effectiveUserSettings:(id)arg1 ;
-(id)_effectiveUnionValuesForSetting:(id)arg0 effectiveUserSettings:(id)arg1 ;
-(id)_settingsEventFromProcess:(id)arg0 withTag:(id)arg1 ;
-(id)_updatedDomainSettingsEvents:(id)arg0 fromPreviousSettings:(id)arg1 toNewSettings:(id)arg2 sender:(id)arg3 ;
-(id)allClientUUIDsForClientType:(id)arg0 ;
-(id)appsAndOptionsForClientUUID:(id)arg0 ;
-(id)clientRestrictionsForClientUUID:(id)arg0 ;
-(id)description;
-(id)effectiveBlockedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg0 ;
-(id)effectiveIntersectedValuesForSetting:(id)arg0 ;
-(id)effectiveParametersForBoolSetting:(id)arg0 ;
-(id)effectiveParametersForBoolSetting:(id)arg0 configurationUUID:(id)arg1 ;
-(id)effectiveParametersForIntersectedSetting:(id)arg0 ;
-(id)effectiveParametersForUnionSetting:(id)arg0 ;
-(id)effectiveParametersForValueSetting:(id)arg0 ;
-(id)effectiveUnionValuesForSetting:(id)arg0 ;
-(id)effectiveValueForSetting:(id)arg0 ;
-(id)effectiveWhitelistedAppBundleIDs;
-(id)effectiveWhitelistedAppsAndOptions;
-(id)exchangeUUIDsRestrictingSettings:(id)arg0 ;
-(id)init;
-(id)intersectedValuesForFeature:(id)arg0 ;
-(id)intersectedValuesSettingForFeature:(id)arg0 ;
-(id)memberQueueAppsAndOptionsForClientUUID:(id)arg0 ;
-(id)memberQueueClientRestrictionsDictionaryForClientUUID:(id)arg0 ;
-(id)memberQueueClientRestrictionsForClientUUID:(id)arg0 ;
-(id)memberQueueClientTypeForClientUUID:(id)arg0 ;
-(id)memberQueueUserInfoForClientUUID:(id)arg0 ;
-(id)objectForFeature:(id)arg0 ;
-(id)parentalControlsBlockedAppBundleIDs;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg0 outChangeDetected:(*BOOL)arg1 outError:(*id)arg2 ;
-(id)profileIdentifiersRestrictingSettings:(id)arg0 ;
-(id)restrictedAppBundleIDs;
-(id)restrictedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg0 ;
-(id)restrictionEnforcedBlockedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg0 ;
-(id)restrictionEnforcedWhitelistedAppBundleIDs;
-(id)singleAppModeBundleID;
-(id)systemClientRestrictions;
-(id)unionValuesForFeature:(id)arg0 ;
-(id)unionValuesSettingForFeature:(id)arg0 ;
-(id)userClientRestrictions;
-(id)userInfoForClientUUID:(id)arg0 ;
-(id)valueForFeature:(id)arg0 ;
-(id)valueSettingForFeature:(id)arg0 ;
-(int)appWhitelistState;
-(int)boolSettingForFeature:(id)arg0 ;
-(int)effectiveRestrictedBoolForSetting:(id)arg0 ;
-(int)effectiveRestrictedBoolForSetting:(id)arg0 configurationUUID:(id)arg1 ;
-(int)restrictedBoolForFeature:(id)arg0 ;
-(void)clearEffectiveWhitelistedAppsAndOptionsCache;
-(void)invalidateRestrictions;
-(void)invalidateSettings;


@end


#endif