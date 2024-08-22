// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSPROXYWRAPPERMUTABLEORDEREDSET_H
#define _NSPROXYWRAPPERMUTABLEORDEREDSET_H

@class NSNotifyingWrapperMutableOrderedSet;


#import "_NSFaultingMutableOrderedSetMutationMethods.h"

@interface _NSProxyWrapperMutableOrderedSet : NSNotifyingWrapperMutableOrderedSet {
    _NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;
}




-(void)addObject:(id)arg0 ;
-(void)addObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertObjects:(*id)arg0 count:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusOrderedSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;
-(void)removeObjectsInRange:(struct _NSRange )arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)sortRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(void)sortUsingComparator:(id)arg0 ;
-(void)sortWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(void)unionOrderedSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif