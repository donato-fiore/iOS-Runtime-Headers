// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTEXT_H
#define MCMCONTEXT_H

@class NSString;
@protocol MCMContext, MCMContainerCache, MCMContainerFactory;

#import <Foundation/Foundation.h>

#import "MCMClientIdentity.h"
#import "MCMUserIdentityCache.h"

@interface MCMContext : NSObject <MCMContext>



@property (readonly, nonatomic) MCMClientIdentity *clientIdentity; // ivar: _clientIdentity
@property (readonly, nonatomic) NSObject<MCMContainerCache> *containerCache; // ivar: _containerCache
@property (readonly, nonatomic) NSObject<MCMContainerFactory> *containerFactory; // ivar: _containerFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


+(id)privileged;
+(id)privilegedWithUserIdentity:(id)arg0 userIdentityCache:(id)arg1 ;
-(id)initWithClientIdentity:(id)arg0 containerCache:(id)arg1 containerFactory:(id)arg2 userIdentityCache:(id)arg3 ;


@end


#endif