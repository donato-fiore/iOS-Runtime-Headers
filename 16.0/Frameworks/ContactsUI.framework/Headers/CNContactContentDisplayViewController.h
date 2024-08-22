// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCONTENTDISPLAYVIEWCONTROLLER_H
#define CNCONTACTCONTENTDISPLAYVIEWCONTROLLER_H

@class UIViewController, NSArray, CNAccessAuthorization, CNUIUserActionListDataSource, CNUIUserActivityManager, NSMapTable, UIKeyCommand, CNContact, CNContactFormatter, CNContactStore, NSString, NSMutableArray, UIBarButtonItem, UINavigationItem, UIView, NSLayoutConstraint, HKHealthStore, NSDictionary, CNManagedConfiguration, CNMutableContact, CNPolicy;
@protocol CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNUIGeminiDataSourceDelegate, NSUserActivityDelegate, CNContactContainerPickerViewControllerDelegate, CNUIContactSaveDelegate, CNContactContentNavigationItemTarget, CNContactActionDelegate, CNPresenterDelegate, CNContactContentNavigationItemProviding, UITableViewDelegate, UITableViewDataSource, UIViewControllerRestoration, CNContactContentDisplayViewControllerDelegate, CNCancelable, CNHealthStoreManagerToken, CNContactContentNavigationItemDelegate, CNUIContactSaveExecutor;


#import "CNContactActionProvider.h"
#import "CNContactInlineActionsViewController.h"
#import "CNContactActionsContainerView.h"
#import "CNContactAddNewFieldAction.h"
#import "CNContactToggleBlockCallerAction.h"
#import "CNCardGroup.h"
#import "CNCardFaceTimeGroup.h"
#import "CNCardLinkedCardsGroup.h"
#import "CNContactClearRecentsDataAction.h"
#import "CNContactHeaderDisplayView.h"
#import "CNContactContentNavigationItemUpdater.h"
#import "CNContactView.h"
#import "CNContactViewCache.h"
#import "CNContactContentViewControllerConfiguration.h"
#import "CNContactContainerPickerViewController.h"
#import "CNContactEditAuthorizationManager.h"
#import "CNEmergencyContactAction.h"
#import "CNUIContactsEnvironment.h"
#import "CNUIGeminiDataSource.h"
#import "CNContactAction.h"
#import "CNMedicalIDAction.h"
#import "CNPropertyNoteCell.h"
#import "CNPropertyGroupsDataSource.h"
#import "CNContactRecentsReference.h"
#import "CNContactSelectContainersAction.h"
#import "CNShareLocationController.h"
#import "CNSiriContactContextProvider.h"
#import "CNContactSuggestionAction.h"
#import "CNContactUpdateExistingContactAction.h"

@interface CNContactContentDisplayViewController : UIViewController <CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNUIGeminiDataSourceDelegate, NSUserActivityDelegate, CNContactContainerPickerViewControllerDelegate, CNUIContactSaveDelegate, CNContactContentNavigationItemTarget, CNContactActionDelegate, CNPresenterDelegate, CNContactContentNavigationItemProviding, UITableViewDelegate, UITableViewDataSource, UIViewControllerRestoration>

 {
    NSArray *_displayedProperties;
    BOOL _needsReload;
    BOOL _needsRefetch;
    BOOL _disablingRotation;
    BOOL _saving;
    int _animating;
    BOOL _navBarWasVisibleWhenPresented;
}


@property (retain, nonatomic) CNAccessAuthorization *accessAuthorization; // ivar: _accessAuthorization
@property (retain, nonatomic) CNContactActionProvider *actionProvider; // ivar: _actionProvider
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // ivar: _actionsDataSource
@property (retain, nonatomic) CNContactInlineActionsViewController *actionsViewController; // ivar: _actionsViewController
@property (retain, nonatomic) CNContactActionsContainerView *actionsWrapperView; // ivar: _actionsWrapperView
@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (readonly, nonatomic) CNUIUserActivityManager *activityManager; // ivar: _activityManager
@property (retain, nonatomic) CNContactAddNewFieldAction *addNewFieldAction; // ivar: _addNewFieldAction
@property (nonatomic) BOOL allowsEditInApp; // ivar: _allowsEditInApp
@property (retain, nonatomic) CNContactToggleBlockCallerAction *blockAction; // ivar: _blockAction
@property (retain, nonatomic) NSMapTable *cachedLabelWidths; // ivar: _cachedLabelWidths
@property (retain, nonatomic) UIKeyCommand *cancelCommand; // ivar: _cancelCommand
@property (readonly, nonatomic) NSArray *cardActions;
@property (retain, nonatomic) CNCardGroup *cardActionsGroup; // ivar: _cardActionsGroup
@property (retain, nonatomic) CNCardGroup *cardBlockContactGroup; // ivar: _cardBlockContactGroup
@property (retain, nonatomic) CNCardGroup *cardBottomGroup; // ivar: _cardBottomGroup
@property (retain, nonatomic) CNCardFaceTimeGroup *cardFaceTimeGroup; // ivar: _cardFaceTimeGroup
@property (readonly, nonatomic) CNCardGroup *cardFooterGroup; // ivar: _cardFooterGroup
@property (retain, nonatomic) CNCardLinkedCardsGroup *cardLinkedCardsGroup; // ivar: _cardLinkedCardsGroup
@property (retain, nonatomic) CNCardGroup *cardMedicalIDGroup; // ivar: _cardMedicalIDGroup
@property (retain, nonatomic) CNCardGroup *cardShareLocationGroup; // ivar: _cardShareLocationGroup
@property (retain, nonatomic) CNCardGroup *cardTopGroup; // ivar: _cardTopGroup
@property (retain, nonatomic) CNContactClearRecentsDataAction *clearRecentsDataAction; // ivar: _clearRecentsDataAction
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactHeaderDisplayView *contactHeaderView; // ivar: _contactHeaderView
@property (retain, nonatomic) CNContactContentNavigationItemUpdater *contactNavigationItemUpdater; // ivar: _contactNavigationItemUpdater
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) BOOL contactSupportsTTYCalls; // ivar: _contactSupportsTTYCalls
@property (retain, nonatomic) CNContactView *contactView; // ivar: _contactView
@property (readonly, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (retain, nonatomic) CNContactContentViewControllerConfiguration *contactViewConfiguration; // ivar: _contactViewConfiguration
@property (retain, nonatomic) CNContactContainerPickerViewController *containerPicker; // ivar: _containerPicker
@property (retain, nonatomic) NSArray *customActions; // ivar: _customActions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactContentDisplayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetFirstResponder; // ivar: _didSetFirstResponder
@property (nonatomic) BOOL didSetNewContact; // ivar: _didSetNewContact
@property (retain, nonatomic) NSMutableArray *displayGroups; // ivar: _displayGroups
@property (readonly, nonatomic) UIBarButtonItem *doneButtonItem;
@property (retain, nonatomic) CNContactEditAuthorizationManager *editAuthorizationManager; // ivar: _editAuthorizationManager
@property (retain, nonatomic) UIKeyCommand *editCommand; // ivar: _editCommand
@property (readonly, nonatomic) UINavigationItem *effectiveNavigationItem;
@property (retain, nonatomic) CNEmergencyContactAction *emergencyContactAction; // ivar: _emergencyContactAction
@property (retain, nonatomic) NSString *emergencyNumberIdentifier; // ivar: _emergencyNumberIdentifier
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSArray *extraLeftBarButtonItems; // ivar: _extraLeftBarButtonItems
@property (retain, nonatomic) NSArray *extraRightBarButtonItems; // ivar: _extraRightBarButtonItems
@property (retain, nonatomic) NSObject<CNCancelable> *faceTimeIDSLookupToken; // ivar: _faceTimeIDSLookupToken
@property (nonatomic) BOOL forcesTransparentBackground; // ivar: _forcesTransparentBackground
@property (readonly, nonatomic) CNUIGeminiDataSource *geminiDataSource; // ivar: _geminiDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerDropShadowView; // ivar: _headerDropShadowView
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // ivar: _headerHeightConstraint
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSArray *highlightedProperties; // ivar: _highlightedProperties
@property (nonatomic) BOOL highlightedPropertyImportant; // ivar: _highlightedPropertyImportant
@property (retain, nonatomic) NSObject<CNCancelable> *iMessageIDSLookupToken; // ivar: _iMessageIDSLookupToken
@property (retain, nonatomic) CNContactAction *ignoreContactAction; // ivar: _ignoreContactAction
@property (retain, nonatomic) NSString *initialPrompt; // ivar: _initialPrompt
@property (nonatomic) BOOL isPresentingFullscreenForOutOfProcess; // ivar: _isPresentingFullscreenForOutOfProcess
@property (readonly) BOOL isPresentingModalViewController; // ivar: isPresentingModalViewController
@property (retain, nonatomic) NSMutableArray *issuedSaveRequestIdentifiers; // ivar: _issuedSaveRequestIdentifiers
@property (nonatomic) CGFloat keyboardVerticalOverlap; // ivar: _keyboardVerticalOverlap
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // ivar: _linkedPoliciesByContactIdentifier
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (retain, nonatomic) CNMedicalIDAction *medicalIDAction; // ivar: _medicalIDAction
@property (retain, nonatomic) NSObject<CNCancelable> *medicalIDLookupToken; // ivar: _medicalIDLookupToken
@property (retain, nonatomic) NSObject<CNHealthStoreManagerToken> *medicalIDRegistrationToken; // ivar: _medicalIDRegistrationToken
@property (retain, nonatomic) NSArray *missingRequiredKeys; // ivar: _missingRequiredKeys
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) CNMutableContact *mutableContact; // ivar: _mutableContact
@property (weak, nonatomic) NSObject<CNContactContentNavigationItemDelegate> *navigationItemDelegate; // ivar: _navigationItemDelegate
@property (retain, nonatomic) CNPropertyNoteCell *noteCell; // ivar: _noteCell
@property (retain, nonatomic) NSArray *originalContacts; // ivar: _originalContacts
@property (nonatomic) BOOL outOfProcessSetupComplete; // ivar: _outOfProcessSetupComplete
@property (retain, nonatomic) UIViewController *personHeaderViewController; // ivar: _personHeaderViewController
@property (retain, nonatomic) CNPolicy *policy; // ivar: _policy
@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems; // ivar: _preEditLeftBarButtonItems
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (readonly, nonatomic) NSDictionary *propertyGroups; // ivar: _propertyGroups
@property (retain, nonatomic) CNPropertyGroupsDataSource *propertyGroupsDataSource; // ivar: _propertyGroupsDataSource
@property (retain, nonatomic) CNContactRecentsReference *recentsData; // ivar: _recentsData
@property (nonatomic) BOOL runningPPT; // ivar: _runningPPT
@property (retain, nonatomic) NSObject<CNUIContactSaveExecutor> *saveLinkedContactsExecutor; // ivar: _saveLinkedContactsExecutor
@property (retain, nonatomic) CNContactSelectContainersAction *selectContainersAction; // ivar: _selectContainersAction
@property (retain, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact; // ivar: _shadowCopyOfReadonlyContact
@property (retain, nonatomic) CNShareLocationController *shareLocationController; // ivar: _shareLocationController
@property (nonatomic) BOOL shouldDrawNavigationBar; // ivar: _shouldDrawNavigationBar
@property (nonatomic) BOOL shouldIgnoreBlockListChange; // ivar: _shouldIgnoreBlockListChange
@property (nonatomic) BOOL shouldIgnoreContactStoreDidChangeNotification; // ivar: _shouldIgnoreContactStoreDidChangeNotification
@property (nonatomic) BOOL showingMeContact; // ivar: _showingMeContact
@property (retain, nonatomic) CNSiriContactContextProvider *siriContextProvider; // ivar: _siriContextProvider
@property (retain, nonatomic) CNContactSuggestionAction *suggestedContactAction; // ivar: _suggestedContactAction
@property (readonly) Class superclass;
@property (retain, nonatomic) CNContactUpdateExistingContactAction *updateExistingContactAction; // ivar: _updateExistingContactAction
@property (retain, nonatomic) NSDictionary *userActivityUserInfo; // ivar: _userActivityUserInfo


+(BOOL)actionModelIncludesTTY:(id)arg0 ;
+(BOOL)shouldShowGeminiForResult:(id)arg0 contact:(id)arg1 ;
+(NSInteger)tableViewStyle;
+(id)boolStateRestorationProperties;
+(id)createActionsControllerWithActionListDataSource:(id)arg0 environment:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysForContact:(id)arg0 ;
+(id)descriptorForRequiredKeysWithDescription:(id)arg0 ;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_indexPathIsActionItem:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)contactDisplayViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(BOOL)contactInlineActionsViewController:(id)arg0 shouldPerformActionOfType:(id)arg1 withContactProperty:(id)arg2 ;
-(BOOL)hasTableViewHeaderFirstSection;
-(BOOL)isHeaderViewPhotoProhibited;
-(BOOL)isNicknameProhibited;
-(BOOL)isOutOfProcess;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg0 ;
-(BOOL)isStandardGroup:(id)arg0 ;
-(BOOL)isSuggestedContact;
-(BOOL)isTableViewHeaderFirstSectionIndexPath:(id)arg0 ;
-(BOOL)needsReload;
-(BOOL)propertyItemCanIgnoreGuardianRestrictions;
-(BOOL)reloadDataIfNeeded;
-(BOOL)saveChanges;
-(BOOL)saveWasAuthorized;
-(BOOL)shouldAddFaceTimeGroup;
-(BOOL)shouldDisplayAvatarHeaderView;
-(BOOL)shouldReallyShowLinkedContacts;
-(BOOL)shouldShowActionsForAvatarView:(id)arg0 ;
-(BOOL)shouldShowGemini;
-(BOOL)shouldShowVerifiedFooterInSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)contentOffsetYForGlobalHeaderHeight:(CGFloat)arg0 contentInset:(struct UIEdgeInsets )arg1 ;
-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)globalHeaderHeightForContentOffset:(CGFloat)arg0 contentInset:(struct UIEdgeInsets )arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)updateHeaderConstraintForGlobalHeaderHeight:(CGFloat)arg0 direction:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(Class)groupClassForProperty:(id)arg0 ;
-(NSInteger)_modalPresentationStyleForViewController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)sectionOfGroup:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)groupIndexFromTableViewSectionIndex:(NSUInteger)arg0 ;
-(NSUInteger)tableViewSectionIndexFromGroupIndex:(NSUInteger)arg0 ;
-(id)_cardGroupAtTableViewSectionIndex:(NSInteger)arg0 ;
-(id)_cellForIndexPath:(id)arg0 ;
-(id)_cellIdentifierForIndexPath:(id)arg0 ;
-(id)_currentGroups;
-(id)_currentTopVisibleGroupInContactView:(id)arg0 ;
-(id)_itemAtIndexPath:(id)arg0 ;
-(id)_labelWidthKeyForGroup:(id)arg0 ;
-(id)_labelWidthKeyForItem:(id)arg0 ;
-(id)_loadDisplayGroups;
-(id)_loadPropertyGroups;
-(id)_phoneticNameForValue:(id)arg0 currentPhoneticName:(id)arg1 property:(id)arg2 ;
-(id)_policyForContact:(id)arg0 mode:(NSInteger)arg1 ;
-(id)_propertyGroupsForKeys:(id)arg0 ;
-(id)_removeUnauthorizedKeysFromContact:(id)arg0 ;
-(id)_updateContact:(id)arg0 withMissingKeysFromRequiredKeys:(id)arg1 ;
-(id)applyContactStyle;
-(id)cardGroupForProperty:(id)arg0 ;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)indexPathOfDisplayedPropertyItem:(id)arg0 ;
-(id)indexPathOfPropertyItem:(id)arg0 ;
-(id)initWithContact:(id)arg0 contactViewConfiguration:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navigationItemController;
-(id)saveDescriptionForRemovingLinkedContact:(id)arg0 keys:(id)arg1 ;
-(id)sharedActionsDataSource;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableViewHeaderFirstSectionCell;
-(id)viewControllerForHeaderView:(id)arg0 ;
-(struct CGRect )centeredSourceRect:(struct CGRect )arg0 inContactView:(id)arg1 ;
-(struct CGSize )requiredSizeForVisibleTableView;
-(struct CGSize )setupTableHeaderView;
-(struct UIEdgeInsets )insetsForContactTableView:(id)arg0 ;
-(struct UIEdgeInsets )scrollIndicatorInsetsForContactTableView:(id)arg0 withContentInsets:(struct UIEdgeInsets )arg1 ;
-(void)_addFaceTimeGroupAnimated:(BOOL)arg0 ;
-(void)_addGroup:(id)arg0 afterGroup:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addMedicalIDGroupAnimated:(BOOL)arg0 ;
-(void)_didCompleteWithContact:(id)arg0 ;
-(void)_handleCoalescedBlockListDidChange;
-(void)_refetchContact;
-(void)_reloadAlertGroups;
-(void)_reloadFaceTimeGroup;
-(void)_reloadGeminiGroupPreservingChanges:(BOOL)arg0 ;
-(void)_reloadLinkedCardsGroup;
-(void)_reloadMedicalIDGroup;
-(void)_reloadPropertyGroupsPreservingChanges:(BOOL)arg0 ;
-(void)_retrieveActionsModelPreservingChanges:(BOOL)arg0 ;
-(void)_saveChangesForGroups:(id)arg0 ;
-(void)_scrollContactView:(id)arg0 toVisibleGroup:(id)arg1 ;
-(void)_setNeedsUpdateCachedLabelWidths;
-(void)_setupAddToAddressBookActions;
-(void)_setupCardActions;
-(void)_setupContactBlockingActionPreservingChanges:(BOOL)arg0 withUpdate:(BOOL)arg1 ;
-(void)_setupCustomActions;
-(void)_setupSuggestionActions;
-(void)_updateAvailableTransports;
-(void)_updateAvailableTransportsForItems:(id)arg0 ;
-(void)_updateCachedLabelWidths;
-(void)_updateCachedLabelWidthsForGroup:(id)arg0 ;
-(void)_updateCachedLabelWidthsForItem:(id)arg0 ;
-(void)_updateCachedLabelWidthsIfNeeded;
-(void)_updateEmailTransportButtonsForItems:(id)arg0 ;
-(void)_updateIMessageTransportButtonsForItems:(id)arg0 ;
-(void)_updateLabelWidthForCell:(id)arg0 ;
-(void)_updateLabelWidthForCellsInGroup:(id)arg0 reset:(BOOL)arg1 ;
-(void)_updateLabelWidthsForAllVisibleCells;
-(void)_updatePhoneTransportButtonsForItems:(id)arg0 ;
-(void)_updateTTYTransportButtonsForItems:(id)arg0 ;
-(void)_updateUserActivity;
-(void)_validateGroup:(id)arg0 ;
-(void)action:(id)arg0 dismissViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 prepareChildContactViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 presentViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 pushViewController:(id)arg1 sender:(id)arg2 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)actionDidUpdate:(id)arg0 ;
-(void)actionWasCanceled:(id)arg0 ;
// -(void)addActionWithTitle:(id)arg0 menuProvider:(id)arg1 inGroup:(unk)arg2 destructive:(id)arg3  ;
-(void)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3 ;
-(void)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3 destructive:(BOOL)arg4 ;
// -(void)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 menuProvider:(id)arg3 inGroup:(unk)arg4 destructive:(id)arg5  ;
-(void)adjustInsetsForKeyboardOverlap:(CGFloat)arg0 ;
-(void)adjustPreferredContentSize;
-(void)blockListDidChange:(id)arg0 ;
-(void)cancelAsyncLookups;
-(void)cleanupRecentImageMetadata;
-(void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(id)arg0 ;
-(void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(id)arg0 ;
-(void)contactStoreDidChangeWithNotification:(id)arg0 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)createdNewContact:(id)arg0 ;
-(void)dealloc;
-(void)didChangeToShowTitle:(BOOL)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)favoritesDidChangeWithNotification:(id)arg0 ;
-(void)geminiDataSourceDidUpdate:(id)arg0 ;
-(void)headerPhotoDidUpdate;
-(void)headerView:(id)arg0 didAcceptDropOfImageData:(id)arg1 ;
-(void)headerViewDidPickPreferredChannel:(id)arg0 ;
-(void)headerViewDidUpdateLabelSizes;
-(void)initializeTableViewsForHeaderHeight;
-(void)keyboardDidShowNotification:(id)arg0 ;
-(void)keyboardWillHideNotification:(id)arg0 ;
-(void)loadContactViewControllerViews;
-(void)loadView;
-(void)localeDidChange:(id)arg0 ;
-(void)prepareCell:(id)arg0 ;
-(void)prepareContactDidAppearForPPT;
-(void)presentViewController:(id)arg0 sourceView:(id)arg1 ;
-(void)presentationController:(id)arg0 willPresentWithAdaptiveStyle:(NSInteger)arg1 transitionCoordinator:(id)arg2 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)propertyCell:(id)arg0 didDeleteLabel:(id)arg1 forGroup:(id)arg2 ;
-(void)propertyCell:(id)arg0 didUpdateItem:(id)arg1 withNewLabel:(id)arg2 ;
-(void)propertyCell:(id)arg0 didUpdateItem:(id)arg1 withNewValue:(id)arg2 ;
-(void)propertyCell:(id)arg0 performActionForItem:(id)arg1 withTransportType:(NSInteger)arg2 ;
-(void)propertyCellDidChangeLayout:(id)arg0 ;
-(void)reloadCardGroup:(id)arg0 ;
-(void)reloadCardGroup:(id)arg0 forTableView:(id)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg0 ;
-(void)reloadUnifiedContact;
-(void)removeActionWithTarget:(id)arg0 selector:(SEL)arg1 inGroup:(id)arg2 ;
-(void)removeFirstSectionHeaderViewControllerFromHierarchy;
-(void)removeLinkedContact:(id)arg0 ;
-(void)requestFavoritesUpdateWithGemini;
-(void)scrollScrollViewAllTheWayUp:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)sender:(id)arg0 presentViewController:(id)arg1 ;
-(void)setBackgroundColorIfNeededForPresentedViewController:(id)arg0 ;
-(void)setCancelKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setEditKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setMenuProviderForCell:(id)arg0 forActionGroupItem:(id)arg1 ;
-(void)setNeedsReload;
-(void)setNeedsReloadLazy;
-(void)setTitle:(id)arg0 ;
-(void)setupActionsPreservingChanges:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)setupShareLocationActionReload:(BOOL)arg0 ;
-(void)setupTableFooterView;
-(void)setupViewHierarchyIncludingAvatarHeader:(BOOL)arg0 ;
-(void)sharingStatusDidChange;
-(void)shouldPresentFullscreen:(BOOL)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)toggleEditing:(id)arg0 ;
-(void)updateContact:(id)arg0 ;
// -(void)updateContactsViewWithBlock:(id)arg0 completion:(unk)arg1  ;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg0 ;
-(void)updateHeaderHeightToMatchScrollViewState:(id)arg0 scrollDirection:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)updateInsetsIfNeeded;
-(void)updateOutOfProcessFullscreenPresentationIfNeeded;
-(void)updateTableView:(id)arg0 contentInsetsTo:(struct UIEdgeInsets )arg1 withScrollIndicatorInsets:(struct UIEdgeInsets )arg2 ;
-(void)updateUserActivityState:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateWindowTitleForAppearing:(BOOL)arg0 ;
-(void)updateWithContactViewConfiguration:(id)arg0 ;
-(void)updateWithNewContact:(id)arg0 ;
-(void)updatedExistingContact:(id)arg0 ;
-(void)viewController:(id)arg0 presentationControllerWillDismiss:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif