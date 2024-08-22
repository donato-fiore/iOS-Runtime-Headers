// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCLRUCACHE_H
#define DCLRUCACHE_H

@class NSMapTable, NSMutableArray, NSArray;
@protocol DCLRUCacheDelegate;

#import <Foundation/Foundation.h>


@interface DCLRUCache : NSObject {
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
}


@property (readonly, nonatomic) NSArray *allKeys;
@property (weak, nonatomic) NSObject<DCLRUCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger maxSize; // ivar: mMax


+(id)cacheCollection;
+(void)purgeAllCaches;
-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)p_removeOldestObject;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif