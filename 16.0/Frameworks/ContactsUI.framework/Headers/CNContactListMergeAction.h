// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTMERGEACTION_H
#define CNCONTACTLISTMERGEACTION_H



#import "CNContactListUndoableAction.h"
#import "CNUIGroupsAndContainersSaveManager.h"
#import "_TtC10ContactsUI33ContactListMergeUnifyActionHelper.h"

@interface CNContactListMergeAction : CNContactListUndoableAction

@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // ivar: _groupsAndContainersSaveManager
@property (retain, nonatomic) _TtC10ContactsUI33ContactListMergeUnifyActionHelper *mergeUnifyActionHelper; // ivar: _mergeUnifyActionHelper


+(id)descriptorForRequiredKeys;
+(id)log;
-(BOOL)executeAction;
-(BOOL)mergeWillRequireLinkingForContacts:(id)arg0 ;
-(BOOL)shouldReloadListOnCompletion;
-(void)performAction;
-(void)performUndoAction;
-(void)showMergeFailureAlert;


@end


#endif