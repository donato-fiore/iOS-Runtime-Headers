// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFFETCHEDRESULTORDEREDSETWRAPPER_H
#define _PFFETCHEDRESULTORDEREDSETWRAPPER_H

@class NSOrderedSet, NSArray, NSString;
@protocol PFObjectIDCollection;


#import "_PFWeakReference.h"

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet <PFObjectIDCollection>

 {
    int _cd_rc;
    NSArray *_underlyingArray;
    _PFWeakReference *_weakmoc;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrderedSet:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfManagedObjectForObjectID:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObjectAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfObjectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(NSUInteger)retainCount;
-(id)allObjects;
-(id)array;
-(id)arrayFromObjectIDs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)indexesOfObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(id)indexesOfObjectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)initWithArray:(id)arg0 andContext:(id)arg1 ;
-(id)managedObjectIDAtIndex:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newArrayFromObjectIDs;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectEnumerator;
-(id)retain;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(id)sortedArrayWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(void)dealloc;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif