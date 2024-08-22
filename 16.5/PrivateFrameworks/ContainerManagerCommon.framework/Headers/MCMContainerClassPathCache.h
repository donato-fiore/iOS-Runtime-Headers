// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERCLASSPATHCACHE_H
#define MCMCONTAINERCLASSPATHCACHE_H

@class NSMutableDictionary, NSString;
@protocol MCMUserIdentityCacheObserver;

#import <Foundation/Foundation.h>


@interface MCMContainerClassPathCache : NSObject <MCMUserIdentityCacheObserver>

 {
    NSMutableDictionary *_lookup;
    os_unfair_lock_s _lookupLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_lock_containerClassPathForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 typeClass:(Class)arg2 ;
-(id)containerClassPathForContainerIdentity:(id)arg0 typeClass:(Class)arg1 ;
-(id)containerClassPathForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 typeClass:(Class)arg2 ;
-(id)containerClassPathWithURL:(id)arg0 reference:(id)arg1 ;
-(id)init;
-(id)referenceForPOSIXUser:(id)arg0 ;
-(void)_lock_flush;
-(void)flush;
-(void)userIdentityCache:(id)arg0 didAddUserIdentity:(id)arg1 ;
-(void)userIdentityCache:(id)arg0 didInvalidateUserIdentity:(id)arg1 ;


@end


#endif