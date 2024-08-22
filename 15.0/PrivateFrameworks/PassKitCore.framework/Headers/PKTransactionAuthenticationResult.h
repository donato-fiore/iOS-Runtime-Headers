// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONAUTHENTICATIONRESULT_H
#define PKTRANSACTIONAUTHENTICATIONRESULT_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKTransactionAuthenticationContext.h"

@interface PKTransactionAuthenticationResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKTransactionAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (copy, nonatomic) NSData *encryptedPIN; // ivar: _encryptedPIN
@property (readonly, nonatomic) BOOL hasDataForAllRequestedAuthenticationMechanisms;
@property (copy, nonatomic) NSData *transactionDetailsSignature; // ivar: _transactionDetailsSignature
@property (copy, nonatomic) NSString *transactionServiceIdentifier; // ivar: _transactionServiceIdentifier
@property (copy, nonatomic) NSData *userConfirmation; // ivar: _userConfirmation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransactionAuthenticationResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif