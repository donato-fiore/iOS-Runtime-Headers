// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASAUTHORIZATION_H
#define ASAUTHORIZATION_H

@protocol ASAuthorizationCredential, ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorization : NSObject

@property (readonly, nonatomic) NSObject<ASAuthorizationCredential> *credential; // ivar: _credential
@property (readonly, nonatomic) NSObject<ASAuthorizationProvider> *provider; // ivar: _provider


+(id)authorizationFromCredential:(id)arg0 ;
+(id)new;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCorePlatformKeyCredentialAssertion:(id)arg0 ;
-(id)initWithCorePlatformKeyCredentialRegistration:(id)arg0 ;
-(id)initWithProvider:(id)arg0 credential:(id)arg1 ;


@end


#endif