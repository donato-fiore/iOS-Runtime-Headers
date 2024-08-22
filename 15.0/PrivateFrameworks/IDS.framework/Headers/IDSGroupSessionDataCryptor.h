// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSGROUPSESSIONDATACRYPTOR_H
#define IDSGROUPSESSIONDATACRYPTOR_H

@class NSString, NSUUID, NSData, NSMutableDictionary, NSMapTable;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionDataCryptor : NSObject <NSSecureCoding, NSCopying>

 {
    os_unfair_lock_s _lock;
    NSString *_topic;
    NSUUID *_encryptingKeyID;
    NSData *_encryptingKey;
    NSData *_encryptingKeySalt;
    *_CCCryptor _encryptingCryptor;
    NSMutableDictionary *_decryptionKeysByKeyID;
    NSMapTable *_decryptionCryptorsByKeyID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCryptor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)decryptData:(id)arg0 keyID:(id)arg1 sequenceNumber:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)description;
-(id)encryptData:(id)arg0 sequenceNumber:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)getDecryptionKeyIDSet;
-(id)getEncryptionKeyID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopic:(id)arg0 ;
-(id)initWithTopic:(id)arg0 keyManager:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif