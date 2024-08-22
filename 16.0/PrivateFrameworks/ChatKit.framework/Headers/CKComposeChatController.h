// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCOMPOSECHATCONTROLLER_H
#define CKCOMPOSECHATCONTROLLER_H

@class NSDictionary, IMHandle, UINavigationController, UIBarButtonItem, NSString, NSArray, UIView;
@protocol CKComposeRecipientSelectionControllerDelegate, CKBusinessInfoViewDelegate, CKMacToolbarItemProvider, OS_dispatch_queue, CKComposeChatControllerDelegate;


#import "CKChatController.h"
#import "CKTranscriptMultilineLabelCell.h"
#import "CKBusinessInfoView.h"
#import "CKComposeRecipientSelectionController.h"
#import "CKComposeNavbarManager.h"
#import "CKComposition.h"

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate, CKBusinessInfoViewDelegate, CKMacToolbarItemProvider>

 {
    NSUInteger _blackholeAlertStatus;
    NSObject<OS_dispatch_queue> *_blackholeAlertStatusQueue;
}


@property (retain, nonatomic) NSDictionary *bizIntent; // ivar: _bizIntent
@property (retain, nonatomic) CKTranscriptMultilineLabelCell *blackholeAlertView; // ivar: _blackholeAlertView
@property (retain, nonatomic) IMHandle *businessHandle; // ivar: _businessHandle
@property (retain, nonatomic) CKBusinessInfoView *businessInfoView; // ivar: _businessInfoView
@property (retain, nonatomic) UINavigationController *catalystComposeNavigationController; // ivar: _catalystComposeNavigationController
@property (retain, nonatomic) UIBarButtonItem *composeCancelItem; // ivar: _composeCancelItem
@property (retain, nonatomic) CKComposeRecipientSelectionController *composeRecipientSelectionController; // ivar: _composeRecipientSelectionController
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deferredSendAnimationBlock; // ivar: _deferredSendAnimationBlock
@property (weak, nonatomic) NSObject<CKComposeChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreEmailsWhenSending; // ivar: _ignoreEmailsWhenSending
@property (nonatomic) BOOL ignoreKeyboardNotifications; // ivar: _ignoreKeyboardNotifications
@property (retain, nonatomic) NSString *lastAddressedHandle; // ivar: _lastAddressedHandle
@property (retain, nonatomic) NSString *lastAddressedSIMID; // ivar: _lastAddressedSIMID
@property (retain, nonatomic) CKComposeNavbarManager *navbarManager; // ivar: _navbarManager
@property (nonatomic) BOOL newComposeCancelled; // ivar: _newComposeCancelled
@property (retain, nonatomic) NSString *overrideTitle; // ivar: _overrideTitle
@property (retain, nonatomic) CKComposition *prepopulatedComposition; // ivar: _prepopulatedComposition
@property (retain, nonatomic) NSArray *prepopulatedRecipients; // ivar: _prepopulatedRecipients
@property (readonly, nonatomic) NSArray *proposedRecipients;
@property (readonly, nonatomic) UIEdgeInsets recipientSelectionAdditionalSearchListInsets;
@property (readonly, nonatomic) UIView *recipientSelectionHeaderDecorationView;
@property (readonly, nonatomic) NSInteger recipientSelectionUserInterfaceStyleOverride;
@property (nonatomic) BOOL sendingViaCardUI; // ivar: _sendingViaCardUI
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unatomizedRecipientText;
@property (retain, nonatomic) UIView *virtualToolbarItem; // ivar: _virtualToolbarItem


-(BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
-(BOOL)_deviceHasMultipleActiveSubscriptions;
-(BOOL)_isAllowlistedBusinessRecipient;
-(BOOL)_isBusinessConversation;
-(BOOL)_isNewBusinessConversation;
-(BOOL)_shouldRestoreDraftState;
-(BOOL)_shouldSetToFieldAsFirstResponder;
-(BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canShowBusinessOnboarding;
-(BOOL)hasFailedRecipients;
-(BOOL)hasUnreachableEmergencyRecipient;
-(BOOL)isComposingRecipient;
-(BOOL)isSafeToMarkAsRead;
-(BOOL)itemProviderDisablesTouches;
-(BOOL)prefersBottomDividerHidden;
-(BOOL)reparentToolbarItem:(id)arg0 ;
-(BOOL)shouldForceToSMSForConversation:(id)arg0 forRecipient:(id)arg1 ;
-(BOOL)shouldInsertMacCatalystEntryView;
-(BOOL)shouldListParticipantsInTitle;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(BOOL)shouldRemoveMacCatalystEntryView;
-(BOOL)shouldShowEntryView;
-(BOOL)shouldUseMacRecipientsView;
-(BOOL)shouldUseNavigationBarCanvasView;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg0 ;
-(BOOL)transcriptCollectionViewControllerShouldForceOpaqueMask:(id)arg0 ;
-(CGFloat)_entryViewTopInsetPadding;
-(CGFloat)topInsetPadding;
-(CGFloat)virtualToolbarPreferredHeight;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)userInterfaceStyleOverrideForRecipientSelectionConroller:(id)arg0 ;
-(id)_anisetteData;
-(id)_updateSendingIdentity;
-(id)chatForIMHandle:(id)arg0 ;
-(id)handleForRecipientNormalizedAddress:(id)arg0 ;
-(id)headerDecorationViewForRecipientSelectionConroller:(id)arg0 ;
-(id)initWithRecipientAddresses:(id)arg0 composition:(id)arg1 bizIntent:(id)arg2 ;
-(id)inputAccessoryView;
-(id)inputAccessoryViewController;
-(id)outgoingComposeViewForSendAnimation;
-(id)preferredFocusEnvironments;
-(id)textViewOnscreenWithEntryView;
-(id)toolbarItemForIdentifier:(id)arg0 ;
-(id)virtualView;
-(struct UIEdgeInsets )additionalSearchResultsEdgeInsetsForRecipientSelectionController:(id)arg0 ;
-(struct UIEdgeInsets )macToolbarInsets;
-(struct UIEdgeInsets )navigationBarInsetsForRecipientSelectionController:(id)arg0 ;
-(struct UIEdgeInsets )virtualToolbarContentInsets;
-(void)_configureTitleView;
-(void)_determineSpamFilterHandshakeStateForAccount:(id)arg0 ;
-(void)_invalidateBlackholeAlertView;
-(void)_passKitUIDismissed:(id)arg0 ;
-(void)_prepareForSendFromCardIfNecessaryAndSend:(id)arg0 ;
-(void)_processBizIntentIfNeeded;
-(void)_saveDraftState;
-(void)_setConversationDeferredSetup;
-(void)_showOrHideNicknameBannerIfNeeded;
-(void)_triggerRecipientFinalization;
-(void)_updateBizNavbarIfNecessary;
-(void)_updateBlackholeAlertView;
-(void)_updateBusinessInfoIfNecessary;
-(void)_updateNavigationButtons;
-(void)_updateNavigationUI;
-(void)_updateTitleAnimated:(BOOL)arg0 ;
-(void)addBizIntentToConversation:(id)arg0 ;
-(void)adjustCollectionViewFrameIfNeeded;
-(void)businessInfoView:(id)arg0 infoButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)cancelCompose;
-(void)configureWithToolbarController:(id)arg0 ;
-(void)conversationLeft;
-(void)dealloc;
-(void)didFinishShowingBusinessOnboarding;
-(void)handleAddressBookChange:(id)arg0 ;
-(void)handleCancelAction:(id)arg0 ;
-(void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg0 ;
-(void)keyboardWillShowOrHide:(id)arg0 ;
-(void)layoutBusinessInfoViewIfNecessary;
-(void)messageEntryViewDidChange:(id)arg0 ;
-(void)messageEntryViewSendButtonHit:(id)arg0 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg0 ;
-(void)parentControllerDidResume:(BOOL)arg0 animating:(BOOL)arg1 ;
-(void)prepareForSuspend;
-(void)providerWillBeRemovedFromToolbarController:(id)arg0 ;
-(void)recipientSelectionController:(id)arg0 didFinishAvailaiblityLookupForRecipient:(id)arg1 ;
-(void)recipientSelectionController:(id)arg0 didSelectConversation:(id)arg1 isiMessagable:(BOOL)arg2 ;
-(void)recipientSelectionController:(id)arg0 textDidChange:(id)arg1 ;
-(void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg0 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg0 ;
-(void)recipientSelectionControllerDidLoadFromField;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg0 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg0 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg0 ;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg0 ;
-(void)recipientSelectionControllerShouldResignFirstResponder:(id)arg0 ;
-(void)recipientSelectionControllerTabPressed:(id)arg0 ;
-(void)reloadEntryViewIfNeeded;
-(void)restoreInputAfterSearchPresentation;
-(void)sendAnimationManagerWillStartAnimation:(id)arg0 context:(id)arg1 ;
-(void)sendComposition:(id)arg0 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 tappedForChatItem:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif