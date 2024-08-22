// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEFINANCINGOPTIONSREQUEST_H
#define PKACCOUNTWEBSERVICEFINANCINGOPTIONSREQUEST_H

@class NSString, NSNumber, NSDecimalNumber, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKCurrencyAmount.h"

@interface PKAccountWebServiceFinancingOptionsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSNumber *adamIdentifier; // ivar: _adamIdentifier
@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger channel; // ivar: _channel
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) PKCurrencyAmount *dueNext30Days; // ivar: _dueNext30Days
@property (nonatomic) BOOL isMerchantTokenRequest; // ivar: _isMerchantTokenRequest
@property (nonatomic) BOOL isMultiTokenRequest; // ivar: _isMultiTokenRequest
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSString *merchantName; // ivar: _merchantName
@property (copy, nonatomic) NSString *originURL; // ivar: _originURL
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) NSString *webMerchantIdentifier; // ivar: _webMerchantIdentifier
@property (copy, nonatomic) NSString *webMerchantName; // ivar: _webMerchantName


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif