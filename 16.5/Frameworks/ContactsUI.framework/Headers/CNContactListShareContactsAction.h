// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTSHARECONTACTSACTION_H
#define CNCONTACTLISTSHARECONTACTSACTION_H

@class UIActivityViewController, NSArray, NSString, UIView;
@protocol UIActivityViewControllerObjectManipulationDelegate, CNContactCardFieldPickerDelegate, CNContactListAction, CNContactListActionDelegate;

#import <Foundation/Foundation.h>

#import "CNContactListShareContactsActionContext.h"
#import "CNContactCardFieldPicker.h"

@interface CNContactListShareContactsAction : NSObject <UIActivityViewControllerObjectManipulationDelegate, CNContactCardFieldPickerDelegate, CNContactListAction>



@property (retain, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) CNContactListShareContactsActionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactListActionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactCardFieldPicker *fieldPicker; // ivar: _fieldPicker
@property (retain, nonatomic) NSArray *filteredContacts; // ivar: _filteredContacts
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(BOOL)_customizationAvailableForActivityViewController:(id)arg0 ;
-(BOOL)editRequiresAuthorization;
-(BOOL)shouldReloadListOnCompletion;
-(id)_customizationGroupsForActivityViewController:(id)arg0 ;
-(id)activityItemForContacts:(id)arg0 ;
-(id)customActionViewControllerForActivityViewController:(id)arg0 ;
-(id)customLocalizedActionTitleForActivityViewController:(id)arg0 ;
-(id)initWithContacts:(id)arg0 sourceView:(id)arg1 ;
-(id)initWithContacts:(id)arg0 sourceView:(id)arg1 context:(id)arg2 ;
-(void)contactCardFieldPicker:(id)arg0 didFinishWithContacts:(id)arg1 ;
-(void)performAction;
-(void)presentFilterFieldPicker;
-(void)presentShareSheet;
-(void)setupForContactFieldPicker;


@end


#endif