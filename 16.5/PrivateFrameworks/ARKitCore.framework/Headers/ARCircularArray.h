// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCIRCULARARRAY_H
#define ARCIRCULARARRAY_H

@class NSMutableOrderedSet, NSArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface ARCircularArray : NSObject <NSFastEnumeration>

 {
    NSInteger _capacity;
    NSMutableOrderedSet *_objects;
}


@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) id *firstObject;
@property (readonly, nonatomic) id *lastObject;


-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 inSortedRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingComparator:(id)arg3 ;
-(id)addObject:(id)arg0 ;
-(id)initWithCapacity:(NSInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;


@end


#endif