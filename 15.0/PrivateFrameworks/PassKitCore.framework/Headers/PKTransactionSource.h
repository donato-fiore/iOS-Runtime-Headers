// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONSOURCE_H
#define PKTRANSACTIONSOURCE_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAccountUser.h"
#import "PKPaymentPass.h"
#import "PKPeerPaymentAccount.h"

@interface PKTransactionSource : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (readonly, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (readonly, copy, nonatomic) NSSet *transactionSourceIdentifiers;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAccountUser:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 ;
-(id)initWithPeerPaymentAccount:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif