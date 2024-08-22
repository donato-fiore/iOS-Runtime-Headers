// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTCONTENTCONTAINERVIEWCONTROLLER_H
#define CNCONTACTCONTENTCONTAINERVIEWCONTROLLER_H

@class NSArray, CNContact, CNContactStore, CNAccessAuthorization, CNPolicy, NSDictionary, CNManagedConfiguration, NSString, NSMutableArray, CNUIUserActivityManager, UIKeyCommand, CNContactFormatter, NSLayoutConstraint;
@protocol CNContactContentDisplayViewControllerDelegate, CNContactContentEditViewControllerDelegate, CNContactContentNavigationItemDelegate, CNContactActionDelegate, CNContactContentViewController, UIViewControllerRestoration, CNPresenterDelegate, CNUIContactSaveExecutor, CNContactContentViewControllerDelegate, CNContactViewHostProtocol, CNContactViewControllerPPTDelegate;


#import "CNContactContentViewController.h"
#import "CNContactContentViewControllerConfiguration.h"
#import "CNCardFaceTimeGroup.h"
#import "CNContactRecentsReference.h"
#import "CNContactViewCache.h"
#import "CNContactContentDisplayViewController.h"
#import "CNContactEditAuthorizationManager.h"
#import "CNContactContentEditViewController.h"
#import "CNUIContactsEnvironment.h"

@interface CNContactContentContainerViewController : CNContactContentViewController <CNContactContentDisplayViewControllerDelegate, CNContactContentEditViewControllerDelegate, CNContactContentNavigationItemDelegate, CNContactActionDelegate, CNContactContentViewController, UIViewControllerRestoration>

 {
    NSArray *_displayedProperties;
    BOOL _needsReload;
    BOOL _needsRefetch;
    BOOL _disablingRotation;
    BOOL _saving;
    int _animating;
    BOOL _navBarWasVisibleWhenPresented;
    BOOL _showingMeContact;
    BOOL _allowsEditInApp;
    BOOL _isPresentingModalViewController;
    BOOL _shouldDrawNavigationBar;
    BOOL _shouldIgnoreContactStoreDidChangeNotification;
    id<CNPresenterDelegate> *_presentingDelegate;
    CNContactContentViewControllerConfiguration *_contactViewConfiguration;
    CNContact *_contact;
    CNContactStore *_contactStore;
    NSArray *_originalContacts;
    NSInteger _mode;
    CNAccessAuthorization *_accessAuthorization;
    CNPolicy *_policy;
    NSDictionary *_linkedPoliciesByContactIdentifier;
    CNManagedConfiguration *_managedConfiguration;
    NSArray *_missingRequireedKeys;
    NSString *_initialPrompt;
    id<CNUIContactSaveExecutor> *_saveContactExecutor;
    id<CNUIContactSaveExecutor> *_saveLinkedContactsExecutor;
    NSArray *_prohibitedPropertyKeys;
    CNCardFaceTimeGroup *_cardFaceTimeGroup;
    id<CNContactContentViewControllerDelegate> *_contactDelegate;
    CNContactRecentsReference *_recentsData;
    NSDictionary *_propertyGroups;
    NSMutableArray *_displayGroups;
}


@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (readonly, nonatomic) CNUIUserActivityManager *activityManager; // ivar: _activityManager
@property (retain, nonatomic) UIKeyCommand *cancelCommand; // ivar: _cancelCommand
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (readonly, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactViewHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetFirstResponder; // ivar: _didSetFirstResponder
@property (nonatomic) BOOL didSetNewContact; // ivar: _didSetNewContact
@property (retain, nonatomic) CNContactContentDisplayViewController *displayContactViewController; // ivar: _displayContactViewController
@property (retain, nonatomic) CNContactEditAuthorizationManager *editAuthorizationManager; // ivar: _editAuthorizationManager
@property (retain, nonatomic) UIKeyCommand *editCommand; // ivar: _editCommand
@property (retain, nonatomic) CNContactContentEditViewController *editContactViewController; // ivar: _editContactViewController
@property (readonly, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // ivar: _headerHeightConstraint
@property (nonatomic) BOOL isSupressingViewConfigurationUpdates; // ivar: _isSupressingViewConfigurationUpdates
@property (nonatomic) BOOL outOfProcessSetupComplete; // ivar: _outOfProcessSetupComplete
@property (weak, nonatomic) NSObject<CNContactViewControllerPPTDelegate> *pptDelegate; // ivar: _pptDelegate
@property (nonatomic) BOOL runningPPT; // ivar: _runningPPT
@property (retain, nonatomic) UIKeyCommand *saveCommand; // ivar: _saveCommand
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDrafts; // ivar: _supportsDrafts


+(NSInteger)tableViewStyle;
+(id)boolStateRestorationProperties;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysForContact:(id)arg0 ;
+(id)descriptorForRequiredKeysWithDescription:(id)arg0 ;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)allowsActions;
-(BOOL)allowsActionsModel;
-(BOOL)allowsAddToFavorites;
-(BOOL)allowsAddingToAddressBook;
-(BOOL)allowsCardActions;
-(BOOL)allowsConferencing;
-(BOOL)allowsContactBlocking;
-(BOOL)allowsDeletion;
-(BOOL)allowsDisplayModePickerActions;
-(BOOL)allowsEditInApp;
-(BOOL)allowsEditPhoto;
-(BOOL)allowsEditing;
-(BOOL)allowsPropertyActions;
-(BOOL)allowsSendMessage;
-(BOOL)allowsSettingLinkedContactsAsPreferred;
-(BOOL)allowsSharing;
-(BOOL)alwaysEditing;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(BOOL)editingChangeRequiresAuthorization;
-(BOOL)editingProposedInformation;
-(BOOL)hasPendingChanges;
-(BOOL)hideCardActions;
-(BOOL)ignoresParentalRestrictions;
-(BOOL)isMailVIP;
-(BOOL)isModalInPresentation;
-(BOOL)isOutOfProcess;
-(BOOL)isPresentingModalViewController;
-(BOOL)isSuggestedContact;
-(BOOL)needsReload;
-(BOOL)propertyItemCanIgnoreGuardianRestrictions;
-(BOOL)reloadDataIfNeeded;
-(BOOL)saveChanges;
-(BOOL)saveWasAuthorized;
-(BOOL)shouldDrawNavigationBar;
-(BOOL)shouldIgnoreContactStoreDidChangeNotification;
-(BOOL)shouldPresentConfirmCancelAlert;
-(BOOL)shouldShowLinkedContacts;
-(BOOL)showContactBlockingFirst;
-(BOOL)showingMeContact;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)mode;
-(id)_removeUnauthorizedKeysFromContact:(id)arg0 ;
-(id)_updateContact:(id)arg0 withMissingKeysFromRequiredKeys:(id)arg1 ;
-(id)accessAuthorization;
-(id)alternateName;
-(id)cardBottomGroup;
-(id)cardFaceTimeGroup;
-(id)cardFooterGroup;
-(id)cardTopGroup;
-(id)contact;
-(id)contactDelegate;
-(id)contactHeaderView;
-(id)contactStore;
-(id)contactView;
-(id)contactViewConfiguration;
-(id)contentScrollViewForEdge:(NSUInteger)arg0 ;
-(id)displayGroups;
-(id)displayHeaderView;
-(id)displayedProperties;
-(id)importantMessage;
-(id)initWithContact:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initialPrompt;
-(id)linkedPoliciesByContactIdentifier;
-(id)managedConfiguration;
-(id)message;
-(id)missingRequiredKeys;
-(id)navigationItemController;
-(id)originalContacts;
-(id)personHeaderView;
-(id)personHeaderViewController;
-(id)policy;
-(id)presentingDelegate;
-(id)primaryProperty;
-(id)prohibitedPropertyKeys;
-(id)propertyGroups;
-(id)recentsData;
-(id)saveContactExecutor;
-(id)saveLinkedContactsExecutor;
-(id)verifiedInfoMessage;
-(id)warningMessage;
-(struct CGRect )centeredSourceRect:(struct CGRect )arg0 inContactView:(id)arg1 ;
-(void)_didCompleteWithContact:(id)arg0 ;
-(void)_refetchContact;
// -(void)addActionWithTitle:(id)arg0 menuProvider:(id)arg1 inGroup:(unk)arg2 destructive:(id)arg3  ;
-(void)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3 ;
-(void)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3 destructive:(BOOL)arg4 ;
// -(void)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 menuProvider:(id)arg3 inGroup:(unk)arg4 destructive:(id)arg5  ;
-(void)applicationLeftForeground:(id)arg0 ;
-(void)applyChangesToNavigationItemFromItem:(id)arg0 ;
-(void)clearMapsDataIfEdited;
-(void)contactDisplayViewController:(id)arg0 didChangeToEditMode:(BOOL)arg1 ;
-(void)contactDisplayViewControllerWillDismissFullscreen:(id)arg0 ;
-(void)contactDisplayViewControllerWillPresentFullscreen:(id)arg0 ;
-(void)contactEditViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactEditViewControllerRequestsCancelConfirmationAlert:(id)arg0 ;
-(void)contactEditViewControllerWillDismissFullscreen:(id)arg0 ;
-(void)contactEditViewControllerWillPresentFullscreen:(id)arg0 ;
-(void)contactNavigationItemProvider:(id)arg0 didUpdateNavigationItem:(id)arg1 doneButtonItem:(id)arg2 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)createDisplayViewControllerIfNeeded;
-(void)createEditingViewControllerIfNeeded;
-(void)createdNewContact:(id)arg0 ;
-(void)dealloc;
-(void)didChangeToEditMode:(BOOL)arg0 ;
-(void)didUpdateContactViewConfiguration;
-(void)editCancel;
-(void)editCancel:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)favoritesDidChangeWithNotification:(id)arg0 ;
-(void)finishEditing:(id)arg0 ;
-(void)performAuthorizedSetEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)performConfirmedCancel;
-(void)prepareContactDidAppearForPPT;
-(void)presentConfirmCancelAlertController;
-(void)reloadCardGroup:(id)arg0 forTableView:(id)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg0 ;
-(void)reloadUnifiedContact;
-(void)removeActionWithTarget:(id)arg0 selector:(SEL)arg1 inGroup:(id)arg2 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)sender:(id)arg0 presentViewController:(id)arg1 ;
-(void)setAccessAuthorization:(id)arg0 ;
-(void)setAllowsActions:(BOOL)arg0 ;
-(void)setAllowsActionsModel:(BOOL)arg0 ;
-(void)setAllowsAddToFavorites:(BOOL)arg0 ;
-(void)setAllowsAddingToAddressBook:(BOOL)arg0 ;
-(void)setAllowsCardActions:(BOOL)arg0 ;
-(void)setAllowsConferencing:(BOOL)arg0 ;
-(void)setAllowsContactBlocking:(BOOL)arg0 ;
-(void)setAllowsDeletion:(BOOL)arg0 ;
-(void)setAllowsDisplayModePickerActions:(BOOL)arg0 ;
-(void)setAllowsEditInApp:(BOOL)arg0 ;
-(void)setAllowsEditPhoto:(BOOL)arg0 ;
-(void)setAllowsEditing:(BOOL)arg0 ;
-(void)setAllowsPropertyActions:(BOOL)arg0 ;
-(void)setAllowsSendMessage:(BOOL)arg0 ;
-(void)setAllowsSettingLinkedContactsAsPreferred:(BOOL)arg0 ;
-(void)setAllowsSharing:(BOOL)arg0 ;
-(void)setAlternateName:(id)arg0 ;
-(void)setAlwaysEditing:(BOOL)arg0 ;
-(void)setBackgroundColorIfNeededForPresentedViewController:(id)arg0 ;
-(void)setCancelKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setCardFaceTimeGroup:(id)arg0 ;
-(void)setContact:(id)arg0 ;
-(void)setContactDelegate:(id)arg0 ;
-(void)setContactStore:(id)arg0 ;
-(void)setContactViewConfiguration:(id)arg0 ;
-(void)setDisplayGroups:(id)arg0 ;
-(void)setDisplayedProperties:(id)arg0 ;
-(void)setEditKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEditingProposedInformation:(BOOL)arg0 ;
-(void)setHideCardActions:(BOOL)arg0 ;
-(void)setIgnoresParentalRestrictions:(BOOL)arg0 ;
-(void)setImportantMessage:(id)arg0 ;
-(void)setInitialPrompt:(id)arg0 ;
-(void)setIsMailVIP:(BOOL)arg0 ;
-(void)setLinkedPoliciesByContactIdentifier:(id)arg0 ;
-(void)setManagedConfiguration:(id)arg0 ;
-(void)setMessage:(id)arg0 ;
-(void)setMissingRequiredKeys:(id)arg0 ;
-(void)setMode:(NSInteger)arg0 ;
-(void)setNeedsReload;
-(void)setNeedsReloadLazy;
-(void)setOriginalContacts:(id)arg0 ;
-(void)setPersonHeaderView:(id)arg0 ;
-(void)setPersonHeaderViewController:(id)arg0 ;
-(void)setPolicy:(id)arg0 ;
-(void)setPresentingDelegate:(id)arg0 ;
-(void)setPrimaryProperty:(id)arg0 ;
-(void)setProhibitedPropertyKeys:(id)arg0 ;
-(void)setRecentsData:(id)arg0 ;
-(void)setSaveContactExecutor:(id)arg0 ;
-(void)setSaveKeyboardShortcutEnabled:(BOOL)arg0 ;
-(void)setSaveLinkedContactsExecutor:(id)arg0 ;
-(void)setShouldDrawNavigationBar:(BOOL)arg0 ;
-(void)setShouldIgnoreContactStoreDidChangeNotification:(BOOL)arg0 ;
-(void)setShouldShowLinkedContacts:(BOOL)arg0 ;
-(void)setShowContactBlockingFirst:(BOOL)arg0 ;
-(void)setShowingMeContact:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setVerifiedInfoMessage:(id)arg0 ;
-(void)setWarningMessage:(id)arg0 ;
-(void)setupConstraints;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;
-(void)toggleEditing;
-(void)toggleEditing:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateWindowTitleForAppearing:(BOOL)arg0 ;
-(void)updateWithNewContact:(id)arg0 ;
-(void)updatedExistingContact:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif