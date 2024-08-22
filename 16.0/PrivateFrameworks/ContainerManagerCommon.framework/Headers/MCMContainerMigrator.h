// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTAINERMIGRATOR_H
#define MCMCONTAINERMIGRATOR_H


#import <Foundation/Foundation.h>

#import "MCMUserIdentityCache.h"

@interface MCMContainerMigrator : NSObject

@property (retain, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


+(id)sharedInstance;
-(BOOL)_migrateBundleContainersWithError:(*id)arg0 ;
-(BOOL)_performEntitlementBypassListMigrationWithError:(*id)arg0 ;
-(BOOL)performSynchronousBuildUpgradeMigration:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)initWithUserIdentityCache:(id)arg0 ;
-(void)_checkIfDeviceMayNeedSystemContainerACLMigration:(id)arg0 ;


@end


#endif