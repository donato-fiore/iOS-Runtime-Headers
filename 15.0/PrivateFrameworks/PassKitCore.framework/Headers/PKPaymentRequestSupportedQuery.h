// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREQUESTSUPPORTEDQUERY_H
#define PKPAYMENTREQUESTSUPPORTEDQUERY_H

@class NSString, NSSet, NSArray;

#import <Foundation/Foundation.h>

#import "PKPaymentWebService.h"

@interface PKPaymentRequestSupportedQuery : NSObject

@property (readonly, nonatomic) BOOL issuedOnTheWeb; // ivar: _issuedOnTheWeb
@property (readonly, nonatomic) NSUInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (readonly, nonatomic) NSString *merchantCountryCode; // ivar: _merchantCountryCode
@property (readonly, nonatomic) NSSet *paymentApplicationStates; // ivar: _paymentApplicationStates
@property (readonly, nonatomic) NSInteger paymentMode; // ivar: _paymentMode
@property (readonly, nonatomic) NSArray *supportedNetworkIDs; // ivar: _supportedNetworkIDs
@property (readonly, nonatomic) PKPaymentWebService *webService; // ivar: _webService


+(id)inAppQueryWithSupportedNetworkIDs:(id)arg0 merchantCapabilities:(NSUInteger)arg1 merchantCountryCode:(id)arg2 paymentMode:(NSInteger)arg3 paymentApplicationStates:(id)arg4 ;
+(id)webQueryWithSupportedNetworkIDs:(id)arg0 merchantCapabilities:(NSUInteger)arg1 merchantCountryCode:(id)arg2 paymentMode:(NSInteger)arg3 paymentApplicationStates:(id)arg4 webService:(id)arg5 ;
-(id)initWithIssuedOnTheWeb:(BOOL)arg0 supportedNetworkIDs:(id)arg1 merchantCapabilities:(NSUInteger)arg2 merchantCountryCode:(id)arg3 paymentMode:(NSInteger)arg4 paymentApplicationStates:(id)arg5 webService:(id)arg6 ;


@end


#endif