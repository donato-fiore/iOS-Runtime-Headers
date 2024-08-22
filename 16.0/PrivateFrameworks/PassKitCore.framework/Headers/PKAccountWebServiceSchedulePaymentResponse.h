// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICESCHEDULEPAYMENTRESPONSE_H
#define PKACCOUNTWEBSERVICESCHEDULEPAYMENTRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceSchedulePaymentResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *payments; // ivar: _payments


-(id)initWithData:(id)arg0 account:(id)arg1 ;


@end


#endif