// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLRELATIONSHIPORDERKEYMANAGER_H
#define PLRELATIONSHIPORDERKEYMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLRelationshipOrderKeyManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_locationsCache;
    NSMutableDictionary *_enqueuedFolderAlbumsOrderValueUpdates;
    NSMutableDictionary *_enqueuedAlbumAssetsOrderValueUpdates;
}


@property (readonly, nonatomic) BOOL conflictDetected; // ivar: _conflictDetected
@property (copy, nonatomic) id *generateContextBlock; // ivar: _generateContextBlock
@property (readonly, nonatomic) BOOL hasStashedLocationValues; // ivar: _hasStashedLocationValues
@property BOOL inWriteStashedLocationMode; // ivar: _inWriteStashedLocationMode


+(NSInteger)compareOrderKeyObject:(id)arg0 withObject:(id)arg1 ;
+(id)new;
-(BOOL)writeStashedLocationValuesInContext:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)findIndexForAlbumWithID:(id)arg0 newOrderValue:(NSInteger)arg1 inFolderWithID:(id)arg2 hasOrderValueConflictWithAlbumID:(*id)arg3 inContext:(id)arg4 ;
-(NSUInteger)findIndexForAssetWithID:(id)arg0 newOrderValue:(NSInteger)arg1 inAlbumWithID:(id)arg2 hasOrderValueConflictWithAssetID:(*id)arg3 inContext:(id)arg4 ;
-(id)_locked_enqueuedAlbumAssetsOrderValueUpdates;
-(id)_locked_enqueuedFolderAlbumsOrderValueUpdates;
-(id)_locked_locationsCache;
-(id)_orderingStateForRelationship:(id)arg0 onObjectWithID:(id)arg1 invalidateCache:(BOOL)arg2 usingSPISafeContext:(id)arg3 ;
-(id)_orderingStateForRelationship:(id)arg0 onObjectWithID:(id)arg1 usingSPISafeContext:(id)arg2 ;
-(id)albumsAndOrderValuesForAsset:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)init;
-(id)initWithGenerateContextBlock:(id)arg0 ;
-(id)migration_sortedOrderKeysForAssetsInAlbum:(id)arg0 usingMap:(id)arg1 ;
-(id)objectIDsAndOrderValuesForRelationship:(id)arg0 onObjectWithID:(id)arg1 invalidateCache:(BOOL)arg2 inContext:(id)arg3 ;
-(id)parentFolderOrderValueForAlbum:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(*id)arg0 albums:(*id)arg1 conflictDetected:(*BOOL)arg2 ;
-(void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)arg0 childToOrderKeyMap:(id)arg1 ;
-(void)_migration_updateOrderValuesForAssetsInAlbum:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)_stashLocationValue:(NSInteger)arg0 forOrderedObjectWithID:(id)arg1 inSourceObjectID:(id)arg2 relationship:(id)arg3 atIndex:(NSUInteger)arg4 usingStashDictionary:(id)arg5 usingSPISafeContext:(id)arg6 ;
-(void)_updateOrderOfChildrenInParent:(id)arg0 usingTransientOrders:(id)arg1 ;
-(void)getConflictResolutionOrderValuesForRelationship:(id)arg0 onObjectWithID:(id)arg1 atIndex:(NSUInteger)arg2 intoLower:(*NSInteger)arg3 higher:(*NSInteger)arg4 inContext:(id)arg5 ;
-(void)migration_ensureValidOrderKey:(id)arg0 usingOrderValuePropertyKey:(id)arg1 ;
-(void)migration_fixupOrderKeys:(id)arg0 usingOrderValuePropertyKey:(id)arg1 enforceSingletonAlbumReservedKeySpace:(BOOL)arg2 ;
-(void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)arg0 ;
-(void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)stashAlbumAssetsLocationValue:(NSInteger)arg0 forAssetWithID:(id)arg1 inAlbumWithID:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)stashFolderAlbumsLocationValue:(NSInteger)arg0 forAlbumWithID:(id)arg1 inFolderWithID:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg0 inLibrary:(id)arg1 ;
-(void)updateKeyAssetsForAlbums:(id)arg0 inLibrary:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif