// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCLIENTIDENTITYCACHE_H
#define MCMCLIENTIDENTITYCACHE_H

@class NSString;
@protocol MCMClientIdentityCache, MCMCache;

#import <Foundation/Foundation.h>


@interface MCMClientIdentityCache : NSObject <MCMClientIdentityCache>



@property (readonly, nonatomic) NSObject<MCMCache> *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)clientIdentityWithAuditToken:(struct ? )arg0 personaUniqueString:(id)arg1 error:(*id)arg2 generator:(id)arg3 ;
-(id)init;
-(void)flush;


@end


#endif