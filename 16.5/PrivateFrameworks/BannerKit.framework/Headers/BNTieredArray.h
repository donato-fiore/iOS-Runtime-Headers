// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNTIEREDARRAY_H
#define BNTIEREDARRAY_H

@class NSMutableArray, NSArray;
@protocol NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface BNTieredArray : NSObject <NSCopying, NSFastEnumeration>

 {
    NSMutableArray *_collections;
    NSArray *_allObjects;
}


@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger tierCount;
@property (readonly, nonatomic) id *topObject;
@property (readonly, nonatomic) NSArray *topObjectFromEachTier;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForObject:(id)arg0 ;
-(id)objectAtIndexPath:(id)arg0 ;
-(id)tierAtIndex:(NSUInteger)arg0 ;
-(id)topObjectInTier:(NSInteger)arg0 ;
-(void)_invalidateAllObjectsCache;
-(void)addObject:(id)arg0 incrementingTier:(BOOL)arg1 ;
-(void)insertObject:(id)arg0 beneathObject:(id)arg1 ;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndexPath:(id)arg0 ;


@end


#endif