// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKSUBCREDENTIALINVITATIONCOORDINATOR_H
#define NPKSUBCREDENTIALINVITATIONCOORDINATOR_H

@class NSString, PKPaymentService, PKAppletSubcredentialSharingSession, PKSubcredentialProvisioningController;
@protocol PKSubcredentialProvisioningControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKStandaloneFirstUnlockCoordinator.h"
#import "NPKWatchSubcredentialProvisioningService.h"

@interface NPKSubcredentialInvitationCoordinator : NSObject <PKSubcredentialProvisioningControllerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator; // ivar: _firstUnlockCoordinator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) PKPaymentService *paymentService; // ivar: _paymentService
@property (retain, nonatomic) PKAppletSubcredentialSharingSession *sharingSession; // ivar: _sharingSession
@property (retain, nonatomic) PKSubcredentialProvisioningController *subcredentialProvisioningController; // ivar: _subcredentialProvisioningController
@property (retain, nonatomic) NPKWatchSubcredentialProvisioningService *subcredentialProvisioningService; // ivar: _subcredentialProvisioningService
@property (readonly) Class superclass;


+(BOOL)canAddSecureElementPassWithConfiguration:(id)arg0 outError:(*id)arg1 ;
+(BOOL)canAddSecureElementPassWithInvitation:(id)arg0 ;
-(BOOL)_isInvitationUniqueForPairedReaderIdentifier:(id)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 message:(id)arg1 ;
-(id)_paymentWebService;
-(id)init;
-(id)initWithCallbackQueue:(id)arg0 ;
-(void)_endProvisioningWithPassForInvitation:(id)arg0 error:(id)arg1 ;
-(void)_fetchInvitationMatchingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)_fetchInvitationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_handleProvisioningAttemptForConfiguration:(id)arg0 error:(id)arg1 ;
-(void)_invokeCompletionWithPassForInvitation:(id)arg0 error:(id)arg1 ;
-(void)_makeConfigurationForInvitation:(id)arg0 session:(id)arg1 metadata:(id)arg2 paymentWebService:(id)arg3 completion:(id)arg4 ;
-(void)_performBlockFollowingFirstUnlockWithBlock:(id)arg0 ;
-(void)_queue_accountAttestationAnonymizationSaltWithCompletion:(id)arg0 ;
-(void)_queue_canAcceptInvitation:(id)arg0 completion:(id)arg1 ;
-(void)_queue_declineRelatedInvitationsIfNecessaryForInvitation:(id)arg0 completion:(id)arg1 ;
-(void)_queue_deviceContainsInvitationMatchingInvitation:(id)arg0 withTimeout:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_queue_fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(id)arg0 ;
-(void)_queue_listSubcredentialInvitationsWithCompletion:(id)arg0 ;
-(void)_queue_registerCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)_queue_removeSharingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)_queue_requestSubcredentialInvitation:(id)arg0 fromIDSHandle:(id)arg1 completion:(id)arg2 ;
-(void)_queue_revokeCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)_queue_setAccountAttestationAnonymizationSalt:(id)arg0 completion:(id)arg1 ;
-(void)_queue_updateSubcredentialMetadataOnPass:(id)arg0 withCredential:(id)arg1 completion:(id)arg2 ;
-(void)_setUpSharingSessionWithSubcredentialProvisioningController:(id)arg0 forInvitation:(id)arg1 ;
-(void)_setUpSubcredentialProvisioningController;
-(void)_startProvisioningForProvisioningController:(id)arg0 withConfiguration:(id)arg1 ;
-(void)accountAttestationAnonymizationSaltWithCompletion:(id)arg0 ;
-(void)canAcceptInvitation:(id)arg0 completion:(id)arg1 ;
-(void)canAcceptInvitationOnRemoteDeviceForInvitation:(id)arg0 completion:(id)arg1 ;
-(void)declineRelatedInvitationsIfNecessaryForInvitation:(id)arg0 completion:(id)arg1 ;
-(void)deviceContainsInvitationMatchingInvitation:(id)arg0 withTimeout:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(id)arg0 ;
-(void)listSubcredentialInvitationsWithCompletion:(id)arg0 ;
-(void)registerCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)removeSharingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)requestSubcredentialInvitation:(id)arg0 completion:(id)arg1 ;
-(void)revokeCredentialsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)setAccountAttestationAnonymizationSalt:(id)arg0 completion:(id)arg1 ;
-(void)startProvisioningWithInvitation:(id)arg0 metadata:(id)arg1 completion:(id)arg2 ;
-(void)startProvisioningWithInvitationIdentifier:(id)arg0 metadata:(id)arg1 completion:(id)arg2 ;
-(void)startProvisioningWithMailboxAddress:(id)arg0 activationCode:(id)arg1 completion:(id)arg2 ;
-(void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)arg0 shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)arg1 completion:(id)arg2 ;
-(void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)arg0 ;
-(void)startSubcredentialProvisioningOnRemoteDeviceForMailboxAddress:(id)arg0 activationCode:(id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithError:(id)arg1 inState:(NSInteger)arg2 ;
-(void)subcredentialProvisioningController:(id)arg0 didFinishWithPass:(id)arg1 ;
-(void)updateSubcredentialMetadataOnPass:(id)arg0 withCredential:(id)arg1 completion:(id)arg2 ;


@end


#endif