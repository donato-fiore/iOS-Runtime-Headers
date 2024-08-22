// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMENFCREADERKEY_H
#define HMDHOMENFCREADERKEY_H

@class HMFObject, NSData;
@protocol NSSecureCoding, NSCopying;



@interface HMDHomeNFCReaderKey : HMFObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSData *externalRepresentation;
@property (readonly, copy) NSData *identifier; // ivar: _identifier
@property (readonly, copy) NSData *privateKey; // ivar: _privateKey
@property (readonly, copy) NSData *publicKey;
@property (readonly, copy) NSData *publicKeyExternalRepresentation; // ivar: _publicKeyExternalRepresentation


+(BOOL)supportsSecureCoding;
+(id)createRandomKey;
+(id)createWithExternalRepresentation:(id)arg0 ;
+(id)createWithKeychainItem:(id)arg0 ;
+(id)identifierForKey:(id)arg0 ;
+(id)keychainItemAccountAttributeValueWithHome:(id)arg0 keyIdentifier:(id)arg1 ;
+(id)publicKeyWithPublicKeyExternalRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createKeychainItemForHome:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 privateKey:(id)arg1 publicKeyExternalRepresentation:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif