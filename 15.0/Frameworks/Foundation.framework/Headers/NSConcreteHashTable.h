// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONCRETEHASHTABLE_H
#define NSCONCRETEHASHTABLE_H

@protocol NSSecureCoding;


#import "NSHashTable.h"

@interface NSConcreteHashTable : NSHashTable <NSSecureCoding>

 {
    NSSlice slice;
    NSUInteger count;
    NSUInteger capacity;
    NSUInteger options;
    NSUInteger mutations;
}




+(BOOL)supportsSecureCoding;
-(*void)getItem:(*void)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)rehashAround:(NSUInteger)arg0 ;
-(id)allObjects;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithPointerFunctions:(id)arg0 capacity:(NSUInteger)arg1 ;
-(id)objectEnumerator;
-(id)pointerFunctions;
-(void)addObject:(id)arg0 ;
-(void)assign:(NSUInteger)arg0 key:(*void)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getKeys:(**void)arg0 count:(*NSUInteger)arg1 ;
-(void)hashGrow;
-(void)insertItem:(*void)arg0 ;
-(void)insertKnownAbsentItem:(*void)arg0 ;
-(void)raiseCountUnderflowException;
-(void)rehash;
-(void)removeAllItems;
-(void)removeItem:(*void)arg0 ;


@end


#endif