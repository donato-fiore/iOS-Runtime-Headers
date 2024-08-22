// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDDATABASEINITIALIZER_H
#define ACDDATABASEINITIALIZER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ACDDatabaseConnection.h"

@interface ACDDatabaseInitializer : NSObject {
    ACDDatabaseConnection *_databaseConnection;
    NSArray *_dataclasses;
    NSArray *_accountTypes;
    NSArray *_accounts;
    NSArray *_accessKeys;
}




+(id)new;
-(BOOL)_ensureAllDataclassesExist;
-(BOOL)_ensureAllInternalAccountTypesExist:(BOOL)arg0 ;
-(BOOL)updateDefaultContentIfNecessary:(*id)arg0 ;
-(id)_accessKeyWithName:(id)arg0 ;
-(id)_accessKeys;
-(id)_accountTypeWithIdentifier:(id)arg0 ;
-(id)_accountTypes;
-(id)_accounts;
-(id)_addAccountTypeWithIdentifier:(id)arg0 displayName:(id)arg1 visibility:(int)arg2 supportedDataclasses:(id)arg3 credentialType:(id)arg4 supportsAuthentication:(BOOL)arg5 supportsMultipleAccounts:(BOOL)arg6 ;
-(id)_addAccountTypeWithIdentifier:(id)arg0 displayName:(id)arg1 visibility:(int)arg2 supportedDataclasses:(id)arg3 syncableDataclasses:(id)arg4 credentialType:(id)arg5 supportsAuthentication:(BOOL)arg6 supportsMultipleAccounts:(BOOL)arg7 ;
-(id)_addAccountTypeWithIdentifier:(id)arg0 displayName:(id)arg1 visibility:(int)arg2 supportedDataclasses:(id)arg3 syncableDataclasses:(id)arg4 credentialType:(id)arg5 supportsAuthentication:(BOOL)arg6 supportsMultipleAccounts:(BOOL)arg7 credentialProtectionPolicy:(id)arg8 ;
-(id)_dataclassWithName:(id)arg0 ;
-(id)_dataclasses;
-(id)_managedDataclassesSetForNames:(id)arg0 ;
-(id)_modernDeviceLocatiorSupportedDataclasses;
-(id)_modernHolidayCalendarSupportedAndSyncableDataclasses;
-(id)_modernIMAPMailSupportedAndSyncableDataclasses;
-(id)_modernIMAPSupportedDataclasses;
-(id)_modernIMAPSyncableDataclasses;
-(id)_modernOnMyDeviceSupportedDataclasses;
-(id)_modernPOPSupportedAndSyncableDataclasses;
-(id)_resultsForEntityNamed:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseConnection:(id)arg0 ;
-(void)_add126AccountType;
-(void)_add163AccountType;
-(void)_addAIMAccountType;
-(void)_addAOLAccountType;
-(void)_addAccessKeyWithName:(id)arg0 ;
-(void)_addAccessKeysAttributeToCloudKitAccountType;
-(void)_addAccessKeysAttributeToFacebookAccountType;
-(void)_addAccessKeysAttributeToLinkedInAccountType;
-(void)_addAccessKeysAttributeToLiverpoolAccountType;
-(void)_addAccessKeysAttributeToTencentWeiboAccountType;
-(void)_addAndConfigureAllOSXAccountTypes;
-(void)_addAppleAccountType;
-(void)_addAppleIDAccountType;
-(void)_addAppleIDAuthenticationAccountType;
-(void)_addBookmarkDAVAccountType;
-(void)_addCalDAVAccountType;
-(void)_addCardDAVAccountType;
-(void)_addCloudKitAccountType;
-(void)_addCloudKitDataclasses;
-(void)_addContactsCalendarsDataclassesToFB;
-(void)_addCredentialType:(id)arg0 toAccountType:(id)arg1 supportsAuthentication:(BOOL)arg2 ;
-(void)_addDataclassWithName:(id)arg0 ;
-(void)_addDocumentsAndVPNDataclass;
-(void)_addExchangeAccountType;
-(void)_addFMFAccountType;
-(void)_addFaceTimeAccountType;
-(void)_addFacebookAccessKeys;
-(void)_addFacebookAccountType;
-(void)_addFacebookAndDAVLegacyAccountTypes;
-(void)_addFacebookAudienceAccessKey;
-(void)_addFacebookAudienceAccessKeyToFacebookAccountType;
-(void)_addFindMyiPhoneAccountType;
-(void)_addFlickrAccountType;
-(void)_addGameCenterAccountType;
-(void)_addGmailAccountType;
-(void)_addHolidayCalendarAccountType;
-(void)_addHotmailAccountType;
-(void)_addIDMSAccountType;
-(void)_addIMAPAccountType;
-(void)_addIMAPMailAccountType;
-(void)_addIMAPNotesAccountType;
-(void)_addIdentityServicesAccountType;
-(void)_addJabberAccountType;
-(void)_addLDAPAccountType;
-(void)_addLinkedInAccessKeys;
-(void)_addLinkedInAccountType;
-(void)_addLinkedInLegacyAccountType;
-(void)_addLiverpoolAccessKeys;
-(void)_addLiverpoolAccountType;
-(void)_addMSOAccountType;
-(void)_addMadridAccountType;
-(void)_addMissingAccountTypes;
-(void)_addNotesDataclassToAASupportedDataclasses;
-(void)_addOSXServerAccountType;
-(void)_addObsoleteAttributeToAccountTypes;
-(void)_addOnMyDeviceAccountType;
-(void)_addPOPAccountType;
-(void)_addPasswordCredentialTypeToGmailAccountType;
-(void)_addPasswordCredentialTypeToSMTPAccountType;
-(void)_addPublishedCalendarAccountType;
-(void)_addQQAccountType;
-(void)_addRemindersDataclassToCalDAVAccountType;
-(void)_addRemoteManagementAccountType;
-(void)_addSMTPAccountType;
-(void)_addSingleSignOnAccountType;
-(void)_addSubscribedCalendarAccountType;
-(void)_addSupportsAuthenticationAttributeToAccountTypes;
-(void)_addSupportsAuthenticationAttributeToAccounts;
-(void)_addSupportsMultipleAccountsAttributeToAccountTypes;
-(void)_addSyncableDataclassesToCardAndCalDAV;
-(void)_addTencentWeiboAccessKeys;
-(void)_addTencentWeiboAccountType;
-(void)_addTokenCredentialTypeToYahooAccountType;
-(void)_addTudouAccountType;
-(void)_addTwitterAccountType;
-(void)_addVimeoAccountType;
-(void)_addWarmingUpAttributeToAccounts;
-(void)_addWeiboAccountType;
-(void)_addYahooAccountType;
-(void)_addYahooIMAccountType;
-(void)_addYelpAccountType;
-(void)_addYoukuAccountType;
-(void)_addiTunesStoreAccountType;
-(void)_addiTunesStoreSandboxAccountType;
-(void)_allowMultipleAppleIDAuthenticationAccounts;
-(void)_aolSupportsAuthentication;
-(void)_changeFacebookAccountToLegacyAccountType;
-(void)_changeFacebookAndLinkedInAccountsToLegacyAccountTypes;
-(void)_changeSocialAccountTypeObsoleteAttributes;
-(void)_configureSMTPAccountType;
-(void)_createLiverpoolDataclasses;
-(void)_ensureAccountTypeWithIdentifier:(id)arg0 supportsDataclasses:(id)arg1 syncsDataclasses:(id)arg2 ;
-(void)_ensureMajorDataclassesExist;
-(void)_ensurePresenceOfNewsDataclass;
-(void)_ensureProperAccountTypeDataclasses;
-(void)_limitFlickrToOneAccount;
-(void)_limitLinkedInToOneAccount;
-(void)_limitVimeoToOneAccount;
-(void)_makeTencentWeiboSingleton;
-(void)_makeTudouYoukuSingletons;
-(void)_removeAIMAccounts;
-(void)_removeBTMMType;
-(void)_removeFacebookAppVersionAccessKey;
-(void)_removeFacebookPermissionGroupAccessKey;
-(void)_removeLiverpoolTypes;
-(void)_removeMessagesFromAOLSupportedDataclasses;
-(void)_removeMessagesFromGoogleSupportedDataclasses;
-(void)_removeMessengerFromYahooSupportedDataclasses;
-(void)_removeRedundantAccountTypes;
-(void)_removeRedundantDataclasses;
-(void)_setCloudKitAllowsMultipleAccounts;
-(void)_setCloudKitCredentialType;
-(void)_setOwningBundleIDForNativeAccountTypes;
-(void)_setSupportedDataclassesForAOLAccountType;
-(void)_setYahooAccountsProvisionedDataclassesToSupportedOnes;
-(void)_supportiCloudKeychainSyncDataclass;
-(void)_supportiCloudNewsDataclass;
-(void)_switchAolAccountsToOAuth;
-(void)_switchGoogleToOAuthAuthentication;
-(void)_switchHotmailToOAuthAuthentication;
-(void)_switchYahooToOAuthAuthentication;
-(void)_switchYahooToPasswordAuthentication;
-(void)_updateAOLAndAddNotificationsDataclass;
-(void)_updateFlickrCredentialTypeToOAuth;
-(void)_updateIdentityServicesAccountDescription;
-(void)_updateIdentityServicesAccountTypeToSupportAuthenticationAndMultipleAccounts;
-(void)_updateMacOSServerAccountDescription;
-(void)_updateOSXServerAccountDescription;
-(void)_updateTencentWeiboCredentialTypeToOAuth2;
-(void)_updateVimeoCredentialTypeToOAuth;
-(void)_updateWeiboAccountTypeIfNecessary;
-(void)_upgradeLinkedInAccountType;


@end


#endif