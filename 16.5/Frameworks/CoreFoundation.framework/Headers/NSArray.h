// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSARRAY_H
#define NSARRAY_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)array;
+(id)arrayWithArray:(id)arg0 ;
+(id)arrayWithArray:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)arrayWithArray:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)arrayWithArray:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithObject:(id)arg0 ;
+(id)arrayWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
+(id)arrayWithObjects:(id)arg0 ;
+(id)arrayWithOrderedSet:(id)arg0 ;
+(id)arrayWithOrderedSet:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)arrayWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)arrayWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithSet:(id)arg0 ;
+(id)arrayWithSet:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)newArrayWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)containsObjectIdenticalTo:(id)arg0 ;
-(BOOL)containsObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArray:(id)arg0 ;
-(BOOL)isNSArray__;
-(NSUInteger)_cfTypeID;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countForObject:(id)arg0 ;
-(NSUInteger)countForObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)hash;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObject:(id)arg0 inSortedRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingComparator:(id)arg3 ;
-(NSUInteger)indexOfObjectAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObjectPassingTest:(id)arg0 ;
-(NSUInteger)indexOfObjectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)_initByAdoptingBuffer:(*id)arg0 count:(NSUInteger)arg1 size:(NSUInteger)arg2 ;
-(id)allObjects;
-(id)arrayByAddingObject:(id)arg0 ;
-(id)arrayByAddingObjectsFromArray:(id)arg0 ;
-(id)arrayByApplyingSelector:(SEL)arg0 ;
-(id)arrayByExcludingObjectsInArray:(id)arg0 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg0 ;
-(id)componentsJoinedByString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)descriptionWithLocale:(id)arg0 indent:(NSUInteger)arg1 ;
-(id)firstObject;
-(id)firstObjectCommonWithArray:(id)arg0 ;
-(id)indexesOfObject:(id)arg0 ;
-(id)indexesOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg0 ;
-(id)indexesOfObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange )arg1 ;
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
-(id)reversedArray;
-(id)sortedArrayFromRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(id)sortedArrayUsingFunction:(*unk)arg0 context:(*void)arg1 ;
-(id)sortedArrayUsingSelector:(SEL)arg0 ;
-(id)sortedArrayWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(id)subarrayWithRange:(struct _NSRange )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 withObject:(id)arg1 ;


@end


#endif