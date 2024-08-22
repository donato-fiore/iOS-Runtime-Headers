// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPOINTERARRAY_H
#define NSPOINTERARRAY_H

@protocol NSFastEnumeration, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSPointerFunctions.h"

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>



@property NSUInteger count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;


+(BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)pointerArrayWithOptions:(NSUInteger)arg0 ;
+(id)pointerArrayWithPointerFunctions:(id)arg0 ;
+(id)pointerArrayWithStrongObjects;
+(id)pointerArrayWithWeakObjects;
+(id)strongObjectsPointerArray;
+(id)weakObjectsPointerArray;
-(*void)pointerAtIndex:(NSUInteger)arg0 ;
-(Class)classForCoder;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)initWithPointerFunctions:(id)arg0 ;
-(id)mutableArray;
-(void)addPointer:(*void)arg0 ;
-(void)compact;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertPointer:(*void)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removePointerAtIndex:(NSUInteger)arg0 ;
-(void)replacePointerAtIndex:(NSUInteger)arg0 withPointer:(*void)arg1 ;


@end


#endif