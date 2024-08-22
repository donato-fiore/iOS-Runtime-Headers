// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTFLOWMANAGEDCONFIGURATIONHELPER_H
#define DMCENROLLMENTFLOWMANAGEDCONFIGURATIONHELPER_H

@class NSString, NSData;
@protocol MCInteractionDelegate, DMCEnrollmentFlowMCBridge;

#import <Foundation/Foundation.h>

#import "DMCBYODEnrollmentFlowUIPresenter.h"

@interface DMCEnrollmentFlowManagedConfigurationHelper : NSObject <MCInteractionDelegate, DMCEnrollmentFlowMCBridge>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *devicePasscode; // ivar: _devicePasscode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *installingProfileData; // ivar: _installingProfileData
@property (weak) DMCBYODEnrollmentFlowUIPresenter *presenter; // ivar: _presenter
@property (copy, nonatomic) id *profileInstallationCompletionHandler; // ivar: _profileInstallationCompletionHandler
@property (readonly) Class superclass;


+(id)_createProfileInvalidError;
+(id)_mdmProfileInfo;
+(id)organizationNameFromProfile:(id)arg0 payload:(id)arg1 ;
-(BOOL)isDeviceMDMEnrolled;
-(BOOL)isDevicePasscodeSet;
-(BOOL)isDeviceSharediPad;
-(BOOL)isDeviceSupervised;
-(BOOL)isMDMProfileLocked;
-(BOOL)removeProfileAssociatedWithPersonaID:(id)arg0 ;
-(BOOL)validateESSOConfigurationProfile:(id)arg0 error:(*id)arg1 ;
-(id)assignedManagedAppleIDFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)detailsFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)friendlyNameForMDMPayloadInProfile:(id)arg0 error:(*id)arg1 ;
-(id)getMachineInfoForEnrollmentType:(NSUInteger)arg0 enrollmentMethod:(NSUInteger)arg1 ;
-(id)organizationFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)profileIdentifierFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)readEnrollmentDirtyState;
-(void)_handleUserInputRequest:(id)arg0 ;
-(void)blockAppInstallsWithCompletion:(id)arg0 ;
-(void)installEnrollmentProfile:(id)arg0 devicePasscode:(id)arg1 personaID:(id)arg2 rmAccountIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)installEnrollmentProfile:(id)arg0 devicePasscode:(id)arg1 personaID:(id)arg2 rmAccountIdentifier:(id)arg3 managedProfileIdentifiers:(id)arg4 completionHandler:(id)arg5 ;
-(void)manageApplicationWithBundleID:(id)arg0 iTunesItemID:(id)arg1 organization:(id)arg2 personaID:(id)arg3 associatedDomains:(id)arg4 associatedDomainsEnableDirectDownloads:(id)arg5 configuration:(id)arg6 completionHandler:(id)arg7 ;
-(void)profileConnection:(id)arg0 didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)profileConnection:(id)arg0 didFinishPreflightWithError:(id)arg1 ;
-(void)profileConnection:(id)arg0 didRequestMAIDSignIn:(id)arg1 personaID:(id)arg2 ;
-(void)profileConnection:(id)arg0 didRequestManagedRestoreWithManagedAppleID:(id)arg1 personaID:(id)arg2 ;
-(void)profileConnection:(id)arg0 didRequestUserInput:(id)arg1 ;
-(void)profileConnection:(id)arg0 didShowUserWarnings:(id)arg1 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg0 ;
-(void)reauthenticationComplete;
-(void)removeApplicationWithBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeProfileWithIdentifier:(id)arg0 async:(BOOL)arg1 ;
-(void)requestEnrollmentFlowMonitorWithPersonaID:(id)arg0 ;
-(void)stopEnrollmentFlowMonitor;
-(void)trackEnrollmentDirtyState:(id)arg0 ;
-(void)unblockAppInstallsWithCompletion:(id)arg0 ;


@end


#endif