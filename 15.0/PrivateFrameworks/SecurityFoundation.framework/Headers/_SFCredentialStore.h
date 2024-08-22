// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFCREDENTIALSTORE_H
#define _SFCREDENTIALSTORE_H

@class NSError;
@protocol NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface _SFCredentialStore : NSObject {
    id *_credentialStoreInternal;
    id<NSXPCProxyCreating> *_serverConnection;
    NSError *_serverError;
}




+(id)_serverConnectionWithError:(*id)arg0 ;
+(id)defaultCredentialStore;
-(id)_init;
-(id)serverProxyWithBooleanHandler:(id)arg0 ;
-(id)serverProxyWithDualResultHandler:(id)arg0 ;
-(id)serverProxyWithResultHandler:(id)arg0 ;
-(void)addCredential:(id)arg0 withAccessPolicy:(id)arg1 resultHandler:(id)arg2 ;
-(void)fetchPasswordCredentialForPersistentIdentifier:(id)arg0 withResultHandler:(id)arg1 ;
-(void)lookupCredentialsForServiceIdentifiers:(id)arg0 withResultHandler:(id)arg1 ;
-(void)removeCredentialWithPersistentIdentifier:(id)arg0 withResultHandler:(id)arg1 ;
-(void)replaceCredential:(id)arg0 withNewCredential:(id)arg1 resultHandler:(id)arg2 ;
-(void)replaceOldCredential:(id)arg0 withNewCredential:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif