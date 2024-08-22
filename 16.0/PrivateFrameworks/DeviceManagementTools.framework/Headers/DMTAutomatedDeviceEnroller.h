// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTAUTOMATEDDEVICEENROLLER_H
#define DMTAUTOMATEDDEVICEENROLLER_H

@class NSString, NSError, NSData, CATOperationQueue;
@protocol DMTEnrollmentPrerequisiteReceiving, DMTEnrollmentInitiating, DMTEnrollmentStateProviding, DMTEnrollmentOrganizationProviding, DMTEnrollmentNetworkNameProviding, DMTActivationPrimitives, DMTErasePrimitives, DMTEnrollmentInformationPrimitives, DMTAutomatedDeviceEnrollmentPrimitives, DMTPowerOffPrimitives, DMTProfileInstallationPrimitives, DMTInternetReachabilityPrimitives, DMTWiFiPrimitives;

#import <Foundation/Foundation.h>

#import "DMTNetworkCredential.h"

@interface DMTAutomatedDeviceEnroller : NSObject <DMTEnrollmentPrerequisiteReceiving, DMTEnrollmentInitiating, DMTEnrollmentStateProviding, DMTEnrollmentOrganizationProviding, DMTEnrollmentNetworkNameProviding>



@property (readonly, nonatomic) NSObject<DMTActivationPrimitives> *activationPrimitives; // ivar: _activationPrimitives
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<DMTErasePrimitives> *destructiveErasePrimitives; // ivar: _destructiveErasePrimitives
@property (retain) NSError *enrollmentError; // ivar: _enrollmentError
@property (readonly, nonatomic) NSObject<DMTEnrollmentInformationPrimitives> *enrollmentInformationPrimitives; // ivar: _enrollmentInformationPrimitives
@property (copy, nonatomic) NSString *enrollmentNonce; // ivar: _enrollmentNonce
@property (readonly, nonatomic) NSObject<DMTAutomatedDeviceEnrollmentPrimitives> *enrollmentPrimitives; // ivar: _enrollmentPrimitives
@property NSInteger enrollmentState; // ivar: _enrollmentState
@property (nonatomic, getter=isFinalized) BOOL finalized; // ivar: _finalized
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *installedNetworkPayloadIdentifier; // ivar: _installedNetworkPayloadIdentifier
@property (nonatomic) NSInteger networkConfiguration; // ivar: _networkConfiguration
@property (copy, nonatomic) DMTNetworkCredential *networkCredential; // ivar: _networkCredential
@property (copy) NSString *networkName; // ivar: _networkName
@property (copy, nonatomic) NSData *networkPayload; // ivar: _networkPayload
@property (readonly, nonatomic) NSObject<DMTErasePrimitives> *nonDestructiveErasePrimitives; // ivar: _nonDestructiveErasePrimitives
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy) NSString *organizationName; // ivar: _organizationName
@property NSInteger organizationType; // ivar: _organizationType
@property (nonatomic) NSInteger postEnrollmentBehavior; // ivar: _postEnrollmentBehavior
@property (readonly, nonatomic) NSObject<DMTPowerOffPrimitives> *powerOffPrimitives; // ivar: _powerOffPrimitives
@property (readonly, nonatomic) NSObject<DMTProfileInstallationPrimitives> *profileInstallationPrimitives; // ivar: _profileInstallationPrimitives
@property (readonly, nonatomic) NSObject<DMTInternetReachabilityPrimitives> *reachabilityPrimitives; // ivar: _reachabilityPrimitives
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<DMTWiFiPrimitives> *wifiPrimitives; // ivar: _wifiPrimitives


-(id)initWithEnrollmentPrimitives:(id)arg0 enrollmentInformationPrimitives:(id)arg1 reachabilityPrimitives:(id)arg2 activationPrimitives:(id)arg3 wifiPrimitives:(id)arg4 profileInstallationPrimitives:(id)arg5 destructiveErasePrimitives:(id)arg6 nonDestructiveErasePrimitives:(id)arg7 powerOffPrimitives:(id)arg8 ;
-(void)activateDevice;
-(void)activationCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)activationStatusFetchComplete:(BOOL)arg0 error:(id)arg1 ;
-(void)beginAutomatedDeviceEnrollment;
-(void)checkActivationStatus;
-(void)checkIfAlreadyEnrolled;
-(void)didDisassociateFromNetworkWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)didJoinNetworkWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)disassociateWiFi;
-(void)enrollDevice;
-(void)enrollmentCompleteWithResponse:(id)arg0 error:(id)arg1 ;
-(void)eraseAllContentAndSettingsDidFinishWithError:(id)arg0 ;
-(void)eraseAllContentAndSettingsWithExternalError:(id)arg0 ;
-(void)eraseAndRestartWithExternalError:(id)arg0 ;
-(void)eraseAndShutDownWithExternalError:(id)arg0 ;
-(void)eraseCurrentNetworkIfNeeded;
-(void)installProfile;
-(void)joinNetwork;
-(void)joinNetworkUsingCredentials;
-(void)profileInstallationDidFinish:(id)arg0 ;
-(void)profileUninstallDidFinish:(id)arg0 ;
-(void)tearDownWithFatalError:(id)arg0 ;
-(void)timeoutOperationDidFinish:(id)arg0 ;
-(void)uninstallProfile;
-(void)verifyProfile;
-(void)waitForReachabilityWithTimeout:(CGFloat)arg0 ;


@end


#endif