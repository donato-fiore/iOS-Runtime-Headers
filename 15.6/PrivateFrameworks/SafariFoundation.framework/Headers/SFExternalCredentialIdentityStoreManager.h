// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFEXTERNALCREDENTIALIDENTITYSTOREMANAGER_H
#define SFEXTERNALCREDENTIALIDENTITYSTOREMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFExternalCredentialIdentityStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedManager;
-(id)_credentialIdentityStoreWithIdentifier:(id)arg0 ;
-(id)init;
-(void)getCredentialIdentityStoreWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeCredentialIdentityStoreWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif