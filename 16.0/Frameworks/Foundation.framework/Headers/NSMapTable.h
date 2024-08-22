// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMAPTABLE_H
#define NSMAPTABLE_H

@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "NSPointerFunctions.h"

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly) NSUInteger count;
@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;


+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(BOOL)supportsSecureCoding;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)mapTableWithKeyOptions:(NSUInteger)arg0 valueOptions:(NSUInteger)arg1 ;
+(id)mapTableWithStrongToStrongObjects;
+(id)mapTableWithStrongToWeakObjects;
+(id)mapTableWithWeakToStrongObjects;
+(id)mapTableWithWeakToWeakObjects;
+(id)strongToStrongObjectsMapTable;
+(id)strongToWeakObjectsMapTable;
+(id)weakToStrongObjectsMapTable;
+(id)weakToWeakObjectsMapTable;
-(*void)existingItemForSetItem:(*void)arg0 forAbsentKey:(*void)arg1 ;
-(BOOL)mapMember:(*void)arg0 originalKey:(**void)arg1 value:(**void)arg2 ;
-(Class)classForCoder;
-(NSUInteger)__capacity;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)getKeys:(**void)arg0 values:(**void)arg1 ;
-(id)allKeys;
-(id)allValues;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)enumerator;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyOptions:(NSUInteger)arg0 valueOptions:(NSUInteger)arg1 capacity:(NSUInteger)arg2 ;
-(id)initWithKeyPointerFunctions:(id)arg0 valuePointerFunctions:(id)arg1 capacity:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableDictionary;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllItems;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)replaceItem:(*void)arg0 forExistingKey:(*void)arg1 ;
-(void)setItem:(*void)arg0 forAbsentKey:(*void)arg1 ;
-(void)setItem:(*void)arg0 forKey:(*void)arg1 ;
-(void)setItem:(*void)arg0 forKnownAbsentKey:(*void)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif