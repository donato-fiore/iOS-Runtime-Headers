// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORE_H
#define HMDBACKINGSTORE_H

@class HMFObject, NSString, CKRecordID, NSUUID;
@protocol HMDBackingStoreDataSource, HMFLogging, HMDBackingStoreObjectProtocol;


#import "HMDHome.h"
#import "HMDHomeManager.h"
#import "HMDBackingStoreLocal.h"
#import "HMDObjectLookup.h"

@interface HMDBackingStore : HMFObject <HMDBackingStoreDataSource, HMFLogging>

 {
    BOOL _removedLegacyArchive;
    id<HMDBackingStoreDataSource> *_dataSource;
}


@property (readonly) NSString *activeControllerKeyUsername;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDBackingStoreObjectProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) BOOL isAtomicSaveFeatureEnabled;
@property (retain, nonatomic) HMDBackingStoreLocal *local; // ivar: _local
@property (retain, nonatomic) HMDObjectLookup *lookup; // ivar: _lookup
@property (readonly, nonatomic) CKRecordID *root; // ivar: _root
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)_saveToLocalStoreWithReason:(id)arg0 homeManager:(id)arg1 shouldIncrementGenerationCounter:(BOOL)arg2 backingStore:(id)arg3 ;
+(id)allowedTypes;
+(id)currentDevice;
+(id)deeplyProblematicObjectTypes;
+(id)flushBackingStore;
+(id)internalAllowedTypes;
+(id)logCategory;
+(id)resetBackingStore;
+(void)saveToPersistentStoreWithReason:(id)arg0 homeManager:(id)arg1 shouldIncrementGenerationCounter:(BOOL)arg2 backingStore:(id)arg3 completionHandler:(id)arg4 ;
+(void)start;
-(id)__fetchWithGroup:(id)arg0 uuids:(id)arg1 error:(*id)arg2 ;
-(id)backingStoreOperationQueue;
-(id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)arg0 ;
-(id)createBackingStoreOperation;
-(id)createHomeObjectLookupWithHome:(id)arg0 ;
-(id)dataForPersistentStoreIncrementingGeneration:(BOOL)arg0 reason:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 homeManager:(id)arg1 ;
-(id)initWithUUID:(id)arg0 homeManager:(id)arg1 home:(id)arg2 dataSource:(id)arg3 ;
-(id)logIdentifier;
-(id)transaction:(id)arg0 options:(id)arg1 ;
-(void)commit:(id)arg0 run:(BOOL)arg1 save:(BOOL)arg2 archiveInline:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)commit:(id)arg0 run:(BOOL)arg1 save:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)deleteModelObjects:(id)arg0 destination:(NSUInteger)arg1 ;
-(void)saveToPersistentStoreWithReason:(id)arg0 incrementGeneration:(BOOL)arg1 ;
-(void)submit:(id)arg0 ;
-(void)submitBlock:(id)arg0 ;
-(void)updateModelObjects:(id)arg0 destination:(NSUInteger)arg1 ;


@end


#endif