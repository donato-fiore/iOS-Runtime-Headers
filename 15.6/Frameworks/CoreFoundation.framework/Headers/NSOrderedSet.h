// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSORDEREDSET_H
#define NSORDEREDSET_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)newOrderedSetWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
+(id)orderedSet;
+(id)orderedSetWithArray:(id)arg0 ;
+(id)orderedSetWithArray:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)orderedSetWithArray:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)orderedSetWithArray:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithObject:(id)arg0 ;
+(id)orderedSetWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
+(id)orderedSetWithObjects:(id)arg0 ;
+(id)orderedSetWithOrderedSet:(id)arg0 ;
+(id)orderedSetWithOrderedSet:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)orderedSetWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)orderedSetWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithSet:(id)arg0 ;
+(id)orderedSetWithSet:(id)arg0 copyItems:(BOOL)arg1 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)intersectsOrderedSet:(id)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrderedSet:(id)arg0 ;
-(BOOL)isNSOrderedSet__;
-(BOOL)isSubsetOfOrderedSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countForObject:(id)arg0 ;
-(NSUInteger)countForObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)hash;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObject:(id)arg0 inSortedRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingComparator:(id)arg3 ;
-(NSUInteger)indexOfObjectAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfObjectPassingTest:(id)arg0 ;
-(NSUInteger)indexOfObjectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
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
-(id)initWithArray:(id)arg0 ;
-(id)initWithArray:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)initWithArray:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithArray:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithObjects:(id)arg0 ;
-(id)initWithOrderedSet:(id)arg0 ;
-(id)initWithOrderedSet:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)initWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
-(id)initWithSet:(id)arg0 ;
-(id)initWithSet:(id)arg0 copyItems:(BOOL)arg1 ;
-(id)lastObject;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(id)objectEnumerator;
-(id)objectPassingTest:(id)arg0 ;
-(id)objectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)objectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(id)objectsPassingTest:(id)arg0 ;
-(id)objectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)reversedOrderedSet;
-(id)set;
-(id)sortedArrayFromRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(id)sortedArrayWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif