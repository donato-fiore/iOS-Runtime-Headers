// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTNOTIFICATIONACTIONRESPONSE_H
#define PKPAYMENTNOTIFICATIONACTIONRESPONSE_H

@class NSString, NSDictionary;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *action; // ivar: _action
@property (readonly, copy, nonatomic) NSDictionary *aps; // ivar: _aps
@property (readonly, copy, nonatomic) NSString *requestID; // ivar: _requestID


-(id)initWithData:(id)arg0 ;


@end


#endif