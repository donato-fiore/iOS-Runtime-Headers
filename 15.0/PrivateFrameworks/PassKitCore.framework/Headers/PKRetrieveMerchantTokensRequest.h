// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRETRIEVEMERCHANTTOKENSREQUEST_H
#define PKRETRIEVEMERCHANTTOKENSREQUEST_H

@class NSString, NSNumber;


#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"

@interface PKRetrieveMerchantTokensRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *merchantTokenId; // ivar: _merchantTokenId
@property (copy, nonatomic) NSNumber *pageNumber; // ivar: _pageNumber
@property (copy, nonatomic) NSNumber *pageSize; // ivar: _pageSize
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif