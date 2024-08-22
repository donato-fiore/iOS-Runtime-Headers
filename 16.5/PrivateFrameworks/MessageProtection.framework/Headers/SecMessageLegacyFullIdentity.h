// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECMESSAGELEGACYFULLIDENTITY_H
#define SECMESSAGELEGACYFULLIDENTITY_H

@class NSData;

#import <Foundation/Foundation.h>

#import "SecKeyRSAPrivate.h"
#import "LegacySigningKeyPrivate.h"

@interface SecMessageLegacyFullIdentity : NSObject

@property (retain, nonatomic) SecKeyRSAPrivate *encryptionKey; // ivar: _encryptionKey
@property (retain, nonatomic) NSData *encryptionKeyPersistentRef; // ivar: _encryptionKeyPersistentRef
@property (nonatomic) BOOL isMigratedV2Key; // ivar: _isMigratedV2Key
@property (retain, nonatomic) LegacySigningKeyPrivate *signingKey; // ivar: _signingKey
@property (retain, nonatomic) NSData *signingKeyPersistentRef; // ivar: _signingKeyPersistentRef


+(id)identity;
+(id)identityFromV2Bytes:(*char *)arg0 size:(*NSUInteger)arg1 error:(*id)arg2 ;
+(id)identityWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)populateIdentity:(id)arg0 withEncryptionKeyFromPersistentRef:(*char *)arg1 size:(*NSUInteger)arg2 ;
+(id)populateIdentity:(id)arg0 withSigningKeyFromPersistentRef:(*char *)arg1 size:(*NSUInteger)arg2 ;
-(NSUInteger)encryptionSize;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)decryptMessage:(id)arg0 error:(*id)arg1 ;
-(id)initWithEncryptionKey:(id)arg0 signingKey:(id)arg1 ;
-(id)initWithEncryptionKeyData:(id)arg0 signingKeyData:(id)arg1 ;
-(id)initWithEncryptionSecKey:(struct __SecKey *)arg0 signingSecKey:(struct __SecKey *)arg1 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)publicIdentity;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(id)unsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 error:(*id)arg2 ;
-(struct _SecMPFullIdentity *)asRef;
-(struct __SecKey *)privateSigningKeyForTerminusMigration;
-(void)deleteItemWithPersistentRef:(id)arg0 ;
-(void)deleteMigratedKeys;


@end


#endif