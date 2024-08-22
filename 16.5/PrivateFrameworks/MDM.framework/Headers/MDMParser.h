// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMPARSER_H
#define MDMPARSER_H

@class NSString, CATOperationQueue;


#import "MDMAbstractTunnelParser.h"
#import "MDMBackupManager.h"
#import "MDMServerCore.h"

@interface MDMParser : MDMAbstractTunnelParser

@property (retain, nonatomic) MDMBackupManager *backupManagerForEnterprisePersona; // ivar: _backupManagerForEnterprisePersona
@property (retain, nonatomic) MDMBackupManager *backupManagerForMainPersona; // ivar: _backupManagerForMainPersona
@property (readonly, nonatomic) BOOL isChaperoned; // ivar: _isChaperoned
@property (nonatomic) BOOL isMDM; // ivar: _isMDM
@property (retain, nonatomic) NSString *managingProfileIdentifier; // ivar: _managingProfileIdentifier
@property (retain, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (weak, nonatomic) MDMServerCore *server; // ivar: _server


+(BOOL)_dmfAction:(*NSUInteger)arg0 fromMDMActionString:(id)arg1 ;
+(BOOL)_useDelayFlagAllowed;
+(NSUInteger)_shouldUseDelayWithRequest:(id)arg0 ;
+(id)_DMFKeysToMCKeys;
+(id)_MCKeysToDMFKeys;
+(id)_MCKeysWithNoMatchingDMFKey;
+(id)_allAccessibilitySettingsKeys;
+(id)_errorFromDMFSoftwareUpdateError:(id)arg0 ;
+(id)_errorWithDomain:(id)arg0 code:(NSInteger)arg1 descriptionKey:(id)arg2 underlyingError:(id)arg3 type:(id)arg4 ;
+(id)_numericAccessibilitySettingsKeys;
+(id)_resolvedInstallActionStringForAction:(NSUInteger)arg0 ;
+(id)_statusFromError:(id)arg0 action:(NSUInteger)arg1 ;
+(id)_stringForAppState:(NSUInteger)arg0 ;
+(id)_updateDictionaryFromUpdate:(id)arg0 ;
+(id)errorChainFromError:(id)arg0 ;
+(id)malformedRequestErrorResult;
-(BOOL)_analyticsRequiresNetworkTetheringFromRequest:(id)arg0 ;
-(BOOL)_identifiersIsStringArray:(id)arg0 ;
-(BOOL)_isManagedApp:(id)arg0 ;
-(BOOL)_isManagedAppFromManagementInformation:(id)arg0 ;
-(BOOL)_isProfileIdentifierManaged:(id)arg0 ;
-(BOOL)_isProvisioningProfileUUIDManaged:(id)arg0 ;
-(BOOL)_isTriggerDiagnosticsAllowed;
-(BOOL)_rejectSoftwareUpdateBecauseUserLoggedInCompletionBlock:(id)arg0 ;
-(BOOL)_validateSetting:(id)arg0 accessRights:(NSUInteger)arg1 outError:(*id)arg2 ;
-(NSUInteger)_profileInstallationStyleForRequest:(id)arg0 ;
-(id)_accessibilitySettings;
-(id)_allCommands;
-(id)_allSettingsItems;
-(id)_allowedDeviceQueriesForAccessRights:(NSUInteger)arg0 ;
-(id)_analyticsCommandNameFromRequest:(id)arg0 ;
-(id)_analyticsErrorFromResponse:(id)arg0 ;
-(id)_appAlreadyInstalledErrorWithBundleID:(id)arg0 ;
-(id)_appAlreadyInstalledErrorWithiTunesStoreID:(id)arg0 ;
-(id)_appAlreadyQueuedErrorWithBundleID:(id)arg0 ;
-(id)_appAlreadyQueuedErrorWithiTunesStoreID:(id)arg0 ;
-(id)_appStoreDisabledError;
-(id)_applyRedemptionCode:(id)arg0 assertion:(id)arg1 ;
-(id)_cannotValidateAppIDErrorUnderlyingError:(id)arg0 ;
-(id)_certificateList:(id)arg0 ;
-(id)_clearPasscode:(id)arg0 ;
-(id)_declarativeManagement:(id)arg0 ;
-(id)_deleteAllUsersWithForceDeletion:(BOOL)arg0 ;
-(id)_deleteUser:(id)arg0 ;
-(id)_deviceInformationWithRequest:(id)arg0 accessRights:(NSUInteger)arg1 ;
-(id)_deviceInformationWithRequest:(id)arg0 allowedQueries:(id)arg1 ;
-(id)_deviceLocation:(id)arg0 ;
-(id)_deviceLock:(id)arg0 ;
-(id)_deviceNotInMDMLostModeError;
-(id)_eraseDevice:(id)arg0 ;
-(id)_handleFetchAppsRequest:(id)arg0 managedOnly:(BOOL)arg1 deleteFeedback:(BOOL)arg2 advanceTransientStates:(BOOL)arg3 propertyKeys:(id)arg4 block:(id)arg5 ;
-(id)_handleSetAppManagementInfoRequest:(id)arg0 outAdditionalResponseKeys:(*id)arg1 block:(id)arg2 ;
-(id)_installProfile:(id)arg0 accessRights:(NSUInteger)arg1 ;
-(id)_installProfile:(id)arg0 accessRights:(NSUInteger)arg1 installationType:(NSInteger)arg2 ;
-(id)_installProvisioningProfile:(id)arg0 ;
-(id)_installedApplicationList:(id)arg0 ;
-(id)_invalidManifestErrorWithURL:(id)arg0 underlyingError:(id)arg1 ;
-(id)_invalidRequestTypeError:(id)arg0 ;
-(id)_invalidRequestTypeInMDMLostModeError:(id)arg0 ;
-(id)_invalidRequestTypeInSingleAppModeError:(id)arg0 ;
-(id)_licenseNotFoundErrorWithBundleID:(id)arg0 underlyingError:(id)arg1 ;
-(id)_licenseNotFoundErrorWithiTunesStoreID:(id)arg0 underlyingError:(id)arg1 ;
-(id)_logOutUser:(id)arg0 ;
-(id)_malformedRequestError;
-(id)_managedApplicationAttributes:(id)arg0 ;
-(id)_managedApplicationConfiguration:(id)arg0 ;
-(id)_managedApplicationFeedback:(id)arg0 ;
-(id)_managedApplicationList:(id)arg0 ;
-(id)_notAuthorizedError;
-(id)_notManagedErrorAppID:(id)arg0 ;
-(id)_notNetworkTetheredError;
-(id)_originator;
-(id)_performSetAccessibilitySettings:(id)arg0 ;
-(id)_performSetAppAnalytics:(id)arg0 ;
-(id)_performSetAppAttributes:(id)arg0 outAdditionalResponseKeys:(*id)arg1 ;
-(id)_performSetAppConfig:(id)arg0 outAdditionalResponseKeys:(*id)arg1 ;
-(id)_performSetBluetooth:(id)arg0 ;
-(id)_performSetDataRoaming:(id)arg0 ;
-(id)_performSetDeviceName:(id)arg0 ;
-(id)_performSetDiagnosticSubmission:(id)arg0 ;
-(id)_performSetGracePeriod:(id)arg0 ;
-(id)_performSetMAIDDefaultDomains:(id)arg0 ;
-(id)_performSetMDMOptions:(id)arg0 ;
-(id)_performSetMaximumResidentUsers:(id)arg0 ;
-(id)_performSetOnlineAuthenticationGracePeriod:(id)arg0 ;
-(id)_performSetOrganizationInfo:(id)arg0 ;
-(id)_performSetPersonalHotspot:(id)arg0 ;
-(id)_performSetResidentUserQuotaSize:(id)arg0 ;
-(id)_performSetResidentUsers:(id)arg0 ;
-(id)_performSetSessionTimeout:(id)arg0 ;
-(id)_performSetSharedDeviceConfiguration:(id)arg0 ;
-(id)_performSetSkipLanguageAndLocaleSetupForNewUsers:(id)arg0 ;
-(id)_performSetTemporarySessionOnly:(id)arg0 ;
-(id)_performSetTimezone:(id)arg0 ;
-(id)_performSetUpdatePath:(id)arg0 ;
-(id)_performSetVoiceRoaming:(id)arg0 ;
-(id)_performSetWallpaper:(id)arg0 ;
-(id)_performSetting:(id)arg0 outAdditionalResponseKeys:(*id)arg1 outRestartAppleTVApp:(*BOOL)arg2 ;
-(id)_profileList:(id)arg0 ;
-(id)_profileList:(id)arg0 filterFlags:(int)arg1 ;
-(id)_provisioningProfileList:(id)arg0 ;
-(id)_refreshCellularPlans:(id)arg0 ;
-(id)_removeApplication:(id)arg0 ;
-(id)_removeProfile:(id)arg0 ;
-(id)_removeProfileWithIdentifier:(id)arg0 forInstalledProfilesWithFilterFlags:(int)arg1 ;
-(id)_removeProfileWithIdentifier:(id)arg0 installationType:(NSInteger)arg1 ;
-(id)_removeProvisioningProfile:(id)arg0 ;
-(id)_requestUnlockToken:(id)arg0 ;
-(id)_responseForMalformedUpdateRequest;
-(id)_restartDevice:(id)arg0 ;
-(id)_restrictions:(id)arg0 ;
-(id)_restrictions:(id)arg0 withProfileFilterFlags:(int)arg1 ;
-(id)_securityInfo:(id)arg0 ;
-(id)_serviceSubscriptionPropertiesWithDMFKeysMappedToMCKeys:(id)arg0 ;
-(id)_serviceSubscriptionsWithDMFKeysMappedToMCKeys:(id)arg0 ;
-(id)_setResidentUsersNumber:(id)arg0 ;
-(id)_settings:(id)arg0 accessRights:(NSUInteger)arg1 ;
-(id)_shutDownDevice:(id)arg0 ;
-(id)_softwareUpdatesNotPermittedWithLoggedInUserError;
-(id)_stringForBookState:(NSUInteger)arg0 ;
-(id)_triggerDiagnostics:(id)arg0 ;
-(id)_unavailableCommandsBeforeFirstUnlock;
-(id)_unavailableCommandsInLimitedAppsMode;
-(id)_unavailableCommandsWhileLocked;
-(id)_userList:(id)arg0 ;
-(id)_validateApplications:(id)arg0 ;
-(id)initWithManagingProfileIdentifier:(id)arg0 ;
-(id)unavailableCommandsDuringBuddy;
-(id)unavailableCommandsWhileInMDMLostMode;
-(void)_activationLockBypassCodeRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)_applyOverridesToDeviceInformationDictionary:(id)arg0 ;
-(void)_availableOSUpdates:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_clearActivationLockBypassCodeRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)_clearRestrictionsPasswordRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)_deviceConfigured:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_disableLostMode:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_dmfScheduleOSUpdate:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_enableLostMode:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_installApplication:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_installMedia:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_inviteToProgramRequest:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_managedMediaList:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_mdmScheduleOSUpdate:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_performInstallApplicationRequestWithManifestURL:(id)arg0 iTunesStoreIDObj:(id)arg1 bundleId:(id)arg2 flagsObj:(id)arg3 attributes:(id)arg4 configuration:(id)arg5 manageChangeStr:(id)arg6 purchaseMethodValue:(int)arg7 personaID:(id)arg8 completionBlock:(id)arg9 ;
-(void)_playLostModeSound:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_processRequest:(id)arg0 accessRights:(NSUInteger)arg1 assertion:(id)arg2 completionBlock:(id)arg3 ;
-(void)_rejectSoftwareUpdateBecauseOfMalformedRequestCompletionBlock:(id)arg0 ;
-(void)_removeMedia:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_requestMirroringRequest:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_scheduleOSUpdate:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_scheduleOSUpdateScan:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_sendAnalyticsMDMCommandEventWithRequest:(id)arg0 response:(id)arg1 ;
-(void)_statusOfOSUpdates:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)_stopMirroringRequest:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;
-(void)processRequest:(id)arg0 accessRights:(NSUInteger)arg1 assertion:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif