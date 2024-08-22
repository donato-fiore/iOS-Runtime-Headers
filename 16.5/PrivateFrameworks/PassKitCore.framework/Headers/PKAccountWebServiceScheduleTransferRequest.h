// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICESCHEDULETRANSFERREQUEST_H
#define PKACCOUNTWEBSERVICESCHEDULETRANSFERREQUEST_H

@class NSString, NSURL, NSData;
@protocol PKAccountWebServiceApplePayTrustProtocol;


#import "PKAccountWebServiceRequest.h"
#import "PKPaymentDeviceMetadata.h"
#import "PKApplePayTrustHashResponse.h"
#import "PKAccountTransferScheduleDetails.h"
#import "PKAccountScheduledTransferList.h"

@interface PKAccountWebServiceScheduleTransferRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse; // ivar: hashResponse
@property (copy, nonatomic) NSString *odiAssessment; // ivar: _odiAssessment
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (retain, nonatomic) PKAccountTransferScheduleDetails *scheduleDetails; // ivar: _scheduleDetails
@property (retain, nonatomic) PKAccountScheduledTransferList *scheduledTransfers; // ivar: _scheduledTransfers
@property (readonly) Class superclass;


-(Class)signatureResponseClass;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)endpointComponents;
-(id)manifestHashWithReferenceIdentifier:(id)arg0 ;


@end


#endif