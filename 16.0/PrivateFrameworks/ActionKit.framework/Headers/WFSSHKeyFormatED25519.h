// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSSHKEYFORMATED25519_H
#define WFSSHKEYFORMATED25519_H

@class NSString;
@protocol WFSSHKeyFormat;

#import <Foundation/Foundation.h>


@interface WFSSHKeyFormatED25519 : NSObject <WFSSHKeyFormat>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultKeySize;
+(id)generateKeyPairWithKeySize:(NSUInteger)arg0 comment:(id)arg1 ;
+(id)keyPairFromPrivateKey:(id)arg0 comment:(id)arg1 error:(*id)arg2 ;
+(id)localizedDisplayName;
+(id)possibleKeySizes;
+(id)privateKeySpecifier;
+(id)privateKeyType;
+(id)publicKeySpecifier;
+(id)publicKeyType;
+(id)sshPrivateKeyFromED25519PrivateKey:(id)arg0 publicKey:(id)arg1 comment:(id)arg2 ;
+(id)sshPublicKeyFromED25519Data:(id)arg0 ;


@end


#endif