// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSTALETILEUPDATER_H
#define GEOSTALETILEUPDATER_H



#import "GEOBatchOpportunisticTileDownloader.h"
#import "GEOTileDB.h"
#import "GEOResourceManifestManager.h"
#import "GEOTileKeyList.h"
#import "GEOTileKeyMap.h"

@interface GEOStaleTileUpdater : GEOBatchOpportunisticTileDownloader {
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    GEOTileKeyList *_keysRemaining;
    NSUInteger _numberOfTilesOriginallyConsidered;
    GEOTileKeyMap *_cacheMissType;
    NSUInteger _batchSize;
}




+(unsigned char)_reason;
-(BOOL)cancelKey:(struct _GEOTileKey *)arg0 ;
-(NSUInteger)numberOfTilesConsidered;
-(id)initWithDiskCache:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 manifestManager:(id)arg3 tileRequesterCreationBlock:(id)arg4 ;
-(void)_addMoreKeysToListIfNeeded:(id)arg0 staleCachedETags:(id)arg1 staleCachedData:(id)arg2 completionHandler:(id)arg3 ;
-(void)_determineStaleKeysToUpdate;
-(void)determineNextBatchWithQueue:(id)arg0 callback:(id)arg1 ;
-(void)downloadDidFailForTile:(struct _GEOTileKey *)arg0 error:(id)arg1 ;
-(void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg0 downloadSize:(NSUInteger)arg1 httpStatus:(unsigned int)arg2 ;


@end


#endif