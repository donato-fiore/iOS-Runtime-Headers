// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEPROMOTIONSRESPONSE_H
#define PKACCOUNTWEBSERVICEPROMOTIONSRESPONSE_H

@class NSDate, NSNumber, NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServicePromotionsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSDate *lastAddedDate; // ivar: _lastAddedDate
@property (readonly, nonatomic) NSNumber *maxImpressionCount; // ivar: _maxImpressionCount
@property (readonly, nonatomic) NSNumber *minRefreshPeriod; // ivar: _minRefreshPeriod
@property (readonly, nonatomic) NSArray *orderings; // ivar: _orderings
@property (readonly, nonatomic) NSArray *promotions; // ivar: _promotions
@property (readonly, nonatomic) NSNumber *timeVisibleAfterCompleted; // ivar: _timeVisibleAfterCompleted


-(id)initWithData:(id)arg0 ;


@end


#endif