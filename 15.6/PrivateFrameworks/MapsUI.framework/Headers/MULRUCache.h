// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MULRUCACHE_H
#define MULRUCACHE_H

@class NSMutableArray, NSArray;
@protocol MULRUCacheDelegate;

#import <Foundation/Foundation.h>


@interface MULRUCache : NSObject {
    NSMutableArray *_keys;
    NSMutableArray *_values;
}


@property (readonly, nonatomic) NSUInteger count;
@property (weak, nonatomic) NSObject<MULRUCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger maxSize; // ivar: _maxSize
@property (readonly, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) NSArray *orderedValues;


-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif