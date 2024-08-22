// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVDCACHEPERSISTENCEMANAGER_H
#define GEONAVDCACHEPERSISTENCEMANAGER_H


#import <Foundation/Foundation.h>

#import "GEOSQLiteDB.h"

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}




-(CGFloat)nextTimeStampForRefreshTimer;
-(NSInteger)dumpToDiskWithKey:(id)arg0 value:(id)arg1 ;
-(NSInteger)numberOfEntries;
-(id)entryWithRowId:(NSInteger)arg0 ;
-(id)init;
-(id)readValueWithKey:(id)arg0 ;
-(void)deleteFromDiskWithKey:(id)arg0 ;
-(void)enumerateAllEntriesWithHandler:(id)arg0 ;
-(void)enumerateAllForCacheEntriesWithHandler:(id)arg0 ;
-(void)removeAllEntries;
-(void)tearDown;


@end


#endif