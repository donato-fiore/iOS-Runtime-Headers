// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEENHANCEDMERCHANTSRESPONSE_H
#define PKACCOUNTWEBSERVICEENHANCEDMERCHANTSRESPONSE_H

@class NSDate, NSArray, NSNumber;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceEnhancedMerchantsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSDate *lastAddedDate; // ivar: _lastAddedDate
@property (readonly, nonatomic) NSArray *merchants; // ivar: _merchants
@property (readonly, nonatomic) NSNumber *minRefreshPeriod; // ivar: _minRefreshPeriod
@property (readonly, nonatomic) NSArray *orderings; // ivar: _orderings


-(id)initWithData:(id)arg0 ;


@end


#endif