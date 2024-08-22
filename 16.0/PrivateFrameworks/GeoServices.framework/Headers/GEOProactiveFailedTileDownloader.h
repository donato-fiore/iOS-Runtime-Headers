// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPROACTIVEFAILEDTILEDOWNLOADER_H
#define GEOPROACTIVEFAILEDTILEDOWNLOADER_H



#import "GEOBatchTileRequester.h"
#import "GEOTileDB.h"
#import "GEOTileKeyList.h"

@interface GEOProactiveFailedTileDownloader : GEOBatchTileRequester {
    GEOTileDB *_diskCache;
    GEOTileKeyList *_keysRemaining;
    NSUInteger _numberOfTilesOriginallyConsidered;
    NSUInteger _batchSize;
}




-(BOOL)cancelKey:(struct _GEOTileKey *)arg0 ;
-(NSUInteger)numberOfTilesConsidered;
-(id)initWithDiskCache:(id)arg0 tileRequesterCreationBlock:(id)arg1 ;
-(unsigned char)reason;
-(void)_addMoreKeysToListIfNeeded:(id)arg0 completionHandler:(id)arg1 ;
-(void)_determineKeysToUpdate;
-(void)determineNextBatchWithQueue:(id)arg0 callback:(id)arg1 ;


@end


#endif