// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTABLETHUMBNAILMIGRATOR_H
#define PLTABLETHUMBNAILMIGRATOR_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PLTableThumbnailMigrator : NSObject {
    os_unfair_lock_s _pendingAssetObjectIDsLock;
    NSMutableSet *_pendingAssetObjectIDs;
}




+(BOOL)_writeCompressedTableThumbsFromMasterThumb:(struct CGImageSource *)arg0 uuid:(id)arg1 formats:(id)arg2 toIndex:(NSUInteger)arg3 thumbnailManager:(id)arg4 ;
+(NSUInteger)countOfAssetsPendingTableThumbRebuildInLibrary:(id)arg0 ;
+(id)_fetchRequstForAssetsPendingTableRebuildWithLimit:(NSInteger)arg0 excludingAssetIDs:(id)arg1 ;
+(id)_nextBatchOfItemsPendingTableRebuildInLibrary:(id)arg0 excludingAssetIDs:(id)arg1 sourceObjects:(*id)arg2 ;
+(id)_predicateForAssetsPendingTableRebuild;
+(id)_workItemForAsset:(id)arg0 library:(id)arg1 thumbnailManager:(id)arg2 ;
-(id)_bulkMigratorQueue;
-(id)init;
-(void)_rebuildTablesForBatch:(id)arg0 inLibrary:(id)arg1 toFormats:(id)arg2 ;
-(void)migrateAllAssetsPendingTableThumbRebuildInLibrary:(id)arg0 toTableFormats:(id)arg1 limit:(NSUInteger)arg2 ;
-(void)rebuildTableThumbForAsset:(id)arg0 inLibrary:(id)arg1 toTableFormats:(id)arg2 ;


@end


#endif