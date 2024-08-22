// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECMESSAGELEGACYPUBLICIDENTITY_H
#define SECMESSAGELEGACYPUBLICIDENTITY_H


#import <Foundation/Foundation.h>

#import "SecKeyRSAPublic.h"
#import "LegacySigningKeyPublic.h"

@interface SecMessageLegacyPublicIdentity : NSObject

@property (readonly, nonatomic) SecKeyRSAPublic *encryptionKey; // ivar: _encryptionKey
@property (readonly, nonatomic) LegacySigningKeyPublic *signingKey; // ivar: _signingKey


+(id)identityWithIdentityData:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySignature:(id)arg0 ofData:(id)arg1 ;
-(NSUInteger)encryptionSize;
-(id)encryptData:(id)arg0 ;
-(id)identityData;
-(id)initWithEncryptionKey:(id)arg0 signingKey:(id)arg1 ;
-(id)publicIDCanonicalHash;
-(id)publicIDHash;
-(id)sealMessage:(id)arg0 signedByFullIdentity:(id)arg1 error:(*id)arg2 ;
-(struct _SecMPPublicIdentity *)asRef;
-(struct __SecKey *)publicSigningKeyForTerminusMigration;


@end


#endif