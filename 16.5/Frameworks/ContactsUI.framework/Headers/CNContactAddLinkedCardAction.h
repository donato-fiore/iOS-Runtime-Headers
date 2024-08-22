// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTADDLINKEDCARDACTION_H
#define CNCONTACTADDLINKEDCARDACTION_H

@class CNContact, NSString, NSArray;
@protocol CNContactPickerDelegate, CNContactContentViewControllerDelegate;


#import "CNContactAction.h"
#import "CNContactPickerViewController.h"

@interface CNContactAddLinkedCardAction : CNContactAction <CNContactPickerDelegate, CNContactContentViewControllerDelegate>



@property (retain, nonatomic) CNContact *chosenContact; // ivar: _chosenContact
@property (retain, nonatomic) CNContactPickerViewController *contactPicker; // ivar: _contactPicker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *editingLinkedContacts; // ivar: _editingLinkedContacts
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNContact *selectedContact; // ivar: _selectedContact
@property (readonly) Class superclass;


-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 labeledValue:(id)arg3 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)peoplePickerLinkButtonTapped;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif