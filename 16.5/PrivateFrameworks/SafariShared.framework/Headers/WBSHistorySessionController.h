// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYSESSIONCONTROLLER_H
#define WBSHISTORYSESSIONCONTROLLER_H

@class NSMutableDictionary, NSArray;
@protocol WBSHistorySessions, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistorySessionIntervalCache.h"
#import "WBSHistory.h"

@interface WBSHistorySessionController : NSObject <WBSHistorySessions>

 {
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}


@property (readonly, nonatomic) WBSHistory *history; // ivar: _history
@property (readonly, nonatomic) NSUInteger numberOfSessions;
@property (readonly, copy, nonatomic) NSArray *orderedSessions;


+(id)sharedSessionController;
-(BOOL)_getKey:(*id)arg0 forDate:(CGFloat)arg1 ;
-(NSUInteger)_insertItem:(id)arg0 withSessionKey:(id)arg1 ;
-(NSUInteger)numberOfItemsVisitedInSession:(id)arg0 ;
-(id)_orderedSessionKeys;
-(id)initWithHistory:(id)arg0 ;
-(id)itemLastVisitedInSession:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)itemsLastVisitedInSession:(id)arg0 ;
-(id)sessionForItem:(id)arg0 ;
-(void)_addItemsToSessionCache:(id)arg0 shouldPostChangeNotification:(BOOL)arg1 ;
-(void)_clearSessionCache;
-(void)_dispatchHistorySessionsDidChangeNotification;
-(void)_historyItemsWereAdded:(id)arg0 ;
-(void)_historyItemsWereRemoved:(id)arg0 ;
-(void)_loadSessionCache;
-(void)_removeItemsFromSessionCache:(id)arg0 ;
-(void)_requestSessionKeyForDate:(id)arg0 withBlock:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg0 ;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg0 usingBlock:(id)arg1 ;
-(void)orderedItemsNewerThanDate:(id)arg0 maxCount:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif