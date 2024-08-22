// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSHARECONTACTACTION_H
#define CNCONTACTSHARECONTACTACTION_H

@class UIActivityViewController, NSString, CNContact, UIView;
@protocol UIActivityViewControllerObjectManipulationDelegate, CNContactCardFieldPickerDelegate;


#import "CNContactAction.h"
#import "CNContactCardFieldPicker.h"

@interface CNContactShareContactAction : CNContactAction <UIActivityViewControllerObjectManipulationDelegate, CNContactCardFieldPickerDelegate>



@property (retain, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactCardFieldPicker *fieldPicker; // ivar: _fieldPicker
@property (retain, nonatomic) CNContact *filteredContact; // ivar: _filteredContact
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;


-(BOOL)_customizationAvailableForActivityViewController:(id)arg0 ;
-(BOOL)canPerformAction;
-(id)_customizationGroupsForActivityViewController:(id)arg0 ;
-(id)activityItemForContact:(id)arg0 ;
-(id)customActionViewControllerForActivityViewController:(id)arg0 ;
-(id)customLocalizedActionTitleForActivityViewController:(id)arg0 ;
-(void)contactCardFieldPicker:(id)arg0 didFinishWithContacts:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;
-(void)presentFilterFieldPicker;
-(void)presentShareSheet;
-(void)setupForContactFieldPicker;


@end


#endif