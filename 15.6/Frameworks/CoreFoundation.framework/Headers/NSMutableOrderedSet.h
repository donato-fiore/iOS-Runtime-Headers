// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMUTABLEORDEREDSET_H
#define NSMUTABLEORDEREDSET_H



#import "NSOrderedSet.h"

@interface NSMutableOrderedSet : NSOrderedSet



+(id)orderedSetWithCapacity:(NSUInteger)arg0 ;
-(Class)classForCoder;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)sortedArrayFromRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(void)_mutate;
-(void)addObject:(id)arg0 ;
-(void)addObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)addObjectsFromOrderedSet:(id)arg0 ;
-(void)addObjectsFromOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)addObjectsFromSet:(id)arg0 ;
-(void)exchangeObjectAtIndex:(NSUInteger)arg0 withObjectAtIndex:(NSUInteger)arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(*id)arg0 count:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertObjectsFromArray:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjectsFromArray:(id)arg0 range:(struct _NSRange )arg1 atIndex:(NSUInteger)arg2 ;
-(void)insertObjectsFromOrderedSet:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjectsFromOrderedSet:(id)arg0 range:(struct _NSRange )arg1 atIndex:(NSUInteger)arg2 ;
-(void)insertObjectsFromSet:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)intersectOrderedSet:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusOrderedSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)moveObjectsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeFirstObject;
-(void)removeLastObject;
-(void)removeObject:(id)arg0 ;
-(void)removeObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)removeObjectsInOrderedSet:(id)arg0 ;
-(void)removeObjectsInOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 inArray:(id)arg1 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 inArray:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 inOrderedSet:(id)arg1 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 inOrderedSet:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 inSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg0 ;
-(void)removeObjectsPassingTest:(id)arg0 ;
-(void)removeObjectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(void)replaceObject:(id)arg0 ;
-(void)replaceObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg0 withObjects:(id)arg1 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjects:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjectsFromArray:(id)arg1 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjectsFromArray:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjectsFromOrderedSet:(id)arg1 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjectsFromSet:(id)arg1 ;
-(void)setArray:(id)arg0 ;
-(void)setObject:(id)arg0 ;
-(void)setObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setOrderedSet:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)sortRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(void)sortUsingComparator:(id)arg0 ;
-(void)sortWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(void)unionOrderedSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif