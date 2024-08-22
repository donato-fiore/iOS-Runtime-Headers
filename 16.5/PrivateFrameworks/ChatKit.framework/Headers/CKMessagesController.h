// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGESCONTROLLER_H
#define CKMESSAGESCONTROLLER_H

@class UISplitViewController, NSSet, UINavigationController, UIViewController<CKConversationListControllerProtocol>, NSString, CKInboxModel, UIViewController, NSMutableArray, UIViewController<CKBrowserViewControllerProtocol>, NSArray;
@protocol UISplitViewControllerDelegate, CKCoreChatControllerDelegate, IMFocusStateManagerDelegate, UINavigationControllerDelegate, UIResponderStandardEditActions, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKOnboardingControllerDelegate, CKAlertUtilitiesProtocol, CKInteractionNotificationViewDelegate, CKAlertSuppressionContextsProviding, CKConversationListControllerDelegate, CKMessagesNavigationProviding, CKSelectionViewControllerDelegate, CKInboxViewControllerDelegate, CKMacToolbarDelegate, CKMessagesControllerDelegate;


#import "CKAlertUtilities.h"
#import "CKCoreChatController.h"
#import "CKConversation.h"
#import "CKAlertController.h"
#import "CKDetailsNavigationController.h"
#import "CKInteractionNotificationView.h"
#import "CKMacToolbarController.h"
#import "CKOnboardingController.h"
#import "CKSelectionViewController.h"

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, CKCoreChatControllerDelegate, IMFocusStateManagerDelegate, UINavigationControllerDelegate, UIResponderStandardEditActions, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKOnboardingControllerDelegate, CKAlertUtilitiesProtocol, CKInteractionNotificationViewDelegate, CKAlertSuppressionContextsProviding, CKConversationListControllerDelegate, CKMessagesNavigationProviding, CKSelectionViewControllerDelegate, CKInboxViewControllerDelegate, CKMacToolbarDelegate>

 {
    unsigned int _attachmentPreviewQosClass;
}


@property (readonly, nonatomic) NSSet *alertSuppressionContexts;
@property (retain, nonatomic) CKAlertUtilities *alertUtilities; // ivar: _alertUtilities
@property (retain, nonatomic) CKCoreChatController *chatController; // ivar: _chatController
@property (retain, nonatomic) UINavigationController *chatNavigationController; // ivar: _chatNavigationController
@property (nonatomic) ? columnResizeParams; // ivar: _columnResizeParams
@property (retain, nonatomic) CKCoreChatController *composeChatController; // ivar: _composeChatController
@property (retain, nonatomic) UINavigationController *composeChatNavigationController; // ivar: _composeChatNavigationController
@property (retain, nonatomic) UIViewController<CKConversationListControllerProtocol> *conversationListController; // ivar: _conversationListController
@property (retain, nonatomic) UINavigationController *conversationListNavigationController; // ivar: _conversationListNavigationController
@property (retain, nonatomic) CKConversation *currentConversation; // ivar: _currentConversation
@property (weak, nonatomic) CKAlertController *currentSMSRelayPinAlert; // ivar: _currentSMSRelayPinAlert
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deferredHandleURLBlock; // ivar: _deferredHandleURLBlock
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CKDetailsNavigationController *detailsNavigationController; // ivar: _detailsNavigationController
@property (retain, nonatomic) CKInteractionNotificationView *dismissOnInteractionView; // ivar: _dismissOnInteractionView
@property (nonatomic) BOOL forceOrientation; // ivar: _forceOrientation
@property (readonly, nonatomic) BOOL hasDetailsNavigationController;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CKInboxModel *inboxModel; // ivar: _inboxModel
@property (retain, nonatomic) UIViewController *inboxViewController; // ivar: _inboxViewController
@property (readonly, nonatomic) BOOL isAnimatingMessageSend;
@property (readonly, nonatomic) BOOL isCollapsed;
@property (readonly, nonatomic) BOOL isDetailsNavigationControllerDetached;
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (readonly, nonatomic) BOOL isShowingChatController;
@property (readonly, nonatomic) BOOL isShowingConversationListController;
@property (retain, nonatomic) CKMacToolbarController *macToolbarController; // ivar: _macToolbarController
@property (weak, nonatomic) NSObject<CKMessagesControllerDelegate> *messagesControllerDelegate; // ivar: _messagesControllerDelegate
@property (retain, nonatomic) CKOnboardingController *onboardingController; // ivar: _onboardingController
@property (nonatomic, getter=isOscarModal) BOOL oscarModal; // ivar: _oscarModal
@property (retain, nonatomic) NSMutableArray *pendingSMSRelayPINPrompts; // ivar: _pendingSMSRelayPINPrompts
@property (nonatomic) short pinningInputViewStackCounter; // ivar: _pinningInputViewStackCounter
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *prewarmedCameraBrowser; // ivar: _prewarmedCameraBrowser
@property (retain, nonatomic) CKSelectionViewController *selectionViewController; // ivar: _selectionViewController
@property (retain, nonatomic) UIViewController *statusBarStyleViewController; // ivar: _statusBarStyleViewController
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations
@property (retain, nonatomic) NSArray *windowToConversationListConstraints; // ivar: _windowToConversationListConstraints


-(BOOL)_changeFilterModeIfNeeded;
-(BOOL)_hasCurrentConversations;
-(BOOL)_isApplyingJunkFilter;
-(BOOL)_isMessageFilteringEnabled;
-(BOOL)_isSendingNewComposeMessage;
-(BOOL)_isShowingExpandedAppViewController;
-(BOOL)_isShowingFullscreenController;
-(BOOL)_isShowingModalChatController;
-(BOOL)_isTimedOutForState:(id)arg0 ;
-(BOOL)_shouldShowInboxView;
-(BOOL)_shouldShowSMSRelayPrompt;
-(BOOL)_shouldShowSMSRelayPromptOnLaunch;
-(BOOL)_spamFilteringEnabled;
-(BOOL)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg0 ;
-(BOOL)_wantsThreeColumnLayout;
-(BOOL)becomeFirstResponder;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg0 ;
-(BOOL)currentCompositionHasContent;
-(BOOL)daemonIsConnected;
-(BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg0 ;
-(BOOL)hasRecentlyDeletedFilterSelected;
-(BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)arg0 ;
-(BOOL)inboxViewController:(id)arg0 shouldShowFilterMode:(NSUInteger)arg1 ;
-(BOOL)isComposingMessage;
-(BOOL)isDownTimeActiveForCurrentChat;
-(BOOL)isShowingInboxViewController;
-(BOOL)isShowingSelectionView;
-(BOOL)resumeToConversation:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldClearSecondaryItemsFromToolbarController:(id)arg0 ;
-(BOOL)shouldConfigureChatControllerAsCollapsed;
-(BOOL)shouldPresentOnboarding;
-(BOOL)shouldRestoreToConversationListForState:(id)arg0 ;
-(BOOL)shouldShowMakoIMessageAlert;
-(BOOL)shouldUseJunkFilteringConfigurationForSelectionViewController:(id)arg0 ;
-(BOOL)shouldUseRecentlyDeletedConfigurationForSelectionViewController:(id)arg0 ;
-(BOOL)showUnreadConversationsWithLastConversation:(id)arg0 ignoringMessages:(id)arg1 ;
-(BOOL)splitViewController:(id)arg0 collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2 ;
-(CGFloat)_calculateConversationListColumnWidth;
-(CGFloat)_macConvertLegacySidebarWidthToModernWidth:(CGFloat)arg0 ;
-(CGFloat)_sanitizeProposedConversationListWidth:(CGFloat)arg0 ;
-(CGFloat)_splitViewController:(id)arg0 constrainPrimaryColumnWidthForResizeWidth:(CGFloat)arg1 ;
-(NSInteger)splitViewController:(id)arg0 displayModeForExpandingToProposedDisplayMode:(NSInteger)arg1 ;
-(NSInteger)splitViewController:(id)arg0 topColumnForCollapsingToProposedTopColumn:(NSInteger)arg1 ;
-(NSInteger)unreadCountForCurrentFilterModeForChatController:(id)arg0 ;
-(NSUInteger)selectedCountForSelectionViewController:(id)arg0 ;
-(id)_fetchMeContactWithError:(*id)arg0 ;
-(id)_newCameraBrowser;
-(id)_recentlyDeletedDisclosureText;
-(id)_sharedBalloonPluginManager;
-(id)_unreadCountStringForFilterMode:(NSUInteger)arg0 ;
-(id)childViewControllerForStatusBarHidden;
-(id)conversationList;
-(id)conversationMatchingGUID:(id)arg0 ;
-(id)currentlyShownConversation;
-(id)dragControllerTranscriptDelegate;
-(id)firstConversationExactlyMatchingDisplayName:(id)arg0 ;
-(id)inboxItemForFilterMode:(NSUInteger)arg0 localizedTitle:(id)arg1 andSystemImage:(id)arg2 ;
-(id)inboxItemForFilterMode:(NSUInteger)arg0 title:(id)arg1 andSystemImage:(id)arg2 ;
-(id)init;
-(id)initAsOscarModal;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)junkModalMessagesController;
-(id)navigationBarBackdropLayerGroupNameForChatController:(id)arg0 ;
-(id)newInboxModel;
-(id)preferredFocusEnvironments;
-(id)presentingViewControllerForOnboardingController:(id)arg0 ;
-(id)secondaryTextForSelectionViewController:(id)arg0 ;
-(id)splitViewController:(id)arg0 separateSecondaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(void)__updateAlertSuppressionContext;
-(void)_appStateChange:(id)arg0 ;
-(void)_appStateDidResumeFromInactive:(id)arg0 ;
-(void)_chatRegistryDidLoad:(id)arg0 ;
-(void)_checkPushToTranscriptTimingWithStartTime:(CGFloat)arg0 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg0 ;
-(void)_conversationLeft:(id)arg0 ;
-(void)_conversationListFinishedMerging:(id)arg0 ;
-(void)_handleInitialLoad;
-(void)_hideConversationListForIPadPPTTest;
-(void)_junkConversationsRecovered:(id)arg0 ;
-(void)_keyCommandChangeConversation:(BOOL)arg0 ;
-(void)_pinVerificationShouldDismiss:(id)arg0 ;
-(void)_populateChatNavigationControllerWithSelection;
-(void)_presentAppStoreWithLaunchURL:(id)arg0 fromSourceApplication:(id)arg1 ;
-(void)_setEntryViewHidden:(BOOL)arg0 ;
-(void)_setIsShowingNoSelectionUI:(BOOL)arg0 ;
-(void)_showNewComposeWithRecipients:(id)arg0 composition:(id)arg1 bizIntent:(id)arg2 launchPluginWithBundleID:(id)arg3 pluginLaunchPayload:(id)arg4 animated:(BOOL)arg5 sendMessageHandler:(id)arg6 ;
-(void)_showNextSMSRelayPINPrompt;
-(void)_showSMSRelayPromptIfNeeded;
-(void)_showSMSRelayPromptOnLaunchIfNeeded;
-(void)_smsRelayPINReceived:(id)arg0 ;
-(void)_splitViewController:(id)arg0 willBeginResizingColumn:(NSInteger)arg1 ;
-(void)_unreadCountDidChange:(id)arg0 ;
-(void)_updateAlertSuppressionContext;
-(void)_updateConversationListWidth;
-(void)_updateInboxWidth;
-(void)_updateSelectionViewWithCount:(NSInteger)arg0 ;
-(void)applicationWillResume:(id)arg0 ;
-(void)cancelAndDestroyComposition;
-(void)cancelNewMessageCompositionAnimated:(BOOL)arg0 ;
-(void)catalystFilterModeSelected:(NSUInteger)arg0 ;
-(void)catalystFiltersNavigationBackButtonTapped:(id)arg0 ;
-(void)changeFilterMode:(NSUInteger)arg0 ;
-(void)chatController:(id)arg0 didDetachDetailsNavigationController:(id)arg1 ;
-(void)chatController:(id)arg0 didReportSpamForConversation:(id)arg1 ;
-(void)chatController:(id)arg0 didSendCompositionInConversation:(id)arg1 ;
-(void)chatController:(id)arg0 forwardComposition:(id)arg1 ;
-(void)chatController:(id)arg0 requestDeleteJunkConversation:(id)arg1 ;
-(void)chatController:(id)arg0 requestRecoverJunkConversation:(id)arg1 ;
-(void)chatController:(id)arg0 willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)cleanUpBizNavBarForConversation:(id)arg0 ;
-(void)commitPayload:(id)arg0 ;
-(void)commitSticker:(id)arg0 ;
-(void)commitSticker:(id)arg0 withDragTarget:(id)arg1 ;
-(void)composeChatController:(id)arg0 didSelectNewConversation:(id)arg1 ;
-(void)composeChatControllerDidCancelComposition:(id)arg0 ;
-(void)conversationListControllerTappedDeleteNewMessage:(id)arg0 ;
-(void)conversationListDidBeginMultipleSelectionWithInitialSelectedCount:(NSInteger)arg0 ;
-(void)conversationListFailedToSelectShownConversation;
-(void)conversationListIsDeletingConversations:(id)arg0 ;
-(void)conversationListUpdatedSelectedIndexPathCount:(NSInteger)arg0 ;
-(void)conversationListWillBeginEditing:(BOOL)arg0 ;
-(void)dealloc;
-(void)deleteAllButtonPressedOnSelectionViewController:(id)arg0 ;
-(void)deleteButtonPressedOnSelectionViewController:(id)arg0 ;
-(void)deleteConversation:(id)arg0 ;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg0 ;
-(void)didFinishCheckingMissingCarrierSetting;
-(void)didReceiveMemoryWarning;
-(void)didSelectFilterFromViewMenu:(id)arg0 ;
-(void)dismiss;
-(void)dismissAndReloadInputViews:(BOOL)arg0 ;
-(void)dismissAndReopenDetailsNavigationController;
-(void)dismissChatControllerIfVisibleAnimated:(BOOL)arg0 ;
-(void)dismissConversationListAnimated:(BOOL)arg0 ;
-(void)dismissDetailsControllerAnimated:(BOOL)arg0 ;
-(void)dismissDetailsNavigationController;
-(void)dismissKeyboardIfVisible;
-(void)dismissPhotosGridIfNeeded;
-(void)dismissToKeyboard:(BOOL)arg0 ;
-(void)escButtonPressed:(id)arg0 ;
-(void)executeDeferredHandleURLBlock;
-(void)executeDeferredTasks;
-(void)focusStateDidChange;
-(void)inboxViewController:(id)arg0 didSelectFilterMode:(NSUInteger)arg1 ;
-(void)initialize;
-(void)interactionNotificationViewWasTapped:(id)arg0 ;
-(void)keyCommandCompose:(id)arg0 ;
-(void)keyCommandDeleteConversation:(id)arg0 ;
-(void)keyCommandFind:(id)arg0 ;
-(void)keyCommandNextConversation:(id)arg0 ;
-(void)keyCommandOpenConversationInNewWindow:(id)arg0 ;
-(void)keyCommandPreviousConversation:(id)arg0 ;
-(void)keyCommandSelectFirstActiveConversation;
-(void)keyCommandSelectPinnedConversation:(id)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)notifyThatKeepMessagesSettingWasResetIfNeeded;
-(void)onboardingControllerDidFinish:(id)arg0 ;
-(void)openURL:(id)arg0 applicationIdentifier:(id)arg1 pluginID:(id)arg2 completionHandler:(id)arg3 ;
-(void)openURL:(id)arg0 pluginID:(id)arg1 completionHandler:(id)arg2 ;
-(void)parentControllerDidBecomeActive;
-(void)parentControllerDidResume:(BOOL)arg0 animating:(BOOL)arg1 ;
-(void)performJunkRecoveryForJunkModalMessagesController:(id)arg0 ;
-(void)performResumeDeferredSetup;
-(void)performSearchForQuery:(id)arg0 ;
-(void)performVisibleAppPluginIconPrefetch:(id)arg0 ;
-(void)persistColumnWidths:(id)arg0 ;
-(void)popToConversationListIfNecessaryAnimated:(BOOL)arg0 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)presentCKAlertController:(id)arg0 ;
-(void)presentDetailsNavigationController:(id)arg0 ;
-(void)presentDetailsViewControllerAnimated:(BOOL)arg0 ;
-(void)presentFocusStatusAuthorizationAlertIfNecessary;
-(void)presentFromPrefsPresentationController;
-(void)presentOnboardingViewController:(id)arg0 ;
-(void)presentOnboardingViewControllerIfNeeded;
-(void)presentPhotoPicker:(id)arg0 ;
-(void)presentPrivacyView:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)prewarmCameraIfNecessary;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg0 ;
-(void)recoverButtonPressedOnSelectionViewController:(id)arg0 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 ;
-(void)screenTimeOKPressedForChatController:(id)arg0 ;
-(void)setLocalUserIsTyping:(BOOL)arg0 ;
-(void)setupBizNavBarForConversation:(id)arg0 ;
-(void)setupCKDismissOnInteractionView;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 forceToTranscript:(BOOL)arg2 keepAllCurrentlyLoadedMessages:(BOOL)arg3 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 forceToTranscript:(BOOL)arg2 keepAllCurrentlyLoadedMessages:(BOOL)arg3 userInitiated:(BOOL)arg4 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 keepAllCurrentlyLoadedMessages:(BOOL)arg2 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(void)showConversationAndMessageForChatGUID:(id)arg0 messageGUID:(id)arg1 animate:(BOOL)arg2 ;
-(void)showConversationAndMessageForChatGUID:(id)arg0 messageGUID:(id)arg1 withInlineReplyOverlay:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)showConversationInNewWindow:(id)arg0 ;
-(void)showConversationListWithAnimation:(BOOL)arg0 ;
-(void)showDetailViewController:(id)arg0 ;
-(void)showInboxViewControllerAnimated:(BOOL)arg0 ;
-(void)showLockdownAlertForBusinessChat;
-(void)showMakoIMessageAlert;
-(void)showNewMessageCompositionPanel;
-(void)showNewMessageCompositionPanelAppendingToExistingDraft:(id)arg0 animated:(BOOL)arg1 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 animated:(BOOL)arg2 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 animated:(BOOL)arg2 bizIntent:(id)arg3 launchPluginWithBundleID:(id)arg4 pluginLaunchPayload:(id)arg5 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 appendToExistingDraft:(BOOL)arg2 suggestedReplies:(id)arg3 animated:(BOOL)arg4 bizIntent:(id)arg5 launchPluginWithBundleID:(id)arg6 pluginLaunchPayload:(id)arg7 sendMessageHandler:(id)arg8 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 suggestedReplies:(id)arg2 animated:(BOOL)arg3 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 suggestedReplies:(id)arg2 animated:(BOOL)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6 sendMessageHandler:(id)arg7 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 suggestedReplies:(id)arg2 animated:(BOOL)arg3 sendMessageHandler:(id)arg4 ;
-(void)showStoreForURL:(id)arg0 fromSourceApplication:(id)arg1 ;
-(void)showSurfAppForCurrentConversationWithAmount:(CGFloat)arg0 currency:(id)arg1 ;
-(void)splitViewController:(id)arg0 willHideColumn:(NSInteger)arg1 ;
-(void)splitViewController:(id)arg0 willShowColumn:(NSInteger)arg1 ;
-(void)splitViewControllerDidCollapse:(id)arg0 ;
-(void)splitViewControllerDidExpand:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 ;
-(void)stopForcingOrientation;
-(void)tearDownCKDismissOnInteractionView;
-(void)teardownCamera;
-(void)updateColumnWidths;
-(void)updateCompositionInEntryViewWithComposition:(id)arg0 ;
-(void)updateForNoConversationSelected;
-(void)updateInboxAndConversationList;
-(void)updateInterfaceOrientationsAnimated:(BOOL)arg0 ;
-(void)updateSupportedInterfaceOrientations:(NSUInteger)arg0 ;
-(void)updatedFilterMode:(NSUInteger)arg0 previousFilterMode:(NSUInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif