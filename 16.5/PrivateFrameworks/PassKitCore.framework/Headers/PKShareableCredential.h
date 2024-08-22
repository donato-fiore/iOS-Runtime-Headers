// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAREABLECREDENTIAL_H
#define PKSHAREABLECREDENTIAL_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKEncryptedPushProvisioningTarget.h"

@interface PKShareableCredential : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *cardConfigurationIdentifier; // ivar: _cardConfigurationIdentifier
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain, nonatomic) NSString *credentialIdentifierHash; // ivar: _credentialIdentifierHash
@property (copy, nonatomic) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget; // ivar: _encryptedPushProvisioningTarget
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) NSString *ownerDisplayName; // ivar: _ownerDisplayName
@property (retain, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) NSUInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToShareableCredential:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtoCredential:(id)arg0 ;
-(id)protoCredential;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif