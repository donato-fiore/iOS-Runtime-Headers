// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCREATENEWCONTACTACTION_H
#define CNCONTACTCREATENEWCONTACTACTION_H

@class CNContact, NSString, UIViewController;
@protocol CNContactViewControllerDelegate;


#import "CNContactAction.h"

@interface CNContactCreateNewContactAction : CNContactAction <CNContactViewControllerDelegate>



@property (retain, nonatomic) CNContact *createdContact; // ivar: _createdContact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif