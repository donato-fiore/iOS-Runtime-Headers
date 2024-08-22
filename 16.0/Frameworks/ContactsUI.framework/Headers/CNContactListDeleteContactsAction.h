// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTDELETECONTACTSACTION_H
#define CNCONTACTLISTDELETECONTACTSACTION_H

@class NSArray, CNContactFormatter, CNContactStore, CNUICoreRecentsManager;


#import "CNContactListUndoableAction.h"
#import "CNUIExternalComponentsFactory.h"

@interface CNContactListDeleteContactsAction : CNContactListUndoableAction

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // ivar: _componentsFactory
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) NSInteger originalContactCount; // ivar: _originalContactCount
@property (readonly, nonatomic) CNUICoreRecentsManager *recentsManager; // ivar: _recentsManager


+(id)actionForContact:(id)arg0 configuration:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(id)log;
-(BOOL)editRequiresAuthorization;
-(BOOL)editRequiresAuthorizationCheckForActions:(id)arg0 ;
-(BOOL)shouldReloadListOnCompletion;
-(id)alertTitle;
-(id)initWithContacts:(id)arg0 configuration:(id)arg1 ;
-(void)performAction;
-(void)performUndoAction;
-(void)showDeleteFailureAlert;


@end


#endif