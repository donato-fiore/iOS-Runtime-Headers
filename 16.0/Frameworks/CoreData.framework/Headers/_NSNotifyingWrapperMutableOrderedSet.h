// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSNOTIFYINGWRAPPERMUTABLEORDEREDSET_H
#define _NSNOTIFYINGWRAPPERMUTABLEORDEREDSET_H

@class NSMutableOrderedSet, NSString;


#import "NSManagedObject.h"

@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {
    NSManagedObject *_container;
    NSString *_key;
    NSMutableOrderedSet *_mutableOrderedSet;
}




+(Class)classForKeyedUnarchiver;
-(BOOL)_reorderObjectsToLocationsByOrderKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)intersectsOrderedSet:(id)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqualToOrderedSet:(id)arg0 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inSortedRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingComparator:(id)arg3 ;
-(NSUInteger)indexOfObjectAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfObjectPassingTest:(id)arg0 ;
-(NSUInteger)indexOfObjectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)_orderedObjectsAndKeys;
-(id)allObjects;
-(id)array;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)descriptionWithLocale:(id)arg0 indent:(NSUInteger)arg1 ;
-(id)firstObject;
-(id)indexesOfObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(id)indexesOfObjectsPassingTest:(id)arg0 ;
-(id)indexesOfObjectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)initWithContainer:(id)arg0 key:(id)arg1 mutableOrderedSet:(id)arg2 ;
-(id)lastObject;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectEnumerator;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)reverseObjectEnumerator;
-(id)reversedOrderedSet;
-(id)set;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(id)sortedArrayWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)exchangeObjectAtIndex:(NSUInteger)arg0 withObjectAtIndex:(NSUInteger)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(*id)arg0 count:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusOrderedSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)moveObjectsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg0 withObjects:(id)arg1 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObjects:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)setObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)sortRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(void)sortUsingComparator:(id)arg0 ;
-(void)sortWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(void)unionOrderedSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif