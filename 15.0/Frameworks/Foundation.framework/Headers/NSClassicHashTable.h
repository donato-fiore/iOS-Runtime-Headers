// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCLASSICHASHTABLE_H
#define NSCLASSICHASHTABLE_H



#import "NSHashTable.h"

@interface NSClassicHashTable : NSHashTable {
    ? _callBacks;
    *__CFBasicHash _ht;
}




-(*void)getItem:(*void)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)allObjects;
-(id)copy;
-(id)description;
-(id)init;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)getKeys:(**void)arg0 count:(*NSUInteger)arg1 ;
-(void)insertItem:(*void)arg0 ;
-(void)insertKnownAbsentItem:(*void)arg0 ;
-(void)removeAllItems;
-(void)removeItem:(*void)arg0 ;


@end


#endif