// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFPEERPAYMENTTRANSFERREQUEST_H
#define NFPEERPAYMENTTRANSFERREQUEST_H

@class NSString, NSData, NSDecimalNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFPeerPaymentTransferRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *appleTransactionHash; // ivar: _appleTransactionHash
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (copy, nonatomic) NSString *publicTransactionHash; // ivar: _publicTransactionHash
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (copy, nonatomic) NSString *transactionCountry; // ivar: _transactionCountry
@property (copy, nonatomic) NSString *transactionCurrency; // ivar: _transactionCurrency
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif