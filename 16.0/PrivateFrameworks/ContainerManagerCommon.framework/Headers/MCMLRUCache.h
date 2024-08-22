// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMLRUCACHE_H
#define MCMLRUCACHE_H

@class NSString, NSMutableOrderedSet, NSMutableDictionary;
@protocol MCMCache;

#import <Foundation/Foundation.h>


@interface MCMLRUCache : NSObject <MCMCache>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (readonly, nonatomic) NSMutableOrderedSet *mruItems; // ivar: _mruItems
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSMutableDictionary *storage; // ivar: _storage
@property (readonly) Class superclass;


-(id)init;
-(id)initWithName:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif