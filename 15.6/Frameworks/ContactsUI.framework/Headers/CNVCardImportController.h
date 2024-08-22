// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDIMPORTCONTROLLER_H
#define CNVCARDIMPORTCONTROLLER_H

@class CNContactStore, NSString, UIViewController, CNQueue;
@protocol CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate, CNVCardImportControllerDelegate, CNVCardImportControllerPresentationDelegate;

#import <Foundation/Foundation.h>

#import "CNUIEditAuthorizationController.h"

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate>



@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNVCardImportControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // ivar: _editAuthorizationController
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CNVCardImportControllerPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (weak, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (retain, nonatomic) CNQueue *receivedContactsQueue; // ivar: _receivedContactsQueue
@property (readonly) Class superclass;


-(BOOL)enqueueContactsAtURL:(id)arg0 ;
-(id)authorizationCheckForSavingReceivedContacts;
-(id)contactsFromURL:(id)arg0 ;
-(id)dequeueContacts;
-(id)initWithContactStore:(id)arg0 presentationDelegate:(id)arg1 ;
-(void)authorizeAndSaveUnknownPersons;
-(void)cancelModalUnknownPersons:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)dismissContactsAndPresentNext;
-(void)editAuthorizationController:(id)arg0 authorizationDidFinishWithResult:(NSInteger)arg1 ;
-(void)enqueueContacts:(id)arg0 ;
-(void)multipleUnknownContactsViewControllerDidComplete:(id)arg0 ;
-(void)presentEnqueueResultsUIForResultContacts:(id)arg0 ;
-(void)presentImportUIForContacts:(id)arg0 ;
-(void)processNextContacts;
-(void)saveUnknownPersons:(id)arg0 ;
-(void)saveUnknownPersonsAndMarkSaveWithAuthorizationResult:(NSInteger)arg0 ;
-(void)showEditAuthorizationPane:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif