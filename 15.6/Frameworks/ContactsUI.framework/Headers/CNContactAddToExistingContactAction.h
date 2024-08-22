// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTADDTOEXISTINGCONTACTACTION_H
#define CNCONTACTADDTOEXISTINGCONTACTACTION_H

@class CNContact, NSString;
@protocol CNContactPickerDelegate, CNContactViewControllerDelegate;


#import "CNContactAction.h"
#import "CNContactPickerViewController.h"

@interface CNContactAddToExistingContactAction : CNContactAction <CNContactPickerDelegate, CNContactViewControllerDelegate>



@property (retain, nonatomic) CNContact *chosenContact; // ivar: _chosenContact
@property (retain, nonatomic) CNContactPickerViewController *contactPicker; // ivar: _contactPicker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif