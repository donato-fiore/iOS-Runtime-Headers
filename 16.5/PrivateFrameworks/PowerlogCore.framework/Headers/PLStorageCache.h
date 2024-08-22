// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSTORAGECACHE_H
#define PLSTORAGECACHE_H

@class NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface PLStorageCache : NSObject

@property (retain) NSMutableDictionary *countSafetyDrop; // ivar: _countSafetyDrop
@property (retain) NSMutableDictionary *countWarnings; // ivar: _countWarnings
@property (retain, nonatomic) NSDate *lastCacheFlushDate; // ivar: _lastCacheFlushDate
@property (retain) NSMutableDictionary *lastEntryCache; // ivar: _lastEntryCache
@property NSInteger lastEntryCacheSize; // ivar: _lastEntryCacheSize
@property (retain) NSMutableDictionary *stagingAggregateEntryCache; // ivar: _stagingAggregateEntryCache
@property (retain) NSMutableDictionary *stagingEntryCache; // ivar: _stagingEntryCache
@property NSInteger stagingEntryCacheSize; // ivar: _stagingEntryCacheSize


+(id)sharedStorageCache;
+(void)syncAndDispatchForEntryCache:(id)arg0 forEntryKey:(id)arg1 withBlock:(id)arg2 ;
-(NSInteger)addToStagingEntryCache:(id)arg0 ;
-(NSInteger)entryIDForNewEntry:(id)arg0 ;
-(NSInteger)stagingEntryCacheSizeForEntryKey:(id)arg0 ;
-(id)cachedEntryForEntryKey:(id)arg0 withEntryID:(NSInteger)arg1 ;
-(id)connectionForKey:(id)arg0 ;
-(id)getEntryFromDBForEntryKey:(id)arg0 withMatchingKeyToValue:(id)arg1 ;
-(id)getQueryForAggregateEntryKey:(id)arg0 withMatchingKeyToValue:(id)arg1 ;
-(id)init;
-(id)lastEntryCacheForEntryKey:(id)arg0 ;
-(id)lastEntryCacheForEntryKey:(id)arg0 withSubEntryKey:(id)arg1 ;
-(id)matchingPairs:(id)arg0 ;
-(id)stagingEntryCacheForEntryKey:(id)arg0 ;
-(id)stagingEntryCacheForEntryKey:(id)arg0 withComparisons:(id)arg1 isSingleton:(BOOL)arg2 ;
-(id)stagingEntryCacheForEntryKey:(id)arg0 withID:(NSInteger)arg1 ;
-(id)stagingEntryCacheForEntryKey:(id)arg0 withIDLessThan:(NSInteger)arg1 ;
-(id)stagingEntryCacheIDsForEntryKey:(id)arg0 ;
-(int)limitOfType:(id)arg0 forEntryKey:(id)arg1 ;
-(void)addToLastEntryCache:(id)arg0 ;
-(void)addToLastEntryCacheSubKey:(id)arg0 ;
-(void)addToStagingAggregateEntryCache:(id)arg0 ;
-(void)clearLastEntryCacheForEntryKey:(id)arg0 ;
-(void)dumpEntryCache:(id)arg0 ;
-(void)dumpLastEntryCache;
-(void)dumpStagingEntryCache;
-(void)enumerateEntryCache:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateStagingEntryCacheForEntryKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateStagingEntryCacheWithBlock:(id)arg0 ;
-(void)flushStagingAggregateEntryCacheToDatabase;
-(void)flushStagingEntryCacheToDatabase;
-(void)insertIntoStagingEntryCache:(id)arg0 ;
-(void)lastEntryCachePruneToDate:(id)arg0 ;
-(void)logFullLastEntryCacheForEntryKey:(id)arg0 ;
-(void)logSizeOfEntryCache:(id)arg0 ;
-(void)logSizeOfLastEntryCache;
-(void)logSizeOfStagingEntryCache;
-(void)logStagingEntryCacheForEntryKey:(id)arg0 ;
-(void)setNextEntryIDForEntryKey:(id)arg0 toEntryID:(NSInteger)arg1 ;
-(void)updateStagingEntryCacheWithEntry:(id)arg0 withBlock:(id)arg1 ;


@end


#endif