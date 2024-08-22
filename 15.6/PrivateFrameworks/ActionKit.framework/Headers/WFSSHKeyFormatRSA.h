// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSSHKEYFORMATRSA_H
#define WFSSHKEYFORMATRSA_H

@class NSString;
@protocol WFSSHKeyFormat;

#import <Foundation/Foundation.h>


@interface WFSSHKeyFormatRSA : NSObject <WFSSHKeyFormat>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultKeySize;
+(id)generateKeyPairWithKeySize:(NSUInteger)arg0 comment:(id)arg1 ;
+(id)keyPairFromPrivateKey:(id)arg0 comment:(id)arg1 error:(*id)arg2 ;
+(id)localizedDisplayName;
+(id)pkcs1FromRSAKey:(struct _CCRSACryptor *)arg0 ;
+(id)possibleKeySizes;
+(id)privateKeySpecifier;
+(id)privateKeyType;
+(id)publicKeySpecifier;
+(id)publicKeyType;
+(id)sshPublicKeyFromRSAKey:(struct _CCRSACryptor *)arg0 ;


@end


#endif