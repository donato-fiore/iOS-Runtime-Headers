// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILELOADER_H
#define GEOTILELOADER_H

@class geo_isolater, NSMutableSet, NSMutableArray, NSMapTable, NSString;
@protocol GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver, OS_dispatch_queue, GEOTileLoaderInternalDelegate;

#import <Foundation/Foundation.h>

#import "GEOTileServerProxy.h"
#import "GEOTileLoaderConfiguration.h"
#import "GEOTileLoaderInternal.h"

@interface GEOTileLoader : NSObject <GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>

 {
    geo_isolater *_isolater;
    NSObject<OS_dispatch_queue> *_loadQ;
    NSMutableSet *_openers;
    geo_isolater *_openersIsolater;
    GEOTileServerProxy *_proxy;
    NSMutableArray *_tileDecoders;
    geo_isolater *_tileDecodersIsolater;
    id<GEOTileLoaderInternalDelegate> *_internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    int _rollingBatchId;
    NSUInteger _stateCaptureHandle;
    BOOL _coalesceTimerEnabled;
    GEOTileLoaderInternal *_internal;
    NSMapTable *_observers;
    geo_isolater *_observersIsolater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int diskHits;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<GEOTileLoaderInternalDelegate> *internalDelegate;
@property (readonly, nonatomic) int memoryHits;
@property (readonly, nonatomic) int networkHits;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)diskCacheLocation;
+(id)modernLoader;
+(id)modernLoaderForResourceManifestConfiguration:(id)arg0 locale:(id)arg1 ;
+(id)modernLoaderForTileGroupIdentifier:(unsigned int)arg0 locale:(id)arg1 ;
+(void)setDiskCacheLocation:(id)arg0 ;
+(void)setMemoryCacheCountLimit:(NSUInteger)arg0 ;
+(void)setMemoryCacheTotalCostLimit:(NSUInteger)arg0 ;
+(void)setServerProxyClass:(Class)arg0 ;
+(void)useLocalLoader;
+(void)useRemoteLoader;
-(BOOL)reprioritizeKey:(struct _GEOTileKey *)arg0 forClient:(id)arg1 newPriority:(unsigned int)arg2 ;
-(NSUInteger)calculateFreeableSizeSync;
-(NSUInteger)shrinkDiskCacheToSizeSync:(NSUInteger)arg0 ;
-(id)cachedTileForKey:(struct _GEOTileKey *)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_decodePreliminaryTileData:(id)arg0 forKey:(struct _GEOTileKey *)arg1 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_scheduleCoalesceTimer;
-(void)_tileEditionChanged:(id)arg0 ;
-(void)beginPreloadSessionOfSize:(NSUInteger)arg0 forClient:(id)arg1 ;
-(void)calculateFreeableSizeWithCallbackQ:(id)arg0 finished:(id)arg1 ;
-(void)cancelAllForClient:(id)arg0 ;
-(void)cancelAllForClientSynchronous:(id)arg0 ;
-(void)cancelKey:(struct _GEOTileKey *)arg0 forClient:(id)arg1 ;
-(void)clearAllCaches;
-(void)clearCachedTilesMatchingBlock:(id)arg0 ;
-(void)closeForClient:(id)arg0 ;
-(void)dealloc;
-(void)endPreloadSessionForClient:(id)arg0 ;
-(void)experimentConfigurationDidChange:(id)arg0 ;
-(void)expireTilesWithPredicate:(id)arg0 ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 additionalInfo:(struct GEOTileLoaderAdditionalInfo *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(NSUInteger)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(id)arg7 callback:(unk)arg8  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 additionalInfo:(struct GEOTileLoaderAdditionalInfo *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(NSUInteger)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 callbackQ:(id)arg7 beginNetwork:(id)arg8 callback:(unk)arg9  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 additionalInfo:(struct GEOTileLoaderAdditionalInfo *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(NSUInteger)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(NSUInteger)arg7 auditToken:(id)arg8 callbackQ:(id)arg9 beginNetwork:(id)arg10 callback:(unk)arg11  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 additionalInfo:(struct GEOTileLoaderAdditionalInfo *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(NSUInteger)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(NSUInteger)arg7 auditToken:(id)arg8 createTime:(CGFloat)arg9 callbackQ:(id)arg10 beginNetwork:(id)arg11 callback:(unk)arg12  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 additionalInfo:(struct GEOTileLoaderAdditionalInfo *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(NSUInteger)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(NSUInteger)arg7 callbackQ:(id)arg8 beginNetwork:(id)arg9 callback:(unk)arg10  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 additionalInfo:(struct GEOTileLoaderAdditionalInfo *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(NSUInteger)arg4 reason:(unsigned char)arg5 signpostID:(NSUInteger)arg6 callbackQ:(id)arg7 beginNetwork:(id)arg8 callback:(unk)arg9  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 additionalInfo:(struct GEOTileLoaderAdditionalInfo *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(NSUInteger)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(NSUInteger)arg8 createTime:(CGFloat)arg9 callbackQ:(id)arg10 beginNetwork:(id)arg11 callback:(unk)arg12  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 priority:(unsigned int)arg1 forClient:(id)arg2 options:(NSUInteger)arg3 reason:(unsigned char)arg4 auditToken:(id)arg5 callbackQ:(id)arg6 beginNetwork:(id)arg7 callback:(unk)arg8  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 priority:(unsigned int)arg1 forClient:(id)arg2 options:(NSUInteger)arg3 reason:(unsigned char)arg4 callbackQ:(id)arg5 beginNetwork:(id)arg6 callback:(unk)arg7  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 priority:(unsigned int)arg1 forClient:(id)arg2 options:(NSUInteger)arg3 reason:(unsigned char)arg4 qos:(unsigned int)arg5 callbackQ:(id)arg6 beginNetwork:(id)arg7 callback:(unk)arg8  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 priority:(unsigned int)arg1 forClient:(id)arg2 options:(NSUInteger)arg3 reason:(unsigned char)arg4 qos:(unsigned int)arg5 signpostID:(NSUInteger)arg6 auditToken:(id)arg7 callbackQ:(id)arg8 beginNetwork:(id)arg9 callback:(unk)arg10  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 priority:(unsigned int)arg1 forClient:(id)arg2 options:(NSUInteger)arg3 reason:(unsigned char)arg4 qos:(unsigned int)arg5 signpostID:(NSUInteger)arg6 auditToken:(id)arg7 createTime:(CGFloat)arg8 callbackQ:(id)arg9 beginNetwork:(id)arg10 callback:(unk)arg11  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 priority:(unsigned int)arg1 forClient:(id)arg2 options:(NSUInteger)arg3 reason:(unsigned char)arg4 qos:(unsigned int)arg5 signpostID:(NSUInteger)arg6 callbackQ:(id)arg7 beginNetwork:(id)arg8 callback:(unk)arg9  ;
// -(void)loadKey:(struct _GEOTileKey *)arg0 priority:(unsigned int)arg1 forClient:(id)arg2 options:(NSUInteger)arg3 reason:(unsigned char)arg4 qos:(unsigned int)arg5 signpostID:(NSUInteger)arg6 createTime:(CGFloat)arg7 callbackQ:(id)arg8 beginNetwork:(id)arg9 callback:(unk)arg10  ;
-(void)openForClient:(id)arg0 ;
-(void)proxy:(id)arg0 canShrinkDiskCacheByAmount:(NSUInteger)arg1 ;
-(void)proxy:(id)arg0 failedToLoadAllPendingTilesWithError:(id)arg1 ;
-(void)proxy:(id)arg0 failedToLoadTiles:(id)arg1 error:(id)arg2 ;
-(void)proxy:(id)arg0 loadedTile:(id)arg1 forKey:(struct _GEOTileKey *)arg2 info:(id)arg3 ;
-(void)proxy:(id)arg0 willGoToNetworkForTiles:(id)arg1 ;
-(void)proxyDidDeleteExternalTileData:(id)arg0 ;
-(void)proxyDidDownloadRegionalResources:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)registerTileDecoder:(id)arg0 ;
-(void)registerTileLoader:(Class)arg0 ;
-(void)reportCorruptTile:(struct _GEOTileKey *)arg0 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;
-(void)shrinkDiskCacheToSize:(NSUInteger)arg0 callbackQ:(id)arg1 finished:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif