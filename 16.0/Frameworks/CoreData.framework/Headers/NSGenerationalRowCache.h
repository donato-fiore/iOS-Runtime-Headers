// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSGENERATIONALROWCACHE_H
#define NSGENERATIONALROWCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSPersistentStore.h"
#import "NSPersistentStoreCache.h"

@interface NSGenerationalRowCache : NSObject {
    NSPersistentStore *_store;
    NSPersistentStoreCache *_primaryCache;
    NSMutableDictionary *_rowCachesByGenerationToken;
    os_unfair_lock_s _lock;
}




-(id)initWithStore:(id)arg0 ;
-(void)dealloc;


@end


#endif