// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONAUTHENTICATIONCONTEXT_H
#define PKTRANSACTIONAUTHENTICATIONCONTEXT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransactionAuthenticationContext : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger authenticationFailure; // ivar: _authenticationFailure
@property (nonatomic) BOOL complete; // ivar: _complete
@property (nonatomic) NSUInteger dataCollectedAuthenticationMechanisms; // ivar: _dataCollectedAuthenticationMechanisms
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (copy, nonatomic) NSData *partialSignature; // ivar: _partialSignature
@property (nonatomic) NSInteger paymentPINFormat; // ivar: _paymentPINFormat
@property (nonatomic) NSUInteger processedAuthenticationMechanisms; // ivar: _processedAuthenticationMechanisms
@property (nonatomic) NSUInteger requestedAuthenticationMechanisms; // ivar: _requestedAuthenticationMechanisms
@property (copy, nonatomic) NSData *signingKeyMaterial; // ivar: _signingKeyMaterial


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransactionAuthenticationContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif