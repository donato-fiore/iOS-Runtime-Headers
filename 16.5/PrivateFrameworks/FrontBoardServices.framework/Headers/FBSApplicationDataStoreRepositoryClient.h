// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSAPPLICATIONDATASTOREREPOSITORYCLIENT_H
#define FBSAPPLICATIONDATASTOREREPOSITORYCLIENT_H

@class NSCountedSet, NSMutableDictionary, NSHashTable, NSString;
@protocol FBSApplicationDataStoreRepositoryClient;


#import "FBSServiceFacilityClient.h"

@interface FBSApplicationDataStoreRepositoryClient : FBSServiceFacilityClient <FBSApplicationDataStoreRepositoryClient>

 {
    os_unfair_lock_s _prefetchedDataLock;
    NSCountedSet *_prefetchedKeys;
    NSMutableDictionary *_prefetchedKeyValues;
    NSMutableDictionary *_pendingChangesToPrefetchedKeys;
    os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isChangeInFlightForPrefetchedKey:(id)arg0 application:(id)arg1 ;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg0 application:(id)arg1 outObject:(*id)arg2 ;
-(id)_allPrefetchedChangesInFlightForApplication:(id)arg0 ;
-(id)_observers;
-(id)availableDataStores;
-(id)init;
-(id)objectForKey:(id)arg0 forApplication:(id)arg1 ;
-(void)_calloutQueue_handleStoreInvalidated:(id)arg0 ;
-(void)_calloutQueue_handleValueChanged:(id)arg0 ;
// -(void)_sendMessageType:(int)arg0 withMessage:(id)arg1 withReplyHandler:(unk)arg2 waitForReply:(id)arg3  ;
-(void)_sendPrefetchedKeys:(id)arg0 withCompletion:(id)arg1 ;
-(void)_setChangeInFlight:(BOOL)arg0 forPrefetchedKey:(id)arg1 application:(id)arg2 ;
-(void)_setPrefetchedObjectIfNecessary:(id)arg0 forKey:(id)arg1 application:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)addPrefetchedKeys:(id)arg0 ;
// -(void)fireCompletion:(id)arg0 error:(unk)arg1  ;
-(void)handleMessage:(id)arg0 withType:(NSInteger)arg1 ;
-(void)invalidate;
-(void)removeAllObjectsForApplication:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 forApplication:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePrefetchedKeys:(id)arg0 withCompletion:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 forApplication:(id)arg2 withCompletion:(id)arg3 ;
-(void)synchronizeWithCompletion:(id)arg0 ;


@end


#endif