// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTAUTOMATEDDEVICEENROLLER_H
#define DMTAUTOMATEDDEVICEENROLLER_H

@class NSString, NSError, NSData, CATOperationQueue;
@protocol DMTEnrollmentPrerequisiteReceiving, DMTEnrollmentInitiating, DMTEnrollmentStateProviding, DMTEnrollmentOrganizationProviding, DMTEnrollmentNetworkNameProviding, DMTErasePrimitives, DMTAutomatedDeviceEnrollmentPrimitives, DMTNetworkingPrimitives, DMTPowerOffPrimitives, DMTProfileInstallationPrimitives;

#import <Foundation/Foundation.h>

#import "DMTNetworkCredential.h"

@interface DMTAutomatedDeviceEnroller : NSObject <DMTEnrollmentPrerequisiteReceiving, DMTEnrollmentInitiating, DMTEnrollmentStateProviding, DMTEnrollmentOrganizationProviding, DMTEnrollmentNetworkNameProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<DMTErasePrimitives> *destructiveErasePrimitives; // ivar: _destructiveErasePrimitives
@property (retain) NSError *enrollmentError; // ivar: _enrollmentError
@property (copy, nonatomic) NSString *enrollmentNonce; // ivar: _enrollmentNonce
@property (readonly, nonatomic) NSObject<DMTAutomatedDeviceEnrollmentPrimitives> *enrollmentPrimitives; // ivar: _enrollmentPrimitives
@property NSInteger enrollmentState; // ivar: _enrollmentState
@property (nonatomic, getter=isFinalized) BOOL finalized; // ivar: _finalized
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *installedNetworkPayloadIdentifier; // ivar: _installedNetworkPayloadIdentifier
@property (copy, nonatomic) DMTNetworkCredential *networkCredential; // ivar: _networkCredential
@property (copy) NSString *networkName; // ivar: _networkName
@property (copy, nonatomic) NSData *networkPayload; // ivar: _networkPayload
@property (readonly, nonatomic) NSObject<DMTNetworkingPrimitives> *networkingPrimitives; // ivar: _networkingPrimitives
@property (readonly, nonatomic) NSObject<DMTErasePrimitives> *nonDestructiveErasePrimitives; // ivar: _nonDestructiveErasePrimitives
@property (readonly, nonatomic) CATOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy) NSString *organizationName; // ivar: _organizationName
@property NSInteger organizationType; // ivar: _organizationType
@property (nonatomic) NSInteger postEnrollmentBehavior; // ivar: _postEnrollmentBehavior
@property (readonly, nonatomic) NSObject<DMTPowerOffPrimitives> *powerOffPrimitives; // ivar: _powerOffPrimitives
@property (readonly, nonatomic) NSObject<DMTProfileInstallationPrimitives> *profileInstallationPrimitives; // ivar: _profileInstallationPrimitives
@property (readonly) Class superclass;


-(id)initWithEnrollmentPrimitives:(id)arg0 networkingPrimitives:(id)arg1 profileInstallationPrimitives:(id)arg2 destructiveErasePrimitives:(id)arg3 nonDestructiveErasePrimitives:(id)arg4 powerOffPrimitives:(id)arg5 ;
-(void)beginAutomatedDeviceEnrollment;
-(void)didJoinNetworkWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)enrollDevice;
-(void)enrollmentCompleteWithResponse:(id)arg0 error:(id)arg1 ;
-(void)eraseAllContentAndSettings;
-(void)eraseAllContentAndSettingsDidFinishWithError:(id)arg0 ;
-(void)eraseAndRestart;
-(void)eraseAndShutDown;
-(void)installProfile;
-(void)joinNetwork;
-(void)joinNetworkUsingCredentials;
-(void)profileInstallationDidFinish:(id)arg0 ;
-(void)tearDownWithFatalError:(id)arg0 ;
-(void)timeoutOperationDidFinish:(id)arg0 ;
-(void)verifyProfile;
-(void)waitForReachabilityWithTimeout:(CGFloat)arg0 ;


@end


#endif