// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUPURGEABLESTORAGEPOOL_H
#define NUPURGEABLESTORAGEPOOL_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NUStoragePoolStats.h"

@interface NUPurgeableStoragePool : NSObject {
    NUStoragePoolStats *_stats;
    NSUInteger _nonPurgeableActivityCounter;
    BOOL _migrationTimerScheduled;
    NSMutableArray *_sharedStoragesToBeReclaimedList;
}


@property (readonly, nonatomic) CGFloat migrationDelay; // ivar: _migrationDelay
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue; // ivar: _migrationQueue
@property (readonly, nonatomic) NSInteger nonPurgeableLimit; // ivar: _nonPurgeableLimit
@property (readonly, nonatomic) NSMutableArray *nonPurgeableList; // ivar: _nonPurgeableList
@property (readonly, nonatomic) NSInteger purgeableLimit; // ivar: _purgeableLimit
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly, copy, nonatomic) NUStoragePoolStats *stats;
@property (readonly, nonatomic) Class storageClass; // ivar: _storageClass
@property (readonly, nonatomic) NSMutableArray *volatileList; // ivar: _volatileList


+(void)reapAllPurged;
+(void)reapAllVolatile;
-(id)_allocateStorageWithSize:(struct ? )arg0 format:(id)arg1 ;
-(id)_popOldestNonPurgeableStorage;
-(id)_storageFromPoolWithSize:(struct ? )arg0 format:(id)arg1 exactMatch:(BOOL)arg2 ;
-(id)debugDescription;
-(id)init;
-(id)initWithStorageClass:(Class)arg0 ;
-(id)newStorageWithMinimumSize:(struct ? )arg0 format:(id)arg1 ;
-(id)newStorageWithSize:(struct ? )arg0 format:(id)arg1 ;
-(id)newStorageWithSize:(struct ? )arg0 format:(id)arg1 exactMatch:(BOOL)arg2 ;
-(id)reapPurged;
-(id)reapVolatile;
-(void)_enforcePurgableLimit;
-(void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(NSUInteger)arg0 ;
-(void)_migrateOldestNonPurgeableStorageToPurgeable;
-(void)_migrateStorageToPurgeable:(id)arg0 ;
-(void)_migrationTimer:(NSUInteger)arg0 ;
-(void)_reapPurged;
-(void)_reapVolatile;
-(void)_reclaimSharedStorages;
-(void)_resetNonPurgeableStorageMigrationTimer;
-(void)_returnNonPurgeableStorage:(id)arg0 ;
-(void)_returnPurgedStorage:(id)arg0 ;
-(void)_returnStorage:(id)arg0 ;
-(void)_returnVolatileStorage:(id)arg0 ;
-(void)_scheduleMigrationTimer;
-(void)migrateAllNonPurgeableStorage;
-(void)returnStorage:(id)arg0 ;
-(void)waitForMigration;


@end


#endif