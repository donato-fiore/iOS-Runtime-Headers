// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERFACTORY_H
#define MCMCONTAINERFACTORY_H

@class NSString;
@protocol MCMContainerFactory, MCMContainerCache;

#import <Foundation/Foundation.h>

#import "MCMClientIdentity.h"
#import "MCMUserIdentityCache.h"

@interface MCMContainerFactory : NSObject <MCMContainerFactory>



@property (readonly, nonatomic) NSObject<MCMContainerCache> *cache; // ivar: _cache
@property (readonly, nonatomic) MCMClientIdentity *clientIdentity; // ivar: _clientIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


-(BOOL)deleteURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteURL:(id)arg0 reclaimSoon:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isAppropriatePersonaForContainerClass:(NSUInteger)arg0 ;
-(BOOL)upgradeContainer:(id)arg0 clientIdentity:(id)arg1 error:(*id)arg2 ;
-(id)_createContainerForContainerIdentity:(id)arg0 error:(*id)arg1 ;
-(id)containerForContainerIdentity:(id)arg0 createIfNecessary:(BOOL)arg1 updateLinks:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithContainerCache:(id)arg0 clientIdentity:(id)arg1 userIdentityCache:(id)arg2 ;


@end


#endif