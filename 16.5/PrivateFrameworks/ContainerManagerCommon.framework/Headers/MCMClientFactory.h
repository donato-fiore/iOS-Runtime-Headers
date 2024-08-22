// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCLIENTFACTORY_H
#define MCMCLIENTFACTORY_H

@class NSString;
@protocol MCMClientFactoryWithXPC, MCMClientFactory, MCMClientCodeSignInfoCache, MCMClientIdentityCache;

#import <Foundation/Foundation.h>

#import "MCMUserIdentityCache.h"

@interface MCMClientFactory : NSObject <MCMClientFactoryWithXPC, MCMClientFactory>



@property (readonly, nonatomic) NSObject<MCMClientCodeSignInfoCache> *clientCodeSignInfoCache; // ivar: _clientCodeSignInfoCache
@property (readonly, nonatomic) NSObject<MCMClientIdentityCache> *clientIdentityCache; // ivar: _clientIdentityCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


-(id)_clientIdentityWithClient:(struct container_client *)arg0 realAuditToken:(struct ? )arg1 error:(*id)arg2 ;
-(id)_clientIdentityWithClientConnectionContext:(id)arg0 error:(*id)arg1 ;
-(id)_codeSignInfoWithClient:(struct container_client *)arg0 CDHash:(id)arg1 identifier:(id)arg2 error:(*id)arg3 ;
-(id)clientIdentityWithClientConnectionContext:(id)arg0 clientMessageContext:(id)arg1 xpcMessage:(id)arg2 error:(*id)arg3 ;
-(id)initWithUserIdentityCache:(id)arg0 clientCodeSignInfoCache:(id)arg1 clientIdentityCache:(id)arg2 ;


@end


#endif