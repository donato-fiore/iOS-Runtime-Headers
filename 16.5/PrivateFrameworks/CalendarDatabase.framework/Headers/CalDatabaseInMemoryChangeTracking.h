// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDATABASEINMEMORYCHANGETRACKING_H
#define CALDATABASEINMEMORYCHANGETRACKING_H


#import <Foundation/Foundation.h>


@interface CalDatabaseInMemoryChangeTracking : NSObject {
    os_unfair_lock_s _lock;
    int _nextIndex;
    int _changeCount;
    NSUInteger _lastPrunedTimestamp;
    ? _changes;
}




+(?)changeTrackingForDatabase;
+(?)pathForDatabase;
+(id)canonicalizePath:(id)arg0 ;
+(id)changeTrackingForDatabaseWithPath:(id)arg0 ;
+(void)_setInterestedDatabasePaths:(id)arg0 forContext:(id)arg1 ;
+(void)setInterestedDatabasePaths:(id)arg0 forContext:(id)arg1 ;
+(void)setInterestedDatabases:(id)arg0 forContext:(id)arg1 ;
-(?)changedEntityIDsForDatabase:(?)arg0 sinceTimestamp:(?)arg1 latestTimestampchangesAreSyncStatusOnly;
-(id)changedEntityIDsBetweenMinExternalTimestamp:(NSUInteger)arg0 minSelfTimestamp:(NSUInteger)arg1 maxExternalTimestamp:(NSUInteger)arg2 latestSelfTimestamp:(*NSUInteger)arg3 client:(int)arg4 changesAreSyncStatusOnly:(*BOOL)arg5 ;
-(id)changedEntityIDsBetweenTimestamp:(id)arg0 andTimestamp:(NSUInteger)arg1 latestTimestamp:(*id)arg2 client:(unsigned int)arg3 changesAreSyncStatusOnly:(*BOOL)arg4 ;
-(id)init;
-(void)addChangeset:(struct __CFArray *)arg0 clientID:(unsigned int)arg1 onlySyncStatusChanged:(BOOL)arg2 ;
-(void)clearAllChangesets;


@end


#endif