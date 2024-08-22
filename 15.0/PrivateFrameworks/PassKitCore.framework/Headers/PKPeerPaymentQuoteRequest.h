// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTQUOTEREQUEST_H
#define PKPEERPAYMENTQUOTEREQUEST_H

@class NSString, NSDecimalNumber;
@protocol NSSecureCoding;


#import "PKPeerPaymentWebServiceRequest.h"
#import "PKPeerPaymentQuoteCertificatesResponse.h"
#import "PKPeerPaymentRequestToken.h"

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <NSSecureCoding>



@property (copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *bankName; // ivar: _bankName
@property (nonatomic) NSUInteger context; // ivar: _context
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (nonatomic) NSUInteger destination; // ivar: _destination
@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // ivar: _dpanIdentifier
@property (nonatomic) NSUInteger externalFundingSource; // ivar: _externalFundingSource
@property (copy, nonatomic, setter=setFPANIdentifier:) NSString *fpanIdentifier; // ivar: _fpanIdentifier
@property (readonly, copy, nonatomic) NSString *orderIdentifier; // ivar: _orderIdentifier
@property (nonatomic) NSUInteger paymentMethodType; // ivar: _paymentMethodType
@property (nonatomic) NSInteger paymentNetwork; // ivar: _paymentNetwork
@property (nonatomic) BOOL preserveCurrentBalance; // ivar: _preserveCurrentBalance
@property (retain, nonatomic) PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse; // ivar: _quoteCertificatesResponse
@property (copy, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (copy, nonatomic) NSString *recipientPhoneOrEmail; // ivar: _recipientPhoneOrEmail
@property (retain, nonatomic) PKPeerPaymentRequestToken *requestToken; // ivar: _requestToken
@property (copy, nonatomic) NSString *routingNumber; // ivar: _routingNumber
@property (copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerPaymentQuoteRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 deviceScore:(id)arg3 deviceMetadata:(id)arg4 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithPaymentPass:(id)arg0 ;
-(void)updateWithPaymentPass:(id)arg0 externalFundingSource:(NSUInteger)arg1 ;


@end


#endif