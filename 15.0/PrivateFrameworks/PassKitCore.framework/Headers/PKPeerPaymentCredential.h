// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTCREDENTIAL_H
#define PKPEERPAYMENTCREDENTIAL_H

@class NSString;


#import "PKPaymentCredential.h"
#import "PKPeerPaymentAccount.h"
#import "PKCurrencyAmount.h"
#import "PKPeerPaymentPassDetailsResponse.h"

@interface PKPeerPaymentCredential : PKPaymentCredential {
    NSString *_pendingPaymentSenderName;
}


@property (readonly, nonatomic) PKPeerPaymentAccount *account; // ivar: _account
@property (retain, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKPeerPaymentPassDetailsResponse *passDetailsResponse; // ivar: _passDetailsResponse
@property (copy, nonatomic) NSString *pendingPaymentSenderAddress; // ivar: _pendingPaymentSenderAddress
@property (readonly, copy, nonatomic) NSString *pendingPaymentSenderName;
@property (nonatomic) NSUInteger state; // ivar: _state


-(BOOL)_isEqualToCredential:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPeerPaymentAccount:(id)arg0 ;
-(id)longDescription;


@end


#endif