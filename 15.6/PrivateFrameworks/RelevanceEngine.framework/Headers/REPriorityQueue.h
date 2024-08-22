// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REPRIORITYQUEUE_H
#define REPRIORITYQUEUE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface REPriorityQueue : NSObject <NSCopying>

 {
    *__CFBinaryHeap _binaryHeap;
}


@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) id *minimumObject;


-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithComparator:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjects:(id)arg0 ;
-(void)insertObject:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeMinimumObject;


@end


#endif