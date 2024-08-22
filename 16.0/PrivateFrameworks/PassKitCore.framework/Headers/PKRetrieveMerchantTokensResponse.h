// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRETRIEVEMERCHANTTOKENSRESPONSE_H
#define PKRETRIEVEMERCHANTTOKENSRESPONSE_H

@class NSArray, NSNumber;


#import "PKPaymentWebServiceResponse.h"

@interface PKRetrieveMerchantTokensResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *merchantTokens; // ivar: _merchantTokens
@property (readonly, copy, nonatomic) NSNumber *pageNumber; // ivar: _pageNumber
@property (readonly, copy, nonatomic) NSNumber *pageSize; // ivar: _pageSize
@property (readonly, copy, nonatomic) NSNumber *totalMerchantTokens; // ivar: _totalMerchantTokens
@property (readonly, copy, nonatomic) NSNumber *totalPages; // ivar: _totalPages


-(id)initWithData:(id)arg0 ;
-(id)initWithMerchantTokens:(id)arg0 totalMerchantTokens:(id)arg1 pageSize:(id)arg2 totalPages:(id)arg3 pageNumber:(id)arg4 ;


@end


#endif