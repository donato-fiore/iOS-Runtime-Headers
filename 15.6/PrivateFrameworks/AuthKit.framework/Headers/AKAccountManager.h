// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKACCOUNTMANAGER_H
#define AKACCOUNTMANAGER_H

@class ACAccountType, NSMutableDictionary, ACAccountStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AKAccountManager : NSObject {
    NSObject<OS_dispatch_queue> *_accountQueue;
    ACAccountType *_authKitAccountType;
    os_unfair_lock_s _authKitAccountTypeLock;
    ACAccountType *_appleIDAccountType;
    os_unfair_lock_s _appleIDAccountTypeLock;
    ACAccountType *_iCloudAccountType;
    os_unfair_lock_s _iCloudAccountTypeLock;
    os_unfair_lock_s _accountTypeCacheLock;
    NSMutableDictionary *_accountTypeCache;
}


@property (readonly, nonatomic) ACAccountType *appleIDAccountType;
@property (readonly, nonatomic) ACAccountType *authKitAccountType;
@property (readonly, nonatomic) ACAccountType *iCloudAccountType;
@property (retain, nonatomic) ACAccountStore *store; // ivar: _accountStore


+(BOOL)isAccountsFrameworkAvailable;
+(id)personaIDIfCurrentPersonaIsDataSeparated;
+(id)sharedInstance;
+(id)stringRepresentationForService:(NSInteger)arg0 ;
+(void)performWithinPersonaForAccount:(id)arg0 withBlock:(id)arg1 ;
-(BOOL)_isAccountEligibleForSecurityUpgrade:(id)arg0 ofServiceType:(NSInteger)arg1 ;
-(BOOL)_setUsername:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)authorizationUsedForAccount:(id)arg0 ;
-(BOOL)canBeBeneficiaryForAccount:(id)arg0 ;
-(BOOL)canBeCustodianForAccount:(id)arg0 ;
-(BOOL)canHaveBeneficiaryForAccount:(id)arg0 ;
-(BOOL)canHaveCustodianForAccount:(id)arg0 ;
-(BOOL)custodianEnabledForAccount:(id)arg0 ;
-(BOOL)demoAccountForAccount:(id)arg0 ;
-(BOOL)deviceTrustRevokedForAccount:(id)arg0 ;
-(BOOL)hasMDMForAccount:(id)arg0 ;
-(BOOL)hasPrimaryiCloudAccountForAltDSID:(id)arg0 ;
-(BOOL)hasPrimaryiCloudAccountForAppleID:(id)arg0 ;
-(BOOL)isBeneficiaryForAccount:(id)arg0 ;
-(BOOL)isPrimaryiCloudAccount:(id)arg0 ;
-(BOOL)isPrimaryiCloudAccountEmailVerified:(id)arg0 ;
-(BOOL)needsRepairForAccount:(id)arg0 ;
-(BOOL)phoneAsAppleIDForAccount:(id)arg0 ;
-(BOOL)saveAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)selectedPrivateEmailForAccount:(id)arg0 ;
-(BOOL)shouldPerformSatoriWarmupVerificationForAccount:(id)arg0 ;
-(BOOL)shouldUpdateAuthModeForAccount:(id)arg0 ;
-(BOOL)userUnderAgeForAccount:(id)arg0 ;
-(BOOL)verifiedPrimaryEmailForAccount:(id)arg0 ;
-(NSInteger)_serviceTypeForServiceNameString:(id)arg0 ;
-(NSUInteger)authenticationModeForAccount:(id)arg0 ;
-(NSUInteger)repairStateForAccount:(id)arg0 ;
-(NSUInteger)securityLevelForAccount:(id)arg0 ;
-(id)DSIDForAccount:(id)arg0 ;
-(id)_accountTypeForServiceType:(NSInteger)arg0 ;
-(id)_aliasesForiCloudAccount:(id)arg0 ;
-(id)_altDSIDForiCloudAccount:(id)arg0 ;
-(id)_defaultSecurityUpgradeServiceNames;
-(id)_matchingServiceAccountForAuthKitAccount:(id)arg0 service:(NSInteger)arg1 ;
-(id)_serviceTypesForSecurityUpgrade;
-(id)_tokenWithName:(id)arg0 forAccount:(id)arg1 error:(*id)arg2 ;
-(id)accountEligibleForUpdate;
-(id)accountTypeForTypeIdentifier:(id)arg0 ;
-(id)accountsUsingService:(NSInteger)arg0 ;
-(id)activeServiceNamesForAccount:(id)arg0 ;
-(id)additionalInfoForAccount:(id)arg0 ;
-(id)ageOfMajorityForAccount:(id)arg0 ;
-(id)aliasesForAccount:(id)arg0 ;
-(id)allAuthKitAccounts;
-(id)altDSIDForAccount:(id)arg0 ;
-(id)altDSIDforPrimaryiCloudAccount;
-(id)appleIDAccountWithAltDSID:(id)arg0 ;
-(id)appleIDAccountWithAppleID:(id)arg0 ;
-(id)appleIDCountryCodeForAccount:(id)arg0 ;
-(id)authKitAccountWithAltDSID:(id)arg0 ;
-(id)authKitAccountWithAppleID:(id)arg0 ;
-(id)authKitAccountWithDSID:(id)arg0 ;
-(id)beneficiaryListVersionForAccount:(id)arg0 ;
-(id)combinedAliasesAndReachableEmailsForAccount:(id)arg0 ;
-(id)continuationTokenForAccount:(id)arg0 ;
-(id)continuationTokenForAccount:(id)arg0 error:(*id)arg1 ;
-(id)custodianListVersionForAccount:(id)arg0 ;
-(id)familyNameForAccount:(id)arg0 ;
-(id)formattedUsernameForAccount:(id)arg0 ;
-(id)forwardingEmailForAccount:(id)arg0 ;
-(id)givenNameForAccount:(id)arg0 ;
-(id)hearbeatTokenForAccount:(id)arg0 ;
-(id)hearbeatTokenForAccount:(id)arg0 error:(*id)arg1 ;
-(id)iCloudAccountForAltDSID:(id)arg0 ;
-(id)iCloudAccountForAppleID:(id)arg0 ;
-(id)init;
-(id)masterTokenForAccount:(id)arg0 ;
-(id)mostRecentlyUsedAuthKitAccount;
-(id)passwordResetTokenBackupForAccount:(id)arg0 ;
-(id)passwordResetTokenBackupForAccount:(id)arg0 error:(*id)arg1 ;
-(id)passwordResetTokenForAccount:(id)arg0 ;
-(id)passwordResetTokenForAccount:(id)arg0 error:(*id)arg1 ;
-(id)primaryAuthKitAccount;
-(id)primaryEmailAddressForAccount:(id)arg0 ;
-(id)primaryiCloudAccount;
-(id)reachableEmailAddressesForAccount:(id)arg0 ;
-(id)selectedAuthorizationEmailForAccount:(id)arg0 ;
-(id)servicesUsingAccount:(id)arg0 ;
-(id)transportableAuthKitAccount:(id)arg0 ;
-(void)_removeTokenForKeys:(id)arg0 forAccount:(id)arg1 ;
-(void)_removeTokenKey:(id)arg0 forAccount:(id)arg1 ;
-(void)removeAllPasswordResetTokens;
-(void)removeContinuationTokenForAccount:(id)arg0 ;
-(void)removeMasterTokenForAccount:(id)arg0 ;
-(void)removeUnusedAndDuplicateAuthKitAccountsWithCompletion:(id)arg0 ;
-(void)setAccount:(id)arg0 inUse:(BOOL)arg1 byService:(NSInteger)arg2 ;
-(void)setAdditionalInfo:(id)arg0 forAccount:(id)arg1 ;
-(void)setAgeOfMajority:(id)arg0 forAccount:(id)arg1 ;
-(void)setAliases:(id)arg0 forAccount:(id)arg1 ;
-(void)setAltDSID:(id)arg0 forAccount:(id)arg1 ;
-(void)setAppleIDCountryCode:(id)arg0 forAccount:(id)arg1 ;
-(void)setAuthenticationMode:(NSUInteger)arg0 forAccount:(id)arg1 ;
-(void)setAuthorizationUsed:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setBeneficiary:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setBeneficiaryListVersion:(id)arg0 forAccount:(id)arg1 ;
-(void)setCanBeBeneficiary:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setCanBeCustodian:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setCanHaveBeneficiary:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setCanHaveCustodian:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setCustodianEnabled:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setCustodianListVersion:(id)arg0 forAccount:(id)arg1 ;
-(void)setDSID:(id)arg0 forAccount:(id)arg1 ;
-(void)setDemoAccount:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setDeviceTrustRevoked:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setFamilyName:(id)arg0 forAccount:(id)arg1 ;
-(void)setForwardingEmail:(id)arg0 forAccount:(id)arg1 ;
-(void)setGivenName:(id)arg0 forAccount:(id)arg1 ;
-(void)setHasMDM:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setPhoneAsAppleID:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setPrimaryEmailAddress:(id)arg0 forAccount:(id)arg1 ;
-(void)setReachableEmailAddresses:(id)arg0 forAccount:(id)arg1 ;
-(void)setRepairState:(NSUInteger)arg0 forAccount:(id)arg1 ;
-(void)setSecurityLevel:(NSUInteger)arg0 forAccount:(id)arg1 ;
-(void)setSelectedAuthorizationEmail:(id)arg0 forAccount:(id)arg1 ;
-(void)setSelectedPrivateEmail:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setUserUnderage:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setVerifiedPrimaryEmail:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)updateAuthModeTimestampForAccount:(id)arg0 ;
-(void)updateSatoriWarmUpTimestampForAccount:(id)arg0 ;
-(void)updateUsername:(id)arg0 forAccountsWithAltDSID:(id)arg1 ;
-(void)updateVerifiedEmail:(BOOL)arg0 forAccountWithAltDSID:(id)arg1 ;


@end


#endif