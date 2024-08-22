// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCHATCONTROLLER_H
#define CKCHATCONTROLLER_H

@class UIToolbar, CKAudioTrimViewController, IMScheduledUpdater, NSArray, UIViewController, UINavigationController, CNContactPickerViewController, STConversationContext, NSString, UIViewController<CKEffectPickerViewControllerProtocol>, UIWindow, IMPluginPayload, SGFoundInSuggestionPresenter, UIImagePickerController, UIView, UIMenu, UIKeyboardInputMode, SGSuggestionPresenter, CADisplayLink, NSLayoutConstraint, UIView<SGBannerProtocol>, UITapGestureRecognizer, IMTimingCollection, TPKContent, TPKContentController, TPKContentPopoverViewController, NSNumber, UIContextMenuInteraction;
@protocol CKMacToolbarItemProvider, CKMacRecipientsControllerDelegate, CKStickerDetailViewControllerDelegate, UIContextMenuInteractionDelegate, CKTranscriptCollectionViewControllerDelegate_Internal, CKEffectPickerViewControllerDelegate, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider, UIInteractionProgressObserver, QLPreviewControllerConformingDelegate, QLPreviewControllerDelegate, CKReaderViewControllerDelegate, PKAddPassesViewControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, CKVideoMessageRecordingViewControllerDelegate, CKActionMenuGestureRecognizerButtonDelegate, PHPhotoLibraryChangeObserver, CNContactPickerDelegate, CKNavigationBarTitleControllerDelegate, CKMessageEntryViewDelegate, CKReaderViewControllerDelegate, CKTrimControllerDelegate, AFContextProvider, UIGestureRecognizerDelegate, CKChatInputControllerDelegate, CKFullScreenBalloonViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SGSuggestionPresenterDelegate, CKTranscriptSharingSuggestionDelegate, CKCollaborationNoticeSuggestionDelegate, CKDetailsControllerDelegate, _UIClickInteractionDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate, UIPopoverPresentationControllerDelegate, UIDropInteractionDelegate, UITextDropDelegate, UITextPasteDelegate, CKTranscriptOverlayTransitionDelegate, CKMessageEditingViewControllerInteractionDelegate, CKExtensionConsumer, CKFunCameraViewControllerDelegate, ILClassificationUIExtensionHostViewControllerDelegate, CKNicknameBannerViewDelegate, CKOnboardingControllerDelegate, CKNicknameUpdatesViewControllerDelegate, CKInlineReplyInteractionDelegate, CKBannerUpdatesViewDelegate, STLockoutViewControllerDelegate, CKDetailsContactsManagerDelegate, TPKContentControllerDelegate, CKCommunicationSafetyEDUScreenProtocol, UIDragInteractionDelegate, CKNavbarCanvasViewControllerDelegate, CKMacToolbarItemProvider, CKChatControllerDelegate, UIDragSession, UIDropSession, CKExternalEntryViewHost, CKExternalPluginViewControllerProvider, OS_dispatch_group;


#import "CKCoreChatController.h"
#import "CKComposition.h"
#import "CKBusinessMacToolbarViewController.h"
#import "CKNicknameUpdate.h"
#import "CKDetailsContactsManager.h"
#import "CKMacBarButtonToolbarItem.h"
#import "CKEffectPickerViewController.h"
#import "CKQLPreviewController.h"
#import "CKMessageEntryView.h"
#import "CKMessageEntryViewController.h"
#import "CKFunCameraViewController.h"
#import "CKGroupUpdateBannerView.h"
#import "CKInlineReplyChatController.h"
#import "CKChatInputController.h"
#import "CKMacToolbarItem.h"
#import "CKMacMenuToolbarItem.h"
#import "CKMacRecipientsController.h"
#import "CKMacToolbarController.h"
#import "CKMacToolBarImageProperties.h"
#import "CKMediaObject.h"
#import "CKMessageEditingViewController.h"
#import "CKNavbarCanvasViewController.h"
#import "CKNavigationBarTitleController.h"
#import "CKNicknameBannerView.h"
#import "CKNicknameUpdatesViewController.h"
#import "CKOnboardingController.h"
#import "CKAttachmentMessagePartChatItem.h"
#import "CKMediaObjectAssetDataSourceManager.h"
#import "CKAggregateAttachmentMessagePartChatItem.h"
#import "CKInvisibleInkEffectController.h"
#import "CKQLPreviewControllerDataSource.h"
#import "CKRaiseGesture.h"
#import "CKRotationLockUtility.h"
#import "CKThrowAnimationManager.h"
#import "_TtC7ChatKit16CKChatTipManager.h"
#import "CKScheduledUpdater.h"
#import "CKTranscriptSharingSuggestion.h"
#import "CKUnexpectedlyLoggedOutNotificationView.h"
#import "CKUnreadBannerView.h"
#import "CKVideoMessageRecordingViewController.h"
#import "CKVideoTrimController.h"

@interface CKChatController : CKCoreChatController <CKMacToolbarItemProvider, CKMacRecipientsControllerDelegate, CKStickerDetailViewControllerDelegate, UIContextMenuInteractionDelegate, CKTranscriptCollectionViewControllerDelegate_Internal, CKEffectPickerViewControllerDelegate, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider, UIInteractionProgressObserver, QLPreviewControllerConformingDelegate, QLPreviewControllerDelegate, CKReaderViewControllerDelegate, PKAddPassesViewControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, CKVideoMessageRecordingViewControllerDelegate, CKActionMenuGestureRecognizerButtonDelegate, PHPhotoLibraryChangeObserver, CNContactPickerDelegate, CKNavigationBarTitleControllerDelegate, CKMessageEntryViewDelegate, CKReaderViewControllerDelegate, CKTrimControllerDelegate, AFContextProvider, UIGestureRecognizerDelegate, CKChatInputControllerDelegate, CKFullScreenBalloonViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SGSuggestionPresenterDelegate, CKTranscriptSharingSuggestionDelegate, CKCollaborationNoticeSuggestionDelegate, CKDetailsControllerDelegate, _UIClickInteractionDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate, UIPopoverPresentationControllerDelegate, UIDropInteractionDelegate, UITextDropDelegate, UITextPasteDelegate, CKTranscriptOverlayTransitionDelegate, CKMessageEditingViewControllerInteractionDelegate, CKExtensionConsumer, CKFunCameraViewControllerDelegate, ILClassificationUIExtensionHostViewControllerDelegate, CKNicknameBannerViewDelegate, CKOnboardingControllerDelegate, CKNicknameUpdatesViewControllerDelegate, CKInlineReplyInteractionDelegate, CKBannerUpdatesViewDelegate, STLockoutViewControllerDelegate, CKDetailsContactsManagerDelegate, TPKContentControllerDelegate, CKCommunicationSafetyEDUScreenProtocol, UIDragInteractionDelegate, CKNavbarCanvasViewControllerDelegate, CKMacToolbarItemProvider>

 {
    CGPoint _startingScrollOffset;
    BOOL _shouldBecomeFirstResponderWhenDismissingModalBrowser;
    BOOL _shouldDisplayKeyboardWhenDismissingModalBrowser;
    BOOL _becomingFirstResponderInProgress;
    CKComposition *_dropComposition;
}


@property (nonatomic) NSInteger acknowledgmentToSend; // ivar: _acknowledgmentToSend
@property (retain, nonatomic) UIToolbar *actionsToolbar; // ivar: _actionsToolbar
@property (nonatomic) BOOL audioMessageWasPlayedAndIsLatestMessage; // ivar: _audioMessageWasPlayedAndIsLatestMessage
@property (retain, nonatomic) CKAudioTrimViewController *audioTrimController; // ivar: _audioTrimController
@property (retain, nonatomic) IMScheduledUpdater *autorotationUpdater; // ivar: _autorotationUpdater
@property (retain, nonatomic) CKBusinessMacToolbarViewController *businessMacToolbarController; // ivar: _businessMacToolbarController
@property (nonatomic) NSInteger collaborationFailureCount; // ivar: _collaborationFailureCount
@property (retain, nonatomic) NSArray *collaborationNoticeSuggestions; // ivar: _collaborationNoticeSuggestions
@property (retain, nonatomic) UIViewController *collaborationPopoverController; // ivar: _collaborationPopoverController
@property (retain, nonatomic) UINavigationController *commSafetyEDUNavigationController; // ivar: _commSafetyEDUNavigationController
@property (retain, nonatomic) CKComposition *composition;
@property (retain, nonatomic) CKComposition *compositionBeingTrimmed; // ivar: _compositionBeingTrimmed
@property (retain, nonatomic) CNContactPickerViewController *contactPicker; // ivar: _contactPicker
@property (retain, nonatomic) STConversationContext *conversationContext; // ivar: _conversationContext
@property (retain, nonatomic) CKNicknameUpdate *currentNicknameUpdate; // ivar: _currentNicknameUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deferredPresentationBlock; // ivar: _deferredPresentationBlock
@property (copy, nonatomic) id *deferredSendAnimationBlock; // ivar: _deferredSendAnimationBlock
@property (weak, nonatomic) NSObject<CKChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKDetailsContactsManager *detailsContactsManager; // ivar: _detailsContactsManager
@property (retain, nonatomic) CKMacBarButtonToolbarItem *detailsToolbarItem; // ivar: _detailsToolbarItem
@property (retain, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (retain, nonatomic) NSObject<UIDropSession> *dropSession; // ivar: _dropSession
@property (nonatomic) BOOL effectPickerIsPresented;
@property (nonatomic) BOOL effectPickerIsPresented; // ivar: _effectPickerIsPresented
@property (retain, nonatomic) CKEffectPickerViewController *effectPickerViewController;
@property (retain, nonatomic) UIViewController<CKEffectPickerViewControllerProtocol> *effectPickerViewController; // ivar: _effectPickerViewController
@property (retain, nonatomic) UIWindow *effectPickerWindow;
@property (retain, nonatomic) UIWindow *effectPickerWindow; // ivar: _effectPickerWindow
@property (retain, nonatomic) CKQLPreviewController *entryPreviewController; // ivar: _entryPreviewController
@property (readonly, nonatomic) CKMessageEntryView *entryView;
@property (retain, nonatomic) CKMessageEntryViewController *entryViewController; // ivar: _entryViewController
@property (nonatomic) BOOL entryViewWasActiveBeforePresentingDataDetector; // ivar: _entryViewWasActiveBeforePresentingDataDetector
@property (nonatomic) BOOL entryViewWasActiveOnContextMenuPresentation; // ivar: _entryViewWasActiveOnContextMenuPresentation
@property (nonatomic) BOOL entryViewWasActiveOnPreview; // ivar: _entryViewWasActiveOnPreview
@property (retain, nonatomic) IMPluginPayload *extensionPayloadBeingSent; // ivar: _extensionPayloadBeingSent
@property (weak, nonatomic) NSObject<CKExternalEntryViewHost> *externalEntryViewHost; // ivar: _externalEntryViewHost
@property (weak, nonatomic) NSObject<CKExternalPluginViewControllerProvider> *externalPluginControllerProvider; // ivar: _externalPluginControllerProvider
@property (nonatomic) BOOL firstLayoutAfterResume; // ivar: _firstLayoutAfterResume
@property (retain, nonatomic) UIViewController *footerViewController; // ivar: _footerViewController
@property (retain, nonatomic) SGFoundInSuggestionPresenter *foundInSuggestionPresenter; // ivar: _foundInSuggestionPresenter
@property (retain, nonatomic) CKFunCameraViewController *funCameraViewController; // ivar: _funCameraViewController
@property (retain, nonatomic) CKGroupUpdateBannerView *groupPhotoUpdateBanner; // ivar: _groupPhotoUpdateBanner
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImagePickerController *imagePickerController; // ivar: _imagePickerController
@property (retain, nonatomic) CKComposition *initialComposition; // ivar: _initialComposition
@property (nonatomic) UIEdgeInsets initialContentInset; // ivar: _initialContentInset
@property (nonatomic) CGPoint initialContentOffset; // ivar: _initialContentOffset
@property (retain, nonatomic) CKInlineReplyChatController *inlineReplyController; // ivar: _inlineReplyController
@property (retain, nonatomic) CKChatInputController *inputController; // ivar: _inputController
@property (nonatomic) BOOL isAnimatingMessageSend; // ivar: _isAnimatingMessageSend
@property (readonly, nonatomic) BOOL isFunCamPresented;
@property (nonatomic) BOOL isSettingUpCollaboration; // ivar: _isSettingUpCollaboration
@property (nonatomic) BOOL isShowingAcknowledgmentPicker; // ivar: _isShowingAcknowledgmentPicker
@property (nonatomic) BOOL isShowingCamera; // ivar: _isShowingCamera
@property (nonatomic) BOOL isShowingEmojiKeyboard; // ivar: _isShowingEmojiKeyboard
@property (nonatomic) BOOL isShowingPreview; // ivar: _isShowingPreview
@property (nonatomic) BOOL isTransitioningFromQLPreviewToGrid;
@property (nonatomic) BOOL isTransitioningFromQLPreviewToGrid; // ivar: _isTransitioningFromQLPreviewToGrid
@property (nonatomic) NSInteger lastKnownDeviceOrientation; // ivar: _lastKnownDeviceOrientation
@property (nonatomic) CGSize lastLaidOutSize; // ivar: _lastLaidOutSize
@property (retain, nonatomic) NSString *lastPopulatedMessageGuidFromMe; // ivar: _lastPopulatedMessageGuidFromMe
@property (retain, nonatomic) NSString *lastSeenGUID; // ivar: _lastSeenGUID
@property (retain, nonatomic) UIView *lockoutView; // ivar: _lockoutView
@property (retain, nonatomic) UIMenu *macFaceTimeButtonMenu; // ivar: _macFaceTimeButtonMenu
@property (retain, nonatomic) CKMacToolbarItem *macFaceTimeJoinCallToolbarItem; // ivar: _macFaceTimeJoinCallToolbarItem
@property (retain, nonatomic) CKMacToolbarItem *macFaceTimeJoinedCallToolbarItem; // ivar: _macFaceTimeJoinedCallToolbarItem
@property (retain, nonatomic) CKMacMenuToolbarItem *macFaceTimeStartCallToolbarItem; // ivar: _macFaceTimeStartCallToolbarItem
@property (nonatomic) NSInteger macJoinStyle; // ivar: _macJoinStyle
@property (retain, nonatomic) CKMacRecipientsController *macRecipientsController; // ivar: _macRecipientsController
@property (weak, nonatomic) CKMacToolbarController *macToolbarController; // ivar: _macToolbarController
@property (retain, nonatomic) CKMacToolBarImageProperties *macToolbarDetailsButtonProps; // ivar: _macToolbarDetailsButtonProps
@property (retain, nonatomic) CKMacToolBarImageProperties *macToolbarFaceTimeButtonProps; // ivar: _macToolbarFaceTimeButtonProps
@property (retain, nonatomic) CKMediaObject *mediaObjectToDownload; // ivar: _mediaObjectToDownload
@property (retain, nonatomic) CKMessageEditingViewController *messageEditingViewController; // ivar: _messageEditingViewController
@property (retain, nonatomic) NSString *messageGUIDForTranscriptExtension; // ivar: _messageGUIDForTranscriptExtension
@property (nonatomic) NSInteger momentShareFetchGeneration;
@property (nonatomic) NSInteger momentShareFetchGeneration; // ivar: _momentShareFetchGeneration
@property (retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController; // ivar: _navbarCanvasViewController
@property (retain, nonatomic) CKNavigationBarTitleController *navigationBarTitleController; // ivar: _navigationBarTitleController
@property (nonatomic) BOOL needToScrollToBottom; // ivar: _needToScrollToBottom
@property (nonatomic) BOOL nextEntryViewSafeAreaInsetUpdateIsSynchronous; // ivar: _nextEntryViewSafeAreaInsetUpdateIsSynchronous
@property (retain, nonatomic) CKNicknameBannerView *nicknameBanner; // ivar: _nicknameBanner
@property (retain, nonatomic) CKNicknameUpdatesViewController *nicknameUpdateController; // ivar: _nicknameUpdateController
@property (retain, nonatomic) CKOnboardingController *onboardingController; // ivar: _onboardingController
@property (retain, nonatomic) CKComposition *originalComposition; // ivar: _originalComposition
@property (retain, nonatomic) CKAttachmentMessagePartChatItem *photoGridClickyOrbChatItem;
@property (retain, nonatomic) CKAttachmentMessagePartChatItem *photoGridClickyOrbChatItem; // ivar: _photoGridClickyOrbChatItem
@property (weak, nonatomic) CKMediaObjectAssetDataSourceManager *photoGridDataSourceManager;
@property (weak, nonatomic) CKMediaObjectAssetDataSourceManager *photoGridDataSourceManager; // ivar: _photoGridDataSourceManager
@property (copy, nonatomic) NSString *photoGridDisplayedChatItemGUID;
@property (copy, nonatomic) NSString *photoGridDisplayedChatItemGUID; // ivar: _photoGridDisplayedChatItemGUID
@property (weak, nonatomic) CKAggregateAttachmentMessagePartChatItem *photoGridMomentShareChatItem;
@property (weak, nonatomic) CKAggregateAttachmentMessagePartChatItem *photoGridMomentShareChatItem; // ivar: _photoGridMomentShareChatItem
@property (nonatomic) CGRect photoGridTapbackSnapshotRect;
@property (nonatomic) CGRect photoGridTapbackSnapshotRect; // ivar: _photoGridTapbackSnapshotRect
@property (retain, nonatomic) CKQLPreviewController *previewController; // ivar: _previewController
@property (retain, nonatomic) CKInvisibleInkEffectController *previewInvisibleInkEffectController; // ivar: _previewInvisibleInkEffectController
@property (retain, nonatomic) UIView *previewRevealView; // ivar: _previewRevealView
@property (weak, nonatomic) UIView *previewSourceView; // ivar: _previewSourceView
@property (nonatomic) BOOL primeTranscriptWithInitialScrollGeometries; // ivar: _primeTranscriptWithInitialScrollGeometries
@property (retain, nonatomic) CKQLPreviewControllerDataSource *qlPreviewDataSource; // ivar: _qlPreviewDataSource
@property (retain, nonatomic) CKRaiseGesture *raiseGesture; // ivar: _raiseGesture
@property (nonatomic) BOOL recipientsAreHEIFCapable; // ivar: _recipientsAreHEIFCapable
@property (retain, nonatomic) UIView *recipientsVirtualToolbarItem; // ivar: _recipientsVirtualToolbarItem
@property (retain, nonatomic) NSObject<OS_dispatch_group> *revealAnimationGroup; // ivar: _revealAnimationGroup
@property (retain, nonatomic) CKRotationLockUtility *rotationLockUtility; // ivar: _rotationLockUtility
@property (retain, nonatomic) UIKeyboardInputMode *savedKeyboardInputMode; // ivar: _savedKeyboardInputMode
@property (copy, nonatomic) id *scrollBlock; // ivar: _scrollBlock
@property (nonatomic) BOOL scrollDownIsValid; // ivar: _scrollDownIsValid
@property (copy, nonatomic) NSString *shareSheetHostBundleIdentifier; // ivar: _shareSheetHostBundleIdentifier
@property (nonatomic) BOOL shouldDisableEntryView; // ivar: _shouldDisableEntryView
@property (nonatomic) BOOL shouldFetchCollaborationNotices; // ivar: _shouldFetchCollaborationNotices
@property (nonatomic) BOOL shouldShowDoneButton; // ivar: _shouldShowDoneButton
@property (nonatomic, getter=isShowingVideoMessageRecordingView) BOOL showingVideoMessageRecordingView; // ivar: _showingVideoMessageRecordingView
@property (retain, nonatomic) SGSuggestionPresenter *standardSuggestionPresenter; // ivar: _standardSuggestionPresenter
@property (nonatomic) CGFloat stickerTranscriptScrollDelta; // ivar: _stickerTranscriptScrollDelta
@property (retain, nonatomic) CADisplayLink *stickerTranscriptScrollDisplayLink; // ivar: _stickerTranscriptScrollDisplayLink
@property (nonatomic) CGFloat suggestionBannerHeight; // ivar: _suggestionBannerHeight
@property (retain, nonatomic) NSLayoutConstraint *suggestionBannerTopConstraint; // ivar: _suggestionBannerTopConstraint
@property (retain, nonatomic) UIView<SGBannerProtocol> *suggestionBannerView; // ivar: _suggestionBannerView
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressEntryViewKeyboardNotifications; // ivar: _suppressEntryViewKeyboardNotifications
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic) NSInteger targetFirstResponder; // ivar: _targetFirstResponder
@property (retain, nonatomic) CKThrowAnimationManager *throwAnimationManager;
@property (retain, nonatomic) CKThrowAnimationManager *throwAnimationManager; // ivar: _throwAnimationManager
@property (retain, nonatomic) IMTimingCollection *timingCollectionSendGelato; // ivar: _timingCollectionSendGelato
@property (retain, nonatomic) TPKContent *tipKitContent; // ivar: _tipKitContent
@property (retain, nonatomic) TPKContentController *tipKitContentController; // ivar: _tipKitContentController
@property (retain, nonatomic) TPKContentPopoverViewController *tipKitContentPopoverViewController; // ivar: _tipKitContentPopoverViewController
@property (retain, nonatomic) _TtC7ChatKit16CKChatTipManager *tipManager; // ivar: _tipManager
@property (retain, nonatomic) NSNumber *transcriptBottomContentOffsetAtSuspend; // ivar: _transcriptBottomContentOffsetAtSuspend
@property (retain, nonatomic) UIContextMenuInteraction *transcriptContextMenuInteraction; // ivar: _transcriptContextMenuInteraction
@property (retain, nonatomic) CKScheduledUpdater *transcriptInlineNotificationUpdater; // ivar: _transcriptInlineNotificationUpdater
@property (retain, nonatomic) CKTranscriptSharingSuggestion *transcriptSharingBannerSuggestion; // ivar: _transcriptSharingBannerSuggestion
@property (nonatomic) BOOL transcriptWasScrolledToBottomBeforeInlinePresentation; // ivar: _transcriptWasScrolledToBottomBeforeInlinePresentation
@property (nonatomic, getter=isTransitioningSize) BOOL transitioningSize; // ivar: _transitioningSize
@property (retain, nonatomic) CKScheduledUpdater *typingUpdater; // ivar: _typingUpdater
@property (retain, nonatomic) CKUnexpectedlyLoggedOutNotificationView *unexpectedlyLoggedOutNotificationView; // ivar: _unexpectedlyLoggedOutNotificationView
@property (retain, nonatomic) CKUnreadBannerView *unreadBannerView; // ivar: _unreadBannerView
@property (retain, nonatomic) CKVideoMessageRecordingViewController *videoMessageRecordingViewController; // ivar: _videoMessageRecordingViewController
@property (retain, nonatomic) CKVideoTrimController *videoTrimController; // ivar: _videoTrimController
@property (weak, nonatomic) UIViewController *walletOrderImportViewController; // ivar: _walletOrderImportViewController
@property (nonatomic) BOOL wantsInlineOverlay; // ivar: _wantsInlineOverlay
@property (nonatomic) BOOL wantsStickerDetails; // ivar: _wantsStickerDetails
@property (nonatomic) BOOL wasKeyboardShowingWithApp; // ivar: _wasKeyboardShowingWithApp


-(BOOL)_CKRunningInSOSBuddy;
-(BOOL)_anyLegacyBannerIsVisible;
-(BOOL)_anySuggestionPresenterWantsToShowBanner;
-(BOOL)_balloonViewOfCell:(id)arg0 containsPoint:(struct CGPoint )arg1 fromView:(id)arg2 ;
-(BOOL)_canReloadEntryView;
-(BOOL)_canShowBackButtonView;
-(BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
-(BOOL)_clickyOrbEnabled;
-(BOOL)_displayMediaObjectFullscreen:(id)arg0 ;
-(BOOL)_displayPreviewItemForMediaObject:(id)arg0 ;
-(BOOL)_hasExistingBannerMatchingStyle:(NSUInteger)arg0 withNicknames:(id)arg1 ;
-(BOOL)_hasPreviewViewControllerForChatItem:(id)arg0 ;
-(BOOL)_isRunningInMacCatalyst;
-(BOOL)_isRunningPPT;
-(BOOL)_lastAddressedHandleIsAvailableAsiMessageAlias:(id)arg0 SIMID:(id)arg1 ;
-(BOOL)_macShouldShowFaceTimeButtonInToolbar;
-(BOOL)_mediaObjectHasTrimMetadata:(id)arg0 ;
-(BOOL)_mediaObjectNeedsTrimming:(id)arg0 ;
-(BOOL)_noticeIsExpired:(id)arg0 ;
-(BOOL)_point:(struct CGPoint )arg0 visuallyIntersectsBalloonViewInCollectionView:(id)arg1 ;
-(BOOL)_presentCollabInvalidFileProviderLocationAlertIfNecessaryForPayload:(id)arg0 collaborationType:(NSInteger)arg1 ;
-(BOOL)_sharingAllowOthersToInviteFromOptionsGroups:(id)arg0 ;
-(BOOL)_shouldHideNavigationBarForSendAnimationContext:(id)arg0 ;
-(BOOL)_shouldRestoreDraftState;
-(BOOL)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
-(BOOL)_shouldShowAcknowledgmentPickerForChatItem:(id)arg0 ;
-(BOOL)_shouldShowNicknameOnboardingFlow;
-(BOOL)_shouldShowReadRecieptAlert;
-(BOOL)_shouldShowTipKitContent;
-(BOOL)_shouldShowVotingViewForChatItem:(id)arg0 ;
-(BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg0 ;
-(BOOL)_showOrHideNicknameBannerIfNeeded;
-(BOOL)_smsEnabled;
-(BOOL)_supportsCollaborationNotices;
-(BOOL)_wantsThreeColumnLayout;
-(BOOL)_wantsToShowCollaborationNotices;
-(BOOL)accountCanCreateNickname;
-(BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg0 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg0 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg0 ;
-(BOOL)actionPerformer:(id)arg0 transitionToViewController:(id)arg1 transitionType:(NSInteger)arg2 ;
-(BOOL)allowContextProvider:(id)arg0 ;
-(BOOL)allowEffectPickerToBePresented;
-(BOOL)allowsMentions;
-(BOOL)appManagerDisplayedInMessages;
-(BOOL)appModalIsDisplayed;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canShowBusinessOnboarding;
-(BOOL)chatInputControllerCanSend:(id)arg0 ;
-(BOOL)chatInputControllerShouldShowHandwriting:(id)arg0 ;
-(BOOL)clearCommSafetyCompositionIfNecessary;
-(BOOL)clickInteractionShouldBegin:(id)arg0 ;
-(BOOL)contextMenuInteractionIsOutsideOfVisibleBalloonCells:(id)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)fullScreenBalloonViewControllerShouldShowHightlightButton:(id)arg0 forChatItem:(id)arg1 ;
-(BOOL)fullScreenBalloonViewControllerShouldShowReplyButton:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)hasRecentTapbackWithNoneFromMe;
-(BOOL)hasSelectedChatItems;
-(BOOL)hasSelectedChatItemsIncludingAssociatedTapback;
-(BOOL)inlineReplyController:(id)arg0 containerWidth:(*CGFloat)arg1 offset:(*CGFloat)arg2 ;
-(BOOL)inlineReplyControllerBecomeFirstResponder:(id)arg0 ;
-(BOOL)inputAccessoryViewControllerEnabled;
-(BOOL)isChatAllowedByScreenTime:(id)arg0 ;
-(BOOL)isCollapsed;
-(BOOL)isDetailsNavigationControllerDetached;
-(BOOL)isHandwritingLandscape;
-(BOOL)isSafeToMarkAsRead;
-(BOOL)isShowingBusinessOnboarding;
-(BOOL)isShowingMiniTip;
-(BOOL)isShowingOscarChat;
-(BOOL)isTesting;
-(BOOL)itemProviderDisablesTouches;
-(BOOL)keyboardIsQuickPathing;
-(BOOL)keyboardIsVisibleForChatInputController:(id)arg0 ;
-(BOOL)messageEditingViewController:(id)arg0 balloonHasTailForChatItemGuid:(id)arg1 ;
-(BOOL)messageEntryView:(id)arg0 shouldInsertMediaObjects:(id)arg1 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg0 ;
-(BOOL)messageEntryViewWidth:(*CGFloat)arg0 andOffset:(*CGFloat)arg1 ;
-(BOOL)photosGridFullScreenBalloonViewControllerShouldShowHightlightButton:(id)arg0 forChatItem:(id)arg1 ;
-(BOOL)photosGridFullScreenBalloonViewControllerShouldShowReplyButton:(id)arg0 ;
-(BOOL)photosGridViewPresented;
-(BOOL)photosViewController:(id)arg0 didPickAssetReference:(id)arg1 ;
-(BOOL)pluginButtonsEnabled;
-(BOOL)prefersBottomDividerHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)presentUpdateBanner;
-(BOOL)previewController:(id)arg0 canShareItem:(id)arg1 ;
-(BOOL)previewController:(id)arg0 shouldOpenURL:(id)arg1 forPreviewItem:(id)arg2 ;
-(BOOL)previewControllerIsInGroupConversation:(id)arg0 ;
-(BOOL)reparentToolbarItem:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldConfigureForJunkModalInNavbarCanvasViewController:(id)arg0 ;
-(BOOL)shouldHideInteractionOptions;
-(BOOL)shouldHideInteractionsForActionManager:(id)arg0 ;
-(BOOL)shouldInsertMacCatalystEntryView;
-(BOOL)shouldListParticipantsInTitle;
-(BOOL)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(id)arg0 ;
-(BOOL)shouldNotShowGroupBanners;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(BOOL)shouldRemoveMacCatalystEntryView;
-(BOOL)shouldShowAvatarViewInNavBarCanvas;
-(BOOL)shouldShowBanners;
-(BOOL)shouldShowChevronInNavbarCanvasViewController:(id)arg0 ;
-(BOOL)shouldShowEntryView;
-(BOOL)shouldShowFacetimeButtonInNavbarCanvasViewController:(id)arg0 ;
-(BOOL)shouldUseMacRecipientsView;
-(BOOL)shouldUseNavigationBarCanvasView;
-(BOOL)shouldUseThrowAnimationForComposition:(id)arg0 ;
-(BOOL)showGroupBannerUpdateIfNeeded;
-(BOOL)showKeyboardForReply;
-(BOOL)showNicknameSharingOnboardingWithMemoji:(BOOL)arg0 ;
-(BOOL)throwAnimationUsesAnimatedReloadForMessages:(id)arg0 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 shouldSelectChatItem:(id)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestCommitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestCommitSticker:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 shouldCleanupFullscreenEffectUI:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 shouldSetupFullscreenEffectUI:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg0 ;
-(BOOL)wantsChromelessAppearance;
-(BOOL)wantsOverKeyboardAnimationForSendAnimationContext:(id)arg0 ;
-(CGFloat)_currentScrollDelta;
-(CGFloat)_maxEntryViewHeight;
-(CGFloat)balloonMaxWidth;
-(CGFloat)balloonMaxWidthForMessageEditingViewController:(id)arg0 ;
-(CGFloat)gradientBottomPlaceholderHeight;
-(CGFloat)messageEntryViewMaxHeight:(id)arg0 ;
-(CGFloat)minimumBottomInset;
-(CGFloat)preferredMacToolbarHeight;
-(CGFloat)throwAnimationFinalFrameOffset:(id)arg0 ;
-(CGFloat)throwAnimationManagerAccessoryViewHeight:(id)arg0 ;
-(CGFloat)throwAnimationManagerTopHeaderHeight:(id)arg0 ;
-(CGFloat)topInsetPadding;
-(CGFloat)transcriptCollectionViewController:(id)arg0 targetAlphaForChatItem:(id)arg1 ;
-(CGFloat)virtualToolbarPreferredHeight;
-(Class)CKCloudSharingClass;
-(NSInteger)_sharingAccessTypeFromOptionsGroups:(id)arg0 ;
-(NSInteger)_sharingPermissionTypeFromOptionsGroups:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)inlineReplyControllerTargetFirstResponder:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)previewController:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(NSInteger)sceneInterfaceOrientation;
-(NSInteger)unreadCountForCurrentFilterModeForNavbarCanvasViewController:(id)arg0 ;
-(NSUInteger)_maxAllowedSVSize;
-(NSUInteger)recipientsCount;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_api_dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)_assetReferenceForDisplayedGridChatItem:(id)arg0 selectionSnapshot:(id)arg1 ;
-(id)_attributionFromHighlight:(id)arg0 forChatGUID:(id)arg1 ;
-(id)_balloonViewForCellAtIndexPath:(id)arg0 ;
-(id)_chatItemForMediaObject:(id)arg0 ;
-(id)_chatItemForReplyingToChatItem:(id)arg0 explicitlySelected:(BOOL)arg1 ;
-(id)_chatItemToEdit;
-(id)_copyActionForChatItem:(id)arg0 shouldUseTopMostChatItemIfAggregateChatItem:(BOOL)arg1 ;
-(id)_currentPresentationController;
-(id)_defaultTranscriptNavBarAppearance;
-(id)_deleteActionForChatItem:(id)arg0 shouldUseTopMostChatItemIfAggregateChatItem:(BOOL)arg1 ;
-(id)_deleteActionsForChatItem:(id)arg0 ;
-(id)_deleteMenuForChatItem:(id)arg0 ;
-(id)_downgradeMessageActionForChatItem:(id)arg0 ;
-(id)_dragItemsForInteraction:(id)arg0 ;
-(id)_dragItemsFromChatItem:(id)arg0 balloonView:(id)arg1 ;
-(id)_exportActionForChatItem:(id)arg0 shouldUseTopMostChatItemIfAggregateChatItem:(BOOL)arg1 ;
-(id)_exportActionsForChatItem:(id)arg0 ;
-(id)_exportMenuForChatItem:(id)arg0 ;
-(id)_forwardActionForChatItem:(id)arg0 ;
-(id)_forwardAndCopyActionsForChatItem:(id)arg0 ;
-(id)_forwardAndCopyMenuForChatItem:(id)arg0 ;
-(id)_fullScreenBalloonViewControllerForPhotosGridViewWithChatItem:(id)arg0 snapshotView:(id)arg1 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg0 ;
-(id)_fullscreenEffectsManager;
-(id)_gridViewNavigationControllerForMomentShare:(id)arg0 chatItem:(id)arg1 tapbackManager:(id)arg2 ;
-(id)_groupConversationContainingSharedURL:(id)arg0 ;
-(id)_highlightActionForChatItem:(id)arg0 ;
-(id)_inlineReplyActionForChatItem:(id)arg0 ;
-(id)_interfaceActionsForChatItem:(id)arg0 ;
-(id)_itemProvidersFromDragItems:(id)arg0 ;
-(id)_localizedTitleStringForAggregateAction:(NSInteger)arg0 numberOfPhotos:(NSInteger)arg1 numberOfVideos:(NSInteger)arg2 numberOfOther:(NSInteger)arg3 ;
-(id)_meContact;
-(id)_mediaAttributionActionForChatItem:(id)arg0 ;
-(id)_menuForChatItem:(id)arg0 ;
-(id)_menuTitleForChatItem:(id)arg0 ;
-(id)_moreActionForChatItem:(id)arg0 ;
-(id)_navigationControllerToPop;
-(id)_newCollaborationPayloadFromPayload:(id)arg0 shareURL:(id)arg1 updatedMetadata:(id)arg2 ;
-(id)_newImageConfiguredForNSToolbarWithName:(id)arg0 tintColor:(id)arg1 ;
-(id)_parentChatItemForIndexPath:(id)arg0 ;
-(id)_parentIndexPathForCellAtIndexPath:(id)arg0 ;
-(id)_previewViewControllerForAssetReference:(id)arg0 dataSource:(id)arg1 previewDelegate:(id)arg2 previewMode:(NSInteger)arg3 ;
-(id)_previewViewControllerForAssetReference:(id)arg0 photosViewController:(id)arg1 previewMode:(NSInteger)arg2 ;
-(id)_previewingViewControllerForHitView:(id)arg0 indexPath:(id)arg1 ;
-(id)_previewingViewControllerForLocation:(struct CGPoint )arg0 inSourceView:(id)arg1 ;
-(id)_progressBarHostView;
-(id)_recipientHandle;
-(id)_regularGridViewNavigationControllerForChatItem:(id)arg0 assetReference:(id)arg1 tapbackManager:(id)arg2 ;
-(id)_showTimestampsAction;
-(id)_stickerDetailsActionForChatItem:(id)arg0 ;
-(id)_tapbackAndInlineReplyMenuForChatItem:(id)arg0 ;
-(id)_tapbackStatusManagerForChatItem:(id)arg0 ;
-(id)_threadIdentifierForMessagePart:(id)arg0 ;
-(id)_threadOriginatorForMessagePart:(id)arg0 ;
-(id)_transcriptOverlayTransitionContextForAnchoredMessagePart:(id)arg0 threadIdentifier:(id)arg1 presentKeyboard:(BOOL)arg2 ;
-(id)_transcriptOverlayTransitionContextForModalPresentation;
-(id)_updatedDetailsToolbarItemImage;
-(id)_updatedFaceTimeToolbarItemImage;
-(id)_visibleChatItemsToScreenFrameMap;
-(id)addContactOptionsMenuWithNicknameUpdate:(id)arg0 ;
-(id)addToExistingContactActionWithNicknameUpdate:(id)arg0 ;
-(id)additionalActivitiesTypesForPreviewController:(id)arg0 ;
-(id)chatForSendAnimationManager:(id)arg0 ;
-(id)chatInputTranscriptIdentifier;
-(id)chatItemForMediaObject:(id)arg0 previewController:(id)arg1 ;
-(id)clickyOrbChatItem;
-(id)collectionViewControllerForImpactEffectManager:(id)arg0 ;
-(id)consumingBundleIdentifiers;
-(id)contactForNickname:(id)arg0 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)contextMenuAccessoryViewsForChatItem:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)createAlertControllerForAccountComposition:(id)arg0 completion:(id)arg1 ;
-(id)createAnalyticsDictionaryForCollaborationForType:(NSInteger)arg0 sharingURL:(id)arg1 ;
-(id)createGroupUpdateWithType:(NSUInteger)arg0 ;
-(id)createNewContactActionWithNicknameUpdate:(id)arg0 ;
-(id)currentChatController;
-(id)currentNavigationBarBasedOnSizeClass;
-(id)currentTopChatItemForAggregateChatItem:(id)arg0 ;
-(id)detailsControllerBusinessPrivacyInfoPresentingViewController:(id)arg0 ;
-(id)dragControllerTranscriptDelegate;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragManagerTargetView:(id)arg0 ;
-(id)dragPreviewParametersForBalloonView:(id)arg0 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)excludedActivityTypesForPreviewController:(id)arg0 ;
-(id)getCurrentContext;
-(id)initWithConversation:(id)arg0 ;
-(id)inlineReplyControllerChatInputController:(id)arg0 ;
-(id)inlineReplyControllerForChatItem:(id)arg0 ;
-(id)innermostToolbarItemIdentifier;
-(id)inputAccessoryView;
-(id)inputAccessoryViewController;
-(id)inputViewController;
-(id)invisibleInkEffectControllerForPreviewController:(id)arg0 ;
-(id)keyCommands;
-(id)lastOutgoingMessagePartItem;
-(id)launchURLForMode:(id)arg0 ;
-(id)mediaObjectsFromComposition:(id)arg0 ;
-(id)messageEditingViewController:(id)arg0 originalMessageCompositionForMessageWithGuid:(id)arg1 ;
-(id)modalInlineReplyControllerForChatItem:(id)arg0 ;
-(id)nameAndPhotoForContact:(id)arg0 andNicknameUpdate:(id)arg1 withCompletionBlock:(id)arg2 ;
-(id)nameOnlyForContact:(id)arg0 andNicknameUpdate:(id)arg1 withCompletionBlock:(id)arg2 ;
-(id)nextMediaObjectToTrimInComposition:(id)arg0 ;
-(id)nicknameBannerViewActionButtonMenu:(id)arg0 ;
-(id)nicknameUpdatesForController:(id)arg0 ;
-(id)outgoingComposeViewForSendAnimation;
-(id)photoOnlyForContact:(id)arg0 andNicknameUpdate:(id)arg1 withCompletionBlock:(id)arg2 ;
-(id)photosGridViewController;
-(id)photosViewController:(id)arg0 accessoriesForContextMenuInteraction:(id)arg1 assetReference:(id)arg2 ;
-(id)photosViewController:(id)arg0 configurationForContextMenuInteraction:(id)arg1 assetReference:(id)arg2 ;
-(id)photosViewController:(id)arg0 contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(id)photosViewController:(id)arg0 dragItemProviderForAssetReference:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)presentedControllerDoneButtonItem;
-(id)presentingViewControllerForOnboardingController:(id)arg0 ;
-(id)previewActionsForPreviewController:(id)arg0 ;
-(id)previewController:(id)arg0 transitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 uncroppedSourceFrame:(struct CGRect *)arg2 ;
-(id)previewItemsForMediaObject:(id)arg0 currentItemIndex:(*NSInteger)arg1 containsRestoring:(*BOOL)arg2 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)progressBar;
-(id)rotatingFooterView;
-(id)selectedBalloonForTarget:(id)arg0 ;
-(id)selectedChatItems;
-(id)selectedChatItemsIncludingTapbackedChatItem;
-(id)selectedMessagePartItem;
-(id)shareMetadataWithDugongTokensForCKShare:(id)arg0 shareURL:(id)arg1 ;
-(id)splitViewController;
-(id)stickerInfoDictionaryWithLayoutIntent:(NSUInteger)arg0 parentPreviewWidth:(CGFloat)arg1 xScalar:(CGFloat)arg2 yScalar:(CGFloat)arg3 scale:(CGFloat)arg4 rotation:(CGFloat)arg5 ;
-(id)textDroppableView:(id)arg0 proposalForDrop:(id)arg1 ;
-(id)textPasteConfigurationSupporting:(id)arg0 combineItemAttributedStrings:(id)arg1 forRange:(id)arg2 ;
-(id)textPasteConfigurationSupporting:(id)arg0 performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 ;
-(id)throwAnimationContainerSuperview:(id)arg0 ;
-(id)throwAnimationManagerEntryView:(id)arg0 ;
-(id)throwBalloonsForSendAnimationContext:(id)arg0 ;
-(id)toolbarItemForIdentifier:(id)arg0 ;
-(id)transcriptCollectionViewController:(id)arg0 accessoriesForContextMenuWithConfiguration:(id)arg1 layoutAnchor:(struct ? )arg2 ;
-(id)transcriptCollectionViewController:(id)arg0 chatItemForContextMenuWithConfiguration:(id)arg1 ;
-(id)transcriptCollectionViewController:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 interaction:(id)arg3 ;
-(id)transcriptCollectionViewController:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)transcriptCollectionViewController:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)transcriptCollectionViewController:(id)arg0 styleForContextMenuWithConfiguration:(id)arg1 ;
-(id)updateDataSourceForPluginPayload:(id)arg0 forGUID:(id)arg1 withCollaborationMetadata:(id)arg2 shareURL:(id)arg3 ;
-(id)updateOptionsMenuForContact:(id)arg0 withNicknameUpdate:(id)arg1 withCompletionBlock:(id)arg2 ;
-(id)updatedFrameMapForTranscriptOverlayViewController:(id)arg0 ;
-(id)viewControllerForChatInputModalPresentation;
-(id)viewControllerForPresentingFromBannerByPresenter:(id)arg0 ;
-(id)viewControllerToPresentFrom;
-(id)viewForDragAndChatInputDropTarget;
-(id)virtualView;
-(int)dragManager:(id)arg0 dropAreaForDragTarget:(id)arg1 ;
-(struct CGRect )_convertedNavigationBarFrameInSendAnimationContainerView:(id)arg0 ;
-(struct CGRect )fullScreenBalloonViewController:(id)arg0 balloonFrameForChatItem:(id)arg1 ;
-(struct CGRect )fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg0 ;
-(struct CGRect )inlineReplyController:(id)arg0 gradientFrameWithInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGRect )inputAccessoryViewFrameForFloatingKeyboard;
-(struct CGRect )miniTipPopoverRect;
-(struct CGRect )photosGridFullScreenBalloonViewController:(id)arg0 balloonFrameForChatItem:(id)arg1 ;
-(struct CGRect )photosGridFullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg0 ;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(struct CGRect )throwAnimationKeyboardFrame:(id)arg0 ;
-(struct CGRect )throwAnimationWindowFrame:(id)arg0 ;
-(struct CGSize )messageEntryViewMaxShelfPluginViewSize:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )systemMinimumLayoutMarginsForViewController:(id)arg0 ;
-(struct UIEdgeInsets )_avoidanceInsets;
-(struct UIEdgeInsets )_contentInsetForSendAnimation;
-(struct UIEdgeInsets )_marginInsetsForEntryView;
-(struct UIEdgeInsets )additionalSafeAreaInsets;
-(struct UIEdgeInsets )bannerInsets;
-(struct UIEdgeInsets )macToolbarInsets;
-(struct UIEdgeInsets )messageEditingViewController:(id)arg0 contentInsetsForChatItemGuid:(id)arg1 ;
-(struct UIEdgeInsets )popoverLayoutMargins;
-(struct UIEdgeInsets )virtualToolbarContentInsets;
-(void)__raiseGestureRecognized:(id)arg0 ;
-(void)_actuallyPresentCollaborationFailureAlertForComposition:(id)arg0 sharingURL:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_addDefaultButtonToSharingErrorAlertController:(id)arg0 sharingURL:(id)arg1 defaultButtonAction:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_addOtherButtonToSharingErrorAlertController:(id)arg0 otherButtonAction:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_addParticipant:(id)arg0 toShareBearURL:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id)arg3 ;
-(void)_addParticipant:(id)arg0 toShareURL:(id)arg1 forChatGUID:(id)arg2 completionHandler:(id)arg3 ;
-(void)_addParticipantToShare:(id)arg0 withHandle:(id)arg1 toCollaboration:(id)arg2 containerSetupInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_askToTurnOnReadReceiptsIfNeeded;
-(void)_askToTurnOnSMSRelayIfNeeded;
-(void)_backbuttonPressed;
-(void)_callButtonPressed;
-(void)_callButtonPressedWithVideoEnabled:(BOOL)arg0 ;
-(void)_cancelDeletion:(id)arg0 ;
-(void)_collaborationMetadataForURL:(id)arg0 forChatGUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_configureDetailsToolbarItem;
-(void)_configureEditMessageCommand:(id)arg0 ;
-(void)_configureFaceTimeStartCallToolbarItem;
-(void)_configureGridControllerForStackTransition:(id)arg0 chatItem:(id)arg1 ;
-(void)_configureMacFaceTimeButtonMenu;
-(void)_configureMacFaceTimeJoinCallToolbarItem;
-(void)_configureMacFaceTimeJoinedCallToolbarItem;
-(void)_configureTitleView;
-(void)_confirmReadReceiptSettings;
-(void)_conversationJoinStateDidChange:(id)arg0 ;
-(void)_conversationParticipantsChanged:(id)arg0 ;
-(void)_dataDetectorsDidDismissNotification:(id)arg0 ;
-(void)_dataDetectorsWillPresentNotification:(id)arg0 ;
-(void)_dealloc;
-(void)_deleteSelectedMessages:(id)arg0 ;
-(void)_deleteStickerWithTransferGUID:(id)arg0 ;
-(void)_detailsButtonPressed;
-(void)_didSendCompositionInConversation:(id)arg0 ;
-(void)_dismissBannerView:(id)arg0 completion:(id)arg1 ;
-(void)_dismissCollaborationPopoverUI;
-(void)_dismissFullScreenBubbleViewControllerAnimated:(BOOL)arg0 withSendAnimation:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dismissPresentedViewController:(id)arg0 ;
-(void)_dismissSentWithSiriUI;
-(void)_displayNameUpdatedNotification:(id)arg0 ;
-(void)_doneButtonPressed;
-(void)_editCancelButtonPressed;
-(void)_fetchCollaborationNotices;
-(void)_finishSendAnimation;
-(void)_forwardSelectedMessages:(id)arg0 ;
-(void)_gridViewNavigationControllerForChatItem:(id)arg0 assetReference:(id)arg1 completionHandler:(id)arg2 ;
-(void)_gridViewNavigationControllerForMomentShareURL:(id)arg0 chatItem:(id)arg1 tapbackManager:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleAddressBookChangedNotification:(id)arg0 ;
-(void)_handleChatItemDidChange:(id)arg0 ;
-(void)_handleCollaborationNoticesChanged:(id)arg0 ;
-(void)_handleContactStoreBatchLoadCompleteNotification:(id)arg0 ;
-(void)_handleGroupNameChanged:(id)arg0 ;
-(void)_handleGroupPhotoChanged:(id)arg0 ;
-(void)_handleIsUnexpectedlyLoggedOutChanged:(id)arg0 ;
-(void)_handleStewieStatusStateChanged:(id)arg0 ;
-(void)_handleTranscriptPluginChatItem:(id)arg0 ;
-(void)_handleTranscriptPluginChatItem:(id)arg0 presentationConfiguration:(id)arg1 ;
-(void)_highlightForShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_initializeEffectPicker;
-(void)_initializeNavigationBarCanvasViewIfNecessary;
-(void)_invalidateChatItemLayoutIfNecessary:(struct CGSize )arg0 ;
-(void)_isShareBearURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_kickPhotoKit;
-(void)_macJoinFaceTimeCallButtonClicked:(id)arg0 ;
-(void)_markAsReadIfNecessary;
-(void)_markMessagesAsReadOnPushIfNeeded;
-(void)_markVisibleMentionsAsRead;
-(void)_passKitUIDismissed:(id)arg0 ;
-(void)_performResume;
-(void)_presentAppStoreForAdamID:(id)arg0 ;
-(void)_presentBannerView:(id)arg0 completion:(id)arg1 ;
-(void)_presentBannerView:(id)arg0 placingHandlesUnderScrutiny:(id)arg1 completion:(id)arg2 ;
-(void)_presentBrowserForPlugin:(id)arg0 ;
-(void)_presentBrowserOrAppStoreForAdamID:(id)arg0 url:(id)arg1 identifier:(id)arg2 ;
// -(void)_presentCollabAddToMessagesGroupAlert:(id)arg0 sendBlock:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)_presentCollabAddToMessagesGroupAlertIfNecessary:(id)arg0 collaborationType:(NSInteger)arg1 sendBlock:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)_presentCollaborationAlertsIfNecessaryForPayload:(id)arg0 collaborationType:(NSInteger)arg1 sendBlock:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_presentDetailsViewControllerAnimated:(BOOL)arg0 ;
-(void)_presentGridForChatItem:(id)arg0 assetReference:(id)arg1 ;
-(void)_presentGridForPendingMomentShareChatItem:(id)arg0 ;
-(void)_presentGridViewNavigationController:(id)arg0 ;
-(void)_presentPreviewViewControllerFromPhotosViewController:(id)arg0 assetReference:(id)arg1 ;
-(void)_presentSentWithSiriUI;
-(void)_presentTranscriptSharingBannerIfNecessary;
-(void)_presentViewerForChatItem:(id)arg0 assetReference:(id)arg1 ;
-(void)_processCollaborationNoticesForBanner:(id)arg0 ;
-(void)_raiseToListenSettingChanged:(id)arg0 ;
-(void)_reloadMentionsData;
-(void)_removeParticipant:(id)arg0 fromShareBearURL:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id)arg3 ;
-(void)_removeParticipant:(id)arg0 fromShareURL:(id)arg1 forChatGUID:(id)arg2 completionHandler:(id)arg3 ;
-(void)_removeSubsharesAndSendFileProviderComposition:(id)arg0 shareURL:(id)arg1 completion:(id)arg2 ;
-(void)_replaceBannerView:(id)arg0 withNewBannerView:(id)arg1 placingHandlesUnderScrutiny:(id)arg2 completion:(id)arg3 ;
-(void)_reportSelectedMessages:(id)arg0 ;
-(void)_resizeNavigationBarIfNecessary;
-(void)_restoreDraftState;
-(void)_retryGroupPhotoUploadIfNecessary;
-(void)_saveDraftState;
-(void)_sendCollaborationCompositionForCloudKit:(id)arg0 sharingURL:(id)arg1 share:(id)arg2 completion:(id)arg3 ;
-(void)_sendCollaborationCompositionForFileProvider:(id)arg0 sharingURL:(id)arg1 share:(id)arg2 completion:(id)arg3 ;
-(void)_sendCompositionForFileProviderCloudDrive:(id)arg0 completion:(id)arg1 ;
-(void)_sendCompositionForNewCloudKitShare:(id)arg0 completion:(id)arg1 ;
-(void)_setConversationDeferredSetup;
-(void)_setShouldLoadInputAccessoryViewOnAppearance:(BOOL)arg0 ;
-(void)_setTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setupNavbar;
-(void)_showAutoDonationAlertForAppName:(id)arg0 bundleID:(id)arg1 ;
-(void)_showMapViewerForMediaObject:(id)arg0 ;
-(void)_showPassbookCardViewForMediaObject:(id)arg0 ;
-(void)_showPhotoPickerWithSourceType:(NSInteger)arg0 ;
-(void)_showReaderForAggregateChatItem:(id)arg0 balloonView:(id)arg1 ;
-(void)_showTapbackReplyOverlayFromPhotosViewController:(id)arg0 assetReference:(id)arg1 ;
-(void)_showVCalViewerForMediaObject:(id)arg0 ;
-(void)_showVCardViewerForMediaObject:(id)arg0 ;
-(void)_showWalletOrderImportViewForMediaObject:(id)arg0 ;
-(void)_sizeEffectPickerWindow;
-(void)_startSharingForURLForFileProviderCloudDrive:(id)arg0 completion:(id)arg1 ;
-(void)_switchedAwayFromEmojiKeyboard:(id)arg0 ;
-(void)_switchedToEmojiKeyboard:(id)arg0 ;
-(void)_textInputModeDidChange:(id)arg0 ;
-(void)_transferCompleted:(id)arg0 ;
-(void)_transferFileTooLarge:(id)arg0 ;
-(void)_transferFinishedNotification:(id)arg0 ;
-(void)_transferRestoredNotification:(id)arg0 ;
-(void)_updateActionsToolbarItems;
-(void)_updateAndSendCompositionForExistingCloudKitShare:(id)arg0 share:(id)arg1 completion:(id)arg2 ;
-(void)_updateAndSendCompositionForFileProvider:(id)arg0 share:(id)arg1 sharingURL:(id)arg2 completion:(id)arg3 ;
-(void)_updateEntryViewFrameIfNeeded:(BOOL)arg0 ;
-(void)_updateForNewPreferredService;
-(void)_updateNavigationButtons;
-(void)_updateNavigationUI;
-(void)_updateProgressBarFrame;
-(void)_updateRecipientCapabilities;
-(void)_updateShare:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateSuggestionsBanners;
-(void)_updateTitleViewHeight:(id)arg0 ;
-(void)_updateTitleViewLayout;
-(void)_updateTranscriptInlineNotification;
-(void)_updateTranscriptOffsetForBannerView;
-(void)_validateAndSendComposition:(id)arg0 completion:(id)arg1 ;
-(void)_walletOrderImportControllerDismissed;
-(void)_willSendComposition:(id)arg0 inConversation:(id)arg1 ;
-(void)acceptPressedForFirstSendingCommSafetyEDUScreen:(id)arg0 withComposition:(id)arg1 withSensitiveMediaObjects:(id)arg2 withIdentifiersOfShelvedImages:(id)arg3 ;
-(void)acceptPressedForSecondReceivingCommSafetyEDUScreen:(id)arg0 withItemIndexPath:(id)arg1 ;
-(void)acceptPressedForSecondSendingCommSafetyEDUScreen:(id)arg0 withComposition:(id)arg1 ;
-(void)actionEditIsTappedForChatItem:(id)arg0 ;
-(void)actionManager:(id)arg0 copyChatItems:(id)arg1 ;
-(void)actionManager:(id)arg0 forwardChatItems:(id)arg1 ;
-(void)actionManager:(id)arg0 presentInlineReplyControllerForChatItem:(id)arg1 ;
-(void)actionManager:(id)arg0 quickLookChatItem:(id)arg1 ;
-(void)actionManager:(id)arg0 tapbackChatItem:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonShowHint:(id)arg0 ;
-(void)actionMoreIsTappedForChatItem:(id)arg0 ;
-(void)actionRetractIsTappedForChatItem:(id)arg0 ;
-(void)addMedia:(id)arg0 ;
-(void)addOrRemoveMacCatalystEntryViewIfNeeded;
-(void)addParticipant:(id)arg0 toCollaboration:(id)arg1 forChatGUID:(id)arg2 containerSetupInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)addPassesViewControllerDidFinish:(id)arg0 ;
-(void)addSuggestionBanner:(id)arg0 animated:(BOOL)arg1 ;
-(void)addToCollaboration:(id)arg0 ;
-(void)animateRevealWithInteractionProgress:(id)arg0 forPreviewingAtLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 containerView:(id)arg3 ;
-(void)appendCompositionFromItemProviders:(id)arg0 ;
-(void)applicationWillSuspend;
-(void)avatarViewPressed:(id)arg0 ;
-(void)beginFacetimeCallWithVideo:(BOOL)arg0 ;
-(void)beginHoldingAutorotationForKey:(id)arg0 ;
-(void)cancelBarButtonItemPressed:(id)arg0 ;
-(void)chatAllowedByScreenTimeChanged:(id)arg0 ;
-(void)chatControllerWillBeginResizing;
-(void)chatInputController:(id)arg0 presentShelfModal:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)chatInputControllerBrowserPluginChangingFromPlugin:(id)arg0 toPlugin:(id)arg1 ;
-(void)chatInputControllerCancelSelectFunCamera:(id)arg0 ;
-(void)chatInputControllerDidDismissCompactBrowserViewController:(id)arg0 ;
-(void)chatInputControllerDidDismissModalBrowserViewController:(id)arg0 ;
-(void)chatInputControllerDidPresentModalBrowserViewController:(id)arg0 ;
-(void)chatInputControllerDidSelectFunCamera:(id)arg0 ;
-(void)chatInputControllerDidShowHandwriting:(id)arg0 ;
-(void)chatInputControllerDidTransitionCollapsed:(id)arg0 ;
-(void)chatInputControllerDidTransitionExpanded:(id)arg0 ;
-(void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg0 ;
-(void)chatInputControllerWillDismissCompactBrowserViewController:(id)arg0 ;
-(void)chatInputControllerWillDismissModalBrowserViewController:(id)arg0 ;
-(void)chatInputControllerWillHideHandwriting:(id)arg0 ;
-(void)chatInputControllerWillPresentModalBrowserViewController:(id)arg0 ;
-(void)chatInputControllerWillSelectFunCamera:(id)arg0 ;
-(void)chatInputControllerWillTransitionCollapsed:(id)arg0 ;
-(void)chatInputControllerWillTransitionExpanded:(id)arg0 ;
-(void)chatInputDidChangeSize;
-(void)chatInputDidSelectEffectPicker;
-(void)chatInputDidSelectPhotoPicker;
-(void)chatInputDidUpdateInputViewShowingBrowser:(BOOL)arg0 entryFieldCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)chatInputDidUpdateWithNewInputViewController:(id)arg0 ;
-(void)chatInputSentComposition:(id)arg0 ;
-(void)chatInputWillChangeHeightForCompactPresentation:(CGFloat)arg0 ;
-(void)chatInputWillUpdateInputViewShowingBrowser;
-(void)checkForSensitivePhotosAndSendComposition:(id)arg0 ;
-(void)checkSuggestionsForBanner;
-(void)ckVideoMessageRecordingViewController:(id)arg0 mediaObjectCaptured:(id)arg1 error:(id)arg2 ;
-(void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg0 ;
-(void)cleanUpDarkEffectStyle;
-(void)cleanupPostComposeTransitionWithKBFrame:(struct CGRect )arg0 ;
-(void)clearEntryViewPasteConfiguration;
-(void)clearHandlesFromScrutiny:(id)arg0 ;
-(void)clickInteractionDidClickUp:(id)arg0 ;
-(void)collaborationNoticeSuggestionWillDismiss:(id)arg0 ;
-(void)composeRecipientViewShouldResignFirstResponder;
-(void)configureForCurrentTraitCollection;
-(void)configureMacToolbarProperties;
-(void)configureWithToolbarController:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactsManager:(id)arg0 didRequestCallTypeForEntity:(id)arg1 addresses:(id)arg2 abLabels:(id)arg3 faceTimeAudioEnabled:(BOOL)arg4 ;
-(void)contactsManagerViewModelsDidChange:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)controller:(id)arg0 didCompleteClassificationRequest:(id)arg1 withResponse:(id)arg2 ;
-(void)copy:(id)arg0 ;
-(void)createCollaborationFailureAlertForFailedMetadataLoadWithFallback:(BOOL)arg0 URL:(id)arg1 ;
-(void)createCollaborationFailureAlertForNotice:(id)arg0 ;
-(void)createContactWithNicknameUpdate:(id)arg0 ;
-(void)dealloc;
-(void)declinePressedForCommSafetyEduScreen:(id)arg0 isSending:(BOOL)arg1 withComposition:(id)arg2 withSensitiveMediaObjects:(id)arg3 withIdentifiersOfShelvedImages:(id)arg4 ;
-(void)delete:(id)arg0 ;
-(void)deleteMediaObjectAttachmentGUIDs:(id)arg0 originalStackCount:(NSInteger)arg1 ;
-(void)detailsControllerDidDismiss:(id)arg0 ;
-(void)detailsControllerWillDismiss:(id)arg0 ;
-(void)didDismissFunCamera:(id)arg0 ;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)didFinishShowingBusinessOnboarding;
-(void)didReceiveMemoryWarning;
-(void)dimsmissCurrentBannerAndShowNewBannerForGroupUpdate:(id)arg0 ;
-(void)disableRotationWhileRecordingAudioMessage;
-(void)disableSendButtonSpinner;
-(void)dismissBusinessOnboardingOrMiniTipIfShowing;
-(void)dismissCollaborationNoticeBannersIfNecessary;
-(void)dismissCollaborationNoticeSuggestion:(id)arg0 ;
-(void)dismissDetailsController:(id)arg0 ;
-(void)dismissDetailsControllerAnimated:(BOOL)arg0 ;
-(void)dismissDetailsNavigationController;
-(void)dismissInlineReplyController:(BOOL)arg0 ;
-(void)dismissKeyboard;
-(void)dismissMessageEditingViewController:(BOOL)arg0 ;
-(void)dismissMiniTipIfShowingAnimated:(BOOL)arg0 ;
-(void)dismissNicknameUpdateController:(id)arg0 ;
-(void)dismissPickerWithCompletion:(id)arg0 ;
-(void)dismissPresentedViewController:(id)arg0 ;
-(void)dismissTranscriptOverlayViewController:(id)arg0 presentKeyboard:(BOOL)arg1 ;
-(void)dismissVideoMessageRecordingViewController;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragManager:(id)arg0 draggedItemWithTarget:(id)arg1 ;
-(void)dragManagerDidBeginDragging:(id)arg0 ;
-(void)dragManagerDidEndDragging:(id)arg0 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)effectPickerViewController:(id)arg0 effectWithIdentifierSelected:(id)arg1 ;
-(void)effectPickerViewControllerClose:(id)arg0 ;
-(void)enableRotationAfterRecording;
-(void)enableSendButtonSpinner;
-(void)endHoldingAutorotationForKey:(id)arg0 ;
-(void)escButtonPressed:(id)arg0 ;
-(void)evaluateSendMetricsForComposition:(id)arg0 ;
-(void)flagSensitiveMediaObjects:(id)arg0 ;
-(void)forciblyUnloadChatInputController;
-(void)fullScreenBalloonViewController:(id)arg0 deleteStickerWithTransferGUID:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 replyButtonPressedForChatItem:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageAcknowledgment:(NSInteger)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageHighlight:(BOOL)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 stickerPackTappedWithAdamID:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 verticallyScrollTranscriptByAmount:(CGFloat)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 willDisappearWithSendAnimation:(BOOL)arg1 ;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg0 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg0 ;
-(void)hideAcknowledgmentsAssociatedWithChatItem:(id)arg0 ;
-(void)hideMediaPickerAnimated:(BOOL)arg0 ;
-(void)hideMediaPickerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)hideStickersAssociatedWithChatItem:(id)arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)inlineReplyControllerDidSendComposition:(id)arg0 ;
-(void)inlineReplyControllerRequestsDismissal:(id)arg0 presentKeyboard:(BOOL)arg1 ;
-(void)inlineReplyControllerRequestsReloadInputViews:(id)arg0 ;
-(void)inputLanguageDidChange:(id)arg0 ;
-(void)insertInitialCompositionIfNeeded;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg0 ;
-(void)invalidateEntryViewForNewCompose;
-(void)keyCommandDelete:(id)arg0 ;
-(void)keyCommandDeleteConversation:(id)arg0 ;
-(void)keyCommandEditMessage:(id)arg0 ;
-(void)keyCommandPage:(id)arg0 ;
-(void)keyCommandPrint:(id)arg0 ;
-(void)keyCommandReply:(id)arg0 ;
-(void)keyCommandReply:(id)arg0 withModifier:(BOOL)arg1 ;
-(void)keyCommandReplyAlternate:(id)arg0 ;
-(void)keyCommandSelectTapback:(id)arg0 ;
-(void)keyCommandShowDetails:(id)arg0 ;
-(void)keyCommandTapback:(id)arg0 ;
-(void)keyCommandToggleDetails;
-(void)keyCommandToggleUnreadState;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)keyboardDidShowOrHide:(id)arg0 ;
-(void)keyboardShouldShowCandidates:(id)arg0 ;
-(void)keyboardShouldShowPredictions:(id)arg0 ;
-(void)keyboardWillBeginInteractiveDismissal:(id)arg0 ;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)keyboardWillShowOrHide:(id)arg0 ;
-(void)layoutFooterView;
-(void)layoutLockoutView;
-(void)loadChatInputController;
-(void)loadView;
-(void)lockoutViewControllerDidFinishDismissing:(id)arg0 ;
-(void)macRecipientsControllerDidUpdateToFieldSizing:(id)arg0 ;
-(void)macShowUnknownContactPopoverForNicknameUpdate:(id)arg0 presentingViewController:(id)arg1 sourceView:(id)arg2 ;
-(void)makeEntryViewActiveAfterSend;
-(void)messageAcknowledgmentPickerViewController:(id)arg0 didPickAcknowledgment:(NSInteger)arg1 ;
-(void)messageEditingViewController:(id)arg0 confirmedEditWithComposition:(id)arg1 ;
-(void)messageEditingViewController:(id)arg0 didUpdateFrameForBalloonView:(id)arg1 ;
-(void)messageEditingViewControllerIsAnimatingIn:(id)arg0 ;
-(void)messageEditingViewControllerIsAnimatingOut:(id)arg0 ;
-(void)messageEditingViewControllerRequestsDismissal:(id)arg0 presentKeyboard:(BOOL)arg1 ;
-(void)messageEntryView:(id)arg0 didInsertPluginPayload:(id)arg1 ;
-(void)messageEntryView:(id)arg0 didMoveToWindow:(id)arg1 ;
-(void)messageEntryView:(id)arg0 didTapMediaObject:(id)arg1 ;
-(void)messageEntryView:(id)arg0 shouldShowAppStrip:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)messageEntryView:(id)arg0 shouldShowAppsWithItems:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg0 ;
-(void)messageEntryViewDidBeginEditingNotAlreadyActive:(id)arg0 ;
-(void)messageEntryViewDidChange:(id)arg0 ;
-(void)messageEntryViewDidEndEditing:(id)arg0 ;
-(void)messageEntryViewPopulateNextSentMessage:(id)arg0 ;
-(void)messageEntryViewPopulatePreviousSentMessage:(id)arg0 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg0 ;
-(void)messageEntryViewRecordingDidChange:(id)arg0 ;
-(void)messageEntryViewSafeAreaInsetsDidChange:(id)arg0 ;
-(void)messageEntryViewSendButtonHit:(id)arg0 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg0 ;
-(void)messageEntryViewSwipeDownGestureRecognized:(id)arg0 ;
-(void)messageEntryViewWantsEffectPicker:(id)arg0 ;
-(void)messagePressedForCommSafetyEduScreen:(id)arg0 isSending:(BOOL)arg1 withComposition:(id)arg2 withSensitiveMediaObjects:(id)arg3 withIdentifiersOfShelvedImages:(id)arg4 ;
-(void)navbarCanvasViewController:(id)arg0 didTapView:(id)arg1 ;
-(void)navbarCanvasViewController:(id)arg0 infoButtonTapped:(id)arg1 ;
-(void)navbarCanvasViewController:(id)arg0 updatedJoinStateWithStyle:(NSInteger)arg1 ;
-(void)navbarCanvasViewControllerCanvasHeightDidChange:(id)arg0 ;
-(void)navbarCanvasViewControllerFaceTimeAudioButtonTapped:(id)arg0 ;
-(void)navbarCanvasViewControllerFaceTimeVideoButtonTapped:(id)arg0 ;
-(void)navbarCanvasViewControllerLegacyCanvasHeightDidChange:(id)arg0 ;
-(void)nicknameBannerDidInteractWithOnboardingOffer:(id)arg0 ;
-(void)nicknameBannerViewActionButtonTapped:(id)arg0 ;
-(void)nicknameBannerViewDismissButtonTapped:(id)arg0 ;
-(void)nicknameStoreDidChange:(id)arg0 ;
-(void)nicknameUpdatesViewController:(id)arg0 selectedAction:(NSUInteger)arg1 forNicknameUpdate:(id)arg2 sourceView:(id)arg3 ;
-(void)onboardingControllerDidFinish:(id)arg0 ;
-(void)openURLInExtensionContextForMode:(id)arg0 ;
-(void)parentControllerDidBecomeActive;
-(void)performAnimatedJunkRecoveryTransition:(id)arg0 ;
-(void)performResumeDeferredSetup;
-(void)photoGridDisplayedChatItemChanged:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 deleteStickerWithTransferGUID:(id)arg1 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 replyButtonPressedForChatItem:(id)arg1 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 sendMessageAcknowledgment:(NSInteger)arg1 forChatItem:(id)arg2 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 sendMessageHighlight:(BOOL)arg1 forChatItem:(id)arg2 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 stickerPackTappedWithAdamID:(id)arg1 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 verticallyScrollTranscriptByAmount:(CGFloat)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)photosGridFullScreenBalloonViewController:(id)arg0 willDisappearWithSendAnimation:(BOOL)arg1 ;
-(void)photosGridFullScreenBalloonViewControllerDidDisappear:(id)arg0 ;
-(void)photosGridFullScreenBalloonViewControllerHandleDismissTap:(id)arg0 ;
-(void)photosViewController:(id)arg0 commitPreviewViewControllerForContextMenuInteraction:(id)arg1 ;
-(void)photosViewController:(id)arg0 contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)photosViewController:(id)arg0 didDoubleTapAssetReference:(id)arg1 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)prepareInputForPreviewPresentation;
-(void)prepareToDismissForSecondInstance;
-(void)presentActionMenuForAccountSelection:(id)arg0 completion:(id)arg1 ;
-(void)presentAppStoreForURL:(id)arg0 fromSourceApplication:(id)arg1 ;
-(void)presentCollaborationFailureAlertForComposition:(id)arg0 sharingURL:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)presentCollaborationPopoverUI;
-(void)presentDetailsViewController;
-(void)presentDetailsViewControllerAnimated:(BOOL)arg0 ;
-(void)presentNicknameUpdatesViewControllerFromView:(id)arg0 ;
-(void)presentPhotosApp;
// -(void)presentReplaceCompositionAlertWithConfirmationBlock:(id)arg0 cancelBlock:(unk)arg1  ;
-(void)presentStickerDetailControllerWithChatItem:(id)arg0 ;
-(void)presentTranscriptOverlayViewController:(id)arg0 ;
-(void)presentTrimControllerForMediaObject:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentedPreviewControllerDidSelectDismissToGrid;
-(void)presentedPreviewControllerDidSelectNavigateToGrid;
-(void)previewController:(id)arg0 didTransitionToState:(NSInteger)arg1 ;
-(void)previewController:(id)arg0 willTransitionToState:(NSInteger)arg1 ;
-(void)previewControllerDidCancelDismiss:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)previewControllerWillDismiss:(id)arg0 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)prewarmCamera:(id)arg0 ;
-(void)prewarmFunCamera;
-(void)primeTranscriptWithInitialOffset:(struct CGPoint )arg0 inset:(struct UIEdgeInsets )arg1 ;
-(void)providerWillBeRemovedFromToolbarController:(id)arg0 ;
-(void)purgeAttachmentsForChat:(id)arg0 ;
-(void)raiseGestureRecognized:(id)arg0 ;
-(void)readerViewControllerWillDismiss:(id)arg0 ;
-(void)recoverableDeleteConversation;
-(void)refreshMacToolbar;
-(void)registerChatForScreenTime:(id)arg0 ;
-(void)registerNotifications;
-(void)registerNotificationsForConversation:(id)arg0 ;
-(void)reloadEntryViewIfNeeded;
-(void)reloadFooterViewIfNecessaryForNewConversation:(id)arg0 ;
-(void)removeFooterView;
-(void)removeFromCollaboration:(id)arg0 ;
-(void)removeLockoutControllerIfNeeded;
-(void)removeParticipant:(id)arg0 fromCollaboration:(id)arg1 forChatGUID:(id)arg2 containerSetupInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)removeSuggestionsBanner:(id)arg0 animated:(BOOL)arg1 ;
-(void)replyButtonTappedForMediaObject:(id)arg0 previewController:(id)arg1 ;
-(void)resignFirstResponderOnEntryViewIfNeeded;
-(void)restoreContentOffsetChanges;
-(void)restoreEntryViewAfterPreview;
-(void)restoreEntryViewPasteConfiguration;
-(void)restoreInputAfterPreviewPresentation;
-(void)restoreInputAfterSearchPresentation;
-(void)scrollToMessage:(id)arg0 atSpecificMessagePartIndex:(NSInteger)arg1 highlight:(BOOL)arg2 withInlineReplyOverlay:(BOOL)arg3 ;
-(void)scrollToMessage:(id)arg0 atSpecificMessagePartIndex:(NSInteger)arg1 highlight:(BOOL)arg2 withInlineReplyOverlay:(BOOL)arg3 alignedWithView:(id)arg4 allowOverScroll:(BOOL)arg5 ;
-(void)scrollToMessage:(id)arg0 highlight:(BOOL)arg1 ;
-(void)scrollToMessage:(id)arg0 highlight:(BOOL)arg1 withInlineReplyOverlay:(BOOL)arg2 ;
-(void)scrollTranscriptEnd;
-(void)scrollTranscriptPageDown;
-(void)scrollTranscriptPageUp;
-(void)scrollTranscriptPageUpDirection:(BOOL)arg0 toBounds:(BOOL)arg1 ;
-(void)scrollTranscriptToAlignWithMessageEditingBalloonView;
-(void)selectAccountAndSendComposition:(id)arg0 completion:(id)arg1 ;
-(void)selectAllForActionManager:(id)arg0 ;
-(void)selectContact;
-(void)sendAnalyticsForElapsedSendTimeForType:(NSInteger)arg0 sharingURL:(id)arg1 timeInterval:(CGFloat)arg2 ;
-(void)sendAnimationManagerDidStopAnimation:(id)arg0 context:(id)arg1 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg0 context:(id)arg1 ;
-(void)sendCollaborationCompositionAndSetSendingState:(id)arg0 ;
-(void)sendComposition:(id)arg0 ;
-(void)sendCompositionForCloudKit:(id)arg0 completion:(id)arg1 ;
-(void)sendCompositionForCollaboration:(id)arg0 collaborationType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)sendCompositionForFileProvider:(id)arg0 completion:(id)arg1 ;
-(void)sendCompositionForPendingCollaboration:(id)arg0 completion:(id)arg1 ;
-(void)sendCompositionIfAllowed:(id)arg0 ;
-(void)sendCompositionWithThrow:(id)arg0 inConversation:(id)arg1 ;
-(void)sendCompositionWithoutThrow:(id)arg0 inConversation:(id)arg1 ;
-(void)sendCurrentLocation;
-(void)sendCurrentLocationMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 forConversation:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)sendMessage:(id)arg0 forConversation:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
-(void)sendMessageAcknowledgment:(NSInteger)arg0 chatItem:(id)arg1 previewController:(id)arg2 ;
-(void)sendSticker:(id)arg0 withDragTarget:(id)arg1 ;
-(void)sendStickerWithMediaObject:(id)arg0 parentMessagePartChatItem:(id)arg1 ;
-(void)setClickyOrbChatItem:(id)arg0 ;
-(void)setConversation:(id)arg0 ;
-(void)setConversation:(id)arg0 forceReload:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setLocalUserIsComposing:(BOOL)arg0 withPluginBundleID:(id)arg1 typingIndicatorData:(id)arg2 ;
-(void)setPreferredAudioMessageAppLaunchBehaviorForComposition:(id)arg0 ;
-(void)setSendingMessage:(BOOL)arg0 ;
-(void)setUnreadBannerHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUpStyleForDarkEffect;
-(void)setupClickyOrbForConversation:(id)arg0 ;
-(void)setupScrollingForKeyboardInteraction;
-(void)setupStateForLaunchPluginWithBundleID:(id)arg0 pluginPayload:(id)arg1 ;
-(void)setupStateForLaunchURL:(id)arg0 ;
-(void)showAcknowledgmentsAssociatedWithChatItem:(id)arg0 ;
-(void)showAlternateViewerForMediaObject:(id)arg0 ;
-(void)showAppsForEntryView:(id)arg0 withItems:(id)arg1 ;
-(void)showBannerForGroupUpdate:(id)arg0 ;
-(void)showContactForHandle:(id)arg0 ;
-(void)showEffectPicker;
-(void)showFullScreenAcknowledgmentPickerIfNeededForBalloonAtIndexPath:(id)arg0 ;
-(void)showInlineReplyControllerForChatItem:(id)arg0 presentKeyboard:(BOOL)arg1 ;
-(void)showKeyboard;
-(void)showMediaPicker:(id)arg0 animated:(BOOL)arg1 ;
-(void)showMessageEditingViewControllerForChatItem:(id)arg0 presentKeyboard:(BOOL)arg1 ;
-(void)showModalInlineReplyControllerForChatItem:(id)arg0 ;
-(void)showPayloadValidationAlertWithDescription:(id)arg0 ;
-(void)showSMSReportSpamExtensionControllerForMessages:(id)arg0 ;
-(void)showScreenTimeShieldIfNeeded;
-(void)showStickersAssociatedWithChatItem:(id)arg0 completion:(id)arg1 ;
-(void)showUpdatePromptForNicknameUpdate:(id)arg0 sourceView:(id)arg1 completionBlock:(id)arg2 ;
-(void)showViewerForMediaObject:(id)arg0 ;
-(void)spacePressed:(id)arg0 ;
-(void)stageAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)startCommitPayload:(id)arg0 forConversation:(id)arg1 ;
-(void)startDeferredEditingPayload:(id)arg0 forConversation:(id)arg1 ;
-(void)startTrimmingMediaObjectsInComposition:(id)arg0 ;
-(void)stickerDetailViewController:(id)arg0 deletedStickerWithTransferGUID:(id)arg1 ;
-(void)stickerDetailViewController:(id)arg0 selectedStickerPackWithAdamID:(id)arg1 ;
-(void)stopForcingOrientation;
-(void)suggestionPresenter:(id)arg0 didDismissViewController:(id)arg1 ;
-(void)suggestionPresenter:(id)arg0 didPresentViewController:(id)arg1 ;
-(void)suggestionPresenter:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)suggestionPresenter:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)suggestionPresenterWantsToHideBanner:(id)arg0 ;
-(void)suggestionPresenterWantsToShowBanner:(id)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)textPasteConfigurationSupporting:(id)arg0 transformPasteItem:(id)arg1 ;
-(void)throwAnimationManager:(id)arg0 canNowSendMessages:(id)arg1 ;
-(void)throwAnimationManagerPrepareForThrowAnimation:(id)arg0 context:(id)arg1 ;
-(void)toggleUnreadState:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 didRequestPresentationStyle:(NSUInteger)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 doubleTappedItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 selectedItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 tappedForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestStartEditingPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)transcriptCollectionViewController:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didPinchPhotoStackForChatItem:(id)arg1 assetReference:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapAttributionButtonForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapPendingMomentShareForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapPhotoStackAdditionalItemsForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapPhotoStackButtonForChatItem:(id)arg1 assetReference:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapPhotoStackButtonForPendingMomentShareChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapPhotoStackForChatItem:(id)arg1 assetReference:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapPluginStatusButtonForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapReplyCountStatusButtonForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willDeleteChatItems:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willDisplayBalloonForGUID:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willDisplayContextMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 willDisplayStatusCell:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)transcriptCollectionViewControllerAudioControllerDidStop:(id)arg0 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg0 ;
-(void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg0 ;
-(void)transcriptCollectionViewControllerNeedsChatItemLayoutInvalidation:(id)arg0 ;
-(void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(id)arg0 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg0 ;
-(void)transcriptOverlayViewController:(id)arg0 visibleGUIDsDidChange:(id)arg1 ;
-(void)transcriptOverlayViewControllerDidAnimateIn:(id)arg0 ;
-(void)transcriptOverlayViewControllerDidAnimateOut:(id)arg0 ;
-(void)transcriptOverlayViewControllerIsAnimatingIn:(id)arg0 ;
-(void)transcriptOverlayViewControllerIsAnimatingOut:(id)arg0 ;
-(void)transcriptOverlayViewControllerWillAnimateIn:(id)arg0 ;
-(void)transcriptOverlayViewControllerWillAnimateOut:(id)arg0 ;
-(void)transcriptSharingBannerWillDismiss:(id)arg0 ;
-(void)transcriptStopSharingButtonTapped:(id)arg0 ;
-(void)trimController:(id)arg0 didFinishTrimmingMediaObject:(id)arg1 withReplacementMediaObject:(id)arg2 ;
-(void)trimControllerDidCancel:(id)arg0 ;
-(void)unexpectedlyLoggedOutNotificationView:(id)arg0 didChangeRequestedHeight:(CGFloat)arg1 ;
-(void)unreadBannerViewTapped:(id)arg0 ;
-(void)unregisterChatForScreenTime:(id)arg0 ;
-(void)updateAppStripVisibility:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateBannerViewDismissButtonTapped:(id)arg0 updateType:(NSUInteger)arg1 ;
-(void)updateChargeOnStatusCell:(id)arg0 ;
-(void)updateChargeOnVisibleStatusCells;
-(void)updateChatControllerForRecoveredJunkConversation;
-(void)updateContact:(id)arg0 withNicknameUpdate:(id)arg1 updatePhoto:(BOOL)arg2 updateName:(BOOL)arg3 addHandleToContact:(BOOL)arg4 presentationMode:(NSUInteger)arg5 ;
-(void)updateContactQuietlyForNicknameUpdate:(id)arg0 updatePhoto:(BOOL)arg1 updateName:(BOOL)arg2 ;
-(void)updateEntryViewHeightIncludingAppStrip:(BOOL)arg0 ;
-(void)updateFoundInSuggestionPresenter;
-(void)updateQLPreviewControllerBarButtonItemsIfVisible;
-(void)updateQLPreviewControllerIfVisible;
-(void)updateRaiseGesture;
-(void)updateScreenTimeShieldIfNeededForChat:(id)arg0 ;
-(void)updateStyleForCurrentEffect;
-(void)updateSupportedInterfaceOrientations:(NSUInteger)arg0 ;
-(void)updateTyping;
-(void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDismissFunCamera:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;
-(void)windowDidResignKey:(id)arg0 ;


@end


#endif