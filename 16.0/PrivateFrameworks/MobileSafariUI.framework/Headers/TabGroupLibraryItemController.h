// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABGROUPLIBRARYITEMCONTROLLER_H
#define TABGROUPLIBRARYITEMCONTROLLER_H

@class WBTab, WBTabGroup;


#import "LibraryItemController.h"

@interface TabGroupLibraryItemController : LibraryItemController

@property (readonly, nonatomic) WBTab *tab; // ivar: _tab
@property (readonly, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup
@property (readonly, nonatomic, getter=isTabGroupSynced) BOOL tabGroupSynced;


-(BOOL)_sessionContainsLocalTabs:(id)arg0 ;
-(BOOL)_sessionContainsTabDocuments:(id)arg0 ;
-(BOOL)_sessionContainsTabGroup:(id)arg0 ;
-(BOOL)allowsMoveOperation;
-(BOOL)hasSubitems;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpanded;
-(BOOL)isSelected;
-(BOOL)isSpringLoaded;
-(BOOL)shouldPersistSelection;
-(NSInteger)dropIntentForSession:(id)arg0 ;
-(NSUInteger)dropOperationForSession:(id)arg0 ;
-(NSUInteger)hash;
-(id)accessibilityIdentifier;
-(id)accessories;
-(id)contextMenuConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dragItems;
-(id)initWithConfiguration:(id)arg0 sectionController:(id)arg1 tabGroup:(id)arg2 tab:(id)arg3 ;
-(id)subitems;
-(id)swipeActionsConfiguration;
-(void)didSelectItem;
-(void)performDropWithProposal:(id)arg0 session:(id)arg1 ;
-(void)updateListContentConfiguration:(id)arg0 ;
-(void)willToggleExpansionState;


@end


#endif