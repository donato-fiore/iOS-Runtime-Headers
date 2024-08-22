// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREGISTRATIONRESPONSE_H
#define PKPAYMENTREGISTRATIONRESPONSE_H

@class NSURL, NSNumber, NSArray, NSString, NSDictionary;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSURL *brokerURL; // ivar: _brokerURL
@property (copy, nonatomic) NSNumber *cardsOnFile; // ivar: _cardsOnFile
@property (copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) NSString *environmentName; // ivar: _environmentName
@property (copy, nonatomic) NSNumber *maxCards; // ivar: _maxCards
@property (copy, nonatomic) NSURL *paymentServicesURL; // ivar: _paymentServicesURL
@property (readonly, copy, nonatomic) NSString *primaryRegion; // ivar: _primaryRegion
@property (copy, nonatomic) NSDictionary *regions; // ivar: _regions
@property (copy, nonatomic) NSURL *trustedServiceManagerURL; // ivar: _trustedServiceManagerURL


-(id)initWithData:(id)arg0 ;


@end


#endif