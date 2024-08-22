// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTELIGIBILITYREQUEST_H
#define PKPAYMENTELIGIBILITYREQUEST_H

@class NSData, NSString;


#import "PKPaymentWebServiceRequest.h"
#import "PKAddPaymentPassRequestConfiguration.h"
#import "PKPaymentCredential.h"

@interface PKPaymentEligibilityRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSData *FPInfo; // ivar: _FPInfo
@property (readonly, nonatomic) PKAddPaymentPassRequestConfiguration *addPaymentPassRequestConfiguration; // ivar: _addPaymentPassRequestConfiguration
@property (copy, nonatomic) NSString *cardholderName; // ivar: _cardholderName
@property (nonatomic) NSInteger cardholderNameInputMethod; // ivar: _cardholderNameInputMethod
@property (copy, nonatomic) NSData *encryptedCardData; // ivar: _encryptedCardData
@property (copy, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion
@property (copy, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (copy, nonatomic) NSString *expiration; // ivar: _expiration
@property (nonatomic) NSInteger expirationInputMethod; // ivar: _expirationInputMethod
@property (copy, nonatomic) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property (copy, nonatomic) NSString *hostApplicationVersion; // ivar: _hostApplicationVersion
@property (copy, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (copy, nonatomic) NSString *passOwnershipToken; // ivar: _passOwnershipToken
@property (retain, nonatomic) PKPaymentCredential *paymentCredential; // ivar: _paymentCredential
@property (copy, nonatomic) NSString *primaryAccountNumber; // ivar: _primaryAccountNumber
@property (nonatomic) NSInteger primaryAccountNumberInputMethod; // ivar: _primaryAccountNumberInputMethod
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (copy, nonatomic) NSData *wrappedKey; // ivar: _wrappedKey


+(BOOL)supportsSecureCoding;
-(BOOL)requiresNonce;
-(NSUInteger)_requestHTTPMethod;
-(id)init;
-(id)initWithAddRequestConfiguration:(id)arg0 addRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentCredential:(id)arg0 ;
-(id)initWithSource:(NSInteger)arg0 ;
-(void)_updateRequestForRedirect:(id)arg0 overrides:(id)arg1 webService:(id)arg2 withCompletion:(id)arg3 ;
-(void)_updateRequestForRetry:(id)arg0 retryFields:(id)arg1 webService:(id)arg2 withCompletion:(id)arg3 ;
-(void)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 certChain:(id)arg3 devSigned:(BOOL)arg4 deviceData:(id)arg5 webService:(id)arg6 completion:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif