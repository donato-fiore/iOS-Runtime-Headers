// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONCRETEMAPTABLE_H
#define NSCONCRETEMAPTABLE_H



#import "NSMapTable.h"

@interface NSConcreteMapTable : NSMapTable {
    NSSlice keys;
    NSSlice values;
    NSUInteger count;
    NSUInteger capacity;
    NSUInteger keyOptions;
    NSUInteger valueOptions;
    NSUInteger mutations;
    os_unfair_lock_s growLock;
    BOOL shouldRehash;
    BOOL hasDynamicSlices;
}




+(BOOL)supportsSecureCoding;
-(*void)existingItemForSetItem:(*void)arg0 forAbsentKey:(*void)arg1 ;
-(BOOL)containsKeys:(**void)arg0 values:(**void)arg1 count:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mapMember:(*void)arg0 originalKey:(**void)arg1 value:(**void)arg2 ;
-(NSUInteger)__capacity;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)getKeys:(**void)arg0 values:(**void)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)realCount;
-(NSUInteger)rehashAround:(NSUInteger)arg0 ;
-(id)allKeys;
-(id)allValues;
-(id)copy;
-(id)description;
-(id)dump;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyOptions:(NSUInteger)arg0 valueOptions:(NSUInteger)arg1 capacity:(NSUInteger)arg2 ;
-(id)initWithKeyPointerFunctions:(id)arg0 valuePointerFunctions:(id)arg1 capacity:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)keyPointerFunctions;
-(id)objectEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)valuePointerFunctions;
-(void)_reclaim;
-(void)_setBackingStore;
-(void)assign:(NSUInteger)arg0 key:(*void)arg1 value:(*void)arg2 isNew:(BOOL)arg3 ;
-(void)checkCount:(char *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)grow;
-(void)raiseCountUnderflowException;
-(void)rehash;
-(void)removeAllItems;
-(void)removeObjectForKey:(id)arg0 ;
-(void)replaceItem:(*void)arg0 forExistingKey:(*void)arg1 ;
-(void)setItem:(*void)arg0 forAbsentKey:(*void)arg1 ;
-(void)setItem:(*void)arg0 forKnownAbsentKey:(*void)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif