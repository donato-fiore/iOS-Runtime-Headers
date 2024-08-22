// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSHASHTABLE_H
#define NSHASHTABLE_H

@class NSArray, NSSet;
@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "NSPointerFunctions.h"

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly, copy) NSArray *allObjects;
@property (readonly, nonatomic) id *anyObject;
@property (readonly) NSUInteger count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property (readonly, copy) NSSet *setRepresentation;


+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(BOOL)supportsSecureCoding;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)hashTableWithOptions:(NSUInteger)arg0 ;
+(id)hashTableWithWeakObjects;
+(id)weakObjectsHashTable;
-(*void)getItem:(*void)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)intersectsHashTable:(id)arg0 ;
-(BOOL)isEqualToHashTable:(id)arg0 ;
-(BOOL)isSubsetOfHashTable:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)weakCount;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithPointerFunctions:(id)arg0 capacity:(NSUInteger)arg1 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableSet;
-(id)objectEnumerator;
-(void)addObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getKeys:(**void)arg0 count:(*NSUInteger)arg1 ;
-(void)insertKnownAbsentItem:(*void)arg0 ;
-(void)intersectHashTable:(id)arg0 ;
-(void)minusHashTable:(id)arg0 ;
-(void)removeAllItems;
-(void)removeAllObjects;
-(void)removeItem:(*void)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)unionHashTable:(id)arg0 ;


@end


#endif