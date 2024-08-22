// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPMUTABLECONTACTDISKCACHE_H
#define PPMUTABLECONTACTDISKCACHE_H



#import "PPContactDiskCache.h"

@interface PPMutableContactDiskCache : PPContactDiskCache



-(BOOL)_writeCache:(id)arg0 path:(id)arg1 error:(*id)arg2 ;
-(BOOL)addNameRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteCacheIfTooOld;
-(BOOL)deleteNameRecordCache;
-(BOOL)updateNameRecordCacheWithHistoryRecords:(id)arg0 error:(*id)arg1 ;
-(NSInteger)lastCreatedAt;
-(id)_createNewCacheObjectWithCreatedAt:(NSInteger)arg0 ;
-(id)_recordSetBucketsForNameRecords:(id)arg0 ;
-(void)setLastCreatedAt:(NSInteger)arg0 ;


@end


#endif