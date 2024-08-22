// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTCREDENTIAL_H
#define PKACCOUNTCREDENTIAL_H

@class NSString;


#import "PKPaymentCredential.h"
#import "PKAccount.h"
#import "PKAccountWebServicePassDetailsResponse.h"
#import "PKPaymentPass.h"

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse; // ivar: _passDetailsResponse
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass


-(BOOL)_isEqualToCredential:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAccount:(id)arg0 ;
-(id)longDescription;


@end


#endif