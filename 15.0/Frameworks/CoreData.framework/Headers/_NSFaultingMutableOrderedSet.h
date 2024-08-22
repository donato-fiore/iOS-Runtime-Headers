// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSFAULTINGMUTABLEORDEREDSET_H
#define _NSFAULTINGMUTABLEORDEREDSET_H

@class NSMutableOrderedSet, NSMutableDictionary;


#import "NSManagedObject.h"
#import "_NSFaultingMutableOrderedSet.h"
#import "NSPropertyDescription.h"

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {
    int _cd_rc;
    _NSFaultingMutableOrderedSetFlags _flags;
    id *_realSet;
    NSManagedObject *_source;
    *unsigned int _orderKeys;
    _NSFaultingMutableOrderedSet *_grottyHack;
    NSMutableDictionary *_forcedKeys;
}


@property (readonly, nonatomic, getter=isFault) BOOL fault;
@property (readonly, nonatomic) NSPropertyDescription *relationship;
@property (readonly, nonatomic) NSManagedObject *source;


+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_isIdenticalFault:(id)arg0 ;
-(BOOL)_reorderObjectsToLocationsByOrderKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldProcessKVOChange;
-(BOOL)_tryRetain;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrderedSet:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObjectAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfObjectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(NSUInteger)retainCount;
-(id)_orderedObjectsAndKeys;
-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)indexesOfObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(id)indexesOfObjectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg0 ;
-(id)initWithSource:(id)arg0 destinations:(id)arg1 forRelationship:(id)arg2 inContext:(id)arg3 ;
-(id)initWithSource:(id)arg0 forRelationship:(id)arg1 asFault:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectEnumerator;
-(id)replacementObjectForCoder:(id)arg0 ;
-(id)retain;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)_setProcessingIdempotentKVO:(BOOL)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(*id)arg0 count:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)minusOrderedSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)release;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)sortRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(void)sortUsingComparator:(id)arg0 ;
-(void)sortWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(void)turnIntoFault;
-(void)unionOrderedSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;
-(void)willRead;
-(void)willReadWithContents:(id)arg0 ;


@end


#endif