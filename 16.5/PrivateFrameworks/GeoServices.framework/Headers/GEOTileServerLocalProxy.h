// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTILESERVERLOCALPROXY_H
#define GEOTILESERVERLOCALPROXY_H

@class NSString, NSMapTable, NSMutableArray;
@protocol GEOProactiveTileDownloaderDelegate, GEOResourceManifestTileGroupObserver, GEOTileDBDelegate, OS_dispatch_queue;


#import "GEOTileServerProxy.h"
#import "GEOProactiveTileDownloader.h"
#import "GEOTileDB.h"

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOProactiveTileDownloaderDelegate, GEOResourceManifestTileGroupObserver, GEOTileDBDelegate>

 {
    NSString *_cacheLocation;
    NSMapTable *_providers;
    NSMutableArray *_inProgress;
    os_unfair_lock_s _inProgressLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOProactiveTileDownloader *_proactiveTileDownloader;
    BOOL _updatingManifestForProactiveTileDownload;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOTileDB *tileCache; // ivar: _tileCache


+(void)enableCDSObserversIfNecessary;
-(NSUInteger)calculateFreeableSizeSync;
-(NSUInteger)shrinkDiskCacheToSizeSync:(NSUInteger)arg0 ;
-(id)initWithCacheLocation:(id)arg0 manifestConfiguration:(id)arg1 locale:(id)arg2 delegateQueue:(id)arg3 delegate:(id)arg4 ;
// -(id)userInfoForRequesterUserInfo:(id)arg0 tileEdition:(unsigned int)arg1 tileSet:(unk)arg2 eTag:(unsigned int)arg3 bundleIdentifier:(struct ? )arg4 reason:(id)arg5  ;
-(void)_deleteLocationSensitiveInformation:(id)arg0 ;
-(void)_didAddSubscription:(id)arg0 ;
-(void)_forceDataSaverPreload:(id)arg0 ;
-(void)_initiateDataSaverPreloadIfPossible;
-(void)_registerBuiltInProviders;
-(void)_updateExpiringTilesets;
-(void)beginPreloadSessionOfSize:(NSUInteger)arg0 ;
-(void)calculateFreeableSize;
-(void)cancel:(struct _GEOTileKey *)arg0 batchID:(int)arg1 ;
-(void)close;
-(void)dealloc;
-(void)endPreloadSession;
-(void)flushPendingWrites;
-(void)generateRequestedFromTileLoaderBeginSignpost:(NSUInteger)arg0 tileKey:(struct _GEOTileKey *)arg1 options:(NSUInteger)arg2 ;
-(void)generateRequestedFromTileLoaderEndSignpost:(NSUInteger)arg0 ;
-(void)loadTiles:(id)arg0 batchID:(int)arg1 priorities:(*unsigned int)arg2 hasAdditionalInfos:(*BOOL)arg3 additionalInfos:(struct GEOTileLoaderAdditionalInfo *)arg4 signpostIDs:(*NSUInteger)arg5 createTimes:(*CGFloat)arg6 reason:(unsigned char)arg7 options:(NSUInteger)arg8 client:(id)arg9 ;
-(void)open;
-(void)proactiveTileDownloaderDidFinish:(id)arg0 ;
-(void)registerProvider:(Class)arg0 ;
-(void)reportCorruptTile:(struct _GEOTileKey *)arg0 ;
-(void)reprioritizeKey:(struct _GEOTileKey *)arg0 newPriority:(unsigned int)arg1 batchID:(int)arg2 ;
-(void)resourceManifestManager:(id)arg0 didChangeActiveTileGroup:(id)arg1 fromOldTileGroup:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;
-(void)shrinkDiskCacheToSize:(NSUInteger)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)tileDBDidDeleteExternalResource:(id)arg0 ;
// -(void)tileRequester:(id)arg0 receivedData:(id)arg1 tileEdition:(unsigned int)arg2 tileSetDB:(unk)arg3 tileSet:(unsigned int)arg4 etag:(struct ? )arg5 forKey:(id)arg6 userInfo:(id)arg7  ;
-(void)tileRequester:(id)arg0 receivedError:(id)arg1 forKey:(struct _GEOTileKey )arg2 ;
-(void)tileRequesterFinished:(id)arg0 ;


@end


#endif