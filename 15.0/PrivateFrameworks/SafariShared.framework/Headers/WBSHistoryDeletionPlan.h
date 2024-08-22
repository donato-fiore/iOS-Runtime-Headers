// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYDELETIONPLAN_H
#define WBSHISTORYDELETIONPLAN_H

@class NSSet, NSMapTable;
@protocol WBSHistoryStore;

#import <Foundation/Foundation.h>


@interface WBSHistoryDeletionPlan : NSObject {
    id<WBSHistoryStore> *_store;
    NSSet *_excludedItems;
    NSSet *_excludedVisits;
}


@property (readonly, nonatomic) NSSet *allItemsToDelete;
@property (readonly, nonatomic) NSMapTable *allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property (readonly, nonatomic) NSSet *allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property (readonly, nonatomic) NSSet *discoveredItemsToDelete; // ivar: _discoveredItemsToDelete
@property (readonly, nonatomic) NSSet *discoveredVisitsToDelete; // ivar: _discoveredVisitsToDelete
@property (readonly, nonatomic) NSSet *triggeringItems; // ivar: _triggeringItems
@property (readonly, nonatomic) NSSet *triggeringVisits; // ivar: _triggeringVisits
@property (readonly, nonatomic) NSMapTable *updatedLastVisitsByItem; // ivar: _updatedLastVisitsByItem
@property (readonly, nonatomic) BOOL wasPrepared; // ivar: _wasPrepared


-(id)_extraVisitsToDeleteWhenDeletingItems:(id)arg0 visits:(id)arg1 ;
-(id)_extraVisitsToDeleteWhenDeletingItems:(id)arg0 visits:(id)arg1 relatedVisitKey:(id)arg2 relatedVisitsQueryFactory:(id)arg3 ;
-(id)initWithSQLiteStore:(id)arg0 discoveredItemsToDelete:(id)arg1 ;
-(id)initWithSQLiteStore:(id)arg0 triggeringItems:(id)arg1 excludingItems:(id)arg2 visits:(id)arg3 reason:(NSInteger)arg4 ;
-(id)initWithSQLiteStore:(id)arg0 triggeringVisits:(id)arg1 excludingItems:(id)arg2 visits:(id)arg3 ;
-(id)initWithSQLiteStore:(id)arg0 triggeringVisits:(id)arg1 updatedLastVisitsByItem:(id)arg2 ;
-(void)_prepareWithTriggeringItems:(id)arg0 triggeringVisits:(id)arg1 ;


@end


#endif