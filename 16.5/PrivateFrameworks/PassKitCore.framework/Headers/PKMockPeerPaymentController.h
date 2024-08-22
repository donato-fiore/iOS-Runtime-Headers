// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMOCKPEERPAYMENTCONTROLLER_H
#define PKMOCKPEERPAYMENTCONTROLLER_H



#import "PKPeerPaymentController.h"
#import "PKCurrencyAmount.h"

@interface PKMockPeerPaymentController : PKPeerPaymentController {
    id *_performCompletion;
}


@property (retain, nonatomic) PKCurrencyAmount *mockBalance; // ivar: _mockBalance
@property (nonatomic) BOOL shouldGenerateMockTransactions; // ivar: _shouldGenerateMockTransactions


-(id)_quoteItemDictionaryWithType:(NSUInteger)arg0 amount:(id)arg1 alternateFundingSource:(id)arg2 featureDescriptor:(id)arg3 ;
-(id)initWithPeerPaymentWebService:(id)arg0 ;
-(void)_adjustBalanceForAuthorizedTransferQuote:(id)arg0 ;
-(void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)arg0 ;
-(void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)arg0 ;
-(void)formalRequestTokenForAmount:(id)arg0 completion:(id)arg1 ;
-(void)identifyRecipientWithAddress:(id)arg0 senderAddress:(id)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(*id)arg0 didAuthorizePeerPaymentQuote:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(*id)arg0 didSelectPaymentMethod:(id)arg1 handler:(id)arg2 ;
-(void)performAction:(id)arg0 withPaymentIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)quoteWithAmount:(id)arg0 requestToken:(id)arg1 alternateFundingSource:(id)arg2 completion:(id)arg3 ;


@end


#endif