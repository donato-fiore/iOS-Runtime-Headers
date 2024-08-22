// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIATTRIBUTESECURECAMERA_H
#define DIATTRIBUTESECURECAMERA_H

@class NSArray, NSData, NSString;
@protocol NSSecureCoding;


#import "DIAttribute.h"

@interface DIAttributeSecureCamera : DIAttribute <NSSecureCoding>



@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue; // ivar: currentValue
@property (copy, nonatomic) NSData *encryptionParameterSymmetricAAD; // ivar: _encryptionParameterSymmetricAAD
@property (nonatomic) *NSUInteger encryptionParameterSymmetricKeySizeInBits; // ivar: _encryptionParameterSymmetricKeySizeInBits
@property (copy, nonatomic) NSData *keyExchangeParameterSharedInfo; // ivar: _keyExchangeParameterSharedInfo
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (retain, nonatomic) NSData *remoteEncryptionKey; // ivar: _remoteEncryptionKey
@property (retain, nonatomic) NSData *remoteSigningKey; // ivar: _remoteSigningKey
@property (retain, nonatomic) NSArray *scanRequirements; // ivar: _scanRequirements
@property (copy, nonatomic) NSString *sessionId; // ivar: _sessionId


+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif