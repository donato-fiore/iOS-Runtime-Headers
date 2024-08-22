// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTACTIONHELPER_H
#define CNCONTACTLISTACTIONHELPER_H

@class NSArray, NSString;
@protocol CNContactListActionDelegate, CNContactOrbActionsControllerDelegate, CNContactListActionHelperDelegate;

#import <Foundation/Foundation.h>

#import "CNContactListActionConfiguration.h"
#import "CNContactListActionExecutor.h"
#import "CNContactOrbActionsController.h"

@interface CNContactListActionHelper : NSObject <CNContactListActionDelegate, CNContactOrbActionsControllerDelegate>



@property (retain, nonatomic) CNContactListActionConfiguration *actionConfiguration; // ivar: _actionConfiguration
@property (retain, nonatomic) CNContactListActionExecutor *actionExecutor; // ivar: _actionExecutor
@property (retain, nonatomic) CNContactOrbActionsController *contactActionsController; // ivar: _contactActionsController
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactListActionHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includesContactOrbActions; // ivar: _includesContactOrbActions
@property (nonatomic) BOOL includesEditingActions; // ivar: _includesEditingActions
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeysForMultiSelectAction:(BOOL)arg0 ;
-(BOOL)canRemoveFromGroup;
-(BOOL)canShowContactActionsForContacts:(id)arg0 ;
-(BOOL)canShowMergeActionForContacts:(id)arg0 ;
-(BOOL)canShowSetAsMyCardActionForContacts:(id)arg0 ;
-(id)actionsForContacts:(id)arg0 dataSourceFilter:(id)arg1 sourceView:(id)arg2 ;
-(id)contactActionsMenuForContact:(id)arg0 ;
-(id)contactActionsMenuFromItems:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 environment:(id)arg1 contactFormatter:(id)arg2 undoManager:(id)arg3 ;
-(id)presentingViewControllerForActions;
-(id)presentingViewControllerForActionsController:(id)arg0 ;
-(id)searchActionsForContacts:(id)arg0 ;
-(id)trailingSwipeActionsForContact:(id)arg0 dataSourceFilter:(id)arg1 ;
-(void)action:(id)arg0 presentViewController:(id)arg1 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)contactOrbActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;
-(void)copyContacts:(id)arg0 ;
-(void)deleteContacts:(id)arg0 ;
-(void)deleteContacts:(id)arg0 dataSourceFilter:(id)arg1 ;
-(void)mergeContacts:(id)arg0 ;
-(void)removeContactsFromGroup:(id)arg0 withConfirmation:(BOOL)arg1 ;
-(void)shareContacts:(id)arg0 sourceView:(id)arg1 ;
-(void)updateMeContact:(id)arg0 ;


@end


#endif