// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABGROUPLIBRARYITEMCONTROLLER_H
#define TABGROUPLIBRARYITEMCONTROLLER_H

@class WBTabGroup;


#import "LibraryItemController.h"

@interface TabGroupLibraryItemController : LibraryItemController

@property (readonly, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup
@property (readonly, nonatomic, getter=isTabGroupSynced) BOOL tabGroupSynced;


-(BOOL)_sessionContainsTabDocuments:(id)arg0 ;
-(BOOL)_sessionContainsTabGroup:(id)arg0 ;
-(BOOL)allowsMoveOperation;
-(BOOL)isSelected;
-(BOOL)isSpringLoaded;
-(BOOL)shouldPersistSelection;
-(NSInteger)dropIntentForSession:(id)arg0 ;
-(NSUInteger)dropOperationForSession:(id)arg0 ;
-(id)dragItems;
-(id)initWithConfiguration:(id)arg0 sectionController:(id)arg1 tabGroup:(id)arg2 ;
-(id)secondaryAction;
-(void)didSelectItem;
-(void)performDropWithProposal:(id)arg0 session:(id)arg1 ;
-(void)updateListContentConfiguration:(id)arg0 ;


@end


#endif