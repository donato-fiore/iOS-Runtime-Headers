// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONICONREQUEST_H
#define PKPAYMENTTRANSACTIONICONREQUEST_H

@class NSString, NSArray, PKMerchant, PKPayLaterMerchant, PKPaymentTransaction;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionIconRequest : NSObject

@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSArray *completionHandlers; // ivar: _completionHandlers
@property (nonatomic) BOOL ignoreLogoURL; // ivar: _ignoreLogoURL
@property (retain, nonatomic) PKMerchant *merchant; // ivar: _merchant
@property (retain, nonatomic) PKPayLaterMerchant *payLaterMerchant; // ivar: _payLaterMerchant
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)logoURL;


@end


#endif