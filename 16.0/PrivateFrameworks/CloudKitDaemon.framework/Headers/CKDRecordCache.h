// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDRECORDCACHE_H
#define CKDRECORDCACHE_H

@class CKSQLiteTableGroup;


#import "CKDRecordCacheTable.h"

@interface CKDRecordCache : CKSQLiteTableGroup {
    CKDRecordCacheTable *_rc;
}




+(NSUInteger)ttlDays;
+(id)recordCacheForContainer:(id)arg0 ;
+(id)recordCacheInDatabase:(id)arg0 withContainer:(id)arg1 ;
+(id)recordCacheWithPath:(id)arg0 forContainer:(id)arg1 ;
-(id)createTables;
-(id)forwardingTargetForSelector:(SEL)arg0 ;


@end


#endif