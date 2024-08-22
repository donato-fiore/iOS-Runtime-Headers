// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXPROXYAUTHENTICATIONCREDENTIALFACTORY_H
#define SXPROXYAUTHENTICATIONCREDENTIALFACTORY_H

@class NSString;
@protocol SXProxyAuthenticationCredentialFactory, SXProxyAuthenticationKeyProvider;

#import <Foundation/Foundation.h>


@interface SXProxyAuthenticationCredentialFactory : NSObject <SXProxyAuthenticationCredentialFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXProxyAuthenticationKeyProvider> *keyProvider; // ivar: _keyProvider
@property (readonly) Class superclass;


-(id)initWithKeyProvider:(id)arg0 ;
-(void)createCredentialForResponse:(id)arg0 date:(id)arg1 completion:(id)arg2 ;


@end


#endif