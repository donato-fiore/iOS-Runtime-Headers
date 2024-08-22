// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCREDENTIALPROVIDEREXTENSIONHELPERPROXY_H
#define SFCREDENTIALPROVIDEREXTENSIONHELPERPROXY_H

@class NSXPCConnection;
@protocol SFCredentialProviderExtensionHelperProtocol;

#import <Foundation/Foundation.h>


@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol>

 {
    NSXPCConnection *_connection;
    os_unfair_lock_s _lock;
}




-(id)_proxyObject;
-(id)init;
-(void)dealloc;
-(void)fetchCredentialIdentitiesMatchingDomains:(id)arg0 completion:(id)arg1 ;
-(void)getCredentialProviderExtensionStateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)removeAllCredentialIdentitiesWithCompletion:(id)arg0 ;
-(void)removeCredentialIdentities:(id)arg0 completion:(id)arg1 ;
-(void)removeCredentialIdentityStoreForApplication:(id)arg0 completion:(id)arg1 ;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg0 completion:(id)arg1 ;
-(void)saveCredentialIdentities:(id)arg0 completion:(id)arg1 ;


@end


#endif