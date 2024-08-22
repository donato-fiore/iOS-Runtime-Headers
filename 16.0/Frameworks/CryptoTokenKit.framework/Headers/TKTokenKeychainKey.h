// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENKEYCHAINKEY_H
#define TKTOKENKEYCHAINKEY_H

@class NSData, NSString;


#import "TKTokenKeychainItem.h"

@interface TKTokenKeychainKey : TKTokenKeychainItem

@property (copy) NSData *applicationTag; // ivar: _applicationTag
@property BOOL canDecrypt; // ivar: _canDecrypt
@property BOOL canPerformKeyExchange; // ivar: _canPerformKeyExchange
@property BOOL canSign; // ivar: _canSign
@property NSInteger keySizeInBits; // ivar: _keySizeInBits
@property (copy) NSString *keyType; // ivar: _keyType
@property (readonly) NSUInteger keyUsage;
@property (copy) NSData *publicKeyData; // ivar: _publicKeyData
@property (copy) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (getter=isSuitableForLogin) BOOL suitableForLogin; // ivar: _suitableForLogin


-(BOOL)satisfiesKeyUsage:(NSUInteger)arg0 ;
-(id)encodedObjectID;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 objectID:(id)arg1 ;
-(id)initWithItemInfo:(id)arg0 ;
-(id)keychainAttributes;
-(void)createConstraints:(unsigned char)arg0 ;


@end


#endif