// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALIDENTITYSTORE_H
#define ASCREDENTIALIDENTITYSTORE_H

@class SFCredentialProviderExtensionHelperProxy;

#import <Foundation/Foundation.h>


@interface ASCredentialIdentityStore : NSObject {
    SFCredentialProviderExtensionHelperProxy *_helperProxy;
}




+(id)sharedStore;
-(id)_initCredentialIdentityStore;
-(void)getCredentialIdentityStoreStateWithCompletion:(id)arg0 ;
-(void)removeAllCredentialIdentitiesWithCompletion:(id)arg0 ;
-(void)removeCredentialIdentities:(id)arg0 completion:(id)arg1 ;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg0 completion:(id)arg1 ;
-(void)saveCredentialIdentities:(id)arg0 completion:(id)arg1 ;


@end


#endif