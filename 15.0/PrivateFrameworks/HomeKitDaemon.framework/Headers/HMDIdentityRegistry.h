// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDIDENTITYREGISTRY_H
#define HMDIDENTITYREGISTRY_H

@class HMFObject, NSMutableArray, NSString, NSRecursiveLock, NSArray;
@protocol HMFLogging, HMFDumpState;


#import "HMDHomeManager.h"

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState>

 {
    NSMutableArray *_registeredIdentities;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (readonly) NSArray *registeredIdentities;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedRegistry;
-(id)_userForIdenity:(id)arg0 ;
-(id)accountsForIdentity:(id)arg0 ;
-(id)attributeDescriptions;
-(id)dumpState;
-(id)identitiesForAccount:(id)arg0 ;
-(id)identitiesForDevice:(id)arg0 ;
-(id)identityForIdentifier:(id)arg0 ;
-(id)init;
-(id)userForDevice:(id)arg0 ;
-(void)configureWithHomeManager:(id)arg0 ;
-(void)deregisterIdentity:(id)arg0 object:(id)arg1 ;
-(void)registerIdentity:(id)arg0 account:(id)arg1 object:(id)arg2 ;
-(void)registerIdentity:(id)arg0 device:(id)arg1 object:(id)arg2 ;
-(void)reset;


@end


#endif