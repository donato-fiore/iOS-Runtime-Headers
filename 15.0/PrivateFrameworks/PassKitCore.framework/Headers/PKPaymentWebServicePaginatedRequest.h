// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTWEBSERVICEPAGINATEDREQUEST_H
#define PKPAYMENTWEBSERVICEPAGINATEDREQUEST_H

@class NSDate, NSNumber;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentWebServicePaginatedRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSNumber *limit; // ivar: _limit
@property (copy, nonatomic) NSNumber *pageOffset; // ivar: _pageOffset




@end


#endif