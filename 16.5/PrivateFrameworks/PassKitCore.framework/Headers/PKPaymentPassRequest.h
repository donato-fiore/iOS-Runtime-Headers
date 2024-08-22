// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSREQUEST_H
#define PKPAYMENTPASSREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *passTypeID; // ivar: _passTypeID
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithPassTypeID:(id)arg0 serialNumber:(id)arg1 ;


@end


#endif