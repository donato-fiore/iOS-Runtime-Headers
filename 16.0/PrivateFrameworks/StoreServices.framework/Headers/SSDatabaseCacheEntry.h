// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDATABASECACHEENTRY_H
#define SSDATABASECACHEENTRY_H



#import "SSSQLiteEntity.h"
#import "SSPersistentCache.h"

@interface SSDatabaseCacheEntry : SSSQLiteEntity {
    SSPersistentCache *_persistentCache;
}




+(NSUInteger)_fetchPersistentID:(id)arg0 inDatabase:(id)arg1 ;
+(id)allPropertyKeys;
+(id)databaseTable;
-(id)dataBlob:(*BOOL)arg0 ;
-(id)description;
-(id)initWithLookupKey:(id)arg0 inDatabase:(id)arg1 ;
-(void)dealloc;
-(void)setPersistentCache:(id)arg0 ;


@end


#endif