// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTUPDATEEXISTINGCONTACTACTION_H
#define CNCONTACTUPDATEEXISTINGCONTACTACTION_H

@class NSString, CNContact;
@protocol CNContactViewControllerDelegate;


#import "CNContactAction.h"

@interface CNContactUpdateExistingContactAction : CNContactAction <CNContactViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContact *existingContact; // ivar: _existingContact
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif