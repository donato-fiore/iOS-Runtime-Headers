// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTFLOWCONTROLLER_H
#define DMCENROLLMENTFLOWCONTROLLER_H

@class NSArray, NSString, NSMutableDictionary, NSData, NSURL;
@protocol DMCEnrollmentFlowMCBridge, DMCEnrollmentFlowPresenter;


#import "DMCEnrollmentFlowControllerBase.h"
#import "DMCEnrollmentDirtyState.h"
#import "DMCServiceDiscoveryHelper.h"

@interface DMCEnrollmentFlowController : DMCEnrollmentFlowControllerBase

@property (copy, nonatomic) NSArray *anchorCertificateRefs; // ivar: _anchorCertificateRefs
@property (retain, nonatomic) NSString *authToken; // ivar: _authToken
@property (retain, nonatomic) NSMutableDictionary *authenticationResults; // ivar: _authenticationResults
@property (nonatomic) BOOL cleanupIfFail; // ivar: _cleanupIfFail
@property (retain, nonatomic) NSString *devicePasscode; // ivar: _devicePasscode
@property (retain, nonatomic) DMCEnrollmentDirtyState *dirtyState; // ivar: _dirtyState
@property (copy, nonatomic) id *enrollmentCompletionHandler; // ivar: _enrollmentCompletionHandler
@property (nonatomic) NSUInteger enrollmentMethod; // ivar: _enrollmentMethod
@property (nonatomic) NSUInteger enrollmentType; // ivar: _enrollmentType
@property (retain, nonatomic) NSString *friendlyName; // ivar: _friendlyName
@property (nonatomic) BOOL hasExecutedUIStep; // ivar: _hasExecutedUIStep
@property (nonatomic) BOOL isPostRestoration; // ivar: _isPostRestoration
@property (nonatomic) BOOL isProfileLocked; // ivar: _isProfileLocked
@property (nonatomic) BOOL isRenewalFlow; // ivar: _isRenewalFlow
@property (retain, nonatomic) NSString *managedAppleID; // ivar: _managedAppleID
@property (retain, nonatomic) NSObject<DMCEnrollmentFlowMCBridge> *managedConfigurationHelper; // ivar: _managedConfigurationHelper
@property (nonatomic) BOOL noCompletionScene; // ivar: _noCompletionScene
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSString *personaID; // ivar: _personaID
@property (retain, nonatomic) NSObject<DMCEnrollmentFlowPresenter> *presenter; // ivar: _presenter
@property (retain, nonatomic) NSData *profileData; // ivar: _profileData
@property (retain, nonatomic) NSString *profileIdentifier; // ivar: _profileIdentifier
@property (nonatomic) BOOL restartIfFail; // ivar: _restartIfFail
@property (retain, nonatomic) NSString *rmAccountIdentifier; // ivar: _rmAccountIdentifier
@property (retain, nonatomic) DMCServiceDiscoveryHelper *serviceDiscoveryHelper; // ivar: _serviceDiscoveryHelper
@property (retain, nonatomic) NSURL *serviceURL; // ivar: _serviceURL
@property (retain, nonatomic) NSURL *userAuthURL; // ivar: _userAuthURL
@property (retain, nonatomic) NSString *username; // ivar: _username


+(id)_createMissingAppleAccountForUserEnrollmentError;
+(id)_createMissingRMAccountError;
+(id)_createUnsupportedFeatureError;
+(id)chooseServerFromUAORGOServers:(id)arg0 error:(*id)arg1 ;
+(id)enrollmentFlowController;
+(id)enrollmentFlowControllerWithPresenter:(id)arg0 managedConfigurationHelper:(id)arg1 ;
-(BOOL)_extractAndVerifyPropertiesFromProfileData:(id)arg0 enrollmentMethod:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_isBYODEnrollment:(NSUInteger)arg0 ;
-(BOOL)_isORGOEnrollment:(NSUInteger)arg0 ;
-(BOOL)_validEnrollmentMode:(id)arg0 enrollmentMethod:(NSUInteger)arg1 ;
-(id)_BYOD_MAIDEnrollmentSteps;
-(id)_BYOD_authServicesEnrollmentSteps;
-(id)_BYOD_commonSteps;
-(id)_BYOD_reauthSteps;
-(id)_MDM_UserEnrollment_commonSteps;
-(id)_ORGO_MACBuddy_commonSteps;
-(id)_ORGO_MACBuddy_firstPartSteps;
-(id)_ORGO_MACBuddy_secondPartSteps;
-(id)_ORGO_MAIDEnrollmentSteps;
-(id)_ORGO_commonSteps;
-(id)_ORGO_deviceEnrollmentSteps;
-(id)_commonStepsForEnrollmentType:(NSUInteger)arg0 ;
-(id)_convertErrorToHumanReadableError:(id)arg0 ;
-(id)_errorTranslation;
-(id)_guardAgainstConflictingAccountsWithUsername:(id)arg0 ;
-(id)_nameForStep:(NSUInteger)arg0 ;
-(id)_stepsWithUI;
-(id)_trustedErrors;
-(id)init;
-(id)initWithPresenter:(id)arg0 managedConfigurationHelper:(id)arg1 ;
-(void)_addNotification;
-(void)_askForPasscodeIfNeeded;
-(void)_askForUserConsentWithProfileData:(id)arg0 managedAppleID:(id)arg1 ;
-(void)_askForUsernameWithDefaultUsername:(id)arg0 ;
-(void)_authenticateMAID:(id)arg0 authenticationResults:(id)arg1 enrollmentType:(NSUInteger)arg2 personaID:(id)arg3 ephemeral:(BOOL)arg4 silent:(BOOL)arg5 isRenewalFlow:(BOOL)arg6 ;
-(void)_cleanupDirtyState:(id)arg0 ;
-(void)_cleanupStoredValues;
-(void)_correlateMAIDWithAltDSID:(id)arg0 withRMAccount:(id)arg1 isProfileLocked:(BOOL)arg2 organizationName:(id)arg3 friendlyName:(id)arg4 personaID:(id)arg5 ;
-(void)_createEnterprisePersonaWithDevicePasscode:(id)arg0 ;
-(void)_createRMAccountIfNeededWithUsername:(id)arg0 existingRMAccountID:(id)arg1 enrollmentType:(NSUInteger)arg2 enrollmentMethod:(NSUInteger)arg3 isRenewalFlow:(BOOL)arg4 ;
-(void)_detectAuthTypeWithServiceURL:(id)arg0 enrollmentType:(NSUInteger)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 ;
-(void)_exchangeMAIDForBearerTokenWithRMAccountIdentifier:(id)arg0 userAuthURL:(id)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 ;
-(void)_fetchEnrollmentProfileFromServiceURL:(id)arg0 authToken:(id)arg1 enrollmentMethod:(NSUInteger)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 ;
-(void)_fetchServiceURLWithUsername:(id)arg0 ;
-(void)_flowTerminatedWithError:(id)arg0 canceled:(BOOL)arg1 ;
-(void)_installEnrollmentProfile:(id)arg0 devicePasscode:(id)arg1 personaID:(id)arg2 rmAccountIdentifier:(id)arg3 ;
-(void)_preflightEnrollmentWithEnrollmentType:(NSUInteger)arg0 isRenewalFlow:(BOOL)arg1 isPostRestoration:(BOOL)arg2 ;
-(void)_processAuthServicesWithUserAuthURL:(id)arg0 username:(id)arg1 ;
-(void)_promoteiCloudWithAltDSID:(id)arg0 enrollmentMethod:(NSUInteger)arg1 ;
-(void)_reauthenticationCompleteWithRMIdentifier:(id)arg0 ;
-(void)_receivedApplicationWillTerminateNotification:(id)arg0 ;
-(void)_resetToInitialSteps;
-(void)_signInMAIDWithAuthenticationResult:(id)arg0 enrollmentType:(NSUInteger)arg1 personaID:(id)arg2 isRenewalFlow:(BOOL)arg3 ;
-(void)_startEnrollmentFlowWithType:(NSUInteger)arg0 anchorCertificates:(id)arg1 restartIfFail:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_updateAccountsWithRMIdentifier:(id)arg0 managedAppleID:(id)arg1 profileIdentifier:(id)arg2 organizationName:(id)arg3 personaID:(id)arg4 ;
-(void)_updateRMAccountWithIdentifier:(id)arg0 authToken:(id)arg1 personaID:(id)arg2 ;
-(void)_updateRMAccountWithIdentifier:(id)arg0 authToken:(id)arg1 profileIdentifier:(id)arg2 organizationName:(id)arg3 personaID:(id)arg4 enrollmentMethod:(NSUInteger)arg5 ;
-(void)_updateRMAccountWithIdentifier:(id)arg0 authenticationResults:(id)arg1 enrollmentMethod:(NSUInteger)arg2 ;
-(void)_workerQueue_flowCompleted;
-(void)_workerQueue_performFlowStep:(NSUInteger)arg0 ;
-(void)_writeDirtyStateToDisk:(id)arg0 ;
-(void)cleanUpDirtyState:(id)arg0 ;
-(void)continueMacBuddyORGOEnrollmentFlowWithAuthentiactionResults:(id)arg0 serviceURL:(id)arg1 bearerToken:(id)arg2 profileData:(id)arg3 completionHandler:(id)arg4 ;
-(void)reauthBYODEnrollmentFlowRestartIfFail:(BOOL)arg0 rmAccountIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)renewORGOEnrollmentWithServiceURL:(id)arg0 anchorCertificates:(id)arg1 restartIfFail:(BOOL)arg2 cleanupIfFail:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)restartORGOEnrollmentWithServiceURL:(id)arg0 anchorCertificates:(id)arg1 isPostRestoration:(BOOL)arg2 restartIfFail:(BOOL)arg3 cleanupIfFail:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)startBYODEnrollmentFlowRestartIfFail:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)startMacBuddyORGOEnrollmentFlowWithServiceURL:(id)arg0 anchorCertificates:(id)arg1 restartIfFail:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)startORGOEnrollmentFlowWithServiceURL:(id)arg0 anchorCertificates:(id)arg1 restartIfFail:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)startUAORGOEnrollmentFlowWithServiceURL:(id)arg0 anchorCertificates:(id)arg1 restartIfFail:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)terminateEnrollmentFlow;
-(void)updateMDMUserEnrollmentWithManagedAppleID:(id)arg0 profileIdentifier:(id)arg1 organizationName:(id)arg2 personaID:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif