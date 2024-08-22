// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINAPPPAYMENTSESSIONAUTHORIZATIONREQUEST_H
#define PKINAPPPAYMENTSESSIONAUTHORIZATIONREQUEST_H

@class NSData, NSString, NSArray, NSDecimalNumber;

#import <Foundation/Foundation.h>

#import "PKPaymentMerchantSession.h"
#import "PKPaymentApplication.h"

@interface PKInAppPaymentSessionAuthorizationRequest : NSObject

@property (retain, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) NSUInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession; // ivar: _merchantSession
@property (retain, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (copy, nonatomic) NSArray *supportedNetworks; // ivar: _supportedNetworks
@property (retain, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount




@end


#endif