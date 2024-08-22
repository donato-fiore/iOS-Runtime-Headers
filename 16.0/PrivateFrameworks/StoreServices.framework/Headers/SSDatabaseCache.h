// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDATABASECACHE_H
#define SSDATABASECACHE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSPersistentCache.h"
#import "SSSQLiteDatabase.h"

@interface SSDatabaseCache : NSObject {
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSPersistentCache *_persistentCache;
    SSSQLiteDatabase *_database;
    Class _cacheEntryClass;
}


@property (nonatomic) NSUInteger maximumInlineBlobSize; // ivar: _maximumInlineBlobSize


-(BOOL)_setupDatabase;
-(id)cacheEntryForLookupKey:(id)arg0 ;
-(id)cacheEntryProperties:(id)arg0 forLookupKeys:(id)arg1 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 cacheName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 cacheName:(id)arg1 database:(id)arg2 cacheEntryClass:(Class)arg3 ;
-(id)setData:(id)arg0 expiring:(CGFloat)arg1 retiring:(CGFloat)arg2 lookupKey:(id)arg3 userInfo:(id)arg4 ;
-(id)statistics;
-(int)clearRetiredData;
-(void)clear;
-(void)clearCacheForLookupKey:(id)arg0 ;
-(void)dealloc;


@end


#endif