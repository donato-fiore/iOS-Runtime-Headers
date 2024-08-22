// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFLRUCACHE_H
#define EFLRUCACHE_H

@class NSString, NSMutableDictionary;
@protocol EFLoggable, EFPubliclyDescribable;

#import <Foundation/Foundation.h>

#import "_EFLRUCacheNode.h"

@interface EFLRUCache : NSObject <EFLoggable, EFPubliclyDescribable>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (retain, nonatomic) _EFLRUCacheNode *firstNode; // ivar: _firstNode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _EFLRUCacheNode *lastNode; // ivar: _lastNode
@property (readonly, nonatomic) NSMutableDictionary *nodesByKey; // ivar: _nodesByKey
@property (nonatomic) NSUInteger size; // ivar: _size
@property (readonly) Class superclass;


+(id)log;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)_pruneLastObject;
-(void)_pushToTop:(id)arg0 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeAllObjects;


@end


#endif