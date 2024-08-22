// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMGROUPMANAGER_H
#define MCMGROUPMANAGER_H


#import <Foundation/Foundation.h>

#import "MCMUserIdentityCache.h"

@interface MCMGroupManager : NSObject

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


+(id)defaultManager;
-(id)groupContainerIdentifiersForOwnerIdentifier:(id)arg0 groupContainerClass:(NSUInteger)arg1 codeSignInfo:(id)arg2 withError:(*id)arg3 ;
-(id)initWithUserIdentityCache:(id)arg0 ;
-(void)_cleanupUnreferencedGroupContainersForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 referenceCounts:(id)arg2 context:(id)arg3 ;
-(void)reconcileGroupContainersForContainerClass:(NSUInteger)arg0 context:(id)arg1 ;


@end


#endif