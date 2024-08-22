// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMACRECIPIENTSCONTROLLER_H
#define CKMACRECIPIENTSCONTROLLER_H

@class STConversationContext, NSString, UIView, CNComposeRecipientTextView, UIScrollView;
@protocol CNComposeRecipientTextViewDelegate, CKDetailsContactsManagerDelegate, CKMacRecipientsControllerDelegate;


#import "CKViewController.h"
#import "CKManualUpdater.h"
#import "CKDetailsContactsManager.h"
#import "CKConversation.h"

@interface CKMacRecipientsController : CKViewController <CNComposeRecipientTextViewDelegate, CKDetailsContactsManagerDelegate>



@property (retain, nonatomic) CKManualUpdater *addressBookNotificationUpdater; // ivar: _addressBookNotificationUpdater
@property (nonatomic) BOOL allowedByScreenTime; // ivar: _allowedByScreenTime
@property (retain, nonatomic) CKDetailsContactsManager *contactsManager; // ivar: _contactsManager
@property (weak, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) STConversationContext *currentConversationContext; // ivar: _currentConversationContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKMacRecipientsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *detailsPopoverPresentationSourceView; // ivar: _detailsPopoverPresentationSourceView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfRowsInToField; // ivar: _numberOfRowsInToField
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNComposeRecipientTextView *toField; // ivar: _toField
@property (retain, nonatomic) UIScrollView *toFieldScrollView; // ivar: _toFieldScrollView


-(BOOL)_shouldEnableScrolling;
-(BOOL)isEditable;
-(BOOL)shouldShowVerifiedIconForRecipient:(id)arg0 ;
-(CGFloat)_toolbarHeightForNumberOfRows:(NSUInteger)arg0 ;
-(CGFloat)preferredMacToolbarHeight;
-(NSUInteger)_atomPresentationOptionsForRecipient:(id)arg0 ;
-(NSUInteger)presentationOptionsForRecipient:(id)arg0 ;
-(id)composeRecipientView:(id)arg0 contextMenuConfigurationForAtom:(id)arg1 ;
-(id)handlesForScreenTimePolicyCheck;
-(id)initWithConversation:(id)arg0 ;
-(id)recipients;
-(struct CGRect )detailsToolbarItemFrame;
-(struct CGRect )faceTimeJoinCallToolbarItemFrame;
-(struct CGRect )faceTimeStartOrLaunchCallToolbarItemFrame;
-(struct CGRect )innermostToolbarItemFrame;
-(void)_handleAddressBookChangedNotification:(id)arg0 ;
-(void)_handleAddressBookPartialChangedNotification:(id)arg0 ;
-(void)_handleConversationPreferredServiceDidChangeNotification:(id)arg0 ;
-(void)_notifyDelegatesToFieldHeightHasChanged;
-(void)_reloadCurrentRecipientData;
-(void)_showContactCardForEntity:(id)arg0 sourceView:(id)arg1 ;
-(void)_updateToFieldFrame;
-(void)addRecipients:(id)arg0 ;
-(void)composeRecipientView:(id)arg0 disambiguateRecipientForAtom:(id)arg1 ;
-(void)contactsManagerViewModelsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)refreshRecipients;
-(void)reset;
-(void)updateScreenTimePolicy;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif