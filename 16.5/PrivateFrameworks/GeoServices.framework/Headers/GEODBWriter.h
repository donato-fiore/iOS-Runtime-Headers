// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODBWRITER_H
#define GEODBWRITER_H

@class NSDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestManager.h"
#import "GEOCountryConfiguration.h"

@interface GEODBWriter : NSObject {
    NSDictionary *_pragmaOverrides;
    *sqlite3 _db;
    *sqlite3_stmt _versionQuery;
    *sqlite3_stmt _versionInsert;
    *sqlite3_stmt _editionQuery;
    *sqlite3_stmt _editionDelete;
    *sqlite3_stmt _editionInvalidate;
    *sqlite3_stmt _editionUpdate;
    *sqlite3_stmt _editionInvalidateAll;
    *sqlite3_stmt _tileInsert;
    *sqlite3_stmt _tileDelete;
    *sqlite3_stmt _tileSize;
    *sqlite3_stmt _sizeQuery;
    NSInteger _lastRowID;
    BOOL _closed;
    BOOL _defunct;
    NSMutableArray *_writeList;
    NSMutableSet *_uncommitedWriteSet;
    NSUInteger _pendingWriteBytes;
    os_unfair_lock_s _writeListLock;
    NSObject<OS_dispatch_queue> *_writeQueue;
    *void _editionMap;
    NSInteger _evictionRowsThreshold;
    *? _expirationRecords;
    NSUInteger _expirationRecordCount;
    BOOL _preloading;
    CGFloat _lastCheckedGeneralExpiration;
    NSUInteger _tileCacheMinimumWriteCount;
    NSUInteger _tileCacheMinimumWriteBytes;
    NSUInteger _tileCacheMaximumWriteCount;
    NSUInteger _tileCacheMaximumWriteBytes;
    BOOL _canCreateDebugTable;
    GEOResourceManifestManager *_manifestManager;
    GEOCountryConfiguration *_countryConfiguration;
}


@property BOOL closed;
@property (readonly, nonatomic) NSUInteger databaseSize; // ivar: _databaseSize
@property (readonly, nonatomic) NSString *devicePostureCountry; // ivar: _devicePostureCountry
@property (readonly, nonatomic) NSString *devicePostureRegion; // ivar: _devicePostureRegion
@property (nonatomic) NSUInteger maxDatabaseSize; // ivar: _maxDatabaseSize
@property (readonly, nonatomic) NSString *path; // ivar: _path


-(?)prepareSingleStatementforSql;
-(BOOL)_readEditions;
-(BOOL)_tileSetExpires:(unsigned int)arg0 ;
-(NSUInteger)_dbFileSize;
-(NSUInteger)_freeableDiskSpace;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 pragmaOverrides:(id)arg1 ;
-(id)initWithPath:(id)arg0 pragmaOverrides:(id)arg1 manifestManager:(id)arg2 countryConfiguration:(id)arg3 ;
-(id)pendingWriteForKey:(struct _GEOTileKey *)arg0 ;
-(void)_assertDatabaseSize;
-(void)_closeDB;
-(void)_countryChanged:(id)arg0 ;
-(void)_createTables;
-(void)_deleteKey:(struct _GEOTileKey )arg0 ;
-(void)_deviceLocked;
-(void)_dropWritesOnFloor:(id)arg0 ;
-(void)_evict;
-(void)_finalizeStatements;
-(void)_localeChanged:(id)arg0 ;
-(void)_openDBAndPurgeContents;
-(void)_openDBForceRecreate:(BOOL)arg0 ;
-(void)_openIfNecessary;
-(void)_performWrites:(BOOL)arg0 ;
-(void)_prepareStatements;
-(void)_printDBStatus:(char *)arg0 ;
-(void)_setCurrentDevicePostureToCountry:(id)arg0 region:(id)arg1 ;
-(void)_shrinkToUnderSize:(NSUInteger)arg0 vacuum:(BOOL)arg1 ;
-(void)_updateEdition:(unsigned int)arg0 forTileset:(unsigned int)arg1 provider:(unsigned int)arg2 invalidateOnly:(BOOL)arg3 ;
-(void)_updateSize;
-(void)_updateVersionTableWithCountryAndRegion;
-(void)_writeEntry:(id)arg0 ;
-(void)_writeVersionForCountry:(id)arg0 region:(id)arg1 ;
-(void)addData:(id)arg0 forKey:(struct _GEOTileKey *)arg1 edition:(unsigned int)arg2 set:(unsigned int)arg3 provider:(unsigned int)arg4 etag:(id)arg5 ;
-(void)beginPreloadSessionOfSize:(NSUInteger)arg0 ;
// -(void)calculateFreeableSizeWithHandler:(id)arg0 onQueue:(unk)arg1  ;
-(void)dealloc;
-(void)deleteData:(struct _GEOTileKey *)arg0 ;
-(void)endPreloadSession;
-(void)evaluateDevicePostureAgainstCurrentManifest:(id)arg0 ;
-(void)flushPendingWrites;
-(void)pendingWritesForKeys:(id)arg0 handler:(id)arg1 ;
-(void)setExpirationRecords:(struct ? *)arg0 count:(NSUInteger)arg1 ;
// -(void)shrinkBySize:(NSUInteger)arg0 callback:(id)arg1 onQueue:(unk)arg2  ;
// -(void)shrinkToSize:(NSUInteger)arg0 finished:(id)arg1 onQueue:(unk)arg2  ;
-(void)waitForPendingWrites;


@end


#endif