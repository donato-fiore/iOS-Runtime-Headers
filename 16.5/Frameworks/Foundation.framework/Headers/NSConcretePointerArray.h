// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONCRETEPOINTERARRAY_H
#define NSCONCRETEPOINTERARRAY_H



#import "NSPointerArray.h"

@interface NSConcretePointerArray : NSPointerArray {
    NSSlice slice;
    NSUInteger count;
    NSUInteger capacity;
    NSUInteger options;
    NSUInteger mutations;
    BOOL needsCompaction;
    BOOL hasDynamicSlice;
}




+(BOOL)supportsSecureCoding;
-(*void)pointerAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)indexOfPointer:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)initWithPointerFunctions:(id)arg0 ;
-(id)pointerFunctions;
-(void)_markNeedsCompaction;
-(void)addPointer:(*void)arg0 ;
-(void)arrayGrow:(NSUInteger)arg0 ;
-(void)compact;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertPointer:(*void)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removePointer:(*void)arg0 ;
-(void)removePointerAtIndex:(NSUInteger)arg0 ;
-(void)replacePointerAtIndex:(NSUInteger)arg0 withPointer:(*void)arg1 ;
-(void)setCount:(NSUInteger)arg0 ;


@end


#endif