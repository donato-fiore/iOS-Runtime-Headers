// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCACHE_H
#define GKCACHE_H

@class NSString, NSMutableDictionary;
@protocol GKCache;

#import <Foundation/Foundation.h>

#import "GKLinkedList.h"

@interface GKCache : NSObject <GKCache>



@property (retain, nonatomic) GKLinkedList *cacheList; // ivar: _cacheList
@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (readonly) Class superclass;


-(id)initWithMaxCount:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif