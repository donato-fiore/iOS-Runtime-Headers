// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGCONTROLLER_H
#define PKSUBCREDENTIALPROVISIONINGCONTROLLER_H

@class NSString;
@protocol PKSubcredentialProvisioningOperationDelegate, PKAppletSubcredentialPairingSessionDelegate, OS_dispatch_queue, PKSubcredentialProvisioningControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKSubcredentialProvisioningConfiguration.h"
#import "PKSubcredentialProvisioningOperationContext.h"
#import "PKSubcredentialProvisioningTransitionTable.h"
#import "PKAssertion.h"
#import "PKSubcredentialProvisioningOperation.h"
#import "PKPaymentPass.h"
#import "PKAppletSubcredential.h"

@interface PKSubcredentialProvisioningController : NSObject <PKSubcredentialProvisioningOperationDelegate, PKAppletSubcredentialPairingSessionDelegate>

 {
    PKSubcredentialProvisioningConfiguration *_configuration;
    PKSubcredentialProvisioningOperationContext *_context;
    PKSubcredentialProvisioningTransitionTable *_transitionTable;
    NSObject<OS_dispatch_queue> *_operationSerialQueue;
    os_unfair_lock_s _stateLock;
    BOOL _hasStarted;
    BOOL _hasBeenCanceled;
    PKAssertion *_userNotificationAssertion;
    PKAssertion *_fieldDetectSuppressionAssertion;
    PKAssertion *_contactlessInterfaceSuppressionAssertion;
    PKSubcredentialProvisioningOperation *_currentOperation;
    NSInteger _currentState;
    PKPaymentPass *_provisionedPass;
    PKAppletSubcredential *_addedCredential;
    id *_cancelCompletion;
}


@property (readonly, nonatomic) PKAppletSubcredential *addedCredential;
@property (readonly, nonatomic) NSInteger currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSubcredentialProvisioningControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentPass *provisionedPass;
@property (readonly) Class superclass;


-(id)init;
-(id)webServiceFromConfiguration:(id)arg0 ;
-(void)_canBeginProvisioning:(id)arg0 ;
-(void)acquireProvisioningAssertionsWithCompletion:(id)arg0 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithError:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didEndPairingWithSubcredential:(id)arg1 registrationData:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didFinishPreWarmWithResult:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg0 didFinishProbingTerminalWithError:(id)arg1 brandCode:(NSUInteger)arg2 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg0 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg0 withError:(id)arg1 ;
-(void)cancelProvisioningWithCompletion:(id)arg0 ;
-(void)cleanUpProvisioningAfterError:(BOOL)arg0 ;
-(void)declineRelatedInvitationsIfNecessary;
-(void)finishProvisioningWithError:(id)arg0 state:(NSInteger)arg1 ;
-(void)operation:(id)arg0 addedCredential:(id)arg1 ;
-(void)operation:(id)arg0 addedPass:(id)arg1 ;
-(void)operation:(id)arg0 advanceToState:(NSInteger)arg1 ;
-(void)operation:(id)arg0 failWithError:(id)arg1 ;
-(void)operationWasCanceled:(id)arg0 ;
-(void)releaseProvisioningAssertions;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)startProvisioningWithConfiguration:(id)arg0 ;
-(void)transitionToState:(NSInteger)arg0 withOperation:(id)arg1 error:(id)arg2 ;


@end


#endif