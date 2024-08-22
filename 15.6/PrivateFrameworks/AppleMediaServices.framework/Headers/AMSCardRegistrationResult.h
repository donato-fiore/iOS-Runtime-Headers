// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCARDREGISTRATIONRESULT_H
#define AMSCARDREGISTRATIONRESULT_H

@class NSURL, NSData;

#import <Foundation/Foundation.h>


@interface AMSCardRegistrationResult : NSObject

@property (readonly, nonatomic) NSURL *brokerURL; // ivar: _brokerURL
@property (readonly, nonatomic) NSData *cardData; // ivar: _cardData
@property (readonly, nonatomic) NSURL *paymentServicesURL; // ivar: _paymentServicesURL


-(id)initWithCardRegistrationResponse:(id)arg0 ;


@end


#endif