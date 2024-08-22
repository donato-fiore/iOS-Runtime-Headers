// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVDCACHEDBREADER_H
#define GEONAVDCACHEDBREADER_H



#import "GEODBReader.h"

@interface GEONavdCacheDBReader : GEODBReader {
    *sqlite3_stmt _sqlReadAllEntries;
    *sqlite3_stmt _sqlReadEntriesForHash;
    *sqlite3_stmt _sqlReadKeysForHash;
    *sqlite3_stmt _sqlReadNextTimerTimeStamp;
    *sqlite3_stmt _sqlReadEntriesBeforeTimeStamp;
    *sqlite3_stmt _sqlReadRowIdsOfEntriesBeforeTimeStamp;
    *sqlite3_stmt _sqlReadEntryWithRowId;
    *sqlite3_stmt _sqlCountEntries;
}




-(NSInteger)_numberOfEntries;
-(void)_allCacheEntriesWithHandler:(id)arg0 ;
-(void)_cacheEntriesBeforeTimeStamp:(CGFloat)arg0 withHandler:(id)arg1 ;
-(void)_cacheEntriesForHash:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(void)_cacheEntryForNextRefreshWithHandler:(id)arg0 ;
-(void)_cacheEntryWithRowId:(NSInteger)arg0 handler:(id)arg1 ;
-(void)_cacheKeysForHash:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(void)_cacheRowIdsOfEntriesBeforeTimeStamp:(CGFloat)arg0 withHandler:(id)arg1 ;
-(void)_closeDB;
-(void)_openDB;
-(void)_openDBIfNotAlreadyOpen;
-(void)dealloc;


@end


#endif