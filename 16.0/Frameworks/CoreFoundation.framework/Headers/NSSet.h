// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSET_H
#define NSSET_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)newSetWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
+(id)set;
+(id)setWithArray:(id)arg0 ;
+(id)setWithArray:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)setWithArray:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)setWithArray:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
+(id)setWithObject:(id)arg0 ;
+(id)setWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
+(id)setWithObjects:(id)arg0 ;
+(id)setWithOrderedSet:(id)arg0 ;
+(id)setWithOrderedSet:(id)arg0 copyItems:(BOOL)arg1 ;
+(id)setWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)setWithOrderedSet:(id)arg0 range:(struct _NSRange )arg1 copyItems:(BOOL)arg2 ;
+(id)setWithSet:(id)arg0 ;
+(id)setWithSet:(id)arg0 copyItems:(BOOL)arg1 ;
-(BOOL)__getValue:(*id)arg0 forObj:(id)arg1 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)intersectsOrderedSet:(id)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(BOOL)isNSSet__;
-(BOOL)isSubsetOfOrderedSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)countForObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)allObjects;
-(id)anyObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)descriptionWithLocale:(id)arg0 indent:(NSUInteger)arg1 ;
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
-(id)member:(id)arg0 ;
-(id)members:(id)arg0 notFoundMarker:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)objectPassingTest:(id)arg0 ;
-(id)objectWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)objectsPassingTest:(id)arg0 ;
-(id)objectsWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)setByAddingObject:(id)arg0 ;
-(id)setByAddingObjectsFromArray:(id)arg0 ;
-(id)setByAddingObjectsFromSet:(id)arg0 ;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(id)sortedArrayWithOptions:(NSUInteger)arg0 usingComparator:(id)arg1 ;
-(void)__applyValues:(*unk)arg0 context:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 ;
-(void)makeObjectsPerformSelector:(SEL)arg0 withObject:(id)arg1 ;


@end


#endif