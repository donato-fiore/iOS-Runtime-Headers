// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLISTCOLLECTIONVIEWCONTROLLER_H
#define CKCONVERSATIONLISTCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSDictionary, NSCache, UIBarButtonItem, CNContactStore, UICollectionViewDiffableDataSource, NSString, NSArray, NSMutableSet, NSDate, UIButton, CNContact, UIView, _PSMessagesPinningSuggester, UISearchController, TPKContent, TPKContentController;
@protocol CKPinnedConversationViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UICollectionViewDelegate_Private, UISearchControllerDelegate, UISearchBarDelegate, UIScrollViewDelegate, CKReasonTrackingUpdaterDelegate, UICollectionViewDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, CKConversationListCollectionViewCellDelegate, CKConversationListEmbeddedCollectionViewCellDelegate, CKPinnedConversationCollectionViewCellDelegate, CKMacToolbarItemProvider, OS_os_log, CKConversationListControllerDelegate, OS_dispatch_queue;


#import "CKMacToolbarItem.h"
#import "CKConversationListCollectionViewLayout.h"
#import "CKConversation.h"
#import "CKMacToolbarController.h"
#import "CKSearchViewController.h"
#import "CKOnboardingController.h"
#import "CKPinnedConversationCollectionViewCell.h"
#import "CKCloudKitSyncProgressViewController.h"
#import "CKReasonTrackingUpdater.h"

@interface CKConversationListCollectionViewController : UICollectionViewController <CKPinnedConversationViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UICollectionViewDelegate_Private, UISearchControllerDelegate, UISearchBarDelegate, UIScrollViewDelegate, CKReasonTrackingUpdaterDelegate, UICollectionViewDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, CKConversationListCollectionViewCellDelegate, CKConversationListEmbeddedCollectionViewCellDelegate, CKPinnedConversationCollectionViewCellDelegate, CKMacToolbarItemProvider>



@property (retain, nonatomic) NSDictionary *blockedSnapshotInfo; // ivar: _blockedSnapshotInfo
@property (retain, nonatomic) NSCache *cacheForLastDisplayedActivitySnapshotByConversation; // ivar: _cacheForLastDisplayedActivitySnapshotByConversation
@property (nonatomic) BOOL canShowSuggestedPinningOnboardingCell; // ivar: _canShowSuggestedPinningOnboardingCell
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem; // ivar: _cancelButtonItem
@property (nonatomic) BOOL completedDeferredSetup; // ivar: _completedDeferredSetup
@property (retain, nonatomic) UIBarButtonItem *composeButtonItem; // ivar: _composeButtonItem
@property (retain, nonatomic) CKMacToolbarItem *composeToolbarItem; // ivar: _composeToolbarItem
@property (nonatomic) BOOL compositionWasSent; // ivar: _compositionWasSent
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CKConversationListCollectionViewLayout *conversationLayout; // ivar: _conversationLayout
@property (readonly, nonatomic) NSObject<OS_os_log> *conversationListCollectionViewControllerLogHandle;
@property (retain, nonatomic) CKConversation *conversationPendingOrbPinChange; // ivar: _conversationPendingOrbPinChange
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *deferredSearchQuery; // ivar: _deferredSearchQuery
@property (weak, nonatomic) NSObject<CKConversationListControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem; // ivar: _doneButtonItem
@property (retain, nonatomic) UIBarButtonItem *editButtonItem; // ivar: _editButtonItem
@property (nonatomic) NSUInteger editingMode; // ivar: _editingMode
@property (nonatomic) NSUInteger filterMode; // ivar: _filterMode
@property (copy, nonatomic) NSArray *frozenConversations; // ivar: _frozenConversations
@property (copy, nonatomic) NSArray *frozenPinnedConversations; // ivar: _frozenPinnedConversations
@property (nonatomic) BOOL hasActivePinnedConversationDropSession; // ivar: _hasActivePinnedConversationDropSession
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveAppliedInitialSnapshot; // ivar: _haveAppliedInitialSnapshot
@property (nonatomic) BOOL hidePinsForAnimation; // ivar: _hidePinsForAnimation
@property (nonatomic) BOOL holdPinningUpdatesForConversationDeletion; // ivar: _holdPinningUpdatesForConversationDeletion
@property (nonatomic) BOOL holdPinningUpdatesForOnboardingAnimation; // ivar: _holdPinningUpdatesForOnboardingAnimation
@property (nonatomic) BOOL isApplyingSnapshot; // ivar: _isApplyingSnapshot
@property (nonatomic) BOOL isBelowMacSnapToMinWidth; // ivar: _isBelowMacSnapToMinWidth
@property (nonatomic) BOOL isCheckingIfPinningOnboardingNeeded; // ivar: _isCheckingIfPinningOnboardingNeeded
@property (nonatomic) BOOL isCommitingDiffableDataSourceTransaction; // ivar: _isCommitingDiffableDataSourceTransaction
@property (nonatomic) BOOL isCurrentlyAnimatingPinningOnboardingSuggestions; // ivar: _isCurrentlyAnimatingPinningOnboardingSuggestions
@property (nonatomic) BOOL isInitialAppearance; // ivar: _isInitialAppearance
@property (readonly, nonatomic) BOOL isSearchActive;
@property (readonly, nonatomic) BOOL isSearchActiveAndDisplayingResultsForSearchText;
@property (nonatomic) BOOL isShowingPinnedChatDropTarget; // ivar: _isShowingPinnedChatDropTarget
@property (nonatomic) BOOL isShowingPinningOnboarding; // ivar: _isShowingPinningOnboarding
@property (nonatomic) BOOL isShowingSwipeDeleteConfirmation; // ivar: _isShowingSwipeDeleteConfirmation
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (retain, nonatomic) NSMutableSet *itemIdentifiersForVisibleContextMenuInteractions; // ivar: _itemIdentifiersForVisibleContextMenuInteractions
@property (nonatomic) BOOL keyboardIsShowing; // ivar: _keyboardIsShowing
@property (retain, nonatomic) NSString *lastSelectedConversationItemIdentifier; // ivar: _lastSelectedConversationItemIdentifier
@property (retain, nonatomic) NSString *lastUserSelectedConversationItemIdentifier; // ivar: _lastUserSelectedConversationItemIdentifier
@property (retain, nonatomic) NSDate *lastUserSelectedConversationTime; // ivar: _lastUserSelectedConversationTime
@property (nonatomic) BOOL macShouldShowZKWSearch; // ivar: _macShouldShowZKWSearch
@property (weak, nonatomic) CKMacToolbarController *macToolbarController; // ivar: _macToolbarController
@property (retain, nonatomic) UIButton *macVirtualComposeButton; // ivar: _macVirtualComposeButton
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (retain, nonatomic) CKSearchViewController *modernSearchResultsController; // ivar: _modernSearchResultsController
@property (nonatomic) BOOL nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate; // ivar: _nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate
@property (retain, nonatomic) UIView *noMessagesDialogView; // ivar: _noMessagesDialogView
@property (retain, nonatomic) CKOnboardingController *onboardingController; // ivar: _onboardingController
@property (retain, nonatomic) UIBarButtonItem *optionsButtonItem; // ivar: _optionsButtonItem
@property (retain, nonatomic) _PSMessagesPinningSuggester *pinnedConversationSuggester; // ivar: _pinnedConversationSuggester
@property (nonatomic) NSInteger pinnedConversationViewLayoutStyle; // ivar: _pinnedConversationViewLayoutStyle
@property (nonatomic) NSInteger pinningInteractionMethod; // ivar: _pinningInteractionMethod
@property (retain, nonatomic) CKPinnedConversationCollectionViewCell *prototypePinnedConversationCollectionViewCell; // ivar: _prototypePinnedConversationCollectionViewCell
@property (retain, nonatomic) NSArray *recommendedPinningConversations; // ivar: _recommendedPinningConversations
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) UIBarButtonItem *selectAllButtonItem; // ivar: _selectAllButtonItem
@property (readonly, nonatomic) BOOL shouldShowTipKitContent;
@property (nonatomic) BOOL shouldUseFastPreviewText; // ivar: _shouldUseFastPreviewText
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) CKCloudKitSyncProgressViewController *syncProgressViewController; // ivar: _syncProgressViewController
@property (retain, nonatomic) TPKContent *tipKitContent; // ivar: _tipKitContent
@property (retain, nonatomic) TPKContentController *tipKitContentController; // ivar: _tipKitContentController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tipKitQueue; // ivar: _tipKitQueue
@property (retain, nonatomic) CKReasonTrackingUpdater *updater; // ivar: _updater
@property (nonatomic) BOOL willRotate; // ivar: _willRotate


-(BOOL)__im_ff_chatCacheEnabled;
-(BOOL)__im_ff_isInterstellarEnabled;
-(BOOL)_conversationHasActivityItem:(id)arg0 ;
-(BOOL)_imageForkedFromMeCard;
-(BOOL)_isDropForSession:(id)arg0 toLeadingEdgeOfView:(id)arg1 ;
-(BOOL)_isOnlyActivityItemInRowForConversation:(id)arg0 itemIdentifier:(id)arg1 ;
-(BOOL)_isRunningPPT;
-(BOOL)_meCardSharingEnabled;
-(BOOL)_messageSpamFilteringEnabled;
-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_shouldAllowLargeTitles;
-(BOOL)_shouldAnimatePinningChangesForUpdateFollowingHoldForReason:(id)arg0 ;
-(BOOL)_shouldKeepSelection;
-(BOOL)_shouldResizeNavigationBar;
-(BOOL)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
-(BOOL)_shouldShowInboxView;
-(BOOL)_shouldUsePreviewProviderForDragItemAtIndexPath:(id)arg0 ;
-(BOOL)_updateAddsTypingChatItem:(id)arg0 ;
-(BOOL)_updateRemovesTypingChatItem:(id)arg0 ;
-(BOOL)cellAtIndexPath:(id)arg0 isVisibleInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)contextMenuInteractionShouldBeginAtIndexPath:(id)arg0 ;
-(BOOL)hasDetailsNavigationController;
-(BOOL)isDetailsNavigationControllerDetached;
-(BOOL)isShowingConversationFromCatalystOpenURL;
-(BOOL)isThreeColumnLayoutEnabled;
-(BOOL)itemIdentifierIsFromPinnedSection:(id)arg0 ;
-(BOOL)itemProviderDisablesTouches;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)sectionHasActionableConversations:(NSUInteger)arg0 ;
-(BOOL)shouldAnimatePositionForRecommendedItemIdentifiers:(id)arg0 pinnedItemIdentifiers:(id)arg1 ;
-(BOOL)shouldInsetResultsForSearchController:(id)arg0 ;
-(BOOL)shouldScrollCollectionViewForCellSelection:(id)arg0 ;
-(BOOL)shouldShowPendingCell;
-(BOOL)shouldShowPinnedConversations;
-(CGFloat)_activityItemTopInsetForIndexPath:(id)arg0 ;
-(CGFloat)animationDistanceForCompletingOnboarding;
-(CGFloat)virtualToolbarPreferredHeight;
-(CGFloat)widthForDeterminingAvatarVisibility;
-(CGFloat)yCoordinateForBorderBetweenPinnedAndActiveSectionExcludingConversations:(id)arg0 ;
-(NSInteger)_activityItemOriginationDirectionForItemIdentifier:(id)arg0 conversation:(id)arg1 ;
-(NSInteger)_feedbackPinningInteractionMethod;
-(NSInteger)distanceBetweenConversationIndexPath:(id)arg0 andIndexPath:(id)arg1 ;
-(NSInteger)numberOfConversations;
-(NSInteger)numberOfPinnedConversations;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)_destinationSectionForDropSession:(id)arg0 destinationIndexPath:(id)arg1 ;
-(NSUInteger)_meCardSharingAudience;
-(id)_allFrozenConversations;
-(id)_autoDonateConversationActionForItemIdentifier:(id)arg0 ;
-(id)_avatarProviderFromNickname:(id)arg0 ;
-(id)_collectionView:(id)arg0 sceneActivationConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)_conversationAfterDropDestination:(id)arg0 fromDiffableDataSource:(id)arg1 snapshot:(id)arg2 excludingDraggedConversation:(id)arg3 ;
-(id)_conversationDetailsActionForItemIdentifier:(id)arg0 withCell:(id)arg1 ;
-(id)_conversationDropProposalForCollectionView:(id)arg0 dropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)_conversationFromDragItem:(id)arg0 ;
-(id)_conversationsFromLocalDropSession:(id)arg0 ;
-(id)_conversationsInRowOfItemIdentifier:(id)arg0 ;
-(id)_deleteConversationActionForItemIdentifier:(id)arg0 withCell:(id)arg1 ;
-(id)_deleteSwipeActionForIndexPath:(id)arg0 ;
-(id)_dndSwipeActionForIndexPath:(id)arg0 ;
-(id)_dragItemsForConversation:(id)arg0 indexPath:(id)arg1 inCollectionView:(id)arg2 ;
-(id)_getTitleForCurrentFilterMode;
-(id)_indexPathOfDefaultConversation;
-(id)_indexPaths:(id)arg0 containingHandleWithUID:(id)arg1 ;
-(id)_itemIdentifierOfDefaultConversation;
-(id)_lastDisplayedActivitySnapshotCacheKeyForConversation:(id)arg0 ;
-(id)_markAsActionForItemIdentifier:(id)arg0 ;
-(id)_meCardSharingNameProviderWithContact:(id)arg0 ;
-(id)_meCardSharingState;
-(id)_multitaskingDragExclusionRects;
-(id)_muteActionForItemIdentifier:(id)arg0 ;
-(id)_newCollectionViewWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(id)_openConversationInNewWindowActionForItemIdentifier:(id)arg0 ;
-(id)_pinActionForItemIdentifier:(id)arg0 ;
-(id)_pinnedConversationShortNames;
-(id)_pinningSuggestionsForConversations:(id)arg0 ;
-(id)_previewForHighlightingOrDismissingContextMenuWithConfiguration:(id)arg0 collectionView:(id)arg1 ;
-(id)_primaryMenuForItemIdentifier:(id)arg0 inSection:(NSUInteger)arg1 withCell:(id)arg2 ;
-(id)_recentMessagesInPinnedConversations;
-(id)_secondaryMenuForItemIdentifier:(id)arg0 inSection:(NSUInteger)arg1 withCell:(id)arg2 ;
-(id)_snapshotOfAvatarViewForConversation:(id)arg0 ;
-(id)_topLevelMenuForItemIdentifier:(id)arg0 inSection:(NSUInteger)arg1 withCell:(id)arg2 ;
-(id)_userDefaults;
-(id)activeConversations;
-(id)alertMessageForDelete;
-(id)alertTitleForDelete;
-(id)alertTitleForDeleteMultiple;
-(id)cellForIndexPath:(id)arg0 inCollectionView:(id)arg1 withItemIdentifier:(id)arg2 ;
-(id)cellForPinnedConversationDropTargetInCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)cellForPinnedConversationWithItemIdentifier:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellForPinningOnboardingTitleViewCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)cellForStandardConversationWithItemIdentifier:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellPinningOnboardingItemIdentifier:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dragPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)complimentaryIndexPathForConversationAtIndexPath:(id)arg0 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)conversationAtIndexPath:(id)arg0 ;
-(id)conversationForItemIdentifier:(id)arg0 ;
-(id)conversationList;
-(id)conversationsAtIndexPaths:(id)arg0 ;
-(id)conversationsForItemIdentifiers:(id)arg0 ;
-(id)dataSourceWithCollectionView:(id)arg0 ;
-(id)detailsControllerBusinessPrivacyInfoPresentingViewController:(id)arg0 ;
-(id)detailsNavigationControllerConversation:(id)arg0 ;
-(id)dragOrDropPreviewParametersForItemAtIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(id)dragPreviewViewForPinnedConversation:(id)arg0 inCollectionView:(id)arg1 ;
-(id)editButtonDropdownMenu;
-(id)firstVisibleIndexPathInCollectionView;
-(id)generateSnapshot;
-(id)indexPathOfFirstSelectedItem;
-(id)init;
-(id)itemIdentifierForConversation:(id)arg0 inSection:(NSUInteger)arg1 ;
-(id)itemIdentifiersForConversations:(id)arg0 inSection:(NSUInteger)arg1 ;
-(id)lastVisibleIndexPathInCollectionView;
-(id)leadingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)newMessageCellInCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)nextSequentialIndexPathForIndexPath:(id)arg0 descending:(BOOL)arg1 ;
-(id)nicknameController;
-(id)pinnedConversationIdentifiers;
-(id)pinnedConversations;
-(id)pinnedConversationsFromSnapshot:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(id)presentingViewControllerForOnboardingController:(id)arg0 ;
-(id)previousPinnedConversationActivitySnapshotForConversation:(id)arg0 ;
-(id)searchBarForSearchViewController:(id)arg0 ;
-(id)searchController:(id)arg0 conversationForChatGUID:(id)arg1 ;
-(id)searchResultsController;
-(id)searcher:(id)arg0 conversationForChatGUID:(id)arg1 ;
-(id)supplementaryViewForIndexPath:(id)arg0 inCollectionView:(id)arg1 withKind:(id)arg2 ;
-(id)tipKitCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)tipKitOnboardingCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)toolbarItemForIdentifier:(id)arg0 ;
-(id)trailingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)transparentNavBarAppearance;
-(struct CGRect )pinnedConversationMultitaskingDragExclusionRect;
-(void)_beginAccountRepairIfNeeded;
-(void)_cancelDeletion:(id)arg0 ;
-(void)_chatAllowedByScreenTimeChanged:(id)arg0 ;
-(void)_chatItemsDidChange:(id)arg0 ;
-(void)_chatParticipantsChangedNotification:(id)arg0 ;
-(void)_chatRegistryLastMessageLoadedNotification:(id)arg0 ;
-(void)_chatUnreadCountDidChange:(id)arg0 ;
-(void)_chatWatermarkDidChange:(id)arg0 ;
-(void)_ck_setNeedsUpdateOfMultitaskingDragExclusionRects;
-(void)_configurePinnedConversationCell:(id)arg0 forConversation:(id)arg1 itemIdentifier:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)_contactStoreDidFinishLoadingNotification:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_conversationContactPhotosEnabledChangedNotification:(id)arg0 ;
-(void)_conversationDisplayNameChangedNotification:(id)arg0 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg0 ;
-(void)_conversationIsFilteredChangedNotification:(id)arg0 ;
-(void)_conversationListDidChange:(id)arg0 ;
-(void)_conversationListDidFinishLoadingConversations:(id)arg0 ;
-(void)_conversationListPinnedConversationsDidChange:(id)arg0 ;
-(void)_conversationMessageWasSent:(id)arg0 ;
-(void)_conversationMuteDidChangeNotification:(id)arg0 ;
-(void)_conversationSpamFilteringStateChangedNotification:(id)arg0 ;
-(void)_dismissPresentedNavController:(id)arg0 ;
-(void)_downtimeStateChanged:(id)arg0 ;
-(void)_endHoldingUpdatesForBatchEditing:(BOOL)arg0 ;
-(void)_endHoldingUpdatesOnViewWillAppear;
-(void)_filterControlSelectionChanged:(id)arg0 ;
-(void)_freezeConversations;
-(void)_handingPendingConversationDidChange:(id)arg0 ;
-(void)_handleAccountRegistrationChange:(id)arg0 ;
-(void)_increaseContrastDidChange:(id)arg0 ;
-(void)_iosUpdateNavbarLayoutIfNeeded;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_macosUpdateNavbarLayoutIfNeeded;
-(void)_multiWayCallStateChanged:(id)arg0 ;
-(void)_performConversationDropWithCollectionView:(id)arg0 dropCoordinator:(id)arg1 ;
-(void)_performItemDropWithCollectionView:(id)arg0 dropCoordinator:(id)arg1 ;
-(void)_performTranscriptPushForItemAtIndexPath:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)_refreshConversationList;
-(void)_refreshConversationListCellForGroupPhotoUpdate:(id)arg0 ;
-(void)_reloadVisibleConversationList:(id)arg0 ;
-(void)_removeConversationsFromFrozenConversations:(id)arg0 ;
-(void)_selectConversationAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showConversationWithComposition:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_submitFeedbackIfNecessaryForPinsChangedWithPreviousPinnedConversationIdentifiers:(id)arg0 ;
-(void)_submitFeedbackIfNecessaryForSuggestedPinnedConversationsFollowingOnboardingCompletedSuccessfully:(BOOL)arg0 ;
-(void)_unfreezeConversations;
-(void)_updateConversationFilteredFlagsAndReportSpam;
-(void)_updateConversationListsAndSortIfEnabled;
-(void)_updateInsets;
-(void)_updateLargeTitleDisplayModeWithAnimation:(BOOL)arg0 ;
-(void)_updateNavbarLayoutIfNeeded;
-(void)_updateSyncProgressIfNeededWithProgressController:(id)arg0 forceShow:(BOOL)arg1 ;
-(void)_updateToolbarItems;
-(void)animateInCollectionView:(id)arg0 aboveBackgroundSnapshotView:(id)arg1 enteringOnboarding:(BOOL)arg2 animationDistance:(CGFloat)arg3 ;
-(void)animateInPinsToFinalPosition;
-(void)animateOutBackgroundSnapshotView:(id)arg0 ;
-(void)applicationWillSuspend;
-(void)applyConversationListSnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;
-(void)autoDonationConversationButtonTappedForConversationWithItemIdentifier:(id)arg0 setAutoDonation:(BOOL)arg1 ;
-(void)avatarHeaderWasTappedForConversation:(id)arg0 ;
-(void)avatarViewTapped:(id)arg0 ;
-(void)backButtonPressed;
-(void)batchDeleteButtonTapped:(id)arg0 ;
-(void)beginHoldingConversationListUpdatesForPPTTests;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)cloudKitEventNotificationManager:(id)arg0 syncProgressDidUpdate:(id)arg1 ;
-(void)cloudKitSyncProgressViewController:(id)arg0 actionButtonWasPressed:(NSInteger)arg1 errors:(id)arg2 ;
-(void)collectionView:(id)arg0 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayContextMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)commitPinnedConversationsForEditingPins;
-(void)commitPinnedConversationsFromSnapshot:(id)arg0 ;
-(void)completeAnimation;
-(void)composeButtonClicked:(id)arg0 ;
-(void)compositionSent;
-(void)configureConversationCell:(id)arg0 forItemIdentifier:(id)arg1 ;
-(void)configureDropTargetCell:(id)arg0 ;
-(void)configureNewMessageCell:(id)arg0 ;
-(void)configureOnboardingTitleCell:(id)arg0 ;
-(void)configurePinnedConversationCell:(id)arg0 forItemIdentifier:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)configureSelectionBarButtonItem:(id)arg0 usingStyle:(NSUInteger)arg1 ;
-(void)configureTipKitCell:(id)arg0 ;
-(void)configureTipKitOnboardingCell:(id)arg0 ;
-(void)configureWithToolbarController:(id)arg0 ;
-(void)contentController:(id)arg0 actionTapped:(id)arg1 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 contentViewNeedsLayout:(id)arg1 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)conversationWillBeMarkedRead:(id)arg0 ;
-(void)dealloc;
// -(void)deleteButtonTappedForItemIdentifier:(id)arg0 completionHandler:(id)arg1 cellToUpdate:(unk)arg2  ;
-(void)deleteSelectedConversation;
-(void)detailsControllerDidDismiss:(id)arg0 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didReorderConversationsWithTransaction:(id)arg0 ;
-(void)dismissDetailsNavigationController;
-(void)doneButtonTapped:(id)arg0 ;
-(void)editButtonMenuWillShow;
-(void)endHoldingConversationListUpdatesForPPTTests;
-(void)fetchPinningSuggestions;
-(void)invalidateCellLayout;
-(void)loadView;
-(void)markAsReadButtonTapped:(id)arg0 ;
-(void)muteConversationButtonTappedForConversationWithItemIdentifier:(id)arg0 setMuted:(BOOL)arg1 ;
-(void)newComposeWillActivate;
-(void)noteUnreadCountsChanged;
-(void)onboardingControllerDidFinish:(id)arg0 ;
// -(void)performDeletionForActiveConversation:(id)arg0 itemIdentifier:(id)arg1 completionHandler:(id)arg2 cellToUpdate:(unk)arg3  ;
-(void)performDeletionForPendingConversationCell:(id)arg0 completionHandler:(id)arg1 ;
-(void)performResumeDeferredSetup;
-(void)performSearch:(id)arg0 completion:(id)arg1 ;
-(void)pinButtonTappedForCell:(id)arg0 ;
-(void)pinConversation:(id)arg0 withReason:(id)arg1 ;
-(void)pinConversationsWithCompletion:(id)arg0 ;
-(void)pinnedConversationView:(id)arg0 didUpdateWithActivitySnapshot:(id)arg1 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)presentDetailsForItemIdentifier:(id)arg0 fromView:(id)arg1 ;
-(void)providerWillBeRemovedFromToolbarController:(id)arg0 ;
-(void)reasonTrackingUpdater:(id)arg0 didBeginHoldingUpdatesWithInitialReason:(id)arg1 ;
-(void)reasonTrackingUpdater:(id)arg0 didEndHoldingUpdatesWithFinalReason:(id)arg1 ;
-(void)reasonTrackingUpdater:(id)arg0 needsUpdateForReasons:(id)arg1 followingHoldForReason:(id)arg2 ;
-(void)registerForCloudKitEventsImmediately;
-(void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)arg0 ;
-(void)reloadData;
-(void)removeNewlyPinnedSuggestionCells:(id)arg0 ;
-(void)removePendingConversationCell;
-(void)scrollToFirstSelectedItemIfNecessary;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)searchController:(id)arg0 didSelectItem:(id)arg1 inChat:(id)arg2 ;
-(void)searchControllerDidBeginDragging:(id)arg0 ;
-(void)searchViewController:(id)arg0 requestsPushOfSearchController:(id)arg1 ;
-(void)searcher:(id)arg0 userDidDeleteChatGUID:(id)arg1 ;
-(void)searcher:(id)arg0 userDidSelectChatGUID:(id)arg1 messageGUID:(id)arg2 ;
-(void)searcherDidComplete:(id)arg0 ;
-(void)selectAllButtonTapped:(id)arg0 ;
-(void)selectConversationClosestToDeletedIndex:(id)arg0 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg0 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg0 removingPendingConversationCell:(BOOL)arg1 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg0 shouldUsePreviousySelectedIndexPath:(BOOL)arg1 ;
-(void)selectFirstActiveConversation;
-(void)selectNextSequentialConversation:(BOOL)arg0 ;
-(void)selectPinnedConversationForItem:(NSInteger)arg0 ;
-(void)selectedDeleteButtonForConversation:(id)arg0 inCell:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)sharingSettingsViewController:(id)arg0 didSelectSharingAudience:(NSUInteger)arg1 ;
-(void)sharingSettingsViewController:(id)arg0 didUpdateSharingState:(BOOL)arg1 ;
-(void)sharingSettingsViewController:(id)arg0 didUpdateWithSharingResult:(id)arg1 ;
-(void)sharingSettingsViewControllerDidUpdateContact:(id)arg0 ;
-(void)showAccountMismatachAlertForNicknames;
-(void)showCannotPinMoreConversationsAlert;
-(void)showMeCardViewController;
-(void)showMeCardViewControllerWithNickname:(id)arg0 ;
-(void)showMultiplePhoneNumbersAlertForNicknames;
-(void)showPinningOnboardingTapped;
-(void)significantTimeChange;
-(void)startCompletePinningOnboardingAnimation;
-(void)startEndSuggestedPinsAnimation;
-(void)startSuggestedPinsAnimation;
-(void)startTipCellAnimatingIfNecessary;
-(void)stopTipCellAnimatingIfNecessary;
-(void)togglePinStateForConversation:(id)arg0 withReason:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unpinButtonTappedForCell:(id)arg0 withConversation:(id)arg1 ;
-(void)unpinConversation:(id)arg0 withReason:(id)arg1 ;
-(void)unregisterForCloudKitEvents;
-(void)updateBackButton;
-(void)updateConfigurationStateForSelectedCell;
-(void)updateContentsOfAllCellsAnimated:(BOOL)arg0 ;
-(void)updateContentsOfCell:(id)arg0 withItemIdentifier:(id)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateContentsOfCellForConversation:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateContentsOfCellWithIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateContentsOfCellWithItemIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateContentsOfCellWithItemIdentifier:(id)arg0 indexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateContentsOfCellsWithItemIdentifiers:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateContentsOfTipCellForCustomizationType:(NSInteger)arg0 ;
-(void)updateConversationList;
-(void)updateConversationListForMessageSentToConversation:(id)arg0 ;
-(void)updateConversationNamesForNicknames:(id)arg0 ;
-(void)updateConversationSelection;
-(void)updateConversationSelectionPreservingLastSelectedItemIdentifier;
-(void)updateManualScrollEdgeProgress;
-(void)updateNavigationItems;
-(void)updateNoMessagesDialog;
-(void)updateSMSSpamConversationsDisplayName;
-(void)updateSnapshotAnimatingDifferences:(BOOL)arg0 ;
-(void)updateSnapshotAnimatingDifferences:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateSyncProgressIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif