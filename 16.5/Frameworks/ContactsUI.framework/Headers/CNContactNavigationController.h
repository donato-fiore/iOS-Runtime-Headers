// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTNAVIGATIONCONTROLLER_H
#define CNCONTACTNAVIGATIONCONTROLLER_H

@class UINavigationController, CNUIUserActivityManager, UIBarButtonItem, UIKeyCommand, NSString, CNContactStore, UIAlertController, CNManagedConfiguration, NSArray, NSNumber;
@protocol CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter, NSUserActivityDelegate, CNContactPickerPrivateDelegate, UIPopoverPresentationControllerDelegate, CNScheduler, CNContactDataSource, CNContactNavigationControllerDelegate;


#import "CNContactListViewController.h"
#import "CNAccountsAndGroupsDataSource.h"
#import "CNAccountsAndGroupsViewController.h"
#import "CNContactListStyleApplier.h"
#import "CNContactStyle.h"
#import "CNUIGroupsAndContainersSaveManager.h"
#import "CNContactStoreDataSource.h"
#import "CNContactViewController.h"

@interface CNContactNavigationController : UINavigationController <CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter, NSUserActivityDelegate, CNContactPickerPrivateDelegate, UIPopoverPresentationControllerDelegate>

 {
    CNContactListViewController *_contactListViewController;
}


@property (retain, nonatomic) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource; // ivar: _accountsAndGroupsDataSource
@property (retain, nonatomic) CNAccountsAndGroupsViewController *accountsAndGroupsViewController; // ivar: _accountsAndGroupsViewController
@property (retain, nonatomic) CNUIUserActivityManager *activityManager; // ivar: _activityManager
@property (retain, nonatomic) UIBarButtonItem *addContactBarButtonItem; // ivar: _addContactBarButtonItem
@property (retain, nonatomic) UIKeyCommand *addKeyCommand; // ivar: _addKeyCommand
@property (nonatomic) BOOL allowsCanceling; // ivar: _allowsCanceling
@property (nonatomic) BOOL allowsCardDeletion; // ivar: _allowsCardDeletion
@property (nonatomic) BOOL allowsCardEditing; // ivar: _allowsCardEditing
@property (nonatomic) BOOL allowsContactBlocking; // ivar: _allowsContactBlocking
@property (nonatomic) BOOL allowsDone; // ivar: _allowsDone
@property (nonatomic) BOOL allowsLargeTitles; // ivar: _allowsLargeTitles
@property (readonly, nonatomic) NSObject<CNScheduler> *backgroundScheduler; // ivar: _backgroundScheduler
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // ivar: _contactListStyleApplier
@property (retain, nonatomic) NSString *contactPickerTargetGroupIdentifier; // ivar: _contactPickerTargetGroupIdentifier
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNContactStyle *contactStyle; // ivar: _contactStyle
@property (readonly, nonatomic) NSObject<CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CNContactNavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIAlertController *facebookContactsAlertController; // ivar: _facebookContactsAlertController
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // ivar: _groupsAndContainersSaveManager
@property (nonatomic) BOOL hasPendingShowCard; // ivar: _hasPendingShowCard
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideGroupsButton; // ivar: _hideGroupsButton
@property (nonatomic) BOOL hideMailToGroupButton; // ivar: _hideMailToGroupButton
@property (nonatomic) BOOL hidesSearchableSources;
@property (nonatomic) BOOL ignoresMapsData; // ivar: _ignoresMapsData
@property (nonatomic) NSInteger leftButtonBehavior; // ivar: _leftButtonBehavior
@property (retain, nonatomic) UIBarButtonItem *mailButtonItem; // ivar: _mailButtonItem
@property (readonly, nonatomic) NSObject<CNScheduler> *mainThreadScheduler; // ivar: _mainThreadScheduler
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (retain, nonatomic) CNContactStoreDataSource *nonServerDataSource; // ivar: _nonServerDataSource
@property (weak, nonatomic) CNContactViewController *presentedContactViewController; // ivar: _presentedContactViewController
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (retain, nonatomic) CNContactViewController *reusableContactViewController; // ivar: _reusableContactViewController
@property (nonatomic) NSInteger rightButtonBehavior; // ivar: _rightButtonBehavior
@property (retain, nonatomic) NSNumber *shouldShowAccountsAndGroupsCachedValue; // ivar: _shouldShowAccountsAndGroupsCachedValue
@property (readonly) Class superclass;


+(id)keyCommandForNewContact;
+(id)newContactFormatter;
+(void)moveViewController:(id)arg0 toParent:(id)arg1 ;
-(BOOL)accountsAndGroupsViewController:(id)arg0 shouldEnableItemWithIdentifier:(id)arg1 ;
-(BOOL)canAddContacts;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)contactListViewController:(id)arg0 canSelectContact:(id)arg1 ;
-(BOOL)contactListViewController:(id)arg0 shouldSelectContact:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)contactSuggestionViewController:(id)arg0 shouldSelectContact:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)contactViewController:(id)arg0 shouldPerformDefaultActionForContactProperty:(id)arg1 ;
-(BOOL)isAddContactButtonShowing;
-(BOOL)isDisplayingAddNewContactViewController;
-(BOOL)isPresentedContactViewControllerVisible;
-(BOOL)shouldDisplayMeContactBanner;
-(BOOL)shouldFlipDirectionWhenChangingSelectionWithKey:(id)arg0 ;
-(BOOL)shouldShowAccountsAndGroups;
-(BOOL)shouldShowAddToGroupPicker;
-(BOOL)shouldShowGroupsBackButton;
-(BOOL)shouldShowLeftCancelAndRightAddButton;
-(BOOL)shouldShowLeftCancelAndRightDoneButton;
-(BOOL)shouldShowLeftDoneAndRightAddButton;
-(BOOL)shouldShowMailButton;
-(BOOL)shouldShowRightAddAndCancelButton;
-(BOOL)shouldShowRightAddButton;
-(BOOL)shouldShowRightCancelButton;
-(id)addContactPresenter;
-(id)allContactIdentifiers;
-(id)contactListViewController;
-(id)currentlyDisplayedContact;
-(id)firstVisibleContact;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 allowsLargeTitles:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg0 contactFormatter:(id)arg1 applyGroupFilterFromPreferences:(BOOL)arg2 environment:(id)arg3 allowsLargeTitles:(BOOL)arg4 ;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 allowsLargeTitles:(BOOL)arg2 ;
-(id)nextResponderForContactListViewController:(id)arg0 ;
-(id)parentGroupForCurrentFilter;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(id)reuseableContactViewControllerConfiguredForContact:(id)arg0 mode:(NSInteger)arg1 ;
-(id)targetContainerForNewContactWithTargetGroup:(id)arg0 ;
-(id)targetGroupForNewContact;
-(id)userActivityRepresentingCurrentlyDisplayedContact;
-(id)userActivityRepresentingGroupsView;
-(void)_cnui_presentViewController:(id)arg0 animated:(BOOL)arg1 dismissingPresentedController:(BOOL)arg2 shouldHideContactListIfNeeded:(BOOL)arg3 ;
-(void)_updateUserActivity;
-(void)accountsAndGroupsViewControllerDidCancel:(id)arg0 ;
-(void)accountsAndGroupsViewControllerDidFinish:(id)arg0 ;
-(void)accountsAndGroupsViewControllerDidUpdateSelection:(id)arg0 ;
-(void)addContact:(id)arg0 ;
-(void)addContact:(id)arg0 animated:(BOOL)arg1 ;
-(void)applicationDidResume;
-(void)beginSearch:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)cancelSearch:(id)arg0 ;
-(void)checkForFacebookContactsWithDelay:(CGFloat)arg0 allowAlert:(BOOL)arg1 ;
-(void)checkForInfoContentWithContext:(id)arg0 ;
-(void)clearServerSearchIfNeeded:(id)arg0 ;
-(void)contactListViewController:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactListViewController:(id)arg0 didSelectContact:(id)arg1 shouldScrollToContact:(BOOL)arg2 ;
-(void)contactListViewController:(id)arg0 shouldPresentContact:(id)arg1 shouldScrollToContact:(BOOL)arg2 ;
-(void)contactListViewController:(id)arg0 updatedSelectedContact:(id)arg1 ;
-(void)contactListViewControllerSelectedAddContactToList:(id)arg0 withSourceView:(id)arg1 ;
-(void)contactListViewControllerSelectedCreateNewContact:(id)arg0 ;
-(void)contactPicker:(id)arg0 didCompleteWithNewContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContacts:(id)arg1 ;
-(void)contactStyleCurrentStyleDidChange:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)contactViewController:(id)arg0 didCompleteWithNewContactFromPickerNewContactRow:(id)arg1 ;
-(void)contactViewController:(id)arg0 didDeleteContact:(id)arg1 ;
-(void)createUserActivity;
-(void)dataSourceChangedForContactListViewController:(id)arg0 ;
-(void)dealloc;
-(void)deleteContact:(id)arg0 ;
-(void)dismissSearchAndSelectContact:(id)arg0 allowsMultiSelection:(BOOL)arg1 ;
-(void)done:(id)arg0 ;
-(void)executeAddContact;
-(void)mailContacts:(id)arg0 ;
-(void)notifyOtherFacebookContactsAlertDidSelectAction;
-(void)observeOtherFacebookContactsAlert;
-(void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg0 ;
-(void)popToContactListAndSaveChanges:(BOOL)arg0 ;
-(void)popToContactListAndSaveChanges:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)presentAddContactViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentAddToGroupPickerWithSourceView:(id)arg0 ;
-(void)presentErrorAlertWithTitle:(id)arg0 message:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentGroupsViewController:(id)arg0 ;
-(void)presentGroupsViewControllerAnimated:(BOOL)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)refreshMailButtonEnabled;
-(void)resetContactViewController;
-(void)scrollToContact:(id)arg0 animated:(BOOL)arg1 ;
-(void)searchForString:(id)arg0 ;
-(void)selectNextContact:(id)arg0 ;
-(void)selectPreviousContact:(id)arg0 ;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg0 ;
-(void)setUpAccountAndGroupsViewIfNeeded;
-(void)setUpLargeTitles;
-(void)showAllContactsList;
-(void)showAllContactsListAnimated:(BOOL)arg0 ;
-(void)showCardForContact:(id)arg0 animated:(BOOL)arg1 ;
-(void)showCardForContact:(id)arg0 animated:(BOOL)arg1 scrollToContact:(BOOL)arg2 ;
-(void)showCardForContact:(id)arg0 resetFilter:(BOOL)arg1 resetSearch:(BOOL)arg2 fallbackToFirstContact:(BOOL)arg3 scrollToContact:(BOOL)arg4 animated:(BOOL)arg5 ;
-(void)showCardForContact:(id)arg0 resetFilter:(BOOL)arg1 resetSearch:(BOOL)arg2 fallbackToFirstContact:(BOOL)arg3 scrollToContact:(BOOL)arg4 animated:(BOOL)arg5 dismissingPresentedController:(BOOL)arg6 ;
-(void)showCardForContact:(id)arg0 resetFilter:(BOOL)arg1 resetSearch:(BOOL)arg2 fallbackToFirstContact:(BOOL)arg3 scrollToContact:(BOOL)arg4 animated:(BOOL)arg5 dismissingPresentedController:(BOOL)arg6 shouldHideContactListIfNeeded:(BOOL)arg7 ;
-(void)showCardForContactAfterIndexPath:(id)arg0 ;
-(void)showCardForContactBeforeIndexPath:(id)arg0 ;
-(void)showCardForContactIfPossible:(id)arg0 ;
-(void)showNewDraftContact:(id)arg0 animated:(BOOL)arg1 ;
-(void)startEditingPresentedContact;
-(void)toggleEditContact:(id)arg0 ;
-(void)toggleGroupsPanel:(id)arg0 ;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg0 ;
-(void)updateNavigationButtonsAnimated:(BOOL)arg0 ;
-(void)updateNavigationButtonsAnimated:(BOOL)arg0 viewWillAppear:(BOOL)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg0 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateUserActivityState:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif