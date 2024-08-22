// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCACHEDMAPTABLE_H
#define PUCACHEDMAPTABLE_H

@class NSMutableOrderedSet, NSMapTable;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUCachedMapTable : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableOrderedSet *_cachedObjects; // ivar: __cachedObjects
@property (readonly, nonatomic) NSMapTable *_mapTable; // ivar: __mapTable
@property (readonly, nonatomic) NSUInteger accurateCount;
@property (nonatomic) NSUInteger cacheCountLimit; // ivar: _cacheCountLimit


-(NSUInteger)_initialCapacity;
-(id)_cachedObjectsCreateIfNeeded:(BOOL)arg0 ;
-(id)_mapTableCreateIfNeeded:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)_objectWasRecentlyUsed:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif