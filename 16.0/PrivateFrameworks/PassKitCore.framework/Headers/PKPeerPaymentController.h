// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTCONTROLLER_H
#define PKPEERPAYMENTCONTROLLER_H

@class NSError, NSString;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, OS_dispatch_group, OS_dispatch_queue, PKPeerPaymentControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentControllerInternalState.h"
#import "PKPeerPaymentAccount.h"
#import "PKPaymentPass.h"
#import "PKContactResolver.h"
#import "PKPaymentAuthorizationCoordinator.h"
#import "PKPeerPaymentPerformResponse.h"
#import "PKPeerPaymentQuote.h"
#import "PKPeerPaymentRecipient.h"
#import "PKPeerPaymentRequestToken.h"
#import "PKPeerPaymentWebService.h"

@interface PKPeerPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKPeerPaymentControllerInternalState *_is;
    PKPeerPaymentAccount *_account;
    PKPaymentPass *_peerPaymentPass;
    PKContactResolver *_contactResolver;
    PKPaymentAuthorizationCoordinator *_performQuoteAuthorizationCoordinator;
    NSObject<OS_dispatch_group> *_performQuoteGroup;
    NSObject<OS_dispatch_queue> *_performQuoteCallbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _performQuoteSuccess;
    NSError *_performQuoteError;
}


@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPeerPaymentControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mode;
@property (readonly, nonatomic) PKPaymentPass *peerPaymentPass;
@property (readonly, nonatomic) PKPeerPaymentPerformResponse *performQuoteResponse;
@property (readonly, nonatomic) PKPeerPaymentQuote *quote;
@property (readonly, copy, nonatomic) PKPeerPaymentRecipient *recipient;
@property (readonly, copy, nonatomic) NSString *recipientDisplayName;
@property (readonly, copy, nonatomic) NSString *recipientPhoneOrEmail;
@property (readonly, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property (readonly, copy, nonatomic) NSString *senderPhoneOrEmail;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPeerPaymentWebService *webService; // ivar: _webService


+(BOOL)errorIsIdentityVerificationRequiredError:(id)arg0 ;
+(BOOL)errorIsTermsAcceptanceRequiredError:(id)arg0 ;
+(NSUInteger)proposedResolutionForError:(id)arg0 ;
+(id)_displayNameForRecipientAddress:(id)arg0 contactResolver:(id)arg1 foundInContacts:(*BOOL)arg2 ;
+(id)_displayableErrorOverrideForUnderlyingError:(id)arg0 ;
+(id)displayNameForAddress:(id)arg0 contactResolver:(id)arg1 ;
+(id)displayableErrorForError:(id)arg0 ;
-(BOOL)_contactInfoIsValidForAuthorizedQuote:(id)arg0 errors:(*id)arg1 ;
-(BOOL)_ensureState:(NSUInteger)arg0 ;
-(BOOL)restoreStateWithExternalizedControllerState:(id)arg0 ;
-(id)_contactResolver;
-(id)_defaultAlternateFundingSourceForMode:(NSUInteger)arg0 ;
-(id)contactForHandle:(id)arg0 ;
-(id)displayNameForRecipientAddress:(id)arg0 ;
-(id)displayNameForRecipientAddress:(id)arg0 foundInContacts:(*BOOL)arg1 ;
-(id)displayableErrorForError:(id)arg0 ;
-(id)externalizedControllerState;
-(id)init;
-(id)initWithPeerPaymentWebService:(id)arg0 ;
-(id)initWithPeerPaymentWebService:(id)arg0 queue:(id)arg1 ;
-(id)internalState;
-(id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg0 ;
-(id)summaryItemsForQuote:(id)arg0 ;
-(void)_handleAccountChanged:(id)arg0 ;
-(void)_refreshRecipientWithCompletion:(id)arg0 ;
-(void)_requestQuoteWithRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_resetToState:(NSUInteger)arg0 ;
-(void)_setPerformQuoteSuccess:(BOOL)arg0 ;
-(void)_updateLastUsedAlternateFundingSource;
-(void)_updatePreservePeerPaymentBalanceSetting:(BOOL)arg0 ;
-(void)aggDAuthorizedQuoteWithSuccess:(BOOL)arg0 authorizedQuote:(id)arg1 ;
-(void)dealloc;
-(void)formalRequestTokenForAmount:(id)arg0 completion:(id)arg1 ;
-(void)formalRequestTokenForAmount:(id)arg0 source:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)handleIdentityVerificationWithError:(id)arg0 completion:(id)arg1 ;
-(void)handleTermsAcceptanceRequiredWithError:(id)arg0 completion:(id)arg1 ;
-(void)identifyRecipientDebitCardWithCompletion:(id)arg0 ;
-(void)identifyRecipientSelf;
-(void)identifyRecipientWithAddress:(id)arg0 completion:(id)arg1 ;
-(void)identifyRecipientWithAddress:(id)arg0 senderAddress:(id)arg1 completion:(id)arg2 ;
-(void)identifyRecipientWithRoutingNumber:(id)arg0 accountNumber:(id)arg1 accountName:(id)arg2 completion:(id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePeerPaymentQuote:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didSelectPaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)pendingRequestsWithCompletion:(id)arg0 ;
-(void)performAction:(id)arg0 withPaymentIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)performPendingRequestAction:(id)arg0 withRequestToken:(id)arg1 completion:(id)arg2 ;
-(void)performQuote:(id)arg0 completion:(id)arg1 ;
-(void)performQuoteWithCompletion:(id)arg0 ;
-(void)quoteWithAmount:(id)arg0 completion:(id)arg1 ;
-(void)quoteWithAmount:(id)arg0 requestToken:(id)arg1 alternateFundingSource:(id)arg2 completion:(id)arg3 ;
-(void)quoteWithAmount:(id)arg0 requestToken:(id)arg1 completion:(id)arg2 ;
-(void)quoteWithAmount:(id)arg0 source:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)quoteWithAmount:(id)arg0 source:(NSUInteger)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(id)arg4 ;
-(void)quoteWithAmount:(id)arg0 source:(NSUInteger)arg1 requestToken:(id)arg2 completion:(id)arg3 ;
-(void)requestTokenForAmount:(id)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)selectMode:(NSUInteger)arg0 ;
-(void)statusForPaymentIdentifier:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif