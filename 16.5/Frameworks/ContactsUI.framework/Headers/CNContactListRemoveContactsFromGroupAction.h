// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTREMOVECONTACTSFROMGROUPACTION_H
#define CNCONTACTLISTREMOVECONTACTSFROMGROUPACTION_H

@class NSArray, CNContactStore;


#import "CNContactListUndoableAction.h"
#import "CNUIExternalComponentsFactory.h"

@interface CNContactListRemoveContactsFromGroupAction : CNContactListUndoableAction

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // ivar: _componentsFactory
@property (nonatomic) BOOL confirmAction; // ivar: _confirmAction
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) NSInteger originalContactCount; // ivar: _originalContactCount


+(id)actionForContact:(id)arg0 configuration:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(id)log;
-(BOOL)editRequiresAuthorization;
-(BOOL)editRequiresAuthorizationCheckForActions:(id)arg0 ;
-(BOOL)shouldReloadListOnCompletion;
-(id)groupToRemoveFrom;
-(id)initWithContacts:(id)arg0 configuration:(id)arg1 withConfirmation:(BOOL)arg2 ;
-(void)performAction;
-(void)performAuthorizedRemoveFromGroup:(id)arg0 ;
-(void)performUndoAction;
-(void)showRemoveFromGroupFailureAlert;


@end


#endif