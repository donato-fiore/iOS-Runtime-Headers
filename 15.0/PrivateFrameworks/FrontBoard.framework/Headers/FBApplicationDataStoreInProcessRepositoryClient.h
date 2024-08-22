// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBAPPLICATIONDATASTOREINPROCESSREPOSITORYCLIENT_H
#define FBAPPLICATIONDATASTOREINPROCESSREPOSITORYCLIENT_H

@class NSCountedSet, NSMutableDictionary, NSHashTable, NSString;
@protocol FBSApplicationDataStoreRepositoryClient, FBApplicationDataStoreRepository, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient>

 {
    id<FBApplicationDataStoreRepository> *_dataStore;
    NSCountedSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeyValues;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    os_unfair_lock_s _observersLock;
    NSHashTable *_observersLock_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg0 application:(id)arg1 outObject:(*id)arg2 ;
-(id)_observers;
-(id)_prefetchQueue_prefetchedKeysForApplication:(id)arg0 ;
-(id)availableDataStores;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)objectForKey:(id)arg0 forApplication:(id)arg1 ;
-(void)_invalidateCacheIfObjectIsNotEqual:(id)arg0 forKey:(id)arg1 forApplication:(id)arg2 ;
-(void)_prefetchQueue_updateNotificationListeners;
-(void)_repositoryInvalidated:(id)arg0 ;
-(void)_updateCacheIfNecessaryWithObject:(id)arg0 forKey:(id)arg1 forApplication:(id)arg2 ;
-(void)_updateNotificationListeners;
-(void)_valueChanged:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addPrefetchedKeys:(id)arg0 ;
-(void)invalidate;
-(void)objectForKey:(id)arg0 forApplication:(id)arg1 withResult:(id)arg2 ;
-(void)removeAllObjectsForApplication:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 forApplication:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePrefetchedKeys:(id)arg0 withCompletion:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 forApplication:(id)arg2 withCompletion:(id)arg3 ;
-(void)synchronizeWithCompletion:(id)arg0 ;


@end


#endif