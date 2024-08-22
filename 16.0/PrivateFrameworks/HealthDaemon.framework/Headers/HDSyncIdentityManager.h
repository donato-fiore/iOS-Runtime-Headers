// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSYNCIDENTITYMANAGER_H
#define HDSYNCIDENTITYMANAGER_H

@protocol HDProfileInitializedObserver;

#import <Foundation/Foundation.h>

#import "HDConcreteSyncIdentity.h"
#import "HDDatabaseValueCache.h"
#import "HDProfile.h"

@interface HDSyncIdentityManager : NSObject <HDProfileInitializedObserver>

 {
    os_unfair_lock_s _lock;
    HDConcreteSyncIdentity *_currentSyncIdentity;
    HDConcreteSyncIdentity *_legacySyncIdentity;
    HDDatabaseValueCache *_entityByIdentityCache;
    HDDatabaseValueCache *_identityByEntityPersisitentIDCache;
}


@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *currentSyncIdentity;
@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *legacySyncIdentity;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile


+(void)unitTest_resetCachedHardwareIdentifier;
-(id)concreteIdentityForIdentity:(id)arg0 shouldCreate:(BOOL)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(id)description;
-(id)identityForEntityID:(NSInteger)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 ;
-(void)profileDidInitialize:(id)arg0 ;


@end


#endif