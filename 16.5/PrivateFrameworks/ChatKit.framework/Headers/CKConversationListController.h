// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVERSATIONLISTCONTROLLER_H
#define CKCONVERSATIONLISTCONTROLLER_H

@class UITableViewController, NSMapTable, UIBarButtonItem, UIButton, CNContactStore, NSString, NSArray, NSDate, CNContact, UIView, NSIndexPath, UISearchController, TPKContentController, TPKContentView;
@protocol UISearchControllerDelegate, UISearchBarDelegate, UITableViewDelegatePrivate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, CKConversationListCellDelegate, UITableViewDropDelegate, UITableViewDragDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, CKMacToolbarItemProvider, CKConversationListControllerDelegate;


#import "CKConversationListCellLayout.h"
#import "CKMacToolbarItem.h"
#import "CKConversation.h"
#import "CKLargeTitleAccessoryView.h"
#import "CKMacToolbarController.h"
#import "CKSearchViewController.h"
#import "CKNavigationBarTitleView.h"
#import "CKOnboardingController.h"
#import "CKConversationSearchResultsController.h"
#import "CKCloudKitSyncProgressViewController.h"
#import "CKScheduledUpdater.h"

@interface CKConversationListController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, UITableViewDelegatePrivate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKConversationResultsControllerDelegate, CKContainerSearchControllerDelegate, CKConversationListCellDelegate, UITableViewDropDelegate, UITableViewDragDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, CKMacToolbarItemProvider>



@property (retain, nonatomic) CKConversationListCellLayout *cellLayout; // ivar: _cellLayout
@property (retain, nonatomic) NSMapTable *chatToConversationListCellInfo; // ivar: _chatToConversationListCellInfo
@property (retain, nonatomic) UIBarButtonItem *composeButton; // ivar: _composeButton
@property (retain, nonatomic) UIButton *composeButtonView; // ivar: _composeButtonView
@property (retain, nonatomic) CKMacToolbarItem *composeToolbarItem; // ivar: _composeToolbarItem
@property (nonatomic) BOOL compositionWasSent; // ivar: _compositionWasSent
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) CGFloat conversationCellHeight; // ivar: _conversationCellHeight
@property (retain, nonatomic) CKConversation *conversationChangingPinState; // ivar: _conversationChangingPinState
@property (retain, nonatomic) NSMapTable *conversationListCellToChatInfo; // ivar: _conversationListCellToChatInfo
@property (retain, nonatomic) UIBarButtonItem *customBackButton; // ivar: _customBackButton
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *deferredSearchQuery; // ivar: _deferredSearchQuery
@property (weak, nonatomic) NSObject<CKConversationListControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (nonatomic, getter=isDraggingConversation) BOOL draggingConversation; // ivar: _draggingConversation
@property (nonatomic) NSUInteger filterMode; // ivar: _filterMode
@property (copy, nonatomic) NSArray *frozenConversations; // ivar: _frozenConversations
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInitialAppearance; // ivar: _isInitialAppearance
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (readonly, nonatomic) BOOL isSearchActive;
@property (readonly, nonatomic) BOOL isSearchActiveAndDisplayingResultsForSearchText;
@property (nonatomic) BOOL isSelectingConversationProgrammatically; // ivar: _isSelectingConversationProgrammatically
@property (nonatomic) BOOL isShowingSwipeDeleteConfirmation; // ivar: _isShowingSwipeDeleteConfirmation
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (retain, nonatomic) CKLargeTitleAccessoryView *largeTitleAccessoryView; // ivar: _largeTitleAccessoryView
@property (retain, nonatomic) NSString *lastSelectedConversationItemIdentifier; // ivar: _lastSelectedConversationItemIdentifier
@property (retain, nonatomic) NSDate *lastSelectedConversationTime; // ivar: _lastSelectedConversationTime
@property (retain, nonatomic) UIButton *macLegacyComposeButton; // ivar: _macLegacyComposeButton
@property (weak, nonatomic) CKMacToolbarController *macToolbarController; // ivar: _macToolbarController
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (retain, nonatomic) CKSearchViewController *modernSearchResultsController; // ivar: _modernSearchResultsController
@property (retain, nonatomic) CKNavigationBarTitleView *navigationBarTitleView; // ivar: _navigationBarTitleView
@property (retain, nonatomic) UIView *noMessagesDialogView; // ivar: _noMessagesDialogView
@property (retain, nonatomic) CKOnboardingController *onboardingController; // ivar: _onboardingController
@property (retain, nonatomic) UIBarButtonItem *optionsButtonItem; // ivar: _optionsButtonItem
@property (retain, nonatomic) UIButton *optionsButtonView; // ivar: _optionsButtonView
@property (retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // ivar: _previouslySelectedIndexPath
@property (copy, nonatomic) id *searchCompletion; // ivar: _searchCompletion
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) CKConversationSearchResultsController *searchResultsController; // ivar: _searchResultsController
@property (readonly, nonatomic) BOOL shouldShowPendingCell;
@property (nonatomic) BOOL shouldUseFastPreviewText; // ivar: _shouldUseFastPreviewText
@property (retain, nonatomic) UIBarButtonItem *spacingItem; // ivar: _spacingItem
@property (readonly) Class superclass;
@property (retain, nonatomic) CKCloudKitSyncProgressViewController *syncProgressViewController; // ivar: _syncProgressViewController
@property (retain, nonatomic) TPKContentController *tipKitContentController; // ivar: _tipKitContentController
@property (retain, nonatomic) TPKContentView *tipKitContentView; // ivar: _tipKitContentView
@property (retain, nonatomic) CKScheduledUpdater *updater; // ivar: _updater
@property (nonatomic) BOOL willRotate; // ivar: _willRotate


-(BOOL)_imageForkedFromMeCard;
-(BOOL)_indexPathValidForActiveConversation:(id)arg0 ;
-(BOOL)_indexPathValidForPendingConversation:(id)arg0 ;
-(BOOL)_meCardSharingEnabled;
-(BOOL)_messageSpamFilteringEnabled;
-(BOOL)_messageUnknownFilteringEnabled;
-(BOOL)_shouldHaveAllFilterModes;
-(BOOL)_shouldKeepSelection;
-(BOOL)_shouldResizeNavigationBar;
-(BOOL)_shouldShowInboxView;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)itemProviderDisablesTouches;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)shouldInsetResultsForSearchController:(id)arg0 ;
-(BOOL)shouldScrollTableAtCellSelection:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableViewSpacingForExtraSeparators:(id)arg0 ;
-(CGFloat)widthForDeterminingAvatarVisibility;
-(Class)conversationListCellClass;
-(NSInteger)firstVisibleRowInTable;
-(NSInteger)lastVisibleRowInTable;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_indexOfConverationClosestToDeletedIndex:(NSUInteger)arg0 ;
-(NSUInteger)_indexOfDefaultConversation;
-(NSUInteger)_meCardSharingAudience;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_additionalConversationMenuForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_avatarProviderFromNickname:(id)arg0 ;
-(id)_conversationDetailsActionForConversation:(id)arg0 andCell:(id)arg1 ;
-(id)_conversationMenuForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_conversationMuteActionForConversation:(id)arg0 andIndexPath:(id)arg1 ;
-(id)_deleteConversationActionForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_getTitleForCurrentFilterMode;
-(id)_indexPaths:(id)arg0 containingHandleWithUID:(id)arg1 ;
-(id)_meCardSharingNameProviderWithContact:(id)arg0 ;
-(id)_meCardSharingState;
-(id)_openConversationInNewWindowActionForIndexPath:(id)arg0 ;
-(id)_topLevelMenuForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(id)activeConversations;
-(id)alertMessageForDelete;
-(id)alertTitleForDelete;
-(id)conversationList;
-(id)init;
-(id)inputAccessoryView;
-(id)nicknameController;
-(id)presentingViewControllerForOnboardingController:(id)arg0 ;
-(id)searchBarForSearchViewController:(id)arg0 ;
-(id)searchController:(id)arg0 conversationForChatGUID:(id)arg1 ;
-(id)searcher:(id)arg0 conversationForChatGUID:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)toolbarItemForIdentifier:(id)arg0 ;
-(void)_beginAccountRepairIfNeeded;
-(void)_cancelDeletion:(id)arg0 ;
-(void)_chatAllowedByScreenTimeChanged:(id)arg0 ;
-(void)_chatItemsDidChange:(id)arg0 ;
-(void)_chatParticipantsChangedNotification:(id)arg0 ;
-(void)_chatUnreadCountDidChange:(id)arg0 ;
-(void)_chatWatermarkDidChange:(id)arg0 ;
-(void)_contactStoreDidFinishLoadingNotification:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_conversationContactPhotosEnabledChangedNotification:(id)arg0 ;
-(void)_conversationDisplayNameChangedNotification:(id)arg0 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg0 ;
-(void)_conversationIsFilteredChangedNotification:(id)arg0 ;
-(void)_conversationListDidChange:(id)arg0 ;
-(void)_conversationListDidFinishLoadingConversations:(id)arg0 ;
-(void)_conversationMessageWasSent:(id)arg0 ;
-(void)_conversationMuteDidChangeNotification:(id)arg0 ;
-(void)_conversationPinStateChangedNotification:(id)arg0 ;
-(void)_conversationSpamFilteringStateChangedNotification:(id)arg0 ;
-(void)_dismissPresentedNavController:(id)arg0 ;
-(void)_downtimeStateChanged:(id)arg0 ;
-(void)_endHoldingUpdatesForBatchEditing:(BOOL)arg0 ;
-(void)_endHoldingUpdatesOnViewWillAppear;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_handleAccountRegistrationChange:(id)arg0 ;
-(void)_increaseContrastDidChange:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_multiWayCallStateChanged:(id)arg0 ;
-(void)_refreshConversationList;
-(void)_reloadVisibleConversationList:(id)arg0 ;
-(void)_selectConversationAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_showConversationWithComposition:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updateConversationFilteredFlagsAndReportSpam;
-(void)_updateConversationListNeedsResort:(BOOL)arg0 ;
-(void)_updateConversationListsAndSortIfEnabled;
-(void)_updateInsets;
-(void)_updateNavbarLayoutIfNeeded;
-(void)_updateSyncProgressIfNeededWithProgressController:(id)arg0 forceShow:(BOOL)arg1 ;
-(void)_updateToolbarItems;
-(void)applicationWillSuspend;
-(void)avatarHeaderWasTappedForConversation:(id)arg0 inCell:(id)arg1 ;
-(void)backButtonPressed;
-(void)batchDeleteButtonTapped:(id)arg0 ;
-(void)beginHoldingConversationListUpdatesForKey:(id)arg0 ;
-(void)beginHoldingConversationListUpdatesForPPTTests;
-(void)cloudKitEventNotificationManager:(id)arg0 syncProgressDidUpdate:(id)arg1 ;
-(void)cloudKitSyncProgressViewController:(id)arg0 actionButtonWasPressed:(NSInteger)arg1 errors:(id)arg2 ;
-(void)composeButtonClicked:(id)arg0 ;
-(void)compositionSent;
-(void)configureWithToolbarController:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)conversationWillBeMarkedRead:(id)arg0 ;
-(void)dealloc;
// -(void)deleteButtonTappedForIndexPath:(id)arg0 completionHandler:(id)arg1 cellToUpdate:(unk)arg2  ;
-(void)deleteSelectedConversation;
-(void)didDismissSearchController:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)endHoldingAllConversationListUpdatesForKey:(id)arg0 ;
-(void)endHoldingConversationListUpdatesForKey:(id)arg0 ;
-(void)endHoldingConversationListUpdatesForPPTTests;
-(void)invalidateCellLayout;
-(void)loadView;
-(void)markAsReadButtonTapped:(id)arg0 ;
-(void)markAsReadButtonTappedForIndexPath:(id)arg0 ;
-(void)muteConversationButtonTappedForIndexPath:(id)arg0 setMuted:(BOOL)arg1 ;
-(void)noteUnreadCountsChanged;
-(void)onboardingControllerDidFinish:(id)arg0 ;
-(void)optionsButtonTapped:(id)arg0 ;
// -(void)performDeletionForActiveConversation:(id)arg0 indexPath:(id)arg1 completionHandler:(id)arg2 cellToUpdate:(unk)arg3  ;
-(void)performDeletionForPendingConversationCell:(id)arg0 completionHandler:(id)arg1 ;
-(void)performResumeDeferredSetup;
-(void)performSearch:(id)arg0 completion:(id)arg1 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)providerWillBeRemovedFromToolbarController:(id)arg0 ;
-(void)registerForCloudKitEventsImmediately;
-(void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)arg0 ;
-(void)reloadCellForConversation:(id)arg0 ;
-(void)reloadData;
-(void)removePendingConversationCell;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)searchController:(id)arg0 didSelectItem:(id)arg1 inChat:(id)arg2 ;
-(void)searchControllerDidBeginDragging:(id)arg0 ;
-(void)searchViewController:(id)arg0 requestsPushOfSearchController:(id)arg1 ;
-(void)searcher:(id)arg0 userDidDeleteChatGUID:(id)arg1 ;
-(void)searcher:(id)arg0 userDidSelectChatGUID:(id)arg1 messageGUID:(id)arg2 ;
-(void)searcherDidComplete:(id)arg0 ;
-(void)selectConversationClosestToDeletedIndex:(NSUInteger)arg0 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg0 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg0 removingPendingConversationCell:(BOOL)arg1 ;
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
-(void)showMeCardViewController;
-(void)showMeCardViewControllerWithNickname:(id)arg0 ;
-(void)showMultiplePhoneNumbersAlertForNicknames;
-(void)significantTimeChange;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)unregisterForCloudKitEvents;
-(void)updateBackButton;
-(void)updateConversationList;
-(void)updateConversationListForMessageSentToConversation:(id)arg0 ;
-(void)updateConversationNamesForNicknames:(id)arg0 ;
-(void)updateConversationSelection;
-(void)updateMarginWidth;
-(void)updateNavigationItems;
-(void)updateNoMessagesDialog;
-(void)updateSMSSpamConversationsDisplayName;
-(void)updateSyncProgressIfNeeded;
-(void)updateTitleViews:(BOOL)arg0 ;
-(void)userDeletedJunkConversationFromTranscript;
-(void)userRecoveredJunkConversationFromTranscript;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif