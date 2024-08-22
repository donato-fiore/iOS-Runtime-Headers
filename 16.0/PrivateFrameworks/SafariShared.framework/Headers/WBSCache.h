// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCACHE_H
#define WBSCACHE_H

@class NSCache, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSCache : NSObject {
    NSCache *_cache;
    NSMapTable *_weakObjectsTable;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}




-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_recacheObjectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif