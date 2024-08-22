// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUCONCURRENTCACHE_H
#define TSUCONCURRENTCACHE_H



#import "TSUCache.h"
#import "TSUReadWriteQueue.h"

@interface TSUConcurrentCache : TSUCache

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue; // ivar: mReadWriteQueue


-(BOOL)hasFlushableContent;
-(NSUInteger)count;
-(id)initWithName:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 andWait:(BOOL)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)unload;


@end


#endif