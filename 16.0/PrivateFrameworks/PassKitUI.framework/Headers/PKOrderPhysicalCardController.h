// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKORDERPHYSICALCARDCONTROLLER_H
#define PKORDERPHYSICALCARDCONTROLLER_H

@class PKAccountService, PKPaymentWebService, PKAccount, PKAccountUser, PKPhysicalCard, NSArray, PKAccountWebServiceRequestPhysicalCardRequest, PKAccountWebServicePhysicalCardActionRequest, NSString, PKPaymentPass, PKPhysicalCardArtworkOption, CNPostalAddress;
@protocol PKSetupFlowControllerProtocol;

#import <Foundation/Foundation.h>


@interface PKOrderPhysicalCardController : NSObject <PKSetupFlowControllerProtocol>

 {
    PKAccountService *_accountService;
    PKPaymentWebService *_paymentWebService;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    NSUInteger _orderReason;
    PKPhysicalCard *_physicalCardToReplace;
    NSArray *_priceOptions;
    PKAccountWebServiceRequestPhysicalCardRequest *_physicalCardRequest;
    PKAccountWebServicePhysicalCardActionRequest *_replacePhysicalCardRequest;
}


@property (copy, nonatomic) NSArray *artworkOptions; // ivar: _artworkOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *nameOnCard; // ivar: _nameOnCard
@property (retain, nonatomic) NSObject<PKSetupFlowControllerProtocol> *parentFlowController; // ivar: _parentFlowController
@property (readonly, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (readonly, nonatomic) NSInteger paymentSetupContext; // ivar: _paymentSetupContext
@property (retain, nonatomic) PKPhysicalCardArtworkOption *selectedArtworkOption; // ivar: _selectedArtworkOption
@property (retain, nonatomic) CNPostalAddress *shippingAddress; // ivar: _shippingAddress
@property (readonly) Class superclass;


-(id)_paymentRequest;
-(id)_priceForRequestingPhysicalCard;
-(id)initWithAccountService:(id)arg0 paymentWebService:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 accountUser:(id)arg4 orderReason:(NSUInteger)arg5 context:(NSInteger)arg6 currentPhysicalCard:(id)arg7 ;
-(void)completeOrderPhysicalCardWithApplePayTrustSignature:(id)arg0 completion:(id)arg1 ;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)startOrderPhysicalCardWithCompletion:(id)arg0 ;
-(void)updateCustomizationOptionsWithCompletion:(id)arg0 ;


@end


#endif