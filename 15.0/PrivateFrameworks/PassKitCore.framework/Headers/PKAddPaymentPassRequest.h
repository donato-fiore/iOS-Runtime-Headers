// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDPAYMENTPASSREQUEST_H
#define PKADDPAYMENTPASSREQUEST_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAddPaymentPassRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *FPInfo; // ivar: _FPInfo
@property (copy, nonatomic) NSData *activationData; // ivar: _activationData
@property (copy, nonatomic) NSData *encryptedPassData; // ivar: _encryptedPassData
@property (copy, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion
@property (copy, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (copy, nonatomic) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property (copy, nonatomic) NSString *hostApplicationVersion; // ivar: _hostApplicationVersion
@property (copy, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (copy, nonatomic) NSData *wrappedKey; // ivar: _wrappedKey


+(BOOL)supportsSecureCoding;
-(BOOL)_hasRequiredFields:(BOOL)arg0 ;
-(BOOL)_hasRequiredThirdPartyFields:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif