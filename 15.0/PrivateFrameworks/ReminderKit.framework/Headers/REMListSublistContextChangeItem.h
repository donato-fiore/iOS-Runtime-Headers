// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMLISTSUBLISTCONTEXTCHANGEITEM_H
#define REMLISTSUBLISTCONTEXTCHANGEITEM_H


#import <Foundation/Foundation.h>

#import "REMListChangeItem.h"

@interface REMListSublistContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem; // ivar: _listChangeItem


-(id)_accountChangeItem;
-(id)initWithListChangeItem:(id)arg0 ;
-(void)_insertMergeableOrderingNode:(id)arg0 adjacentToMergeableOrderingNode:(id)arg1 isAfter:(BOOL)arg2 ;
-(void)addListChangeItem:(id)arg0 ;
-(void)addMergeableOrderingNode:(id)arg0 ;
-(void)addSmartListChangeItem:(id)arg0 ;
-(void)insertListChangeItem:(id)arg0 afterListChangeItem:(id)arg1 ;
-(void)insertListChangeItem:(id)arg0 beforeListChangeItem:(id)arg1 ;
-(void)insertMergeableOrderingNode:(id)arg0 afterMergeableOrderingNode:(id)arg1 ;
-(void)insertMergeableOrderingNode:(id)arg0 beforeMergeableOrderingNode:(id)arg1 ;
-(void)insertSmartListChangeItem:(id)arg0 afterSmartListChangeItem:(id)arg1 ;
-(void)insertSmartListChangeItem:(id)arg0 beforeSmartListChangeItem:(id)arg1 ;
-(void)undeleteChildListWithID:(id)arg0 usingUndo:(id)arg1 ;
-(void)undeleteChildSmartListWithID:(id)arg0 usingUndo:(id)arg1 ;


@end


#endif