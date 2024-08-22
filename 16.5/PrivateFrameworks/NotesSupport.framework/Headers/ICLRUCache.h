// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLRUCACHE_H
#define ICLRUCACHE_H

@class NSMapTable, NSMutableArray, NSArray;
@protocol ICLRUCacheDelegate;

#import <Foundation/Foundation.h>


@interface ICLRUCache : NSObject {
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
}


@property (readonly, nonatomic) NSArray *allKeys;
@property (weak, nonatomic) NSObject<ICLRUCacheDelegate> *delegate; // ivar: _delegate
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