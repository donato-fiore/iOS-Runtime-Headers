// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LAKEYSTORE_H
#define _LAKEYSTORE_H

@class NSString;
@protocol _LAKeyStoreGenericPasswordCryptor, LAKeyStore, LAKeyStoreBackend;

#import <Foundation/Foundation.h>

#import "LAKeyStoreSecretCoder.h"

@interface _LAKeyStore : NSObject <_LAKeyStoreGenericPasswordCryptor, LAKeyStore>

 {
    id<LAKeyStoreBackend> *_backend;
    LAKeyStoreSecretCoder *_coder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)decryptData:(id)arg0 publicKeyHash:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)encryptData:(id)arg0 publicKeyHash:(id)arg1 completion:(id)arg2 ;
-(void)fetchGenericPasswordWithIdentifier:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
-(void)fetchGenericPasswordsWithDomain:(id)arg0 completion:(id)arg1 ;
-(void)fetchItemsWithDomain:(id)arg0 completion:(id)arg1 ;
-(void)fetchKeyWithIdentifier:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
-(void)fetchKeyWithPublicKeyHash:(id)arg0 completion:(id)arg1 ;
-(void)fetchKeysWithDomain:(id)arg0 completion:(id)arg1 ;
-(void)removeGenericPasswordsWithDomain:(id)arg0 completion:(id)arg1 ;
-(void)removeItemsWithCompletion:(id)arg0 ;
-(void)removeItemsWithDomain:(id)arg0 completion:(id)arg1 ;
-(void)removeKeysWithDomain:(id)arg0 completion:(id)arg1 ;
-(void)storeGenericPassword:(id)arg0 identifier:(id)arg1 domain:(id)arg2 protectedBy:(id)arg3 completion:(id)arg4 ;
-(void)storeKeyWithIdentifier:(id)arg0 domain:(id)arg1 protectedBy:(id)arg2 completion:(id)arg3 ;


@end


#endif