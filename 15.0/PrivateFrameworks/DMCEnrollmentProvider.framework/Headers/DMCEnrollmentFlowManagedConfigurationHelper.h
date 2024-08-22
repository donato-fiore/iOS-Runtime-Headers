// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTFLOWMANAGEDCONFIGURATIONHELPER_H
#define DMCENROLLMENTFLOWMANAGEDCONFIGURATIONHELPER_H

@class NSString;
@protocol MCInteractionDelegate, DMCEnrollmentFlowMCBridge;

#import <Foundation/Foundation.h>

#import "DMCBYODEnrollmentFlowUIPresenter.h"

@interface DMCEnrollmentFlowManagedConfigurationHelper : NSObject <MCInteractionDelegate, DMCEnrollmentFlowMCBridge>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *devicePasscode; // ivar: _devicePasscode
@property (readonly) NSUInteger hash;
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
-(id)assignedManagedAppleIDFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)detailsFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)friendlyNameForMDMPayloadInProfile:(id)arg0 error:(*id)arg1 ;
-(id)getMachineInfoForEnrollmentType:(NSUInteger)arg0 enrollmentMethod:(NSUInteger)arg1 ;
-(id)organizationFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)profileIdentifierFromMDMProfile:(id)arg0 error:(*id)arg1 ;
-(id)readEnrollmentDirtyState;
-(void)_handleUserInputRequest:(id)arg0 ;
-(void)installEnrollmentProfile:(id)arg0 devicePasscode:(id)arg1 personaID:(id)arg2 rmAccountIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)profileConnection:(id)arg0 didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)profileConnection:(id)arg0 didFinishPreflightWithError:(id)arg1 ;
-(void)profileConnection:(id)arg0 didRequestMAIDSignIn:(id)arg1 personaID:(id)arg2 ;
-(void)profileConnection:(id)arg0 didRequestUserInput:(id)arg1 ;
-(void)profileConnection:(id)arg0 didShowUserWarnings:(id)arg1 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg0 ;
-(void)reauthenticationComplete;
-(void)removeProfileWithIdentifier:(id)arg0 async:(BOOL)arg1 ;
-(void)requestEnrollmentFlowMonitorWithPersonaID:(id)arg0 ;
-(void)stopEnrollmentFlowMonitor;
-(void)trackEnrollmentDirtyState:(id)arg0 ;


@end


#endif