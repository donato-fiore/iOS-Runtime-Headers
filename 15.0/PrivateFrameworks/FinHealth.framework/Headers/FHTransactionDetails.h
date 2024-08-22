// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FHTRANSACTIONDETAILS_H
#define FHTRANSACTIONDETAILS_H

@class NSDecimalNumber, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "FHMerchantDetails.h"

@interface FHTransactionDetails : NSObject

@property (nonatomic) FHMerchantDetails *merchantCategory; // ivar: _merchantCategory
@property (nonatomic) *NSUInteger suggestionCategory; // ivar: _suggestionCategory
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier




@end


#endif