// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FPITEMLIST_H
#define _FPITEMLIST_H

@class NSMutableArray, NSMutableOrderedSet, NSMutableDictionary;



@interface _FPItemList : NSMutableArray {
    NSMutableOrderedSet *_orderedSet;
    NSMutableDictionary *_itemsByIDs;
    NSMutableDictionary *_formerIDs;
}




-(BOOL)isObsoleteID:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)indexOfItemID:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inSortedRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 usingComparator:(id)arg3 ;
-(id)allObjects;
-(id)description;
-(id)formerIDs;
-(id)init;
-(id)itemWithItemID:(id)arg0 ;
-(id)mutableCopy;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)redactedDescription;
-(void)addObject:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectWithID:(id)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)sortUsingDescriptors:(id)arg0 ;


@end


#endif