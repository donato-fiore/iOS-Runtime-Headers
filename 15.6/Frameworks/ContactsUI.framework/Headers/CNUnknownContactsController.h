// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUNKNOWNCONTACTSCONTROLLER_H
#define CNUNKNOWNCONTACTSCONTROLLER_H

@class CNContactStore, NSArray, NSString, UIViewController;
@protocol CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUnknownContactsControllerDelegate;

#import <Foundation/Foundation.h>


@interface CNUnknownContactsController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUnknownContactsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController *displayedController; // ivar: _displayedController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(BOOL)multipleUnknownContactsViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(id)initWithContacts:(id)arg0 contactStore:(id)arg1 ;
-(id)viewController;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)multipleUnknownContactsViewControllerDidComplete:(id)arg0 ;


@end


#endif