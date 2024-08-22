// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPDATASUBSCRIPTIONTILEDOWNLOADER_H
#define GEOMAPDATASUBSCRIPTIONTILEDOWNLOADER_H

@class NSDictionary, NSProgress, NSString;
@protocol NSProgressReporting, GEOTileKeyEnumerator;


#import "GEOBatchTileRequester.h"
#import "GEOTileDB.h"
#import "GEOResourceManifestManager.h"
#import "GEOMapDataSubscription.h"

@interface GEOMapDataSubscriptionTileDownloader : GEOBatchTileRequester <NSProgressReporting>

 {
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    NSUInteger _numberOfTilesOriginallyConsidered;
    NSUInteger _batchSize;
    unsigned char _reason;
    NSDictionary *_dataTypeToDBTileSets;
    id<GEOTileKeyEnumerator> *_tileKeysToLoad;
    NSProgress *_progress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly, nonatomic) GEOMapDataSubscription *subscription; // ivar: _subscription
@property (readonly) Class superclass;


-(NSUInteger)numberOfTilesConsidered;
-(id)init;
-(id)initWithSubscription:(id)arg0 diskCache:(id)arg1 reason:(unsigned char)arg2 requestOptions:(NSUInteger)arg3 manifestManager:(id)arg4 log:(id)arg5 logPrefix:(id)arg6 tileRequesterCreationBlock:(id)arg7 ;
-(unsigned char)reason;
-(void)_addMoreKeysToListIfNeeded:(id)arg0 cachedETags:(id)arg1 cachedData:(id)arg2 completionHandler:(id)arg3 ;
-(void)determineNextBatchWithQueue:(id)arg0 callback:(id)arg1 ;
-(void)didFinishWithError:(id)arg0 ;
-(void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg0 downloadSize:(NSUInteger)arg1 httpStatus:(unsigned int)arg2 ;


@end


#endif