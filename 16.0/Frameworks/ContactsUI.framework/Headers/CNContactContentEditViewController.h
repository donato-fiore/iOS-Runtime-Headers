// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCONTENTEDITVIEWCONTROLLER_H
#define CNCONTACTCONTENTEDITVIEWCONTROLLER_H

@class UIViewController, CNAccessAuthorization, NSArray, CNUIUserActivityManager, NSMapTable, UIKeyCommand, CNContact, CNContactFormatter, CNContactStore, NSString, UIBarButtonItem, NSMutableArray, UINavigationItem, NSMutableDictionary, UIView, NSLayoutConstraint, HKHealthStore, NSDictionary, CNManagedConfiguration, CNMutableContact, CNContainer, CNGroup, CNPolicy;
@protocol CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNUIGeminiDataSourceDelegate, NSUserActivityDelegate, CNContactContainerPickerViewControllerDelegate, CNUIContactSaveDelegate, CNContactContentNavigationItemTarget, CNContactActionDelegate, CNPresenterDelegate, CNContactContentNavigationItemProviding, UITableViewDelegate, UITableViewDataSource, UIViewControllerRestoration, CNContactContentEditViewControllerDelegate, CNCancelable, CNHealthStoreManagerToken, CNContactContentNavigationItemDelegate, CNUIContactSaveExecutor;


#import "CNContactActionProvider.h"
#import "CNContactAddLinkedCardAction.h"
#import "CNContactAddNewFieldAction.h"
#import "CNCardGroup.h"
#import "CNCardContactContainerGroup.h"
#import "CNCardPropertyGeminiGroup.h"
#import "CNCardLinkedCardsGroup.h"
#import "CNContactHeaderEditView.h"
#import "CNContactView.h"
#import "CNContactViewCache.h"
#import "CNContactContentViewControllerConfiguration.h"
#import "CNUIContainerContext.h"
#import "CNContactContainerPickerViewController.h"
#import "CNContactAction.h"
#import "CNEmergencyContactAction.h"
#import "CNUIContactsEnvironment.h"
#import "CNUIGeminiDataSource.h"
#import "CNPropertyLinkedCardsAction.h"
#import "CNMedicalIDAction.h"
#import "CNContactContentNavigationItemUpdater.h"
#import "CNPropertyNoteCell.h"
#import "CNPropertyGroupsDataSource.h"
#import "CNContactRecentsReference.h"
#import "CNContactSelectContainersAction.h"
#import "CNSiriContactContextProvider.h"
#import "CNContactSuggestionAction.h"

@interface CNContactContentEditViewController : UIViewController <CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNUIGeminiDataSourceDelegate, NSUserActivityDelegate, CNContactContainerPickerViewControllerDelegate, CNUIContactSaveDelegate, CNContactContentNavigationItemTarget, CNContactActionDelegate, CNPresenterDelegate, CNContactContentNavigationItemProviding, UITableViewDelegate, UITableViewDataSource, UIViewControllerRestoration>

 {
    BOOL _needsReload;
    BOOL _needsRefetch;
    BOOL _disablingRotation;
    BOOL _saving;
    int _animating;
    BOOL _navBarWasVisibleWhenPresented;
}


@property (retain, nonatomic) CNAccessAuthorization *accessAuthorization; // ivar: _accessAuthorization
@property (retain, nonatomic) CNContactActionProvider *actionProvider; // ivar: _actionProvider
@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (readonly, nonatomic) CNUIUserActivityManager *activityManager; // ivar: _activityManager
@property (retain, nonatomic) CNContactAddLinkedCardAction *addLinkedCardAction; // ivar: _addLinkedCardAction
@property (retain, nonatomic) CNContactAddNewFieldAction *addNewFieldAction; // ivar: _addNewFieldAction
@property (retain, nonatomic) NSMapTable *cachedLabelWidths; // ivar: _cachedLabelWidths
@property (retain, nonatomic) UIKeyCommand *cancelCommand; // ivar: _cancelCommand
@property (readonly, nonatomic) NSArray *cardActions; // ivar: _cardActions
@property (retain, nonatomic) CNCardGroup *cardEditingActionsGroup; // ivar: _cardEditingActionsGroup
@property (retain, nonatomic) CNCardContactContainerGroup *cardEditingContactContainerGroup; // ivar: _cardEditingContactContainerGroup
@property (retain, nonatomic) CNCardGroup *cardEditingDeleteContactGroup; // ivar: _cardEditingDeleteContactGroup
@property (retain, nonatomic) CNCardPropertyGeminiGroup *cardEditingGeminiGroup; // ivar: _cardEditingGeminiGroup
@property (retain, nonatomic) CNCardLinkedCardsGroup *cardLinkedCardsGroup; // ivar: _cardLinkedCardsGroup
@property (retain, nonatomic) CNCardGroup *cardMedicalIDGroup; // ivar: _cardMedicalIDGroup
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactHeaderEditView *contactHeaderView; // ivar: _contactHeaderView
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNContactView *contactView; // ivar: _contactView
@property (readonly, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (retain, nonatomic) CNContactContentViewControllerConfiguration *contactViewConfiguration; // ivar: _contactViewConfiguration
@property (retain, nonatomic) CNUIContainerContext *containerContext; // ivar: _containerContext
@property (retain, nonatomic) CNContactContainerPickerViewController *containerPicker; // ivar: _containerPicker
@property (retain, nonatomic) NSArray *customActions; // ivar: _customActions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactContentEditViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNContactAction *deleteContactAction; // ivar: _deleteContactAction
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetFirstResponder; // ivar: _didSetFirstResponder
@property (nonatomic) BOOL didSetNewContact; // ivar: _didSetNewContact
@property (readonly, nonatomic) UIBarButtonItem *doneButtonItem;
@property (retain, nonatomic) NSMutableArray *editingGroups; // ivar: _editingGroups
@property (retain, nonatomic) NSMutableArray *editingLinkedContacts; // ivar: _editingLinkedContacts
@property (readonly, nonatomic) UINavigationItem *effectiveNavigationItem;
@property (retain, nonatomic) CNEmergencyContactAction *emergencyContactAction; // ivar: _emergencyContactAction
@property (retain, nonatomic) NSString *emergencyNumberIdentifier; // ivar: _emergencyNumberIdentifier
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSArray *extraLeftBarButtonItems; // ivar: _extraLeftBarButtonItems
@property (retain, nonatomic) NSArray *extraRightBarButtonItems; // ivar: _extraRightBarButtonItems
@property (nonatomic) BOOL forcesTransparentBackground; // ivar: _forcesTransparentBackground
@property (readonly, nonatomic) CNUIGeminiDataSource *geminiDataSource; // ivar: _geminiDataSource
@property (retain, nonatomic) NSMutableDictionary *groupsAfterGroup; // ivar: _groupsAfterGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerDropShadowView; // ivar: _headerDropShadowView
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // ivar: _headerHeightConstraint
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSArray *highlightedProperties; // ivar: _highlightedProperties
@property (nonatomic) BOOL highlightedPropertyImportant; // ivar: _highlightedPropertyImportant
@property (retain, nonatomic) CNContactAction *ignoreContactAction; // ivar: _ignoreContactAction
@property (retain, nonatomic) NSString *initialPrompt; // ivar: _initialPrompt
@property (nonatomic) BOOL isPresentingFullscreenForOutOfProcess; // ivar: _isPresentingFullscreenForOutOfProcess
@property (readonly) BOOL isPresentingModalViewController; // ivar: isPresentingModalViewController
@property (retain, nonatomic) NSMutableArray *issuedSaveRequestIdentifiers; // ivar: _issuedSaveRequestIdentifiers
@property (nonatomic) CGFloat keyboardVerticalOverlap; // ivar: _keyboardVerticalOverlap
@property (retain, nonatomic) CNPropertyLinkedCardsAction *linkedCardsAction; // ivar: _linkedCardsAction
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // ivar: _linkedPoliciesByContactIdentifier
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (retain, nonatomic) CNMedicalIDAction *medicalIDAction; // ivar: _medicalIDAction
@property (retain, nonatomic) NSObject<CNCancelable> *medicalIDLookupToken; // ivar: _medicalIDLookupToken
@property (retain, nonatomic) NSObject<CNHealthStoreManagerToken> *medicalIDRegistrationToken; // ivar: _medicalIDRegistrationToken
@property (retain, nonatomic) NSArray *missingRequiredKeys; // ivar: _missingRequiredKeys
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) CNMutableContact *mutableContact; // ivar: _mutableContact
@property (retain, nonatomic) NSArray *nameEditingGroups; // ivar: _nameEditingGroups
@property (retain, nonatomic) CNContactContentNavigationItemUpdater *navItemUpdater; // ivar: _navItemUpdater
@property (weak, nonatomic) NSObject<CNContactContentNavigationItemDelegate> *navigationItemDelegate; // ivar: _navigationItemDelegate
@property (retain, nonatomic) CNPropertyNoteCell *noteCell; // ivar: _noteCell
@property (retain, nonatomic) NSArray *originalContacts; // ivar: _originalContacts
@property (retain, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (retain, nonatomic) CNGroup *parentGroup; // ivar: _parentGroup
@property (readonly, nonatomic) UIEdgeInsets peripheryInsets; // ivar: _peripheryInsets
@property (retain, nonatomic) CNPolicy *policy; // ivar: _policy
@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems; // ivar: _preEditLeftBarButtonItems
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (readonly, nonatomic) NSDictionary *propertyGroups; // ivar: _propertyGroups
@property (retain, nonatomic) CNPropertyGroupsDataSource *propertyGroupsDataSource; // ivar: _propertyGroupsDataSource
@property (retain, nonatomic) CNContactRecentsReference *recentsData; // ivar: _recentsData
@property (nonatomic) BOOL runningPPT; // ivar: _runningPPT
@property (retain, nonatomic) UIKeyCommand *saveCommand; // ivar: _saveCommand
@property (retain, nonatomic) NSObject<CNUIContactSaveExecutor> *saveContactExecutor; // ivar: _saveContactExecutor
@property (retain, nonatomic) NSObject<CNUIContactSaveExecutor> *saveLinkedContactsExecutor; // ivar: _saveLinkedContactsExecutor
@property (retain, nonatomic) CNContactSelectContainersAction *selectContainersAction; // ivar: _selectContainersAction
@property (retain, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact; // ivar: _shadowCopyOfReadonlyContact
@property (nonatomic) BOOL shouldDrawNavigationBar; // ivar: _shouldDrawNavigationBar
@property (nonatomic) BOOL shouldIgnoreContactStoreDidChangeNotification; // ivar: _shouldIgnoreContactStoreDidChangeNotification
@property (nonatomic) BOOL showingMeContact; // ivar: _showingMeContact
@property (retain, nonatomic) CNSiriContactContextProvider *siriContextProvider; // ivar: _siriContextProvider
@property (retain, nonatomic) CNContactSuggestionAction *suggestedContactAction; // ivar: _suggestedContactAction
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDrafts; // ivar: _supportsDrafts
@property (retain, nonatomic) NSDictionary *userActivityUserInfo; // ivar: _userActivityUserInfo


+(BOOL)enablesTransportButtons;
+(BOOL)shouldShowGeminiForResult:(id)arg0 contact:(id)arg1 ;
+(NSInteger)tableViewStyle;
+(id)boolStateRestorationProperties;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysForContact:(id)arg0 ;
+(id)descriptorForRequiredKeysWithDescription:(id)arg0 ;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
+(void)_telemetryForContact:(id)arg0 ;
-(BOOL)_indexPathIsActionItem:(id)arg0 forTableView:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasPendingChanges;
-(BOOL)isHeaderViewPhotoProhibited;
-(BOOL)isModalInPresentation;
-(BOOL)isNicknameProhibited;
-(BOOL)isOutOfProcess;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg0 ;
-(BOOL)isStandardGroup:(id)arg0 ;
-(BOOL)isSuggestedContact;
-(BOOL)needsReload;
-(BOOL)performSave;
-(BOOL)reloadDataIfNeeded;
-(BOOL)saveChanges;
-(BOOL)shouldAllowContainerPicking;
-(BOOL)shouldDisplayAvatarHeaderView;
-(BOOL)shouldPresentConfirmCancelAlert;
-(BOOL)shouldReallyShowLinkedContacts;
-(BOOL)shouldShowActionsForAvatarView:(id)arg0 ;
-(BOOL)shouldShowGemini;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
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
-(NSInteger)sectionOfGroup:(id)arg0 inTableView:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)groupIndexFromTableViewSectionIndex:(NSUInteger)arg0 forTableView:(id)arg1 ;
-(NSUInteger)tableViewSectionIndexFromGroupIndex:(NSUInteger)arg0 forTableView:(id)arg1 ;
-(id)_addGroupsInArray:(id)arg0 afterGroup:(id)arg1 ;
-(id)_cardGroupAtTableViewSectionIndex:(NSInteger)arg0 forTableView:(id)arg1 ;
-(id)_cellForIndexPath:(id)arg0 forTableView:(id)arg1 ;
-(id)_cellIdentifierForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)_currentGroupsForTableView:(id)arg0 ;
-(id)_currentTopVisibleGroupInContactView:(id)arg0 ;
-(id)_itemAtIndexPath:(id)arg0 forTableView:(id)arg1 ;
-(id)_labelWidthKeyForGroup:(id)arg0 ;
-(id)_labelWidthKeyForItem:(id)arg0 ;
-(id)_loadEditingGroupsPreservingChanges:(BOOL)arg0 ;
-(id)_loadNameEditingGroups;
-(id)_loadPropertyGroups;
-(id)_phoneticNameForValue:(id)arg0 currentPhoneticName:(id)arg1 property:(id)arg2 ;
-(id)_policyForContact:(id)arg0 mode:(NSInteger)arg1 ;
-(id)_propertyGroupsForKeys:(id)arg0 ;
-(id)_removeUnauthorizedKeysFromContact:(id)arg0 ;
-(id)_updateContact:(id)arg0 withMissingKeysFromRequiredKeys:(id)arg1 ;
-(id)action:(id)arg0 cellForPropertyItem:(id)arg1 sender:(id)arg2 ;
-(id)alreadyPickedGroups;
-(id)applyContactStyle;
-(id)cardGroupForProperty:(id)arg0 ;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)indexPathOfDisplayedPropertyItem:(id)arg0 ;
-(id)indexPathOfEditingPropertyItem:(id)arg0 ;
-(id)indexPathOfPropertyItem:(id)arg0 editing:(BOOL)arg1 ;
-(id)initWithContact:(id)arg0 contactViewConfiguration:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navigationItemController;
-(id)saveDescriptionForCurrentState;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)viewControllerForHeaderView:(id)arg0 ;
-(struct CGRect )centeredSourceRect:(struct CGRect )arg0 inContactView:(id)arg1 ;
-(struct CGSize )requiredSizeForVisibleTableView;
-(struct CGSize )setupTableHeaderView;
-(struct UIEdgeInsets )insetsForContactTableView:(id)arg0 ;
-(struct UIEdgeInsets )scrollIndicatorInsetsForContactTableView:(id)arg0 withContentInsets:(struct UIEdgeInsets )arg1 ;
-(void)_addGroup:(id)arg0 afterGroup:(id)arg1 forTableView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_addMedicalIDGroupAnimated:(BOOL)arg0 forTableView:(id)arg1 ;
-(void)_addedGroupWithName:(id)arg0 ;
-(void)_didCompleteWithContact:(id)arg0 ;
-(void)_refetchContact;
-(void)_reloadContainerContextPreservingChanges:(BOOL)arg0 ;
-(void)_reloadGeminiGroupPreservingChanges:(BOOL)arg0 ;
-(void)_reloadLinkedCardsGroup;
-(void)_reloadMedicalIDGroup;
-(void)_reloadPropertyGroupsPreservingChanges:(BOOL)arg0 ;
-(void)_saveChangesForGroups:(id)arg0 ;
-(void)_scrollContactView:(id)arg0 toVisibleGroup:(id)arg1 ;
-(void)_setNeedsUpdateCachedLabelWidths;
-(void)_setupEditingCardActions;
-(void)_setupEditingLinkedContactsForKeys:(id)arg0 ;
-(void)_setupSuggestionActions;
-(void)_updateCachedLabelWidths;
-(void)_updateCachedLabelWidthsForGroup:(id)arg0 ;
-(void)_updateCachedLabelWidthsForItem:(id)arg0 ;
-(void)_updateCachedLabelWidthsIfNeeded;
-(void)_updateLabelWidthForCell:(id)arg0 ;
-(void)_updateLabelWidthForCellsInGroup:(id)arg0 forTableView:(id)arg1 reset:(BOOL)arg2 ;
-(void)_updateLabelWidthsForAllVisibleCells;
-(void)_updateUserActivity;
-(void)_validateGroup:(id)arg0 ;
-(void)action:(id)arg0 dismissViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 prepareChildContactViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 presentViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 pushViewController:(id)arg1 sender:(id)arg2 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)actionWasCanceled:(id)arg0 ;
-(void)addCardGroup:(id)arg0 afterGroup:(id)arg1 ;
-(void)addEditingItemAtIndexPath:(id)arg0 forTableView:(id)arg1 ;
-(void)addLinkedContact:(id)arg0 ;
-(void)adjustInsetsForKeyboardOverlap:(CGFloat)arg0 ;
-(void)cancelAsyncLookups;
-(void)cleanupRecentImageMetadata;
-(void)clearMapsDataIfEdited;
-(void)contactGroupPickerDidCancel:(id)arg0 ;
-(void)contactGroupPickerDidFinish:(id)arg0 withGroup:(id)arg1 ;
-(void)contactStoreDidChangeWithNotification:(id)arg0 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)createCardEditingContactContainerGroupIfNeeded;
-(void)createCardEditingGeminiGroupIfNeeded;
-(void)createdNewContact:(id)arg0 ;
-(void)dealloc;
-(void)didChangeToEditMode:(BOOL)arg0 ;
-(void)didChangeToShowTitle:(BOOL)arg0 ;
-(void)editCancel;
-(void)editCancel:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)favoritesDidChangeWithNotification:(id)arg0 ;
-(void)finishEditing;
-(void)finishEditing:(id)arg0 ;
-(void)focusOnFirstEditingItemIfNeeded;
-(void)focusOnLastEditingItemInGroup:(id)arg0 ;
-(void)geminiDataSourceDidUpdate:(id)arg0 ;
-(void)headerPhotoDidUpdate;
-(void)headerView:(id)arg0 didAcceptDropOfImageData:(id)arg1 ;
-(void)headerViewDidUpdateLabelSizes;
-(void)initializeTableViewsForHeaderHeight;
-(void)keyboardDidShowNotification:(id)arg0 ;
-(void)keyboardWillHideNotification:(id)arg0 ;
-(void)loadContactViewControllerViews;
-(void)loadView;
-(void)localeDidChange:(id)arg0 ;
-(void)performConfirmedCancel;
-(void)prepareCell:(id)arg0 ;
-(void)prepareContactDidAppearForPPT;
-(void)presentConfirmCancelAlertController;
-(void)presentViewController:(id)arg0 sourceView:(id)arg1 ;
-(void)presentationController:(id)arg0 willPresentWithAdaptiveStyle:(NSInteger)arg1 transitionCoordinator:(id)arg2 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)propertyCell:(id)arg0 didDeleteLabel:(id)arg1 forGroup:(id)arg2 ;
-(void)propertyCell:(id)arg0 didUpdateItem:(id)arg1 withNewLabel:(id)arg2 ;
-(void)propertyCell:(id)arg0 didUpdateItem:(id)arg1 withNewValue:(id)arg2 ;
-(void)propertyCell:(id)arg0 performActionForItem:(id)arg1 withTransportType:(NSInteger)arg2 ;
-(void)propertyCellDidChangeLayout:(id)arg0 ;
-(void)propertyItem:(id)arg0 willChangeValue:(id)arg1 ;
-(void)reloadCardGroup:(id)arg0 forTableView:(id)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg0 ;
-(void)reloadUnifiedContact;
-(void)removeEditingItem:(id)arg0 atIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(void)removeLinkedContact:(id)arg0 ;
-(void)saveModelChangesToContact;
-(void)saveNewContactDraft;
-(void)scrollScrollViewAllTheWayUp:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)sender:(id)arg0 presentViewController:(id)arg1 ;
-(void)setBackgroundColorIfNeededForPresentedViewController:(id)arg0 ;
-(void)setCancelKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setMenuProviderForCell:(id)arg0 forActionGroupItem:(id)arg1 ;
-(void)setNeedsReload;
-(void)setNeedsReloadLazy;
-(void)setSaveKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setupActionsPreservingChanges:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)setupContainerContextIfNeededForContact:(id)arg0 ;
-(void)setupViewHierarchyIncludingAvatarHeader:(BOOL)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)toggleEditing;
-(void)toggleEditing:(id)arg0 ;
-(void)updateContact:(id)arg0 ;
// -(void)updateContactsViewWithBlock:(id)arg0 completion:(unk)arg1  ;
-(void)updateDoneButton;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg0 ;
-(void)updateEditPhotoButtonIfNeeded;
-(void)updateHeaderHeightToMatchScrollViewState:(id)arg0 scrollDirection:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)updateInsetsIfNeededForTableView:(id)arg0 ;
-(void)updateOutOfProcessFullscreenPresentationIfNeeded;
-(void)updateTableView:(id)arg0 contentInsetsTo:(struct UIEdgeInsets )arg1 withScrollIndicatorInsets:(struct UIEdgeInsets )arg2 ;
-(void)updateUserActivityState:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateWindowTitleForAppearing:(BOOL)arg0 ;
-(void)updateWithNewContact:(id)arg0 ;
-(void)updatedExistingContact:(id)arg0 ;
-(void)viewController:(id)arg0 presentationControllerWillDismiss:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif