// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTORBACTIONSCONTROLLER_H
#define CNCONTACTORBACTIONSCONTROLLER_H

@class NSArray, NSString;
@protocol CNContactActionsControllerDelegate, CNQuickActionsManagerDelegate, CNContactOrbActionsControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNContactActionsController.h"
#import "CNQuickActionsManager.h"

@interface CNContactOrbActionsController : NSObject <CNContactActionsControllerDelegate, CNQuickActionsManagerDelegate>



@property (retain, nonatomic) NSArray *actionCategories; // ivar: _actionCategories
@property (retain, nonatomic) CNContactActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) CNQuickActionsManager *actionsManager; // ivar: _actionsManager
@property (nonatomic) BOOL bypassActionValidation; // ivar: _bypassActionValidation
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactOrbActionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *menuItems; // ivar: _menuItems
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(BOOL)shouldUseActionsManagerForContacts:(id)arg0 ;
-(id)actionsManager:(id)arg0 presentingViewControllerForAction:(id)arg1 ;
-(id)currentAvailableMenuItems;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(id)initWithContacts:(id)arg0 actionCategories:(id)arg1 ;
-(id)initWithContacts:(id)arg0 actionCategories:(id)arg1 bypassActionValidation:(BOOL)arg2 ;
-(id)menuItemsForContactsWithActions:(id)arg0 ;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)contactActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;
-(void)reloadMenuItems;
-(void)setupActionsControllerForContact:(id)arg0 ;
-(void)setupActionsForContacts:(id)arg0 ;
-(void)setupActionsManagerForContacts:(id)arg0 ;


@end


#endif