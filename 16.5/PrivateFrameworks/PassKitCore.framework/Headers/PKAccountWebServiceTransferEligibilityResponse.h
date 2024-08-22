// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICETRANSFERELIGIBILITYRESPONSE_H
#define PKACCOUNTWEBSERVICETRANSFERELIGIBILITYRESPONSE_H

@class NSDecimalNumber;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceTransferEligibilityResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSUInteger eligibility; // ivar: _eligibility
@property (readonly, copy, nonatomic) NSDecimalNumber *overflowAmount; // ivar: _overflowAmount


-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 account:(id)arg1 request:(id)arg2 ;


@end


#endif