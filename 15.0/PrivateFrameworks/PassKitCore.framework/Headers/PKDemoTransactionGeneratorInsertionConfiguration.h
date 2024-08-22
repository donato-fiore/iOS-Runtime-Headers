// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDEMOTRANSACTIONGENERATORINSERTIONCONFIGURATION_H
#define PKDEMOTRANSACTIONGENERATORINSERTIONCONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PKAccountUser.h"
#import "PKPaymentPass.h"

@interface PKDemoTransactionGeneratorInsertionConfiguration : NSObject

@property (copy, nonatomic) NSArray *accountEvents; // ivar: _accountEvents
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (retain, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (nonatomic) NSUInteger codingType; // ivar: _codingType
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier
@property (copy, nonatomic) NSArray *transactions; // ivar: _transactions




@end


#endif