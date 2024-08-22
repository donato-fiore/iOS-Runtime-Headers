// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICESCHEDULEPAYMENTREQUEST_H
#define PKACCOUNTWEBSERVICESCHEDULEPAYMENTREQUEST_H

@class NSString, NSURL, NSData;
@protocol PKAccountWebServiceApplePayTrustProtocol;


#import "PKAccountWebServiceRequest.h"
#import "PKAccountWebServiceCertificatesResponse.h"
#import "PKPaymentDeviceMetadata.h"
#import "PKApplePayTrustHashResponse.h"
#import "PKAccountPaymentScheduleDetails.h"
#import "PKAccountScheduledPaymentList.h"

@interface PKAccountWebServiceSchedulePaymentRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: baseURL
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse; // ivar: _certificatesResponse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse; // ivar: hashResponse
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails; // ivar: _scheduleDetails
@property (retain, nonatomic) PKAccountScheduledPaymentList *scheduledPayments; // ivar: _scheduledPayments
@property (readonly) Class superclass;


-(Class)signatureResponseClass;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)endpointComponents;
-(id)manifestHashWithReferenceIdentifier:(id)arg0 ;


@end


#endif