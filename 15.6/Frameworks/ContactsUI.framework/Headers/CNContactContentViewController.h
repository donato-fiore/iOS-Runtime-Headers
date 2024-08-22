// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTCONTENTVIEWCONTROLLER_H
#define CNCONTACTCONTENTVIEWCONTROLLER_H

@class UIViewController, CNAccessAuthorization, CNUIUserActionListDataSource, NSArray, CNUIUserActivityManager, NSString, NSMapTable, UIKeyCommand, CNContact, CNContactFormatter, CNContactStore, NSMutableArray, NSMutableDictionary, UIView, NSLayoutConstraint, HKHealthStore, NSDictionary, CNManagedConfiguration, CNMutableContact, CNContainer, CNGroup, CNPolicy, UITableView, NSAttributedString;
@protocol CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNUIGeminiDataSourceDelegate, NSUserActivityDelegate, CNUIEditAuthorizationControllerDelegate, CNContactContainerPickerViewControllerDelegate, CNUIContactSaveDelegate, CNContactActionDelegate, CNPresenterDelegate, CNContactContentViewController, UITableViewDelegate, UITableViewDataSource, UIViewControllerRestoration, CNContactViewHostProtocol, CNCancelable, CNHealthStoreManagerToken, CNContactViewControllerPPTDelegate, CNUIContactSaveExecutor;


#import "CNContactActionProvider.h"
#import "CNContactInlineActionsViewController.h"
#import "CNContactActionsContainerView.h"
#import "CNContactAddFavoriteAction.h"
#import "CNContactAddLinkedCardAction.h"
#import "CNContactAddNewFieldAction.h"
#import "CNContactAddToExistingContactAction.h"
#import "CNContactToggleBlockCallerAction.h"
#import "CNCardGroup.h"
#import "CNCardContactContainerGroup.h"
#import "CNCardPropertyGeminiGroup.h"
#import "CNCardFaceTimeGroup.h"
#import "CNCardLinkedCardsGroup.h"
#import "CNContactClearRecentsDataAction.h"
#import "CNContactHeaderView.h"
#import "CNContactView.h"
#import "CNContactViewCache.h"
#import "CNUIContainerContext.h"
#import "CNContactContainerPickerViewController.h"
#import "CNContactCreateNewContactAction.h"
#import "CNContactAction.h"
#import "CNContactHeaderDisplayView.h"
#import "CNUIEditAuthorizationController.h"
#import "CNContactHeaderEditView.h"
#import "CNEmergencyContactAction.h"
#import "CNUIContactsEnvironment.h"
#import "CNPropertyFaceTimeAction.h"
#import "CNUIGeminiDataSource.h"
#import "CNPropertyLinkedCardsAction.h"
#import "CNMedicalIDAction.h"
#import "CNPropertyNoteCell.h"
#import "CNContactRecentsReference.h"
#import "CNContactSelectContainersAction.h"
#import "CNPropertyAction.h"
#import "CNShareLocationController.h"
#import "CNSiriContactContextProvider.h"
#import "CNContactSuggestionAction.h"
#import "CNContactUpdateExistingContactAction.h"

@interface CNContactContentViewController : UIViewController <CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNUIGeminiDataSourceDelegate, NSUserActivityDelegate, CNUIEditAuthorizationControllerDelegate, CNContactContainerPickerViewControllerDelegate, CNUIContactSaveDelegate, CNContactActionDelegate, CNPresenterDelegate, CNContactContentViewController, UITableViewDelegate, UITableViewDataSource, UIViewControllerRestoration>

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
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // ivar: _actionsDataSource
@property (retain, nonatomic) CNContactInlineActionsViewController *actionsViewController; // ivar: _actionsViewController
@property (retain, nonatomic) CNContactActionsContainerView *actionsWrapperView; // ivar: _actionsWrapperView
@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (readonly, nonatomic) CNUIUserActivityManager *activityManager; // ivar: _activityManager
@property (retain, nonatomic) CNContactAddFavoriteAction *addFavoriteAction; // ivar: _addFavoriteAction
@property (retain, nonatomic) CNContactAddLinkedCardAction *addLinkedCardAction; // ivar: _addLinkedCardAction
@property (retain, nonatomic) CNContactAddNewFieldAction *addNewFieldAction; // ivar: _addNewFieldAction
@property (retain, nonatomic) CNContactAddToExistingContactAction *addToExistingContactAction; // ivar: _addToExistingContactAction
@property (nonatomic) BOOL allowsActions; // ivar: _allowsActions
@property (nonatomic) BOOL allowsActionsModel; // ivar: _allowsActionsModel
@property (nonatomic) BOOL allowsAddToFavorites; // ivar: _allowsAddToFavorites
@property (nonatomic) BOOL allowsAddingToAddressBook; // ivar: _allowsAddingToAddressBook
@property (nonatomic) BOOL allowsCardActions; // ivar: _allowsCardActions
@property (nonatomic) BOOL allowsConferencing; // ivar: _allowsConferencing
@property (nonatomic) BOOL allowsContactBlocking; // ivar: _allowsContactBlocking
@property (nonatomic) BOOL allowsDeletion; // ivar: _allowsDeletion
@property (nonatomic) BOOL allowsDisplayModePickerActions; // ivar: _allowsDisplayModePickerActions
@property (nonatomic) BOOL allowsEditInApp; // ivar: _allowsEditInApp
@property (nonatomic) BOOL allowsEditPhoto; // ivar: _allowsEditPhoto
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL allowsPropertyActions; // ivar: _allowsPropertyActions
@property (nonatomic) BOOL allowsSendMessage; // ivar: _allowsSendMessage
@property (nonatomic) BOOL allowsSettingLinkedContactsAsPreferred; // ivar: _allowsSettingLinkedContactsAsPreferred
@property (nonatomic) BOOL allowsSharing; // ivar: _allowsSharing
@property (retain, nonatomic) NSString *alternateName; // ivar: _alternateName
@property (nonatomic) BOOL alwaysEditing; // ivar: _alwaysEditing
@property (retain, nonatomic) CNContactToggleBlockCallerAction *blockAction; // ivar: _blockAction
@property (retain, nonatomic) NSMapTable *cachedLabelWidths; // ivar: _cachedLabelWidths
@property (retain, nonatomic) UIKeyCommand *cancelCommand; // ivar: _cancelCommand
@property (readonly, nonatomic) NSArray *cardActions;
@property (retain, nonatomic) CNCardGroup *cardActionsGroup; // ivar: _cardActionsGroup
@property (retain, nonatomic) CNCardGroup *cardBlockContactGroup; // ivar: _cardBlockContactGroup
@property (retain, nonatomic) CNCardGroup *cardBottomGroup; // ivar: _cardBottomGroup
@property (retain, nonatomic) CNCardGroup *cardEditingActionsGroup; // ivar: _cardEditingActionsGroup
@property (retain, nonatomic) CNCardContactContainerGroup *cardEditingContactContainerGroup; // ivar: _cardEditingContactContainerGroup
@property (retain, nonatomic) CNCardGroup *cardEditingDeleteContactGroup; // ivar: _cardEditingDeleteContactGroup
@property (retain, nonatomic) CNCardPropertyGeminiGroup *cardEditingGeminiGroup; // ivar: _cardEditingGeminiGroup
@property (retain, nonatomic) CNCardFaceTimeGroup *cardFaceTimeGroup; // ivar: _cardFaceTimeGroup
@property (readonly, nonatomic) CNCardGroup *cardFooterGroup; // ivar: _cardFooterGroup
@property (retain, nonatomic) CNCardLinkedCardsGroup *cardLinkedCardsGroup; // ivar: _cardLinkedCardsGroup
@property (retain, nonatomic) CNCardGroup *cardMedicalIDGroup; // ivar: _cardMedicalIDGroup
@property (retain, nonatomic) CNCardGroup *cardShareLocationGroup; // ivar: _cardShareLocationGroup
@property (retain, nonatomic) CNCardGroup *cardTopGroup; // ivar: _cardTopGroup
@property (retain, nonatomic) CNContactClearRecentsDataAction *clearRecentsDataAction; // ivar: _clearRecentsDataAction
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (weak, nonatomic) NSObject<CNContactContentViewControllerDelegate> *contactDelegate; // ivar: _contactDelegate
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (readonly, nonatomic) CNContactHeaderView *contactHeaderView;
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) BOOL contactSupportsTTYCalls; // ivar: _contactSupportsTTYCalls
@property (readonly, nonatomic) CNContactView *contactView;
@property (readonly, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (retain, nonatomic) CNUIContainerContext *containerContext; // ivar: _containerContext
@property (retain, nonatomic) CNContactContainerPickerViewController *containerPicker; // ivar: _containerPicker
@property (retain, nonatomic) CNContactCreateNewContactAction *createNewContactAction; // ivar: _createNewContactAction
@property (retain, nonatomic) CNContactAction *createReminderAction; // ivar: _createReminderAction
@property (retain, nonatomic) NSArray *customActions; // ivar: _customActions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactViewHostProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNContactAction *deleteContactAction; // ivar: _deleteContactAction
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetFirstResponder; // ivar: _didSetFirstResponder
@property (nonatomic) BOOL didSetNewContact; // ivar: _didSetNewContact
@property (retain, nonatomic) CNContactView *displayContactView; // ivar: _displayContactView
@property (retain, nonatomic) NSMutableArray *displayGroups; // ivar: _displayGroups
@property (retain, nonatomic) CNContactHeaderDisplayView *displayHeaderView; // ivar: _displayHeaderView
@property (copy, nonatomic) NSArray *displayedProperties; // ivar: _displayedProperties
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // ivar: _editAuthorizationController
@property (nonatomic) NSInteger editAuthorizationResult; // ivar: _editAuthorizationResult
@property (retain, nonatomic) UIKeyCommand *editCommand; // ivar: _editCommand
@property (retain, nonatomic) CNContactView *editingContactView; // ivar: _editingContactView
@property (retain, nonatomic) NSMutableArray *editingGroups; // ivar: _editingGroups
@property (retain, nonatomic) CNContactHeaderEditView *editingHeaderView; // ivar: _editingHeaderView
@property (retain, nonatomic) NSMutableArray *editingLinkedContacts; // ivar: _editingLinkedContacts
@property (nonatomic) BOOL editingProposedInformation; // ivar: _editingProposedInformation
@property (retain, nonatomic) CNEmergencyContactAction *emergencyContactAction; // ivar: _emergencyContactAction
@property (retain, nonatomic) NSString *emergencyNumberIdentifier; // ivar: _emergencyNumberIdentifier
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSArray *extraLeftBarButtonItems; // ivar: _extraLeftBarButtonItems
@property (retain, nonatomic) NSArray *extraRightBarButtonItems; // ivar: _extraRightBarButtonItems
@property (retain, nonatomic) CNPropertyFaceTimeAction *faceTimeAction; // ivar: _faceTimeAction
@property (retain, nonatomic) CNPropertyFaceTimeAction *faceTimeAudioAction; // ivar: _faceTimeAudioAction
@property (retain, nonatomic) NSObject<CNCancelable> *faceTimeIDSLookupToken; // ivar: _faceTimeIDSLookupToken
@property (nonatomic) BOOL forcesTransparentBackground; // ivar: _forcesTransparentBackground
@property (readonly, nonatomic) CNUIGeminiDataSource *geminiDataSource; // ivar: _geminiDataSource
@property (retain, nonatomic) NSMutableDictionary *groupsAfterGroup; // ivar: _groupsAfterGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerDropShadowView; // ivar: _headerDropShadowView
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // ivar: _headerHeightConstraint
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (nonatomic) BOOL hideCardActions; // ivar: _hideCardActions
@property (retain, nonatomic) NSArray *highlightedProperties; // ivar: _highlightedProperties
@property (nonatomic) BOOL highlightedPropertyImportant; // ivar: _highlightedPropertyImportant
@property (retain, nonatomic) NSObject<CNCancelable> *iMessageIDSLookupToken; // ivar: _iMessageIDSLookupToken
@property (retain, nonatomic) CNContactAction *ignoreContactAction; // ivar: _ignoreContactAction
@property (nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (retain, nonatomic) NSString *importantMessage; // ivar: _importantMessage
@property (retain, nonatomic) NSString *initialPrompt; // ivar: _initialPrompt
@property (nonatomic) BOOL isMailVIP; // ivar: _isMailVIP
@property (nonatomic) BOOL isPresentingFullscreenForOutOfProcess; // ivar: _isPresentingFullscreenForOutOfProcess
@property (readonly) BOOL isPresentingModalViewController; // ivar: isPresentingModalViewController
@property (retain, nonatomic) NSMutableArray *issuedSaveRequestIdentifiers; // ivar: _issuedSaveRequestIdentifiers
@property (nonatomic) CGFloat keyboardVerticalOverlap; // ivar: _keyboardVerticalOverlap
@property (nonatomic) BOOL layoutPositionallyAfterNavBar; // ivar: _layoutPositionallyAfterNavBar
@property (retain, nonatomic) CNPropertyLinkedCardsAction *linkedCardsAction; // ivar: _linkedCardsAction
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // ivar: _linkedPoliciesByContactIdentifier
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (retain, nonatomic) CNMedicalIDAction *medicalIDAction; // ivar: _medicalIDAction
@property (retain, nonatomic) NSObject<CNCancelable> *medicalIDLookupToken; // ivar: _medicalIDLookupToken
@property (retain, nonatomic) NSObject<CNHealthStoreManagerToken> *medicalIDRegistrationToken; // ivar: _medicalIDRegistrationToken
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSArray *missingRequiredKeys; // ivar: _missingRequiredKeys
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) CNMutableContact *mutableContact; // ivar: _mutableContact
@property (retain, nonatomic) NSArray *nameEditingGroups; // ivar: _nameEditingGroups
@property (retain, nonatomic) CNPropertyNoteCell *noteCell; // ivar: _noteCell
@property (retain, nonatomic) NSArray *originalContacts; // ivar: _originalContacts
@property (nonatomic) BOOL outOfProcessSetupComplete; // ivar: _outOfProcessSetupComplete
@property (retain, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (retain, nonatomic) CNGroup *parentGroup; // ivar: _parentGroup
@property (readonly, nonatomic) UIEdgeInsets peripheryInsets; // ivar: _peripheryInsets
@property (retain, nonatomic) UIView *personHeaderView;
@property (retain, nonatomic) UIViewController *personHeaderViewController; // ivar: _personHeaderViewController
@property (retain, nonatomic) CNPolicy *policy; // ivar: _policy
@property (weak, nonatomic) NSObject<CNContactViewControllerPPTDelegate> *pptDelegate; // ivar: _pptDelegate
@property (retain, nonatomic) NSArray *preEditLeftBarButtonItems; // ivar: _preEditLeftBarButtonItems
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (retain, nonatomic) NSString *primaryProperty; // ivar: _primaryProperty
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (readonly, nonatomic) NSDictionary *propertyGroups; // ivar: _propertyGroups
@property (retain, nonatomic) CNContactRecentsReference *recentsData; // ivar: _recentsData
@property (nonatomic) BOOL runningPPT; // ivar: _runningPPT
@property (retain, nonatomic) UIKeyCommand *saveCommand; // ivar: _saveCommand
@property (retain, nonatomic) NSObject<CNUIContactSaveExecutor> *saveContactExecutor; // ivar: _saveContactExecutor
@property (retain, nonatomic) NSObject<CNUIContactSaveExecutor> *saveLinkedContactsExecutor; // ivar: _saveLinkedContactsExecutor
@property (retain, nonatomic) CNContactSelectContainersAction *selectContainersAction; // ivar: _selectContainersAction
@property (retain, nonatomic) CNPropertyAction *sendMessageAction; // ivar: _sendMessageAction
@property (retain, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact; // ivar: _shadowCopyOfReadonlyContact
@property (retain, nonatomic) CNContactAction *shareContactAction; // ivar: _shareContactAction
@property (retain, nonatomic) CNShareLocationController *shareLocationController; // ivar: _shareLocationController
@property (nonatomic) BOOL shouldDrawNavigationBar; // ivar: _shouldDrawNavigationBar
@property (nonatomic) BOOL shouldIgnoreBlockListChange; // ivar: _shouldIgnoreBlockListChange
@property (nonatomic) BOOL shouldIgnoreContactStoreDidChangeNotification; // ivar: _shouldIgnoreContactStoreDidChangeNotification
@property (nonatomic) BOOL shouldShowLinkedContacts; // ivar: _shouldShowLinkedContacts
@property (nonatomic) BOOL showContactBlockingFirst; // ivar: _showContactBlockingFirst
@property (nonatomic) BOOL showingMeContact; // ivar: _showingMeContact
@property (retain, nonatomic) CNSiriContactContextProvider *siriContextProvider; // ivar: _siriContextProvider
@property (retain, nonatomic) CNContactAction *stopSharingWithFamilyAction; // ivar: _stopSharingWithFamilyAction
@property (retain, nonatomic) CNContactSuggestionAction *suggestedContactAction; // ivar: _suggestedContactAction
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CNContactUpdateExistingContactAction *updateExistingContactAction; // ivar: _updateExistingContactAction
@property (retain, nonatomic) NSDictionary *userActivityUserInfo; // ivar: _userActivityUserInfo
@property (retain, nonatomic) NSAttributedString *verifiedInfoMessage; // ivar: _verifiedInfoMessage
@property (retain, nonatomic) NSString *warningMessage; // ivar: _warningMessage


+(BOOL)actionModelIncludesTTY:(id)arg0 ;
+(BOOL)enablesTransportButtons;
+(BOOL)shouldShowGeminiForResult:(id)arg0 contact:(id)arg1 ;
+(id)boolStateRestorationProperties;
+(id)createActionsControllerWithActionListDataSource:(id)arg0 environment:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysForContact:(id)arg0 ;
+(id)descriptorForRequiredKeysWithDescription:(id)arg0 ;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
+(void)_telemetryForContact:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_indexPathIsActionItem:(id)arg0 forTableView:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)contactHasAvailablePropertiesToFavorite:(id)arg0 isPhoneAppAvailable:(BOOL)arg1 isFaceTimeAppAvailable:(BOOL)arg2 ;
-(BOOL)contactInlineActionsViewController:(id)arg0 shouldPerformActionOfType:(id)arg1 withContactProperty:(id)arg2 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(BOOL)editRequiresAuthorization;
-(BOOL)editingChangeRequiresAuthorization;
-(BOOL)hasPendingChanges;
-(BOOL)hasTableViewHeaderFirstSectionForTableView:(id)arg0 ;
-(BOOL)isHeaderViewPhotoProhibited;
-(BOOL)isModalInPresentation;
-(BOOL)isNicknameProhibited;
-(BOOL)isOutOfProcess;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg0 ;
-(BOOL)isStandardGroup:(id)arg0 ;
-(BOOL)isSuggestedContact;
-(BOOL)isTableViewHeaderFirstSectionIndexPath:(id)arg0 forTableView:(id)arg1 ;
-(BOOL)labeledValuesHasNonSuggestion:(id)arg0 ;
-(BOOL)needsReload;
-(BOOL)performSave;
-(BOOL)propertyItemCanIgnoreGuardianRestrictions;
-(BOOL)reloadDataIfNeeded;
-(BOOL)saveChanges;
-(BOOL)saveWasAuthorized;
-(BOOL)shouldAddFaceTimeGroup;
-(BOOL)shouldAllowContainerPicking;
-(BOOL)shouldDisplayAvatarHeaderView;
-(BOOL)shouldPresentConfirmCancelAlert;
-(BOOL)shouldReallyShowLinkedContactsForEditingState:(BOOL)arg0 ;
-(BOOL)shouldShowActionsForAvatarView:(id)arg0 ;
-(BOOL)shouldShowGemini;
-(BOOL)shouldShowVerifiedFooterInSection:(NSInteger)arg0 inTableView:(id)arg1 ;
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
-(NSInteger)indexOfGroup:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)sectionOfGroup:(id)arg0 inTableView:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)groupIndexFromTableViewSectionIndex:(NSUInteger)arg0 forTableView:(id)arg1 ;
-(NSUInteger)tableViewSectionIndexFromGroupIndex:(NSUInteger)arg0 forTableView:(id)arg1 ;
-(id)_addCreateNewContactAction;
-(id)_addFavoriteActionWithConferencing:(BOOL)arg0 telephony:(BOOL)arg1 ;
-(id)_addGroupsInArray:(id)arg0 afterGroup:(id)arg1 ;
-(id)_allDisplayPropertyItemsFromGroups:(id)arg0 ;
-(id)_cardGroupAtTableViewSectionIndex:(NSInteger)arg0 forTableView:(id)arg1 ;
-(id)_cellForIndexPath:(id)arg0 forTableView:(id)arg1 ;
-(id)_cellIdentifierForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)_currentGroupsForTableView:(id)arg0 ;
-(id)_currentTopVisibleGroupInContactView:(id)arg0 ;
-(id)_itemAtIndexPath:(id)arg0 forTableView:(id)arg1 ;
-(id)_labelWidthKeyForGroup:(id)arg0 ;
-(id)_labelWidthKeyForItem:(id)arg0 ;
-(id)_loadDisplayGroups;
-(id)_loadEditingGroupsPreservingChanges:(BOOL)arg0 ;
-(id)_loadNameEditingGroups;
-(id)_loadPropertyGroups;
-(id)_phoneticNameForValue:(id)arg0 currentPhoneticName:(id)arg1 property:(id)arg2 ;
-(id)_policyForContact:(id)arg0 mode:(NSInteger)arg1 ;
-(id)_propertyGroupsForKeys:(id)arg0 ;
-(id)_removeUnauthorizedKeysFromContact:(id)arg0 ;
-(id)_sendMessageActionAllowingEmailIDs:(BOOL)arg0 ;
-(id)_updateContact:(id)arg0 withMissingKeysFromRequiredKeys:(id)arg1 ;
-(id)action:(id)arg0 cellForPropertyItem:(id)arg1 sender:(id)arg2 ;
-(id)alreadyPickedGroups;
-(id)applyContactStyle;
-(id)authorizationCheck;
-(id)cardGroupForProperty:(id)arg0 ;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)indexPathOfDisplayedPropertyItem:(id)arg0 ;
-(id)indexPathOfEditingPropertyItem:(id)arg0 ;
-(id)indexPathOfPropertyItem:(id)arg0 editing:(BOOL)arg1 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContact:(id)arg0 prohibitedPropertyKeys:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navigationItemController;
-(id)saveDescriptionForCurrentState;
-(id)sharedActionsDataSource;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableViewHeaderFirstSectionCellForTableView:(id)arg0 ;
-(id)viewControllerForHeaderView:(id)arg0 ;
-(struct CGRect )centeredSourceRect:(struct CGRect )arg0 inContactView:(id)arg1 ;
-(struct CGSize )requiredSizeForVisibleTableView;
-(struct CGSize )setupTableHeaderView;
-(struct UIEdgeInsets )insetsForContactTableView:(id)arg0 ;
-(struct UIEdgeInsets )scrollIndicatorInsetsForContactTableView:(id)arg0 withContentInsets:(struct UIEdgeInsets )arg1 ;
-(void)_addFaceTimeGroupAnimated:(BOOL)arg0 ;
-(void)_addGroup:(id)arg0 afterGroup:(id)arg1 forTableView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_addMedicalIDGroupAnimated:(BOOL)arg0 forTableView:(id)arg1 ;
-(void)_addedGroupWithName:(id)arg0 ;
-(void)_didCompleteWithContact:(id)arg0 ;
-(void)_handleCoalescedBlockListDidChange;
-(void)_refetchContact;
-(void)_reloadAlertGroups;
-(void)_reloadContainerContextPreservingChanges:(BOOL)arg0 ;
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
-(void)_setupEditingCardActions;
-(void)_setupEditingLinkedContactsForKeys:(id)arg0 ;
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
-(void)_updateLabelWidthForCellsInGroup:(id)arg0 forTableView:(id)arg1 reset:(BOOL)arg2 ;
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
-(void)addCardGroup:(id)arg0 afterGroup:(id)arg1 ;
-(void)addEditingItemAtIndexPath:(id)arg0 forTableView:(id)arg1 ;
-(void)addLinkedContact:(id)arg0 ;
-(void)adjustInsetsForKeyboardOverlap:(CGFloat)arg0 ;
-(void)adjustPreferredContentSize;
-(void)blockListDidChange:(id)arg0 ;
-(void)cancelAsyncLookups;
-(void)cleanupRecentImageMetadata;
-(void)clearMapsDataIfEdited;
-(void)contactGroupPickerDidCancel:(id)arg0 ;
-(void)contactGroupPickerDidFinish:(id)arg0 withGroup:(id)arg1 ;
-(void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(id)arg0 ;
-(void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(id)arg0 ;
-(void)contactStoreDidChangeWithNotification:(id)arg0 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)createCardEditingContactContainerGroupIfNeeded;
-(void)createCardEditingGeminiGroupIfNeeded;
-(void)createdNewContact:(id)arg0 ;
-(void)dealloc;
-(void)didChangeToEditMode:(BOOL)arg0 ;
-(void)didChangeToShowTitle:(BOOL)arg0 ;
-(void)editAuthorizationController:(id)arg0 authorizationDidFinishWithResult:(NSInteger)arg1 ;
-(void)editCancel;
-(void)editCancel:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)favoritesDidChangeWithNotification:(id)arg0 ;
-(void)finishEditing:(id)arg0 ;
-(void)focusOnFirstEditingItemIfNeeded;
-(void)focusOnLastEditingItemInGroup:(id)arg0 ;
-(void)geminiDataSourceDidUpdate:(id)arg0 ;
-(void)headerPhotoDidSaveEditsForImageDrop;
-(void)headerPhotoDidUpdate;
-(void)headerViewDidPickPreferredChannel:(id)arg0 ;
-(void)headerViewDidUpdateLabelSizes;
-(void)initializeTableViewsForHeaderHeight;
-(void)keyboardDidShowNotification:(id)arg0 ;
-(void)keyboardWillHideNotification:(id)arg0 ;
-(void)loadContactViewControllerViews;
-(void)loadView;
-(void)localeDidChange:(id)arg0 ;
-(void)performAuthorizedSetEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
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
-(void)removeActionWithTarget:(id)arg0 selector:(SEL)arg1 inGroup:(id)arg2 ;
-(void)removeEditingItem:(id)arg0 atIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(void)removeFirstSectionHeaderViewControllerFromHierarchy;
-(void)removeLinkedContact:(id)arg0 ;
-(void)requestFavoritesUpdateWithGemini;
-(void)resetEditAuthorizationState;
-(void)saveModelChangesToContact;
-(void)scrollScrollViewAllTheWayUp:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)sender:(id)arg0 presentViewController:(id)arg1 ;
-(void)setBackgroundColorIfNeededForPresentedViewController:(id)arg0 ;
-(void)setCancelKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setEditKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setMenuProviderForCell:(id)arg0 forActionGroupItem:(id)arg1 ;
-(void)setNeedsReload;
-(void)setNeedsReloadLazy;
-(void)setSaveKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setupActionsPreservingChanges:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)setupContainerContextIfNeededForContact:(id)arg0 ;
-(void)setupShareLocationActionReload:(BOOL)arg0 ;
-(void)setupViewHierarchyIncludingAvatarHeader:(BOOL)arg0 editing:(BOOL)arg1 ;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;
-(void)sharingStatusDidChange;
-(void)shouldPresentFullscreen:(BOOL)arg0 ;
-(void)showEditAuthorizationPane:(id)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
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
-(void)updateInsetsIfNeededForTableView:(id)arg0 isEditing:(BOOL)arg1 ;
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