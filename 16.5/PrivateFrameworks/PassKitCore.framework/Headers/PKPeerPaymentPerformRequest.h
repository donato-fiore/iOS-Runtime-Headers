// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTPERFORMREQUEST_H
#define PKPEERPAYMENTPERFORMREQUEST_H

@class NSString, NSDictionary, NSData;


#import "PKPeerPaymentWebServiceRequest.h"
#import "PKContact.h"

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest

@property (retain, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (copy, nonatomic) NSDictionary *certificates; // ivar: _certificates
@property (retain, nonatomic) PKContact *contact; // ivar: _contact
@property (nonatomic) NSUInteger destination; // ivar: _destination
@property (copy, nonatomic) NSData *paymentData; // ivar: _paymentData
@property (copy, nonatomic) NSString *pushToken; // ivar: _pushToken
@property (copy, nonatomic) NSString *quoteIdentifier; // ivar: _quoteIdentifier
@property (copy, nonatomic) NSString *recipientPhoneOrEmail; // ivar: _recipientPhoneOrEmail
@property (retain, nonatomic) NSString *routingNumber; // ivar: _routingNumber
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature; // ivar: _signedEnrollmentDataSignature


+(id)requestWithAuthorizedPeerPaymentQuote:(id)arg0 ;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 deviceScore:(id)arg3 odiAssessment:(id)arg4 deviceMetadata:(id)arg5 ;


@end


#endif