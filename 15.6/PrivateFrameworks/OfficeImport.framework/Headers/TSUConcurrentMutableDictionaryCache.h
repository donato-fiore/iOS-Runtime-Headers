// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUCONCURRENTMUTABLEDICTIONARYCACHE_H
#define TSUCONCURRENTMUTABLEDICTIONARYCACHE_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "OITSUReadWriteQueue.h"

@interface TSUConcurrentMutableDictionaryCache : NSObject {
    NSMutableDictionary *_cache;
    NSString *_name;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) OITSUReadWriteQueue *readWriteQueue; // ivar: _readWriteQueue


-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectsForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)p_didEnterBackground:(id)arg0 ;
-(void)p_didReceiveMemoryWarning:(id)arg0 ;
-(void)performSyncWriteWithUnderlyingDictionary:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 andWait:(BOOL)arg1 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif