// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBHISTORYPRIVATE_H
#define WEBHISTORYPRIVATE_H


#import <Foundation/Foundation.h>


@interface WebHistoryPrivate : NSObject {
    RetainPtr<NSMutableDictionary> _entriesByURL;
    unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> _entriesByDate;
    RetainPtr<NSMutableArray> _orderedLastVisitedDays;
    BOOL itemLimitSet;
    int itemLimit;
    BOOL ageInDaysLimitSet;
    int ageInDaysLimit;
}




+(void)initialize;
-(BOOL)addItem:(id)arg0 discardDuplicate:(BOOL)arg1 ;
-(BOOL)containsURL:(id)arg0 ;
-(BOOL)findKey:(*NSInteger)arg0 forDay:(CGFloat)arg1 ;
-(BOOL)loadFromURL:(id)arg0 collectDiscardedItemsInto:(id)arg1 error:(*id)arg2 ;
-(BOOL)loadHistoryGutsFromURL:(id)arg0 savedItemsCount:(*int)arg1 collectDiscardedItemsInto:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeAllItems;
-(BOOL)removeItem:(id)arg0 ;
-(BOOL)removeItemForURLString:(id)arg0 ;
-(BOOL)removeItemFromDateCaches:(id)arg0 ;
-(BOOL)removeItems:(id)arg0 ;
-(BOOL)saveToURL:(id)arg0 error:(*id)arg1 ;
-(id)ageLimitDate;
-(id)allItems;
-(id)data;
-(id)init;
-(id)itemForURL:(id)arg0 ;
-(id)itemForURLString:(id)arg0 ;
-(id)orderedItemsLastVisitedOnDay:(id)arg0 ;
-(id)orderedLastVisitedDays;
-(id)visitedURL:(id)arg0 withTitle:(id)arg1 ;
-(int)historyAgeInDaysLimit;
-(int)historyItemLimit;
-(void)addItemToDateCaches:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)addVisitedLinksToVisitedLinkStore:(*void)arg0 ;
-(void)insertItem:(id)arg0 forDateKey:(NSInteger)arg1 ;
-(void)rebuildHistoryByDayIfNeeded:(id)arg0 ;
-(void)setHistoryAgeInDaysLimit:(int)arg0 ;
-(void)setHistoryItemLimit:(int)arg0 ;


@end


#endif