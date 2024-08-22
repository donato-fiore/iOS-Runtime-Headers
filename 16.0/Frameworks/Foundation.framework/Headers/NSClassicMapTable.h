// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLASSICMAPTABLE_H
#define NSCLASSICMAPTABLE_H



#import "NSMapTable.h"

@interface NSClassicMapTable : NSMapTable {
    ? _keyCallBacks;
    ? _valueCallBacks;
    *__CFBasicHash _ht;
}




-(*void)existingItemForSetItem:(*void)arg0 forAbsentKey:(*void)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mapMember:(*void)arg0 originalKey:(**void)arg1 value:(**void)arg2 ;
-(NSUInteger)count;
-(NSUInteger)getKeys:(**void)arg0 values:(**void)arg1 ;
-(id)allKeys;
-(id)allValues;
-(id)copy;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)_reclaim;
-(void)dealloc;
-(void)removeAllItems;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setItem:(*void)arg0 forKnownAbsentKey:(*void)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif