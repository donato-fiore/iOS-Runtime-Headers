// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPROACTIVEFAILEDTILEDOWNLOADER_H
#define GEOPROACTIVEFAILEDTILEDOWNLOADER_H



#import "GEOBatchOpportunisticTileDownloader.h"
#import "GEOTileDB.h"
#import "GEOTileKeyList.h"

@interface GEOProactiveFailedTileDownloader : GEOBatchOpportunisticTileDownloader {
    GEOTileDB *_diskCache;
    GEOTileKeyList *_keysRemaining;
    NSUInteger _numberOfTilesOriginallyConsidered;
    NSUInteger _batchSize;
}




+(unsigned char)_reason;
-(BOOL)cancelKey:(struct _GEOTileKey *)arg0 ;
-(NSUInteger)numberOfTilesConsidered;
-(id)initWithDiskCache:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 tileRequesterCreationBlock:(id)arg3 ;
-(void)_addMoreKeysToListIfNeeded:(id)arg0 completionHandler:(id)arg1 ;
-(void)_determineKeysToUpdate;
-(void)determineNextBatchWithQueue:(id)arg0 callback:(id)arg1 ;


@end


#endif