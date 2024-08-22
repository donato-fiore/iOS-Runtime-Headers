// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLKEYMANAGER_H
#define MLKEYMANAGER_H


#import <Foundation/Foundation.h>


@interface MLKeyManager : NSObject



+(BOOL)isModelEncrypted:(id)arg0 ;
+(id)createPersistentKeyBlobForKeyID:(id)arg0 usesCodeSigningIdentityForEncryption:(BOOL)arg1 error:(*id)arg2 ;
+(id)decryptSessionForModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)extractKeyIdentifierFromModelAtURL:(id)arg0 usesCodeSigningIdentityForEncryption:(*BOOL)arg1 error:(*id)arg2 ;
+(id)loadDecryptionKeyForModelAtURL:(id)arg0 error:(*id)arg1 ;
+(id)syncQueue;


@end


#endif