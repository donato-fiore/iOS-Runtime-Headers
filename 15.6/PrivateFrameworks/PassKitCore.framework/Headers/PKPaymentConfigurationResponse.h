// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCONFIGURATIONRESPONSE_H
#define PKPAYMENTCONFIGURATIONRESPONSE_H

@class NSDictionary, NSData, NSString;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentConfigurationResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy, nonatomic) NSData *signature; // ivar: _signature
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


-(id)initWithData:(id)arg0 ;


@end


#endif