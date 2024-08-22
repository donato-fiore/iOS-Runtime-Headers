// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCOMPOSERECIPIENTSELECTIONCONTROLLER_H
#define CKCOMPOSERECIPIENTSELECTIONCONTROLLER_H

@class NSString, NSArray, UIView, UIStackView, UILabel, TUSenderIdentity, CTXPCServiceSubscriptionContext;
@protocol UITextFieldDelegate, CKComposeSubscriptionSelectorButtonDelegate, CKComposeRecipientSelectionControllerDelegate;


#import "CKRecipientSelectionController.h"
#import "CKComposeSubscriptionSelectorButton.h"

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate, CKComposeSubscriptionSelectorButtonDelegate>



@property (nonatomic) BOOL contactPreferredContextSelected; // ivar: _contactPreferredContextSelected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKComposeRecipientSelectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *expandedRecipients;
@property (nonatomic, getter=isFirstAppear) BOOL firstAppear; // ivar: _firstAppear
@property (retain, nonatomic) UIView *fromFieldContainerView; // ivar: _fromFieldContainerView
@property (retain, nonatomic) UIStackView *fromFieldContentStackView; // ivar: _fromFieldContentStackView
@property (nonatomic) BOOL fromFieldIdentityChanged; // ivar: _fromFieldIdentityChanged
@property (retain, nonatomic) UIView *fromFieldSeparator; // ivar: _fromFieldSeparator
@property (retain, nonatomic) UILabel *fromTextLabel; // ivar: _fromTextLabel
@property (nonatomic) BOOL hasUserSetContextPreference; // ivar: _hasUserSetContextPreference
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *proposedRecipients;
@property (readonly, nonatomic) NSString *selectedLastAddressedOrDefaultHandle;
@property (readonly, nonatomic) TUSenderIdentity *selectedSenderIdentity; // ivar: _selectedSenderIdentity
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *selectedSubscriptionContext; // ivar: _selectedSubscriptionContext
@property (copy, nonatomic) id *sendBlock; // ivar: _sendBlock
@property (retain, nonatomic) CKComposeSubscriptionSelectorButton *subscriptionSelectorButton; // ivar: _subscriptionSelectorButton
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_hasExistingConversationWithAddedRecipient:(id)arg0 ;
-(BOOL)_isOniMessageService:(id)arg0 ;
-(BOOL)_shouldHideFromField;
-(BOOL)_updateBackfillForNewRecipients;
-(BOOL)alwaysShowSearchResultsTable;
-(BOOL)deviceHasMultipleSubscriptions;
-(BOOL)hasBackfilledConversation;
-(BOOL)hasMultipleActiveSharedSubscriptions;
-(BOOL)hasiMessageableContext;
-(BOOL)homogenizePreferredServiceForiMessage;
-(BOOL)isBeingPresentedInMacDetailsView;
-(BOOL)recipientIsiMessagable:(id)arg0 ;
-(BOOL)shouldAtomizeToConversationName;
-(BOOL)shouldInvalidateIDSRequests;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSUInteger)_fromFieldThemeForCurrentService;
-(id)_bestSenderIdentityForRecipient:(id)arg0 ;
-(id)_contactPreferredSenderIdentityForRecipient:(id)arg0 ;
-(id)_defaultSubscriptionContext;
-(id)_defaultSubscriptionContextForiMessage;
-(id)_handlesForRecipients:(id)arg0 ;
-(id)_preferrediMessageAccountName;
-(id)_subscriptionContextForSimID:(id)arg0 phoneNumber:(id)arg1 ;
-(id)autocompleteResultIdentifier:(id)arg0 ;
-(id)conversationGUIDForRecipient:(id)arg0 ;
-(id)conversationList;
-(id)menuForSubcriptionSelector;
-(id)recipients;
-(void)CKComposeSubscriptionSelectorButtonwWasTapped:(id)arg0 ;
-(void)_atomizeToConversationNameIfNecessary:(NSUInteger)arg0 ;
-(void)_lastAddressedHandleChangedNotification:(id)arg0 ;
-(void)_layoutFromFieldShouldHide:(BOOL)arg0 ;
-(void)_legacyAddRecipient:(id)arg0 ;
-(void)_recoverConversationIfJunk:(id)arg0 ;
-(void)_updateContentsOfFromField;
-(void)_updateFromFieldIfNeeded;
-(void)_updateSubscriptionContextForRecipient:(id)arg0 preferredService:(id)arg1 ;
-(void)addRecipient:(id)arg0 ;
-(void)atomizeAndInvokeBlock:(id)arg0 ;
-(void)atomizeAndSendTimeoutHandler;
-(void)configureSubscriptionContextForRecipients:(id)arg0 ;
-(void)conversationPreferredServiceDidChange;
-(void)dealloc;
-(void)loadView;
-(void)presentAlertForSubscriptionContext;
-(void)presentContextSelectionAlertWithCompletion:(id)arg0 ;
-(void)recipientSelectionControllerDidChange;
-(void)reset;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif