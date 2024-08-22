// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMMCINTERFACE_H
#define MDMMCINTERFACE_H


#import <Foundation/Foundation.h>


@interface MDMMCInterface : NSObject



+(BOOL)clearPasscodeWithEscrowKeybagData:(id)arg0 secret:(id)arg1 outError:(*id)arg2 ;
+(BOOL)installProvisioningProfileData:(id)arg0 managingProfileIdentifier:(id)arg1 outError:(*id)arg2 ;
+(BOOL)isAutomaticDateAndTimeForced;
+(BOOL)isAwaitingDeviceConfigured;
+(BOOL)isDiagnosticsSubmissionRestricted;
+(BOOL)isEnterpriseBookBackupAllowed;
+(BOOL)isLimitedAppsMode;
+(BOOL)isPasscodeSet;
+(BOOL)isProfileWithIdentifier:(id)arg0 managedByProfileWithIdentifier:(id)arg1 ;
+(BOOL)isProvisioningProfileWithUUID:(id)arg0 managedByProfileWithIdentifier:(id)arg1 ;
+(BOOL)removeProvisioningProfileWithUUID:(id)arg0 managingProfileIdentifier:(id)arg1 outError:(*id)arg2 ;
+(id)cloudConfigurationDetails;
+(id)filterMDMRestrictions:(id)arg0 acceptingKeysFromDictionary:(id)arg1 ;
+(id)ipcuProfileList;
+(id)ipcuRemoveProfileWithIdentifier:(id)arg0 ;
+(id)managedAppIDs;
+(id)mdmProfileIdentifier;
+(id)mdmQueryableRestrictions;
+(id)profileIdentifierForProfileData:(id)arg0 allowEmptyPayload:(BOOL)arg1 outIsSupervisionProfile:(*BOOL)arg2 outProfileSigner:(struct __SecCertificate **)arg3 outMayInstallCloudProfile:(*BOOL)arg4 outError:(*id)arg5 ;
+(id)profileIdentifiersWithFilterFlags:(int)arg0 ;
+(id)profileListWithFilterFlags:(int)arg0 ;
+(id)provisioningProfileUUIDsWithManagedOnly:(BOOL)arg0 ;
+(int)_mcCloudConfigSourceForCCSource:(int)arg0 ;
+(int)_mcFilterFlagsForMDMFlags:(int)arg0 ;
+(int)_mcProfileStoragePurposeForMDMPurpose:(int)arg0 ;
+(void)enrollProvisionallyWithNonce:(id)arg0 completion:(id)arg1 ;
+(void)flush;
+(void)installProfileDataStoredForPurpose:(int)arg0 completion:(id)arg1 ;
+(void)profileDataStoredForPurpose:(int)arg0 completion:(id)arg1 ;
+(void)profiledCheckIn;
+(void)retrieveCloudConfigurationDetailsCompletion:(id)arg0 ;
+(void)retrieveCloudConfigurationFromURL:(id)arg0 username:(id)arg1 password:(id)arg2 anchorCertificates:(id)arg3 completion:(id)arg4 ;
+(void)storeCertificateData:(id)arg0 forHostIdentifier:(id)arg1 ;
+(void)storeCloudConfigurationDetails:(id)arg0 completion:(id)arg1 ;
+(void)storeProfileData:(id)arg0 configurationSource:(int)arg1 purpose:(int)arg2 completion:(id)arg3 ;


@end


#endif