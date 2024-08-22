// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSCRIPTCOLLECTIONVIEWCONTROLLER_H
#define CKTRANSCRIPTCOLLECTIONVIEWCONTROLLER_H

@class NSIndexPath, NSString, NSArray, IMChat, CKTranscriptCompositor, NSMutableSet, UIView<CKGradientReferenceView>, NSIndexSet, UITapGestureRecognizer, NSDictionary, UIView, IMStateCaptureAssistant, UIView<CKFullscreenEffectView>;
@protocol CKAudioControllerDelegate, CKTranscriptCompositorDatasourceDelegate, CKLocationShareBalloonViewDelegate, CKLocationSharingDelegate, CKVideoPlayerBalloonViewDelegate, CKTranscriptActionButtonCellDelegate, CKTranscriptPhotoStackCellDelegate, CKTitledImageBalloonViewDelegate, CKTranscriptCollectionViewDelegate, CKMovieBalloonViewDelegate, CNAvatarViewDelegate, IMStateLoggable, UICollectionViewDelegateFlowLayout, CKFullScreenEffectManagerDelegate, CKPluginPlaybackManagerDelegate, CKAssociatedMessageTranscriptCellDelegate, CKTranscriptBalloonSelectionManagerDelegate, CKTranscriptBalloonSelectionManagerDataSource, CKBalloonViewDelegate, UICollectionViewDelegate_Private, CKCoreTranscriptControllerProtocol, CKSendAnimationManagerDelegate, UICollectionViewDataSource, CKTranscriptCollectionViewControllerDelegate, UIDragInteractionDelegate, OS_dispatch_group;


#import "CKViewController.h"
#import "CKAudioController.h"
#import "CKTranscriptCollectionView.h"
#import "CKConversation.h"
#import "CKFullScreenEffectManager.h"
#import "CKImpactEffectManager.h"
#import "CKPluginPlaybackManager.h"
#import "CKTranscriptBalloonSelectionManager.h"

@interface CKTranscriptCollectionViewController : CKViewController <CKAudioControllerDelegate, CKTranscriptCompositorDatasourceDelegate, CKLocationShareBalloonViewDelegate, CKLocationSharingDelegate, CKVideoPlayerBalloonViewDelegate, CKTranscriptActionButtonCellDelegate, CKTranscriptPhotoStackCellDelegate, CKTitledImageBalloonViewDelegate, CKTranscriptCollectionViewDelegate, CKMovieBalloonViewDelegate, CNAvatarViewDelegate, IMStateLoggable, UICollectionViewDelegateFlowLayout, CKFullScreenEffectManagerDelegate, CKPluginPlaybackManagerDelegate, CKAssociatedMessageTranscriptCellDelegate, CKTranscriptBalloonSelectionManagerDelegate, CKTranscriptBalloonSelectionManagerDataSource, CKBalloonViewDelegate, UICollectionViewDelegate_Private, CKCoreTranscriptControllerProtocol, CKSendAnimationManagerDelegate, UICollectionViewDataSource>

 {
    NSIndexPath *_itemIndexPathToHighlight;
}


@property (retain, nonatomic, setter=__setCurrentTestName:) NSString *__CurrentTestName; // ivar: ___CurrentTestName
@property (nonatomic) BOOL allowsPluginPlayback; // ivar: _allowsPluginPlayback
@property (copy, nonatomic) NSArray *associatedChatItems; // ivar: _associatedChatItems
@property (retain, nonatomic) CKAudioController *audioController; // ivar: _audioController
@property (nonatomic) CGFloat balloonMaxWidth; // ivar: _balloonMaxWidth
@property (readonly, nonatomic) IMChat *chat;
@property (copy, nonatomic) NSArray *chatItems; // ivar: _chatItems
@property (retain, nonatomic) CKTranscriptCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CKTranscriptCompositor *compositor; // ivar: _compositor
@property (nonatomic) NSInteger contentAnimationPauseReasons; // ivar: _contentAnimationPauseReasons
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) NSMutableSet *currentEffectDecorationViews; // ivar: _currentEffectDecorationViews
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKTranscriptCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<UIDragInteractionDelegate> *dragInteractionDelegate; // ivar: _dragInteractionDelegate
@property (nonatomic) BOOL dynamicsDisabledBeforeInitialLoad; // ivar: _dynamicsDisabledBeforeInitialLoad
@property (nonatomic) BOOL filterAllButFirstMessage; // ivar: _filterAllButFirstMessage
@property (retain, nonatomic) CKFullScreenEffectManager *fullscreenEffectManager; // ivar: _fullscreenEffectManager
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // ivar: _gradientReferenceView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSIndexSet *hiddenAssociatedItems; // ivar: _hiddenAssociatedItems
@property (copy, nonatomic) NSIndexSet *hiddenBalloonViews; // ivar: _hiddenBalloonViews
@property (copy, nonatomic) NSIndexSet *hiddenItems; // ivar: _hiddenItems
@property (readonly, nonatomic) NSArray *imChatItems;
@property (retain, nonatomic) CKImpactEffectManager *impactEffectManager; // ivar: _impactEffectManager
@property (nonatomic, getter=isInitialLoad) BOOL initialLoad; // ivar: _initialLoad
@property (readonly, nonatomic) BOOL isInline; // ivar: _isInline
@property (nonatomic) BOOL isLoadingMoreMessages; // ivar: _isLoadingMoreMessages
@property (nonatomic) BOOL isPerformingRegenerateOrReloadOnlyUpdate; // ivar: _isPerformingRegenerateOrReloadOnlyUpdate
@property (retain, nonatomic) UITapGestureRecognizer *loggingTapGestureRecognizer; // ivar: _loggingTapGestureRecognizer
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (nonatomic) NSString *mostRecentlyTouchedPlugin; // ivar: _mostRecentlyTouchedPlugin
@property (copy, nonatomic) NSArray *notifications; // ivar: _notifications
@property (nonatomic) CGPoint peekSampleTranslation; // ivar: _peekSampleTranslation
@property (nonatomic, getter=isPeeking) BOOL peeking; // ivar: _peeking
@property (nonatomic) BOOL playedLastImpactEffectForTransitionFromComposing; // ivar: _playedLastImpactEffectForTransitionFromComposing
@property (nonatomic) CGFloat pluginPlaybackDelay; // ivar: _pluginPlaybackDelay
@property (retain, nonatomic) CKPluginPlaybackManager *pluginPlaybackManager; // ivar: _pluginPlaybackManager
@property (retain, nonatomic) NSDictionary *pluginSnapshots; // ivar: _pluginSnapshots
@property (readonly, nonatomic) CKTranscriptBalloonSelectionManager *selectionManager; // ivar: _selectionManager
@property (nonatomic, getter=isSettingChatItems) BOOL settingChatItems; // ivar: _settingChatItems
@property (nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear; // ivar: _shouldLoadDefaultConversationViewingMessageCountOnAppear
@property (nonatomic) BOOL shouldUseOpaqueMask; // ivar: _shouldUseOpaqueMask
@property (readonly, nonatomic, getter=isShowingTranscriptTimestamps) BOOL showingTranscriptTimestamps;
@property (nonatomic) BOOL sizedFullTranscript; // ivar: _sizedFullTranscript
@property (retain, nonatomic) UIView *snapshotOfPluginBeingReplacedByBreadcrumb; // ivar: _snapshotOfPluginBeingReplacedByBreadcrumb
@property (copy, nonatomic) NSString *speakerTransferGUID; // ivar: _speakerTransferGUID
@property (retain, nonatomic) IMStateCaptureAssistant *stateCaptureAssistant; // ivar: _stateCaptureAssistant
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView<CKFullscreenEffectView> *topEffectView; // ivar: _topEffectView
@property (retain, nonatomic) NSString *transcriptIdentifier; // ivar: _transcriptIdentifier
@property (nonatomic, getter=isTranscriptUpdateAnimated) BOOL transcriptUpdateAnimated; // ivar: _transcriptUpdateAnimated
@property (copy, nonatomic) id *transcriptUpdateCompletion; // ivar: _transcriptUpdateCompletion
@property (nonatomic) BOOL transitionedFromComposing; // ivar: _transitionedFromComposing
@property (nonatomic) BOOL transitioningFromComposing; // ivar: _transitioningFromComposing
@property (retain, nonatomic) NSObject<OS_dispatch_group> *updateAnimationGroup; // ivar: _updateAnimationGroup


-(BOOL)__im_ff_hubbleTranscriptEnabled;
-(BOOL)_allowsEffectAutoPlayback;
-(BOOL)_canShowWhileLocked;
-(BOOL)_canUseOpaqueMask;
-(BOOL)_pluginChatItem:(id)arg0 hasControllerConformingToProtocol:(id)arg1 ;
-(BOOL)_selectedChatItemsHaveMultipleSenders:(id)arg0 ;
-(BOOL)balloonTextViewIsSelected;
-(BOOL)canRaiseToListen;
-(BOOL)canRaiseToTalk;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 isEditableItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)compositorSupportsCustomLayoutGroupsForLayoutProvider:(id)arg0 ;
-(BOOL)compositorSupportsCustomLayoutGroupsForSection:(NSInteger)arg0 ;
-(BOOL)hasRecentTouchForSendingPlugin:(id)arg0 ;
-(BOOL)isVisiblePlugin:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(BOOL)shouldPresentHawkingPromptForMessage:(id)arg0 ;
-(BOOL)wantsDrawerLayout;
-(CGFloat)_balloonHorizontalOffsetForParentChatItem:(id)arg0 contentAlignmentRect:(struct CGRect )arg1 responsibleChatItems:(*id)arg2 individualOffsets:(*id)arg3 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_indexOfBreadcrumbReplacingTranscriptPluginInChatItems:(id)arg0 inserted:(id)arg1 removed:(id)arg2 outIndexOfReplacedPlugin:(*NSUInteger)arg3 outIndexOfNewPlugin:(*NSUInteger)arg4 ;
-(id)_chatItemForGUID:(id)arg0 ;
-(id)_collectionView:(id)arg0 accessoriesForContextMenuWithConfiguration:(id)arg1 layoutAnchor:(struct ? )arg2 ;
-(id)_collectionView:(id)arg0 styleForContextMenuWithConfiguration:(id)arg1 ;
-(id)_itemProviderForSelectedChatItemsWithMultipleSenders:(id)arg0 ;
-(id)_itemProviderForSelectedChatItemsWithSingleSender:(id)arg0 ;
-(id)_mediaObjectsForOrganicChatItem:(id)arg0 onIndexPath:(id)arg1 ;
-(id)alertMessageForDelete;
-(id)alertTitleForDelete;
-(id)associatedChatItemForGUID:(id)arg0 ;
-(id)avatarView:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)balloonPluginForViewController:(id)arg0 ;
-(id)balloonViewForChatItem:(id)arg0 ;
-(id)balloonViewForIndexPath:(id)arg0 ;
-(id)cellForAssociatedChatItem:(id)arg0 ;
-(id)cellForChatItem:(id)arg0 ;
-(id)chatForSendAnimationManager:(id)arg0 ;
-(id)chatItemForCell:(id)arg0 ;
-(id)chatItemForGUID:(id)arg0 ;
-(id)chatItemWithIMChatItem:(id)arg0 traitCollection:(id)arg1 ;
-(id)chatItemWithNotification:(id)arg0 ;
-(id)chatItemsWithIMChatItems:(id)arg0 ;
-(id)chatItemsWithNotifications:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 chatItemForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 chatItemForSupplementaryViewAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionViewControllerForImpactEffectManager:(id)arg0 ;
-(id)compositorDatasourceItemsForSection:(NSInteger)arg0 ;
-(id)currentEffectForCollectionView:(id)arg0 layout:(id)arg1 ;
-(id)hawkingFailurePromptMessageForHandle:(id)arg0 ;
-(id)indexPathForBalloonView:(id)arg0 ;
-(id)initWithConversation:(id)arg0 delegate:(id)arg1 balloonMaxWidth:(CGFloat)arg2 marginInsets:(struct UIEdgeInsets )arg3 ;
-(id)initWithConversation:(id)arg0 delegate:(id)arg1 notifications:(id)arg2 balloonMaxWidth:(CGFloat)arg3 marginInsets:(struct UIEdgeInsets )arg4 ;
-(id)lastMessagePartChatItem;
-(id)layoutGroupForDatasourceItems:(id)arg0 environment:(id)arg1 layoutItems:(id)arg2 ;
-(id)liveViewControllerContextIdentifier:(id)arg0 ;
-(id)makeHawkingPromptForMessage:(id)arg0 toRecipient:(id)arg1 fromSender:(id)arg2 withSMSOption:(BOOL)arg3 ;
-(id)messagePartForBalloonView:(id)arg0 ;
-(id)overrideCurrentFrameMapForLayout:(id)arg0 ;
-(id)overrideTargetFrameMapForLayout:(id)arg0 ;
-(id)parentViewControllerForReusableVideoPlayer:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)printableViewController;
-(id)selectedChatItems;
-(id)selectedItems;
-(id)selectionManagerChatItems:(id)arg0 ;
-(id)sharingMenu;
-(id)stateDictionaryForDiagnosticsRequest;
-(id)transcriptBackgroundColor;
-(id)videoPlayerReusePool;
-(struct CGRect )convertedBoundsToCullFromView:(id)arg0 ;
-(void)__raiseGestureRecognized:(id)arg0 ;
-(void)_addAttachmentsToProvidersArray:(id)arg0 forChatItems:(id)arg1 ;
-(void)_collectionViewDidRestAsync:(BOOL)arg0 ;
-(void)_conversationListFinishedMerging:(id)arg0 ;
-(void)_deferredStartPlayback;
-(void)_deselectChatItemGuid:(id)arg0 ;
-(void)_diffAssociatedItemsWithOldAssociatedItems:(id)arg0 removedAssociatedIndexes:(*id)arg1 insertedAssociatedIndexes:(*id)arg2 ;
-(void)_downgradeMessage:(id)arg0 ;
-(void)_downgradeMessage:(id)arg0 andDowngradeChat:(BOOL)arg1 ;
-(void)_downgradeMessageAtIndexPath:(id)arg0 ;
-(void)_downgradeMessageAtIndexPath:(id)arg0 andDowngradeChat:(BOOL)arg1 ;
-(void)_forceReloadChatItems;
-(void)_handleAssociatedMessageCellTapEvent:(id)arg0 isDoubleTap:(BOOL)arg1 ;
-(void)_hideBalloonViewIfNecessaryForCell:(id)arg0 indexPath:(id)arg1 ;
-(void)_highlightCell:(id)arg0 autoDismiss:(BOOL)arg1 ;
-(void)_indicesOfReplyChatItemsToInsertWithoutFading:(id)arg0 inserted:(id)arg1 outInsertIndices:(*id)arg2 ;
-(void)_indicesOfTranscriptPluginChatItemRemoveAndInsertedWithoutFading:(id)arg0 inserted:(id)arg1 removed:(id)arg2 outInsertIndices:(*id)arg3 outRemoveIndices:(*id)arg4 ;
-(void)_launchTapToRadar;
-(void)_loadMessagesIfNeeded;
-(void)_logVisibleChatItems;
-(void)_prewarmBalloonControllers;
-(void)_prewarmMediaPreviews;
-(void)_prewarmTranscriptAssetsIfNecessary;
-(void)_refreshLocationsForRecipientsIfNecessary;
-(void)_releaseActiveBalloonControllers;
-(void)_replayLastImpactEffectIfNotFromMe;
-(void)_resendMessageAtIndexPath:(id)arg0 ;
-(void)_resizingEnd:(id)arg0 ;
-(void)_resizingStart:(id)arg0 ;
-(void)_saveMediaObjects:(id)arg0 withMomentShareURL:(id)arg1 sender:(id)arg2 ;
-(void)_searchForSelectedBalloonHack;
-(void)_selectChatItemGuid:(id)arg0 selectionState:(id)arg1 ;
-(void)_startPlaybackWithIndexPaths:(id)arg0 ;
-(void)_tearDownLiveBubbles;
-(void)_trackPhotoStackEvent:(id)arg0 forStackBalloonView:(id)arg1 transcriptOrientation:(char)arg2 ;
-(void)_updateEffectViewMessageRect:(id)arg0 effect:(id)arg1 ;
-(void)_updatePluginPlaybackManagerForInsertedChatItems:(id)arg0 ;
-(void)addContentAnimationPauseReasons:(NSInteger)arg0 ;
-(void)addressBookChanged:(id)arg0 ;
-(void)associatedMessageTranscriptCellDoubleTapped:(id)arg0 ;
-(void)associatedMessageTranscriptCellLongTouched:(id)arg0 ;
-(void)audioController:(id)arg0 mediaObjectDidFinishPlaying:(id)arg1 ;
-(void)audioController:(id)arg0 mediaObjectProgressDidChange:(id)arg1 currentTime:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(void)audioControllerDidPause:(id)arg0 ;
-(void)audioControllerDidStop:(id)arg0 ;
-(void)audioControllerPlayingDidChange:(id)arg0 ;
-(void)balloonView:(id)arg0 mediaObjectDidFinishPlaying:(id)arg1 ;
-(void)balloonView:(id)arg0 userDidDragOutsideBalloonWithPoint:(struct CGPoint )arg1 ;
-(void)balloonView:(id)arg0 willInsertPluginViewAsSubview:(id)arg1 ;
-(void)balloonViewDoubleTapped:(id)arg0 ;
-(void)balloonViewLongTouched:(id)arg0 ;
-(void)balloonViewSelected:(id)arg0 withModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)balloonViewShouldCopyToPasteboard:(id)arg0 ;
-(void)balloonViewShowInlineReply:(id)arg0 ;
-(void)balloonViewTapped:(id)arg0 withModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)balloonViewTextViewDidChangeSelection:(id)arg0 selectedText:(id)arg1 textView:(id)arg2 ;
-(void)balloonViewTitleTapped:(id)arg0 ;
-(void)chatItemIsFilteredChanged:(id)arg0 ;
-(void)chatItemsDidChange:(id)arg0 ;
-(void)clearRecentPluginTouch;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 didRecognizePanGestureWithPoint:(struct CGPoint )arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayContextMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionViewDidInset:(id)arg0 ;
-(void)collectionViewLayout:(id)arg0 sizeDidChange:(struct CGSize )arg1 ;
-(void)collectionViewLayoutRestingDidChange:(id)arg0 ;
-(void)collectionViewWillInset:(id)arg0 targetContentInset:(struct UIEdgeInsets *)arg1 ;
-(void)collectionViewWillProgrammaticallyScroll:(id)arg0 animated:(BOOL)arg1 ;
-(void)collectionViewWillScroll:(id)arg0 targetContentOffset:(struct CGPoint *)arg1 ;
-(void)configureAssociatedCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)configureSpeakerButtonCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)connectivityChanged:(id)arg0 ;
-(void)copyChatItemsToPasteboard:(id)arg0 ;
-(void)copySelectedChatItemsToPasteboard;
-(void)cullCellSubviews;
-(void)dealloc;
-(void)deleteSelectedChatItems:(id)arg0 ;
-(void)deselectAllBalloons;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didPinchPhotoStackCell:(id)arg0 ;
-(void)didTapPendingMomentSharePhotoStackBalloonView:(id)arg0 ;
-(void)didTapTranscriptActionButtonCell:(id)arg0 ;
-(void)didTapUnavailableMomentShareBalloonView:(id)arg0 ;
-(void)effectManager:(id)arg0 didStartEffect:(id)arg1 ;
-(void)effectManager:(id)arg0 didStopEffect:(id)arg1 ;
-(void)endHoldingUpdatesAfterQuicklookCancelsDismiss;
-(void)hideTranscriptTimestampsIfNeeded;
-(void)highlightItemAtIndexPathWhenDisplayed:(id)arg0 autoDismiss:(BOOL)arg1 ;
-(void)installedAppsChanged:(id)arg0 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg0 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg0 ;
-(void)invalidateChatItemLayoutWithBalloonMaxWidth:(CGFloat)arg0 marginInsets:(struct UIEdgeInsets )arg1 traitCollection:(id)arg2 ;
-(void)liveBalloonTouched:(id)arg0 ;
-(void)liveViewController:(id)arg0 requestPresentationStyle:(NSUInteger)arg1 ;
-(void)liveViewController:(id)arg0 stagePayload:(id)arg1 skipShelf:(BOOL)arg2 allowAllCommits:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)liveViewController:(id)arg0 stageSticker:(id)arg1 skipShelf:(BOOL)arg2 allowAllCommits:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)loadEarlierMessages;
-(void)loadEarlierMessagesForConversation;
-(void)loadMessagesIfNeeded;
-(void)loadMessagesIfNeededSkipValidation;
-(void)loadRecentMessages;
-(void)loadRecentMessagesForConversation;
-(void)loadView;
-(void)locationShareBalloonViewIgnoreButtonTapped:(id)arg0 ;
-(void)locationShareBalloonViewShareButtonTapped:(id)arg0 ;
-(void)locationSharingClient:(id)arg0 showShareLocationMenuWithBalloonPluginView:(id)arg1 ;
-(void)locationStringDidChange:(id)arg0 ;
-(void)multiwayCallStateChanged:(id)arg0 ;
-(void)parentControllerDidBecomeActive;
-(void)performResumeDeferredSetup;
-(void)photoStackBalloonView:(id)arg0 didChangeCurrentAssetReference:(id)arg1 isProgrammaticChange:(BOOL)arg2 didChangeIndex:(BOOL)arg3 ;
-(void)photoStackBalloonView:(id)arg0 photoStack:(id)arg1 didSelectAssetReference:(id)arg2 ;
-(void)photoStackBalloonView:(id)arg0 photoStackDidSelectAdditionalItems:(id)arg1 ;
-(void)playEffectsIfNecessaryWithInsertedUnreadMessage:(id)arg0 insertedLocalUnsentChatItem:(id)arg1 ;
-(void)playFullscreenEffectIfNecessaryAutoplayingOutgoingEffect:(BOOL)arg0 autoplayingIncomingEffect:(BOOL)arg1 insertedUnreadMessage:(id)arg2 insertedLocalUnsentChatItem:(id)arg3 ;
-(void)playImpactEffectIfNecessaryAutoplayingOutgoingEffect:(BOOL)arg0 autoplayingIncomingEffect:(BOOL)arg1 impactEffectChatItem:(id)arg2 ;
-(void)pluginPlaybackManagerDidStopPlayback:(id)arg0 ;
-(void)prepareForSuspend;
-(void)presentHawkingPromptForMessage:(id)arg0 ;
-(void)previewDidChange:(id)arg0 ;
-(void)printTranscript;
-(void)quickSaveButtonWasTapped:(id)arg0 ;
-(void)raiseGestureRecognized:(id)arg0 ;
-(void)reconfigureVisibleSpeakerButtonCells;
-(void)reloadChatItemAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)reloadData;
-(void)removeContentAnimationPauseReasons:(NSInteger)arg0 ;
-(void)repromptLastBlackholeFailureIfNotPrompted;
-(void)scrollToBottomAnimated:(BOOL)arg0 withDuration:(CGFloat)arg1 insertedUnreadMessage:(id)arg2 insertedLocalUnsentChatItem:(id)arg3 withCompletion:(id)arg4 ;
-(void)scrollToTopOfLastBubbleCellAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectChatItem:(id)arg0 ;
-(void)selectRangeWithIndexPath:(id)arg0 ;
-(void)selectSingleBalloonView:(id)arg0 ;
-(void)selectionManager:(id)arg0 didAddChatItem:(id)arg1 selectionState:(id)arg2 ;
-(void)selectionManager:(id)arg0 didRemoveChatItem:(id)arg1 ;
-(void)selectionManagerDidRemoveAllSelectedChatItems:(id)arg0 ;
-(void)sendAnimationManagerDidStopAnimation:(id)arg0 context:(id)arg1 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg0 context:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setScrollAnchor:(CGFloat)arg0 ;
-(void)setSelectedItems:(id)arg0 ;
-(void)showTrascriptTimestamps;
-(void)sizeFullTranscriptIfNecessary;
-(void)snapshotDidChange:(id)arg0 ;
-(void)snapshotTaken:(id)arg0 ;
-(void)startFullscreenEffectIfNeededForChatItem:(id)arg0 ;
-(void)startPluginPlaybackAfterDelay:(CGFloat)arg0 ;
-(void)stopFullscreenEffect;
-(void)stopPlayingAudio;
-(void)stopPluginPlayback;
-(void)touchUpInsideCellFailureButton:(id)arg0 ;
-(void)touchUpInsideCellReportSpamButton:(id)arg0 ;
-(void)touchUpInsideCellSpeakerButton:(id)arg0 ;
-(void)touchUpInsideCellStatusButton:(id)arg0 ;
-(void)touchUpInsideNotifyAnywayButton:(id)arg0 ;
-(void)transferRestored:(id)arg0 ;
-(void)transferUpdated:(id)arg0 ;
-(void)tuConversationBalloonJoinButtonTapped:(id)arg0 ;
-(void)updateAnimationPaused;
-(void)updateEffectViewMessageRects;
-(void)updateLastAddressedHandleID:(id)arg0 lastAddressedSIMID:(id)arg1 ;
-(void)updateTargetAlphaForVisibleChatItems;
// -(void)updateTranscript:(id)arg0 animated:(unk)arg1 completion:(BOOL)arg2  ;
-(void)updateTranscriptChatItems:(id)arg0 inserted:(id)arg1 removed:(id)arg2 reload:(id)arg3 regenerate:(id)arg4 animated:(BOOL)arg5 checkFiltered:(BOOL)arg6 completion:(id)arg7 ;
-(void)updateTranscriptChatItems:(id)arg0 inserted:(id)arg1 removed:(id)arg2 reload:(id)arg3 regenerate:(id)arg4 animated:(BOOL)arg5 completion:(id)arg6 ;
-(void)verticallyScrollTranscriptByAmount:(CGFloat)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif