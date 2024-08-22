// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCACHEINDEXDATABASE_H
#define QLCACHEINDEXDATABASE_H

@class NSString, FPItemManager;

#import <Foundation/Foundation.h>

#import "QLSqliteDatabase.h"

@interface QLCacheIndexDatabase : NSObject {
    NSString *_databasePath;
}


@property (readonly) QLSqliteDatabase *database; // ivar: _database
@property (readonly) NSUInteger fileEntryCount;
@property (retain) FPItemManager *itemManager; // ivar: _itemManager
@property (readonly) NSUInteger maxThumbnailLifeTime; // ivar: _maxThumbnailLifeTime
@property (readonly) NSUInteger reserveBufferCount;
@property (readonly) NSUInteger reserveBufferSize;
@property (readonly) NSUInteger thumbnailCount;


-(BOOL)add:(NSUInteger)arg0 blobInfosStartingAtColumn:(NSUInteger)arg1 ofSteppedStatement:(struct sqlite3_stmt *)arg2 toArray:(id)arg3 ;
-(BOOL)beginTransaction;
-(BOOL)doesExist;
-(BOOL)getBlobInfoForCacheId:(NSUInteger)arg0 size:(float)arg1 iconMode:(unsigned char)arg2 badgeType:(NSUInteger)arg3 iconVariant:(NSInteger)arg4 interpolationQuality:(int)arg5 externalGeneratorDataHash:(NSUInteger)arg6 bitmapDataBlobInfo:(*id)arg7 plistBufferBlobInfo:(*id)arg8 ;
-(BOOL)insertOrUpdateImageDataForCacheId:(NSUInteger)arg0 size:(float)arg1 iconMode:(unsigned char)arg2 badgeType:(NSUInteger)arg3 iconVariant:(NSInteger)arg4 interpolationQuality:(int)arg5 bitmapFormat:(id)arg6 bitmapDataBlobInfo:(id)arg7 metadataBlobInfo:(id)arg8 flavor:(int)arg9 contentRect:(struct CGRect )arg10 externalGeneratorDataHash:(NSUInteger)arg11 lastHitDate:(id)arg12 ;
-(BOOL)isValid;
-(BOOL)itemIsMissingRemoteThumbnail:(id)arg0 ;
-(BOOL)removeReservedBufferWithBlobInfo:(id)arg0 ;
-(BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg0 ;
-(NSUInteger)_cacheIdForFileIdentifier:(id)arg0 createVersion:(*id)arg1 ;
-(NSUInteger)insertOrUpdateThumbnailWithVersionedFileIdentifier:(id)arg0 shouldInvalidAllThumbnailSizes:(*BOOL)arg1 added:(*BOOL)arg2 ;
-(NSUInteger)missingRemoteThumbnailsCountForFileProviderIds:(id)arg0 ;
-(NSUInteger)sizeSumOfThumbnailsOlderThanDate:(id)arg0 ;
-(id)_removeThumbnailsFromStatement:(struct sqlite3_stmt *)arg0 ;
-(id)allBuffersIncludingReserved:(BOOL)arg0 ;
-(id)allReservedBuffers;
-(id)batchOfFileProviderItemsStartingAtRowId:(NSUInteger)arg0 endingAtRowId:(*NSUInteger)arg1 ;
-(id)batchOfRegularItemsStartingAtRowId:(NSUInteger)arg0 endingAtRowId:(*NSUInteger)arg1 ;
-(id)enumeratorForAllUbiquitousFiles:(BOOL)arg0 withExtraInfo:(BOOL)arg1 ;
-(id)initWithPath:(id)arg0 ;
-(id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg0 ;
-(id)itemsGroupedByProviderDomain:(id)arg0 ;
-(id)lastCrapWithDate:(*id)arg0 ;
-(id)queryCacheForFileRequests:(id)arg0 ;
-(id)removeAllThumbnailsForCacheId:(NSUInteger)arg0 ;
-(id)removeFilesFromUninstalledFileProvidersWithIdentifiers:(id)arg0 ;
-(id)removeFilesFromUninstalledFileProvidersWithIdentifiers:(id)arg0 whichAreRemaining:(BOOL)arg1 ;
-(id)removeFilesFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg0 ;
-(id)removeFilesWithFileInfo:(id)arg0 ;
-(id)removeOldThumbnails;
-(id)removePercentageOldestThumbnails:(NSUInteger)arg0 ;
-(id)removeThumbnailForFileIdentifier:(id)arg0 ;
-(id)removeThumbnailsForDeletedFiles;
-(id)removeThumbnailsOlderThanDate:(id)arg0 ;
-(id)removeThumbnailsWithCacheIds:(id)arg0 ;
-(void)_createTables;
-(void)_deleteAllTables;
-(void)addReservedBufferWithBlobInfo:(id)arg0 ;
-(void)checkpoint;
-(void)close;
-(void)do:(id)arg0 ;
-(void)endTransaction;
-(void)noteRemoteThumbnailMissingForItems:(id)arg0 ;
-(void)noteRemoteThumbnailPresentForItems:(id)arg0 ;
-(void)open;
-(void)removeBasicFilesWithRowids:(id)arg0 ;
-(void)removeUbiquitousFilesWithRowids:(id)arg0 ;
-(void)reset;
-(void)save;
-(void)updateHitCount:(id)arg0 forFileIdentifier:(id)arg1 ;


@end


#endif