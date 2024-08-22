// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSCONTROLLER_H
#define CKDETAILSCONTROLLER_H

@class NSArray, NSNumber, NSString, UITextView, NSTimer, CNGroupIdentityHeaderViewController, FMFMapViewController, UIButton, NSData, CNContactStore, UIVisualEffectView;
@protocol FMFMapViewControllerDelegate, UIViewControllerPreviewingDelegate, CKDetailsAddGroupNameViewDelegate, UITextViewDelegate, CKDetailsContactsManagerDelegate, CNAvatarViewDelegate, CKDetailsContactsTableViewCellDelegate, CKBusinessInfoViewDelegate, CKDetailsDownloadAttachmentsHeaderFooterViewDelegate, CKDetailsSearchControllerDelegate, UIImagePickerControllerDelegate, CNGroupIdentityHeaderViewControllerDelegate, CNVisualIdentityPickerViewControllerDelegate, CNVisualIdentityPickerPresenterDelegate, UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource, CKDetailsControllerDelegate;


#import "CKScrollViewController.h"
#import "CKGroupRecipientSelectionController.h"
#import "CKBusinessInfoView.h"
#import "CKDetailsCell.h"
#import "CKDetailsContactsManager.h"
#import "CKConversation.h"
#import "CKDetailsDownloadAttachmentsHeaderFooterView.h"
#import "CKDetailsGroupNameCell.h"
#import "CKDetailsAddGroupNameView.h"
#import "CKNavigationController.h"
#import "CKGroupPhotoCell.h"
#import "CKTranscriptDetailsResizableCell.h"
#import "CKDetailsLocationShareCell.h"
#import "CKDetailsLocationStringCell.h"
#import "CKDetailsMapViewCell.h"
#import "CKEntity.h"
#import "CKDetailsSearchViewController.h"
#import "CKDetailsSIMCell.h"
#import "CKDetailsTableView.h"

@interface CKDetailsController : CKScrollViewController <FMFMapViewControllerDelegate, UIViewControllerPreviewingDelegate, CKDetailsAddGroupNameViewDelegate, UITextViewDelegate, CKDetailsContactsManagerDelegate, CNAvatarViewDelegate, CKDetailsContactsTableViewCellDelegate, CKBusinessInfoViewDelegate, CKDetailsDownloadAttachmentsHeaderFooterViewDelegate, CKDetailsSearchControllerDelegate, UIImagePickerControllerDelegate, CNGroupIdentityHeaderViewControllerDelegate, CNVisualIdentityPickerViewControllerDelegate, CNVisualIdentityPickerPresenterDelegate, UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) CGFloat addContactCellHeight; // ivar: _addContactCellHeight
@property (retain, nonatomic) CKGroupRecipientSelectionController *addRecipientsController; // ivar: _addRecipientsController
@property (retain, nonatomic) CKBusinessInfoView *businessInfoView; // ivar: _businessInfoView
@property (retain, nonatomic) NSNumber *canShareFocusStatus; // ivar: _canShareFocusStatus
@property (retain, nonatomic) CKDetailsCell *changeGroupNamePhotoCell; // ivar: _changeGroupNamePhotoCell
@property (retain, nonatomic) CKDetailsContactsManager *contactsManager; // ivar: _contactsManager
@property (nonatomic) CGFloat contentOffsetYShiftAfterKeyboardNotification; // ivar: _contentOffsetYShiftAfterKeyboardNotification
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CKDetailsControllerDelegate> *detailsControllerDelegate; // ivar: _detailsControllerDelegate
@property (nonatomic) BOOL didPerformPurgedAttachmentsCheck; // ivar: _didPerformPurgedAttachmentsCheck
@property (retain, nonatomic) CKDetailsDownloadAttachmentsHeaderFooterView *downloadAttachmentsFooterView; // ivar: _downloadAttachmentsFooterView
@property (nonatomic) NSUInteger downloadButtonState; // ivar: _downloadButtonState
@property (retain, nonatomic) UITextView *expanseActivityTextView; // ivar: _expanseActivityTextView
@property (nonatomic) BOOL fmfEnabled; // ivar: _fmfEnabled
@property (nonatomic) BOOL fmfRestricted; // ivar: _fmfRestricted
@property (retain, nonatomic) NSTimer *fmfUpdateTimer; // ivar: _fmfUpdateTimer
@property (retain, nonatomic) CKDetailsGroupNameCell *groupNameCell; // ivar: _groupNameCell
@property (retain, nonatomic) CKDetailsAddGroupNameView *groupNameView; // ivar: _groupNameView
@property (retain, nonatomic) CKNavigationController *groupNavigationController; // ivar: _groupNavigationController
@property (retain, nonatomic) CKGroupPhotoCell *groupPhotoCell; // ivar: _groupPhotoCell
@property (nonatomic) CGFloat groupPhotoHeaderHeight; // ivar: _groupPhotoHeaderHeight
@property (retain, nonatomic) CNGroupIdentityHeaderViewController *groupPhotoHeaderViewController; // ivar: _groupPhotoHeaderViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContactsSectionCollapsed; // ivar: _isContactsSectionCollapsed
@property (nonatomic) BOOL isDisplayingPhotos; // ivar: _isDisplayingPhotos
@property (retain, nonatomic) NSNumber *isSharingFocusStatus; // ivar: _isSharingFocusStatus
@property (retain, nonatomic) CKTranscriptDetailsResizableCell *locationSendCell; // ivar: _locationSendCell
@property (retain, nonatomic) CKDetailsLocationShareCell *locationShareCell; // ivar: _locationShareCell
@property (retain, nonatomic) UITextView *locationSharingTextView; // ivar: _locationSharingTextView
@property (retain, nonatomic) CKTranscriptDetailsResizableCell *locationStartShareCell; // ivar: _locationStartShareCell
@property (retain, nonatomic) CKDetailsLocationStringCell *locationStringCell; // ivar: _locationStringCell
@property (retain, nonatomic) CKDetailsMapViewCell *mapViewCell; // ivar: _mapViewCell
@property (retain, nonatomic) FMFMapViewController *mapViewController; // ivar: _mapViewController
@property (nonatomic) BOOL needsContactsReload; // ivar: _needsContactsReload
@property (retain, nonatomic) CKTranscriptDetailsResizableCell *openInContactsCell; // ivar: _openInContactsCell
@property (retain, nonatomic) CKEntity *presentedEntity; // ivar: _presentedEntity
@property (retain, nonatomic) UIButton *screenShareContextButton; // ivar: _screenShareContextButton
@property (retain, nonatomic) CKDetailsSearchViewController *searchViewController; // ivar: _searchViewController
@property (retain, nonatomic) NSData *selectedImageData; // ivar: _selectedImageData
@property (retain, nonatomic) id *selfWeakWrapper; // ivar: _selfWeakWrapper
@property (retain, nonatomic) UITextView *sharedWithYouFooterTextView; // ivar: _sharedWithYouFooterTextView
@property (nonatomic) BOOL shouldCollapseContactsSection; // ivar: _shouldCollapseContactsSection
@property (readonly, nonatomic) BOOL shouldShowDownloadMoreCell;
@property (nonatomic) CGFloat showMoreContactCellHeight; // ivar: _showMoreContactCellHeight
@property (retain, nonatomic) CKDetailsSIMCell *simCell; // ivar: _simCell
@property (nonatomic) CGFloat simLabelCellHeight; // ivar: _simLabelCellHeight
@property (retain, nonatomic) CKDetailsSIMCell *simSwitchCell; // ivar: _simSwitchCell
@property (retain, nonatomic) CNContactStore *suggestionsEnabledContactStore; // ivar: _suggestionsEnabledContactStore
@property (readonly) Class superclass;
@property (retain, nonatomic) CKDetailsTableView *tableView; // ivar: _tableView
@property (nonatomic) CGFloat tuConversationCellHeight; // ivar: _tuConversationCellHeight
@property (nonatomic) NSUInteger undownloadedPhotoAttachmentCount; // ivar: _undownloadedPhotoAttachmentCount
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


+(void)saveGroupPhotoDataAndUpdateParticipants:(id)arg0 forConversation:(id)arg1 ;
+(void)updateParticipantsWithGroupPhotoAtPath:(id)arg0 forConversation:(id)arg1 ;
-(BOOL)_allRecipientsAlreadyFollowingLocation;
-(BOOL)_canLeaveConversation;
-(BOOL)_canRemoveRecipientAtIndexPath:(id)arg0 ;
-(BOOL)_fmfExpirationDateIsValid;
-(BOOL)_moreThanMinNumberOfParticipantsInGroup;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasTUConversation;
-(BOOL)isContactViewController:(id)arg0 ;
-(BOOL)isContactsSectionCollapsible;
-(BOOL)isGroupChat;
-(BOOL)shouldAddToVisibleContactRowCountForTUConversation;
-(BOOL)shouldDisplayFooterForSection:(NSUInteger)arg0 ;
-(BOOL)shouldDisplayHeaderForSection:(NSUInteger)arg0 ;
-(BOOL)shouldShowActiveDeviceSwitchFooter;
-(BOOL)shouldShowAddMemberCell;
-(BOOL)shouldShowBusinessInfoFooter;
-(BOOL)shouldShowEnhancedGroupFeatures;
-(BOOL)shouldShowExpanseFeatures;
-(BOOL)shouldShowFMFView;
-(BOOL)shouldShowGroupAddNameField;
-(BOOL)shouldShowGroupCount;
-(BOOL)shouldShowLocationStringForOneToOneConversation;
-(BOOL)shouldShowSharedWithYouFeatures;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(CGFloat)_heightForAuxContactCellAtIndexPath:(id)arg0 ;
-(CGFloat)_heightForContactCellAtIndexPath:(id)arg0 ;
-(CGFloat)_heightForExpanseActivityCell;
-(CGFloat)calculateHeightForExpanseActivityHeader;
-(CGFloat)calculateHeightForGroupPhotoHeader;
-(CGFloat)calculateHeightForLocationSharingFooter;
-(CGFloat)calculateHeightForSIMLabelCell;
-(CGFloat)calculateHeightForShareAutomaticallyFooter;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)adjustedViewModelIndexForIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)rowForAddMemberCell;
-(NSInteger)rowForFirstContactCell;
-(NSInteger)rowForLastContact;
-(NSInteger)rowForShowMoreContactsCell;
-(NSInteger)rowForTUConversationCell;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)visibleContactsRows;
-(NSUInteger)_countOfContactViewModels;
-(NSUInteger)_purgedAttachmentCount;
-(id)_groupPhotoHeaderRequiredContactKeys;
-(id)_menuConfigForContactsCell:(id)arg0 ;
-(id)_tableViewCellForSharingLocation:(BOOL)arg0 ;
-(id)annotationContactForHandle:(id)arg0 ;
-(id)annotationImageForHandle:(id)arg0 ;
-(id)avatarView:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)businessInfoFooterViewForSection:(NSInteger)arg0 ;
-(id)chatOptionsCellForIndexPath:(id)arg0 ;
-(id)childViewController:(id)arg0 cellForIndexPath:(id)arg1 ;
-(id)contactsInChat:(id)arg0 forContactsKeyDescriptors:(id)arg1 ;
-(id)contactsManagerCellForIndexPath:(id)arg0 ;
-(id)contentScrollView;
-(id)createDNDCellAtIndexPath:(id)arg0 ;
-(id)createReadReceiptsCellAtIndexPath:(id)arg0 ;
-(id)createShareFocusStatusCellAtIndexPath:(id)arg0 ;
-(id)currentlyActiveFMFDevice;
-(id)defaultNavBarAppearance;
-(id)downloadAttachmentsFooterViewForSection:(NSInteger)arg0 ;
-(id)downloadAttachmentsText;
-(id)downloadButtonText;
-(id)editConversationCellForIndexPath:(id)arg0 ;
-(id)emailAddressesForChat:(id)arg0 ;
-(id)expanseActivityCellForIndexPath:(id)arg0 ;
-(id)expanseActivityHeaderViewForSection:(NSInteger)arg0 ;
-(id)fmfHandlesFromIMHandles:(id)arg0 ;
-(id)fmfViewControllerCellForIndexPath:(id)arg0 shouldShowLocation:(BOOL)arg1 ;
-(id)groupCountCellForIndexPath:(id)arg0 ;
-(id)groupHeaderCellForIndexPath:(id)arg0 ;
-(id)groupNameCellForIndexPath:(id)arg0 ;
-(id)groupPhotoCellForIndexPath:(id)arg0 ;
-(id)indexPathForCell:(id)arg0 ;
-(id)initWithConversation:(id)arg0 ;
-(id)inputAccessoryViewController;
-(id)keyCommands;
-(id)labelForChat;
-(id)leaveCellForIndexPath:(id)arg0 ;
-(id)locationFooterViewForSection:(NSInteger)arg0 ;
-(id)locationShareCellForIndexPathRow:(NSInteger)arg0 ;
-(id)locationShareMenu;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)screenShareContextMenuForEntity:(id)arg0 ;
-(id)screenSharingActionView;
-(id)searchAttachmentViewControllerCellForIndexPath:(id)arg0 ;
-(id)setupGroupIdentityActionsForChat:(id)arg0 ;
-(id)sharedWithYouCellForIndexPath:(id)arg0 ;
-(id)sharedWithYouFooterViewForSection:(NSInteger)arg0 ;
-(id)simCellText:(id)arg0 ;
-(id)simSwitcherMenu;
-(id)simTypeCellForIndexPath:(id)arg0 ;
-(id)switchSubscriptionCellForIndexPathRow:(NSInteger)arg0 ;
-(id)switchToLabelForChat;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)titleForBackButton;
-(id)transparentNavBarAppearance;
-(id)tuConversation;
-(id)tuConversationCellForIndexPath:(id)arg0 ;
-(struct CGSize )computedPreferredContentSize;
-(struct CGSize )screenSize;
-(void)_batchDownloadNotificationFired:(id)arg0 ;
-(void)_chatAllowedByScreenTimeChanged:(id)arg0 ;
-(void)_chatAutoDonatingHandleUpdateNotification:(id)arg0 ;
-(void)_chatParticipantsChangedNotification:(id)arg0 ;
-(void)_configureSeparatorForContactCell:(id)arg0 indexPath:(id)arg1 ;
-(void)_configureSeparatorForOptionCell:(id)arg0 indexPath:(id)arg1 ;
-(void)_conversationListFinishedMerging:(id)arg0 ;
-(void)_determineFocusStatusSharingState;
-(void)_dismissIdentityPicker:(id)arg0 ;
-(void)_handleAddressBookChanged:(id)arg0 ;
-(void)_handleGroupDisplayNameChanged:(id)arg0 ;
-(void)_handleGroupPhotoChanged:(id)arg0 ;
-(void)_handleKeyboardWillHideNotification:(id)arg0 ;
-(void)_handleKeyboardWillShowNotification:(id)arg0 ;
-(void)_handleLocationChanged:(id)arg0 ;
-(void)_handleMultiWayStateChange:(id)arg0 ;
-(void)_hideAllContactCellButtons;
-(void)_lastAddressedHandleUpdateNotification:(id)arg0 ;
-(void)_presentGroupNameAndPhotoEditor;
-(void)_presentRemoveRecipientSheetForHandle:(id)arg0 fromView:(id)arg1 ;
-(void)_resetPurgedAttachmentCount;
-(void)_showBrandCard;
-(void)_showContactCardForEntity:(id)arg0 fromView:(id)arg1 ;
-(void)_toggleSharingStateFromABCard;
-(void)_updateDownloadButtonStateIfNeeded;
-(void)_updateDownloadFooterView;
-(void)adjustContentOffsetReloadingSharedAssetsContentViewCell;
-(void)autoDonationSwitchValueChanged:(id)arg0 ;
-(void)businessInfoView:(id)arg0 infoButtonTapped:(id)arg1 ;
-(void)collapseContactsSection;
-(void)configureGroupPhotoHeaderForCell:(id)arg0 ;
-(void)contactsCell:(id)arg0 didHoverWithState:(NSInteger)arg1 ;
-(void)contactsCellDidTapFaceTimeVideoButton:(id)arg0 ;
-(void)contactsCellDidTapMessagesButton:(id)arg0 ;
-(void)contactsCellDidTapPhoneButton:(id)arg0 ;
-(void)contactsManagerViewModelsDidChange:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)detailsAddGroupNameView:(id)arg0 didCommitGroupName:(id)arg1 ;
-(void)detailsSearchController:(id)arg0 requestsPushOfSearchController:(id)arg1 ;
-(void)detailsSearchControllerContentDidChange:(id)arg0 ;
-(void)doNotDisturbValueChange:(id)arg0 ;
-(void)expandContactsSection;
-(void)fmfMapViewController:(id)arg0 didDeselectHandle:(id)arg1 ;
-(void)fmfMapViewController:(id)arg0 didSelectHandle:(id)arg1 ;
-(void)groupCellDidTapFaceTimeVideoButton:(id)arg0 ;
-(void)groupCellDidTapPhoneButton:(id)arg0 ;
-(void)handleActiveDeviceChanged:(id)arg0 ;
-(void)handleCancelAction:(id)arg0 ;
-(void)handleDoneAction:(id)arg0 ;
-(void)handleDoneButton:(id)arg0 ;
-(void)handleFriendshipStatusChanged:(id)arg0 ;
-(void)handleTapOnChromeAvatar:(id)arg0 ;
-(void)headerViewControllerDidTapActionButton:(id)arg0 ;
-(void)initializeBusinessInfoViewIfNecessary;
-(void)initializeLocationSharingTextViewIfNecessary;
-(void)initializeSearchController;
-(void)loadView;
-(void)metricDSDSLineSwitchWithPreviousServiceName:(id)arg0 newServiceName:(id)arg1 isGroupConversation:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)openInContacts;
-(void)presentFullFMFMapViewController;
-(void)presentGroupRecipientSelectionControllerAtIndexPath:(id)arg0 ;
-(void)presentLeaveActionSheetFromView:(id)arg0 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)readReceiptsSwitchValueChanged:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)sendCurrentLocation;
-(void)setHideAlerts:(BOOL)arg0 reload:(BOOL)arg1 ;
-(void)setSendReadReceipts:(BOOL)arg0 reload:(BOOL)arg1 ;
-(void)setShareFocusStatus:(BOOL)arg0 reload:(BOOL)arg1 ;
-(void)setShowInSharedWithYou:(BOOL)arg0 reload:(BOOL)arg1 ;
-(void)setupContactsManager;
-(void)setupFMF;
-(void)setupFMFTimerIfNecessary;
-(void)shareFocusStatusSwitchValueChanged:(id)arg0 ;
-(void)shareLocationAction;
-(void)spacePressed:(id)arg0 ;
-(void)switchSubscriptionToContext:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)toggleHideAlertsWithReload:(BOOL)arg0 ;
-(void)toggleSendReadReceiptsWithReload:(BOOL)arg0 ;
-(void)toggleShareFocusStatusWithReload:(BOOL)arg0 ;
-(void)toggleShowInSharedWithYouWithReload:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLocationForRecipient:(id)arg0 ;
-(void)updateLocationStringCellWithString:(id)arg0 ;
-(void)updateManualScrollEdgeProgress;
-(void)updateScreenSharingStatusAndViews;
-(void)updateTimedFMFState;
-(void)userDidTapDownloadForAttachmentsFooterView:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)visualIdentityPicker:(id)arg0 didUpdatePhotoForVisualIdentity:(id)arg1 withContactImage:(id)arg2 ;
-(void)visualIdentityPicker:(id)arg0 presentationControllerWillDismiss:(id)arg1 ;
-(void)visualIdentityPickerDidCancel:(id)arg0 ;


@end


#endif