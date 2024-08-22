// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILEDB_H
#define GEOTILEDB_H

@class geo_isolater, NSString, NSMutableDictionary, NSURL;
@protocol GEOTileDBDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOSQLiteDB.h"
#import "_GEOTileDBWriteQueue.h"
#import "GEOCountryConfiguration.h"
#import "GEOResourceManifestManager.h"

@interface GEOTileDB : NSObject {
    GEOSQLiteDB *_db;
    _GEOTileDBWriteQueue *_writeQueue;
    NSUInteger _maxDatabaseSize;
    NSUInteger _tileDataSize;
    BOOL _tileDataSizeIsValid;
    GEOCountryConfiguration *_countryConfiguration;
    GEOResourceManifestManager *_manifestManager;
    geo_isolater *_infrequentlyChangingMetadataIsolater;
    *? _expirationRecords;
    NSUInteger _expirationRecordsCount;
    BOOL _preloading;
    NSString *_devicePostureLocale;
    NSString *_devicePostureCountry;
    NSString *_devicePostureRegion;
    NSMutableDictionary *_editionsMap;
    NSURL *_baseDirectory;
    NSURL *_externalDataDirectory;
    geo_isolater *_createdExternalDataDirectoryIsolater;
    BOOL _createdExternalDataDirectory;
    id<GEOTileDBDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CGFloat _timestampDeltaWriteThreshold;
    id *_timestampDeltaWriteThresholdConfigListener;
}


@property (readonly, nonatomic) NSString *devicePostureCountry;
@property (readonly, nonatomic) NSString *devicePostureRegion;


-(BOOL)_dataForKeyOnDBQueue:(struct _GEOTileKey *)arg0 reason:(unsigned char)arg1 callbackQueue:(id)arg2 dataHandler:(id)arg3 ;
-(BOOL)_deleteAndRecreateDB;
// -(BOOL)_isTileSetTTLExpired:(unk)arg0 age:(unsigned int)arg1  ;
-(BOOL)_markExistingTileDataAsCurrentOnDBQueue:(struct _GEOTileKey *)arg0 reason:(unsigned char)arg1 ;
-(BOOL)_setup:(id)arg0 ;
-(NSUInteger)_allTileDataSize;
-(NSUInteger)_shrinkBySize:(NSUInteger)arg0 ;
-(NSUInteger)_shrinkBySizeSlow:(NSUInteger)arg0 ;
-(NSUInteger)_shrinkToSize:(NSUInteger)arg0 ;
-(NSUInteger)calculateFreeableSizeSync;
-(NSUInteger)shrinkBySizeSync:(NSUInteger)arg0 ;
-(NSUInteger)shrinkToSizeSync:(NSUInteger)arg0 ;
-(id)_setupDB:(id)arg0 ;
-(id)init;
-(id)initWithBaseDirectory:(id)arg0 ;
-(id)initWithBaseDirectory:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)initWithBaseDirectory:(id)arg0 manifestManager:(id)arg1 countryConfiguration:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 maximumDatabaseSize:(NSUInteger)arg5 ;
// -(void)_addDataOnDBQueueWithData:(id)arg0 key:(struct _GEOTileKey *)arg1 tileSet:(unk)arg2 ETag:(unsigned int)arg3 reason:(struct ? )arg4 externalResourceUUID:(id)arg5  ;
-(void)_cleanUpOrphanedExternalResources;
-(void)_countryChanged:(id)arg0 ;
-(void)_decrementCalculatedTileDataSize:(NSUInteger)arg0 ;
-(void)_deleteDataOnDBQueueForKey:(struct _GEOTileKey *)arg0 ;
// -(void)_deleteTileSet:(unk)arg0  ;
-(void)_deviceLocked:(id)arg0 ;
-(void)_editionUpdate:(id)arg0 ;
// -(void)_enumerateAllKeysOnQueueIncludingData:(BOOL)arg0 dataHandler:(id)arg1 callbackQueue:(unk)arg2  ;
-(void)_evictIfNecessary;
-(void)_evictVeryOldTiles;
-(void)_flushPendingWrites;
-(void)_incrementCalculatedTileDataSize:(NSUInteger)arg0 ;
-(void)_invalidateAllTileData;
// -(void)_invalidateTileSet:(unk)arg0  ;
-(void)_invalidateTileSetsForNewDevicePostureCountry:(id)arg0 newDevicePostureRegion:(id)arg1 oldDevicePostureCountry:(id)arg2 oldDevicePostureRegion:(id)arg3 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_performInTransaction:(id)arg0 ;
-(void)_performOnDBQueue:(id)arg0 ;
// -(void)_setEdition:(unsigned int)arg0 forTileSet:(unk)arg1  ;
-(void)_setLastAccessTimeOnDBQueue:(CGFloat)arg0 forKey:(struct _GEOTileKey *)arg1 ;
// -(void)_trackFailureOnDBQueueWithKey:(struct _GEOTileKey *)arg0 tileSet:(unk)arg1 shouldProactivelyLoad:(unsigned int)arg2  ;
-(void)_updateDevicePosture;
// -(void)addData:(id)arg0 forKey:(struct _GEOTileKey *)arg1 edition:(unsigned int)arg2 set:(unk)arg3 provider:(unsigned int)arg4 etag:(struct ? )arg5 reason:(unsigned int)arg6  ;
// -(void)addData:(id)arg0 forKey:(struct _GEOTileKey *)arg1 edition:(unsigned int)arg2 set:(unk)arg3 provider:(unsigned int)arg4 etag:(struct ? )arg5 reason:(unsigned int)arg6 isIdenticalToExistingStaleData:(id)arg7  ;
-(void)beginPreloadSessionOfSize:(NSUInteger)arg0 ;
-(void)calculateFreeableSizeWithQueue:(id)arg0 handler:(id)arg1 ;
-(void)dataForKeys:(id)arg0 reason:(unsigned char)arg1 group:(id)arg2 callbackQueue:(id)arg3 dataHandler:(id)arg4 ;
-(void)dealloc;
-(void)deleteDataForKey:(struct _GEOTileKey *)arg0 ;
-(void)deleteDataForTilesets:(id)arg0 ;
-(void)endPreloadSession;
-(void)enumerateAllKeysIncludingData:(BOOL)arg0 onQueue:(id)arg1 group:(id)arg2 dataHandler:(id)arg3 ;
-(void)evaluateDevicePostureAgainstCurrentManifest:(id)arg0 ;
-(void)evictVeryOldTilesWithGroup:(id)arg0 ;
-(void)flushPendingWritesWithGroup:(id)arg0 ;
-(void)getFailedTileKeysForProactiveLoadSince:(CGFloat)arg0 maxCount:(NSUInteger)arg1 queue:(id)arg2 callback:(id)arg3 ;
-(void)getLastAccessTimestampForKey:(struct _GEOTileKey *)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;
-(void)getStaleTileKeysUsedSince:(CGFloat)arg0 fromTileSets:(id)arg1 maxCount:(NSUInteger)arg2 maxTotalSize:(NSUInteger)arg3 queue:(id)arg4 callback:(id)arg5 ;
-(void)setExpirationRecords:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)shrinkBySize:(NSUInteger)arg0 queue:(id)arg1 callback:(id)arg2 ;
-(void)shrinkToSize:(NSUInteger)arg0 queue:(id)arg1 finished:(id)arg2 ;
-(void)tearDown;
// -(void)trackFailureForKey:(struct _GEOTileKey *)arg0 tileSet:(unk)arg1 shouldProactivelyLoad:(unsigned int)arg2  ;


@end


#endif