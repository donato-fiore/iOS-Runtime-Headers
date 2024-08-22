// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPDATASUBSCRIPTIONDOWNLOADER_H
#define GEOMAPDATASUBSCRIPTIONDOWNLOADER_H

@class NSProgress, NSString, NSError;
@protocol GEOBatchTileRequesterDelegate, NSProgressReporting, OS_dispatch_queue, OS_os_log, GEOMapDataSubscriptionDownloaderDelegate;

#import <Foundation/Foundation.h>

#import "GEOTileDB.h"
#import "GEOResourceManifestManager.h"
#import "GEOMapDataSubscriptionTileDownloader.h"
#import "GEOMapDataSubscription.h"

@interface GEOMapDataSubscriptionDownloader : NSObject <GEOBatchTileRequesterDelegate, NSProgressReporting>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSProgress *_progress;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    GEOMapDataSubscriptionTileDownloader *_tileDownloader;
    NSError *_firstError;
    GEOOnce_s _finished;
    BOOL _paused;
    BOOL _canceled;
}


@property (readonly, nonatomic) NSUInteger bytesDownloaded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<GEOMapDataSubscriptionDownloaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger failedTiles;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfTilesAttempted;
@property (readonly, nonatomic) NSUInteger numberOfTilesConsidered;
@property (readonly) NSProgress *progress;
@property (readonly, nonatomic) GEOMapDataSubscription *subscription; // ivar: _subscription
@property (readonly, nonatomic) NSUInteger successfulTiles;
@property (readonly) Class superclass;


// -(id)initWithSubscription:(id)arg0 diskCache:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 reason:(unsigned char)arg4 requestOptions:(NSUInteger)arg5 manifestManager:(id)arg6 log:(id)arg7 logPrefix:(id)arg8 tileRequesterCreationBlock:(id)arg9 tileDownloader:(unk)arg10  ;
-(void)_finishWithError:(id)arg0 ;
-(void)batchTileRequester:(id)arg0 failedToLoadKey:(struct _GEOTileKey )arg1 error:(id)arg2 ;
// -(void)batchTileRequester:(id)arg0 receivedData:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unk)arg3 etag:(unsigned int)arg4 forKey:(struct ? )arg5 userInfo:(id)arg6  ;
-(void)batchTileRequesterDidFinish:(id)arg0 ;
-(void)cancel;
-(void)pause;
-(void)resume;


@end


#endif