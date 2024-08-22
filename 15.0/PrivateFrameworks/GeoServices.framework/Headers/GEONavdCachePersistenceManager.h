// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVDCACHEPERSISTENCEMANAGER_H
#define GEONAVDCACHEPERSISTENCEMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEONavdCacheDBWriter.h"
#import "GEONavdCacheDBReader.h"

@interface GEONavdCachePersistenceManager : NSObject {
    GEONavdCacheDBWriter *_writer;
    GEONavdCacheDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
}




-(CGFloat)_nextTimeStampForRefreshTimer;
-(NSInteger)_dumpToDiskWithKey:(id)arg0 value:(id)arg1 ;
-(NSInteger)_numberOfEntries;
-(NSInteger)_rowIdOfKey:(id)arg0 ;
-(NSInteger)_threadUnsafeRowIdOfKey:(id)arg0 ;
-(id)_entryWithRowId:(NSInteger)arg0 ;
-(id)_readValueWithKey:(id)arg0 ;
-(id)_rowIdsOfEntriesBeforeTimeStamp:(CGFloat)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_deleteFromDiskWithKey:(id)arg0 ;
-(void)_deleteRowWithRowId:(NSInteger)arg0 ;
-(void)_enumerateAllEntriesWithHandler:(id)arg0 ;
-(void)_enumerateAllForCacheEntriesWithHandler:(id)arg0 ;
-(void)_removeAllEntries;
-(void)_removeOldFormatCacheFromPath:(id)arg0 ;
-(void)tearDown;


@end


#endif