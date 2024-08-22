// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNACCOUNTSANDGROUPSVIEWCONTROLLER_H
#define CNACCOUNTSANDGROUPSVIEWCONTROLLER_H

@class UIViewController, CNUIUserActivityManager, UIBarButtonItem, UIKeyCommand, UICollectionView, NSString, UICollectionViewDiffableDataSource, CNManagedConfiguration, _UIDiffableDataSourceOutlineSectionController;
@protocol UICollectionViewDelegate, UICollectionViewDropDelegate, CNUIEditAuthorizationControllerDelegate, CNAccountsAndGroupsCellDelegate, CNAccountsAndGroupsActionsProviderDelegate, CNContactListActionDelegate, CNAccountsAndGroupsViewControllerDelegate;


#import "CNAccountsAndGroupsActionsProvider.h"
#import "CNContainerDataSource.h"
#import "CNAccountsAndGroupsAuthorizationContext.h"
#import "CNAccountsAndGroupsDataSource.h"
#import "CNUIEditAuthorizationController.h"
#import "CNUIGroupsAndContainersSaveManager.h"

@interface CNAccountsAndGroupsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDropDelegate, CNUIEditAuthorizationControllerDelegate, CNAccountsAndGroupsCellDelegate, CNAccountsAndGroupsActionsProviderDelegate, CNContactListActionDelegate>



@property (retain, nonatomic) CNAccountsAndGroupsActionsProvider *actionsProvider; // ivar: _actionsProvider
@property (readonly, nonatomic) CNUIUserActivityManager *activityManager; // ivar: _activityManager
@property (retain, nonatomic) UIBarButtonItem *addGroupBarButtonItem; // ivar: _addGroupBarButtonItem
@property (retain, nonatomic) UIKeyCommand *addGroupKeyCommand; // ivar: _addGroupKeyCommand
@property (nonatomic) BOOL allowsCanceling; // ivar: _allowsCanceling
@property (nonatomic) BOOL allowsDone; // ivar: _allowsDone
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) NSInteger buttonBehavior; // ivar: _buttonBehavior
@property (retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // ivar: _cancelBarButtonItem
@property (retain) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CNContainerDataSource *containerDataSource; // ivar: _containerDataSource
@property (retain, nonatomic) CNAccountsAndGroupsAuthorizationContext *currentAuthorizationContext; // ivar: _currentAuthorizationContext
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAccountsAndGroupsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // ivar: _editAuthorizationController
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // ivar: _groupsAndContainersSaveManager
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (nonatomic) BOOL needsReload; // ivar: _needsReload
@property (retain, nonatomic) UIViewController *potentiallyPresentedViewController; // ivar: _potentiallyPresentedViewController
@property (retain) _UIDiffableDataSourceOutlineSectionController *sectionController; // ivar: _sectionController
@property (readonly) Class superclass;


+(id)allowedDropTypes;
+(id)log;
-(BOOL)canBecomeFirstResponder;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)editingCollectionViewRequiresAuthorization;
-(BOOL)isAnyListCellCurrentlyEditing;
-(BOOL)isCollectionViewEditing;
-(BOOL)isNotificationInternalSave:(id)arg0 ;
-(BOOL)shouldEnableItem:(id)arg0 ;
-(BOOL)shouldSetFirstResponder;
-(BOOL)shouldShowCancelButton;
-(BOOL)viewCanReload;
-(id)collectionView:(id)arg0 contextMenuConfiguration:(id)arg1 dismissalPreviewForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfiguration:(id)arg1 highlightPreviewForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemsAtIndexPaths:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)currentlySelectedItem;
-(id)groupsStyle;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)layout;
-(id)menuForContainers;
-(id)multitaskingDragExclusionRects;
-(id)presentingViewControllerForActions;
-(void)_updateUserActivity;
-(void)action:(id)arg0 presentViewController:(id)arg1 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)addDefaultGroup:(id)arg0 ;
-(void)authorizedAddContacts:(id)arg0 toDestinationItem:(id)arg1 ;
-(void)authorizedSetCollectionViewEditing:(BOOL)arg0 ;
-(void)authorizedSetViewEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)cellTextViewDidChangeHeight;
-(void)cleanUpItemIfNeeded:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)configureDataSource;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)deselectAllItems;
-(void)didTapCollectionView:(id)arg0 ;
-(void)dismissKeyboard;
-(void)editAuthorizationController:(id)arg0 authorizationDidFinishWithResult:(NSInteger)arg1 ;
-(void)expandLargeTitle;
-(void)expandLargeTitleIfNeeded;
-(void)expandSectionForAccountWithIdentifier:(id)arg0 ;
-(void)item:(id)arg0 didEndEditingWithName:(id)arg1 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)presentController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentErrorAlertWithMessage:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentErrorAlertWithTitle:(id)arg0 message:(id)arg1 animated:(BOOL)arg2 ;
-(void)reloadAddGroupButton;
-(void)reloadCollectionViewAddingPlaceholderItem:(id)arg0 inSectionWithIdentifier:(id)arg1 ;
-(void)reloadCollectionViewDeletingItem:(id)arg0 ;
-(void)reloadCollectionViewForSectionWithIdentifier:(id)arg0 settingFilterForEditingItem:(BOOL)arg1 allowsReloadWhenEditing:(BOOL)arg2 ;
-(void)reloadData;
-(void)resignAllFirstRespondersSavingCurrentlyEditing:(BOOL)arg0 ;
-(void)restoreCurrentlyEditingGroupIfNeeded;
-(void)selectAllContacts;
-(void)selectCurrentItemIfNeeded;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEditingForGroupItem:(id)arg0 ;
-(void)setUpCollectionView;
-(void)showEditAuthorizationPaneWithAuthorizationContext:(id)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNavigationButtons;
-(void)updateToolbarVisibility;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif