// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMESSAGESCONTROLLER_H
#define CKMESSAGESCONTROLLER_H

@class UISplitViewController, NSMutableArray, NSSet, UINavigationController, UIViewController<CKConversationListControllerProtocol>, NSString, CKInboxModel, UIViewController, UIViewController<CKBrowserViewControllerProtocol>;
@protocol UISplitViewControllerDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKOnboardingControllerDelegate, CKAlertUtilitiesProtocol, CKAlertSuppressionContextsProviding, CKConversationListControllerDelegate, CKMessagesControllerDelegate;


#import "CKAlertUtilities.h"
#import "CKBlankViewController.h"
#import "CKCoreChatController.h"
#import "CKConversation.h"
#import "CKAlertController.h"
#import "CKDetailsNavigationController.h"
#import "CKMacToolbarController.h"
#import "CKOnboardingController.h"

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKOnboardingControllerDelegate, CKAlertUtilitiesProtocol, CKAlertSuppressionContextsProviding, CKConversationListControllerDelegate>

 {
    NSMutableArray *_conversationCache;
    unsigned int _attachmentPreviewQosClass;
}


@property (readonly, nonatomic) NSSet *alertSuppressionContexts;
@property (retain, nonatomic) CKAlertUtilities *alertUtilities; // ivar: _alertUtilities
@property (retain, nonatomic) CKBlankViewController *blankViewController; // ivar: _blankViewController
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
@property (readonly, nonatomic) BOOL hasDetailsNavigationController;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CKInboxModel *inboxModel; // ivar: _inboxModel
@property (retain, nonatomic) UIViewController *inboxViewController; // ivar: _inboxViewController
@property (readonly, nonatomic) BOOL isAnimatingMessageSend;
@property (readonly, nonatomic) BOOL isCollapsed;
@property (readonly, nonatomic) BOOL isComposingMessage;
@property (readonly, nonatomic) BOOL isDetailsNavigationControllerDetached;
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (readonly, nonatomic) BOOL isShowingChatController;
@property (readonly, nonatomic) BOOL isShowingConversationListController;
@property (readonly, nonatomic) BOOL isThreeColumnLayoutEnabled;
@property (retain, nonatomic) CKMacToolbarController *macToolbarController; // ivar: _macToolbarController
@property (weak, nonatomic) NSObject<CKMessagesControllerDelegate> *messagesControllerDelegate; // ivar: _messagesControllerDelegate
@property (retain, nonatomic) CKOnboardingController *onboardingController; // ivar: _onboardingController
@property (retain, nonatomic) NSMutableArray *pendingSMSRelayPINPrompts; // ivar: _pendingSMSRelayPINPrompts
@property (nonatomic) short pinningInputViewStackCounter; // ivar: _pinningInputViewStackCounter
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *prewarmedCameraBrowser; // ivar: _prewarmedCameraBrowser
@property (retain, nonatomic) UIViewController *statusBarStyleViewController; // ivar: _statusBarStyleViewController
@property (readonly) Class superclass;


-(BOOL)__im_ff_newInboxViewEnabled;
-(BOOL)__im_ff_systemImageAdoptionEnabled;
-(BOOL)_hasCurrentConversations;
-(BOOL)_isMessageFilteringEnabled;
-(BOOL)_isShowingExpandedAppViewController;
-(BOOL)_isShowingFullscreenController;
-(BOOL)_isShowingModalChatController;
-(BOOL)_shouldShowInboxView;
-(BOOL)_shouldShowSMSRelayPrompt;
-(BOOL)_shouldShowSMSRelayPromptOnLaunch;
-(BOOL)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg0 ;
-(BOOL)currentCompositionHasContent;
-(BOOL)daemonIsConnected;
-(BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg0 ;
-(BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)arg0 ;
-(BOOL)isDownTimeActiveForCurrentChat;
-(BOOL)isShowingBlankChatController;
-(BOOL)isShowingDirtyComposeModalView;
-(BOOL)isShowingInboxViewController;
-(BOOL)resumeToConversation:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldShowImessageAlert;
-(BOOL)showUnreadConversationsWithLastConversation:(id)arg0 ignoringMessages:(id)arg1 ;
-(BOOL)splitViewController:(id)arg0 collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2 ;
-(CGFloat)_macConvertLegacySidebarWidthToModernWidth:(CGFloat)arg0 ;
-(CGFloat)_sanitizeProposedSidebarWidth:(CGFloat)arg0 ;
-(CGFloat)_splitViewController:(id)arg0 constrainPrimaryColumnWidthForResizeWidth:(CGFloat)arg1 ;
-(CGFloat)calculatedPrimaryColumnWidth_iOS;
-(NSInteger)splitViewController:(id)arg0 displayModeForExpandingToProposedDisplayMode:(NSInteger)arg1 ;
-(NSInteger)splitViewController:(id)arg0 topColumnForCollapsingToProposedTopColumn:(NSInteger)arg1 ;
-(NSInteger)unreadCountForCurrentFilterModeForChatController:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_fetchMeContactWithError:(*id)arg0 ;
-(id)_newCameraBrowser;
-(id)_sharedBalloonPluginManager;
-(id)_unreadCountStringForFilterMode:(NSUInteger)arg0 ;
-(id)childViewControllerForStatusBarHidden;
-(id)conversationList;
-(id)dragControllerTranscriptDelegate;
-(id)inboxItemForFilterMode:(NSUInteger)arg0 title:(id)arg1 andSystemImage:(id)arg2 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)navigationBarBackdropLayerGroupNameForChatController:(id)arg0 ;
-(id)newInboxModel;
-(id)preferredFocusEnvironments;
-(id)presentingViewControllerForOnboardingController:(id)arg0 ;
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
-(void)_keyCommandChangeConversation:(BOOL)arg0 ;
-(void)_pinVerificationShouldDismiss:(id)arg0 ;
-(void)_popToConversationListAndPerformBlockAnimated:(BOOL)arg0 block:(id)arg1 ;
-(void)_presentAppStoreWithLaunchURL:(id)arg0 fromSourceApplication:(id)arg1 ;
-(void)_setEntryViewHidden:(BOOL)arg0 ;
-(void)_setIsShowingNoSelectionUI:(BOOL)arg0 ;
-(void)_showNextSMSRelayPINPrompt;
-(void)_showSMSRelayPromptIfNeeded;
-(void)_showSMSRelayPromptOnLaunchIfNeeded;
-(void)_smsRelayPINReceived:(id)arg0 ;
-(void)_splitViewController:(id)arg0 willBeginResizingColumn:(NSInteger)arg1 ;
-(void)_unreadCountDidChange:(id)arg0 ;
-(void)_updateAlertSuppressionContext;
-(void)_updateSidebarWidth;
-(void)applicationWillResume:(id)arg0 ;
-(void)cancelAndDestroyCompositionWithoutDismiss;
-(void)cancelNewMessageComposition;
-(void)changeFilterMode:(NSUInteger)arg0 ;
-(void)chatController:(id)arg0 didDetachDetailsNavigationController:(id)arg1 ;
-(void)chatController:(id)arg0 didReportSpamForConversation:(id)arg1 ;
-(void)chatController:(id)arg0 didSendCompositionInConversation:(id)arg1 ;
-(void)chatController:(id)arg0 forwardComposition:(id)arg1 ;
-(void)chatController:(id)arg0 willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)cleanUpBizNavBarForConversation:(id)arg0 ;
-(void)commitPayload:(id)arg0 ;
-(void)commitSticker:(id)arg0 ;
-(void)commitSticker:(id)arg0 withDragTarget:(id)arg1 ;
-(void)composeChatController:(id)arg0 didSelectNewConversation:(id)arg1 ;
-(void)composeChatControllerDidCancelComposition:(id)arg0 ;
-(void)configureWithToolbarController:(id)arg0 ;
-(void)conversationListControllerTappedDeleteNewMessage:(id)arg0 ;
-(void)conversationListIsDeletingConversations:(id)arg0 ;
-(void)conversationListWillBeginEditing:(BOOL)arg0 ;
-(void)dealloc;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg0 ;
-(void)didFinishCheckingMissingCarrierSetting;
-(void)didReceiveMemoryWarning;
-(void)dismiss;
-(void)dismissAndReloadInputViews:(BOOL)arg0 ;
-(void)dismissAndReopenDetailsNavigationController;
-(void)dismissDetailsNavigationController;
-(void)dismissKeyboardIfUp;
-(void)dismissPhotosGridIfNeeded;
-(void)dismissToKeyboard:(BOOL)arg0 ;
-(void)executeDeferredHandleURLBlock;
-(void)executeDeferredTasks;
-(void)initialize;
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
-(void)performResumeDeferredSetup;
-(void)performSearchForQuery:(id)arg0 ;
-(void)performVisibleAppPluginIconPrefetch:(id)arg0 ;
-(void)persistSidebarWidth:(id)arg0 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)presentCKAlertController:(id)arg0 ;
-(void)presentDetailsNavigationController:(id)arg0 ;
-(void)presentFocusStatusAuthorizationAlertIfNecessary;
-(void)presentMacToolbarController;
-(void)presentOnboardingViewController:(id)arg0 ;
-(void)presentOnboardingViewControllerIfNeeded;
-(void)presentPrivacyView:(id)arg0 ;
-(void)prewarmCameraIfNecessary;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg0 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 ;
-(void)screenTimeOKPressedForChatController:(id)arg0 ;
-(void)setDefaultForUIKitLogging;
-(void)setLocalUserIsTyping:(BOOL)arg0 ;
-(void)setupBizNavBarForConversation:(id)arg0 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 forceToTranscript:(BOOL)arg2 keepAllCurrentlyLoadedMessages:(BOOL)arg3 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 forceToTranscript:(BOOL)arg2 keepAllCurrentlyLoadedMessages:(BOOL)arg3 userInitiated:(BOOL)arg4 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 keepAllCurrentlyLoadedMessages:(BOOL)arg2 ;
-(void)showConversation:(id)arg0 animate:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(void)showConversationAndMessageForChatGUID:(id)arg0 messageGUID:(id)arg1 animate:(BOOL)arg2 ;
-(void)showConversationAndMessageForChatGUID:(id)arg0 messageGUID:(id)arg1 withInlineReplyOverlay:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)showConversationAndMessageForSearchURL:(id)arg0 ;
-(void)showConversationInNewWindow:(id)arg0 ;
-(void)showConversationList:(BOOL)arg0 ;
-(void)showDetailViewController:(id)arg0 ;
-(void)showInboxViewController:(BOOL)arg0 ;
-(void)showNewMessageCompositionPanelAppendingToExistingDraft:(id)arg0 animated:(BOOL)arg1 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 animated:(BOOL)arg2 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 animated:(BOOL)arg2 bizIntent:(id)arg3 launchPluginWithBundleID:(id)arg4 pluginLaunchPayload:(id)arg5 ;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg0 composition:(id)arg1 appendToExistingDraft:(BOOL)arg2 animated:(BOOL)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6 ;
-(void)showStoreForURL:(id)arg0 fromSourceApplication:(id)arg1 ;
-(void)showSurfAppForCurrentConversationWithAmount:(CGFloat)arg0 currency:(id)arg1 ;
-(void)splitViewController:(id)arg0 willShowColumn:(NSInteger)arg1 ;
-(void)splitViewControllerDidCollapse:(id)arg0 ;
-(void)splitViewControllerDidExpand:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 ;
-(void)teardownCamera;
-(void)updateCompositionInEntryViewWithComposition:(id)arg0 ;
-(void)updateConversationListNavigationControllerViewStack;
-(void)updateInboxBackButton;
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