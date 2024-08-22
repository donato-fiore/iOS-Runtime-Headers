// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTHREADSAFECACHE_H
#define GKTHREADSAFECACHE_H

@class NSString, NSMutableDictionary;
@protocol GKCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKLinkedList.h"

@interface GKThreadsafeCache : NSObject <GKCache>



@property (retain, nonatomic) GKLinkedList *cacheList; // ivar: _cacheList
@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (retain, nonatomic) NSMutableDictionary *missingEntryQueues; // ivar: _missingEntryQueues
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


-(id)initWithName:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)internalObjectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 withMissingHandler:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)dealloc;
-(void)internalSetObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif