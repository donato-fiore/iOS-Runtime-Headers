// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYOBJECTCACHE_H
#define WBSHISTORYOBJECTCACHE_H


#import <Foundation/Foundation.h>


@interface WBSHistoryObjectCache : NSObject {
    unordered_map<long long, WBSHistoryItem *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryItem *>>> _itemsByDatabaseID;
    unordered_map<long long, WBSHistoryVisit *__weak, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryVisit *__weak>>> _weakVisitsByDatabaseID;
}




-(id)allItems;
-(id)init;
-(id)itemForID:(NSInteger)arg0 ;
-(id)visitForID:(NSInteger)arg0 ;
-(void)_clearNilReferences;
-(void)changeItemIDs:(id)arg0 ;
-(void)changeVisitIDs:(id)arg0 ;
-(void)clear;
-(void)removeItemWithID:(NSInteger)arg0 ;
-(void)reserveItemCapacity:(NSInteger)arg0 ;
-(void)setItem:(id)arg0 forID:(NSInteger)arg1 ;
-(void)setVisit:(id)arg0 forID:(NSInteger)arg1 ;


@end


#endif