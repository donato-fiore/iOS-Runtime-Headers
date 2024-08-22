// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTREWRAPREQUEST_H
#define PKPAYMENTREWRAPREQUEST_H

@class NSString;


#import "PKPaymentRewrapRequestBase.h"

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase

@property (copy, nonatomic) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property (copy, nonatomic) NSString *merchantDisplayName; // ivar: _merchantDisplayName
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier


-(id)bodyDictionary;
-(id)endpointComponents;


@end


#endif