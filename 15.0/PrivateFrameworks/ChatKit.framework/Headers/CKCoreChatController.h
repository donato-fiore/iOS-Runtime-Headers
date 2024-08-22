// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCORECHATCONTROLLER_H
#define CKCORECHATCONTROLLER_H

@class IMChat, CKViewController<CKCoreTranscriptControllerProtocol>, NSString, STLockoutViewController, UIProgressView;
@protocol IMChatSendProgressDelegate, IMSystemMonitorListener, CKCoreChatControllerDelegate;


#import "CKScrollViewController.h"
#import "CKTranscriptCollectionView.h"
#import "CKConversation.h"
#import "CKFullScreenBalloonViewController.h"
#import "CKMacToolbarController.h"
#import "CKScheduledUpdater.h"

@interface CKCoreChatController : CKScrollViewController <IMChatSendProgressDelegate, IMSystemMonitorListener>



@property (nonatomic) NSInteger acknowledgmentToSend; // ivar: _acknowledgmentToSend
@property (readonly, nonatomic) CGFloat balloonMaxWidth;
@property (readonly, nonatomic) IMChat *chat;
@property (readonly, nonatomic) CKTranscriptCollectionView *collectionView;
@property (retain, nonatomic) CKViewController<CKCoreTranscriptControllerProtocol> *collectionViewController; // ivar: _collectionViewController
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKCoreChatControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAnimationsUnderTest; // ivar: _disableAnimationsUnderTest
@property (retain, nonatomic) CKFullScreenBalloonViewController *fullScreenBalloonViewController; // ivar: _fullScreenBalloonViewController
@property (readonly, nonatomic) CGFloat gradientBottomPlaceholderHeight;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreLastBalloonVisibleInMarkAsReadCheck; // ivar: _ignoreLastBalloonVisibleInMarkAsReadCheck
@property (nonatomic) BOOL initialLayoutComplete; // ivar: _initialLayoutComplete
@property (nonatomic) BOOL isShowingLockoutView; // ivar: _isShowingLockoutView
@property (retain, nonatomic) STLockoutViewController *lockoutViewController; // ivar: _lockoutViewController
@property (retain, nonatomic) CKMacToolbarController *macToolbarController; // ivar: _macToolbarController
@property (copy, nonatomic) id *overrideScrollBlock; // ivar: _overrideScrollBlock
@property (retain, nonatomic) UIProgressView *progressBar; // ivar: _progressBar
@property (retain, nonatomic) CKScheduledUpdater *refreshServiceForSendingUpdater; // ivar: _refreshServiceForSendingUpdater
@property (nonatomic) CGFloat sendProgress; // ivar: _sendProgress
@property (nonatomic) NSUInteger sendProgressSendCount; // ivar: _sendProgressSendCount
@property (nonatomic) NSUInteger sendProgressTotalCount; // ivar: _sendProgressTotalCount
@property (nonatomic, getter=isSendingMessage) BOOL sendingMessage; // ivar: _sendingMessage
@property (readonly, nonatomic) BOOL shouldDismissAfterSend;
@property (readonly, nonatomic) BOOL shouldDisplayTextEntry;
@property (nonatomic) BOOL showingInStandAloneWindow; // ivar: _showingInStandAloneWindow
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitionedFromComposing; // ivar: _transitionedFromComposing
@property (nonatomic) BOOL userInitiatedTranscriptPush; // ivar: _userInitiatedTranscriptPush
@property (nonatomic) BOOL viewIsVisible; // ivar: _viewIsVisible


+(Class)_gradientReferenceViewClass;
+(Class)transcriptControllerClass;
-(BOOL)__im_ff_hubbleTranscriptEnabled;
-(BOOL)__im_ff_isInterstellarEnabled;
-(BOOL)_controllerEligibleForSetConversation;
-(BOOL)_deviceIsPasscodeLocked;
-(BOOL)_shouldAllowReply;
-(BOOL)_shouldAllowReplyFromLockScreen;
-(BOOL)fullScreenBalloonViewControllerShouldShowHightlightButton:(id)arg0 forChatItem:(id)arg1 ;
-(BOOL)fullScreenBalloonViewControllerShouldShowReplyButton:(id)arg0 ;
-(BOOL)isInline;
-(BOOL)isSafeToMarkAsRead;
-(BOOL)itemProviderDisablesTouches;
-(BOOL)shouldListParticipantsInTitle;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 shouldSelectChatItem:(id)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestCommitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestCommitSticker:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 shouldCleanupFullscreenEffectUI:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 shouldSetupFullscreenEffectUI:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg0 ;
-(BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg0 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg0 ;
-(BOOL)wantsReplyButton;
-(CGFloat)transcriptCollectionViewController:(id)arg0 targetAlphaForChatItem:(id)arg1 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg0 showActionMenu:(BOOL)arg1 ;
-(id)_handleIDsForCurrentConversation;
-(id)_threadChatItemForReplyCountChatItem:(id)arg0 chatItems:(id)arg1 ;
-(id)gradientReferenceView;
-(id)initWithConversation:(id)arg0 ;
-(id)scrollView;
-(id)selectedChatItems;
-(id)textInputContextIdentifier;
-(id)toolbarItemForIdentifier:(id)arg0 ;
-(id)traitCollectionForTranscriptCollectionViewController:(id)arg0 ;
-(id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg0 ;
-(struct CGRect )_initialFrameForCollectionView;
-(struct CGRect )fullScreenBalloonViewController:(id)arg0 balloonFrameForChatItem:(id)arg1 ;
-(struct CGRect )fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg0 ;
-(struct CGRect )gradientFrameWithInsets:(struct UIEdgeInsets )arg0 ;
-(void)_availabilityDaemonDisconnectedNotification:(id)arg0 ;
-(void)_chatRegistryDidReloadNotification:(id)arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_conversationListFinishedMerging:(id)arg0 ;
-(void)_deregisterSendProgressDelegate;
-(void)_didSendCompositionInConversation:(id)arg0 ;
-(void)_dismissFullScreenBubbleViewControllerAnimated:(BOOL)arg0 withSendAnimation:(BOOL)arg1 completion:(id)arg2 ;
-(void)_displayNameUpdatedNotification:(id)arg0 ;
-(void)_downgradeStateChangedNotification:(id)arg0 ;
-(void)_handleAddressBookChangedNotification:(id)arg0 ;
-(void)_handleAvailabilityChangedNotification:(id)arg0 ;
-(void)_handleAvailabilityInvitationReceivedNotification:(id)arg0 ;
-(void)_handleAvailabilityStateChangedNotification:(id)arg0 ;
-(void)_handleShowInlineReplyShortcut:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_handleTapEventForBalloonView:(id)arg0 atIndexPath:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)_increaseContrastDidChangeNotification:(id)arg0 ;
-(void)_localeDidChangeNotification:(id)arg0 ;
-(void)_markAsReadIfNecessary;
-(void)_performResume;
-(void)_preferredServiceChangedNotification:(id)arg0 ;
-(void)_refreshActiveChat:(id)arg0 ;
-(void)_refreshServiceForSending;
-(void)_registerSendProgressDelegate;
-(void)_removeExistingCollectionViewController;
-(void)_setTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)_transferFinishedNotification:(id)arg0 ;
-(void)_transferRestoredNotification:(id)arg0 ;
-(void)_updateForNewPreferredService;
-(void)_updateNavigationButtons;
-(void)_updateTitleAnimated:(BOOL)arg0 ;
-(void)_willSendComposition:(id)arg0 inConversation:(id)arg1 ;
-(void)chat:(id)arg0 progressDidChange:(float)arg1 sendingMessages:(id)arg2 sendCount:(NSUInteger)arg3 totalCount:(NSUInteger)arg4 finished:(BOOL)arg5 ;
-(void)configureWithToolbarController:(id)arg0 ;
-(void)contentInsetDidChange;
-(void)contentInsetWillChange:(struct UIEdgeInsets )arg0 animated:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)copySelectedChatItemsToPasteboard;
-(void)dealloc;
-(void)dismissInlineReplyController:(BOOL)arg0 ;
-(void)fullScreenBalloonViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageAcknowledgment:(NSInteger)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageHighlight:(BOOL)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 willDisappearWithSendAnimation:(BOOL)arg1 ;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg0 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg0 ;
-(void)fullScreenBalloonViewControllerMessageHighlightButtonDidFinishAnimating:(id)arg0 ;
-(void)keyboardWillHideViaGesture;
-(void)loadView;
-(void)parentControllerDidBecomeActive;
-(void)parentControllerDidResume:(BOOL)arg0 animating:(BOOL)arg1 ;
-(void)preferredSendingServiceChanged;
-(void)prepareForSuspend;
-(void)presentMacToolbarController;
-(void)providerWillBeRemovedFromToolbarController:(id)arg0 ;
-(void)refreshServiceForSending;
-(void)registerNotifications;
-(void)registerNotificationsForConversation:(id)arg0 ;
-(void)sendComposition:(id)arg0 ;
-(void)setupScrollingForKeyboardInteraction;
-(void)setupStateForLaunchURL:(id)arg0 ;
-(void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg0 showActionMenu:(BOOL)arg1 ;
-(void)showFullScreenAcknowledgmentPickerIfNeededForBalloonAtIndexPath:(id)arg0 showActionMenu:(BOOL)arg1 ;
-(void)showInlineReplyControllerForChatItem:(id)arg0 presentKeyboard:(BOOL)arg1 ;
-(void)significantTimeChange;
-(void)systemApplicationDidResume;
-(void)systemApplicationWillEnterForeground;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 didRequestPresentationStyle:(NSUInteger)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 doubleTappedItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 longPressedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 selectedItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 showInlineReplyForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 tappedForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestStartEditingPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonViewTitleTappedForItemWithIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 collectionViewContentSizeDidChange:(struct CGSize )arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapReplyCountStatusButtonForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg0 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg0 ;
-(void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(id)arg0 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg0 ;
-(void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg0 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg0 targetContentInset:(struct UIEdgeInsets *)arg1 ;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif