// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIFOCACHE_H
#define FIFOCACHE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface FIFOCache : NSObject {
    NSMutableDictionary *m_cache;
    NSMutableArray *m_FIFO;
    int m_capacity;
}




+(void)noteApplicationDidReceiveMemoryWarning;
-(NSInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCapacity:(int)arg0 ;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)addObjectsFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif