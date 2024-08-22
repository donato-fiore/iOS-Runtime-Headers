// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPERSONMANAGER_H
#define HMPERSONMANAGER_H

@class NSUUID, NSString, NSNotificationCenter, NSHashTable;
@protocol HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMPersonManager : NSObject <HMFMessageReceiver>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *fetchClientFactory; // ivar: _fetchClientFactory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 UUID:(id)arg1 notificationCenter:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)addOrUpdateFaceCrops:(id)arg0 completion:(id)arg1 ;
-(void)addOrUpdateFaceprints:(id)arg0 completion:(id)arg1 ;
-(void)addOrUpdatePersons:(id)arg0 completion:(id)arg1 ;
-(void)associateFaceCropsWithUUIDs:(id)arg0 toPersonWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)associateFaceCropsWithUUIDs:(id)arg0 toPersonWithUUID:(id)arg1 forSource:(NSInteger)arg2 completion:(id)arg3 ;
-(void)configure;
-(void)dealloc;
-(void)disassociateFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllFaceprintsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchAllPersonsWithCompletion:(id)arg0 ;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(id)arg0 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg0 ;
-(void)handleDidChangePersonDataMessage:(id)arg0 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;
-(void)removeFaceCropsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeFaceprintsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePersonsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)subscribe;
-(void)unsubscribe;


@end


#endif