// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARITEMEDITOR_H
#define EKCALENDARITEMEDITOR_H

@class UITableViewController, NSArray, NSMutableSet, UIBarButtonItem, _UIAccessDeniedView, EKCalendarItem, NSString, EKChangeSet, UIResponder, EKEventStore;
@protocol EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate, EKCalendarItemEditorDelegate;


#import "EKUIRecurrenceAlertController.h"
#import "EKCalendarItemEditItem.h"

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate>

 {
    NSArray *_editItems;
    NSArray *_orderedEditItems;
    id *_revertState;
    NSArray *_currentItems;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    BOOL _giveTitleCellKeyboardFocus;
    BOOL _needsFirstResponderSet;
    int _editItemVisibility;
    BOOL _isIgnoringCellHeightChange;
    BOOL _needsCellHeightChange;
    NSMutableSet *_editItemsDisablingDoneButton;
    NSInteger _lastAuthorizationStatus;
    BOOL _hasAppeared;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_leftButtonSpacer;
    UIBarButtonItem *_rightButtonSpacer;
    CGFloat _leftButtonSpace;
    CGFloat _rightButtonSpace;
}


@property (retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // ivar: _accessDeniedView
@property (retain, nonatomic) EKCalendarItem *calendarItem; // ivar: _calendarItem
@property (retain, nonatomic) NSString *calendarItemCreationMethod; // ivar: _calendarItemCreationMethod
@property (nonatomic) BOOL canHideDoneAndCancelButtons; // ivar: _canHideDoneAndCancelButtons
@property (readonly) EKCalendarItemEditItem *currentEditItem; // ivar: _currentEditItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<EKCalendarItemEditorDelegate> *editorDelegate; // ivar: _editorDelegate
@property (nonatomic) BOOL hasModifiedAttendeesFromSuggestion; // ivar: _hasModifiedAttendeesFromSuggestion
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTextEditing; // ivar: _isTextEditing
@property (nonatomic) CGFloat navBarLeftContentInset;
@property (nonatomic) CGFloat navBarRightContentInset;
@property (retain, nonatomic) EKChangeSet *originalChangeSet; // ivar: _originalChangeSet
@property (nonatomic) BOOL pendingVideoConference; // ivar: _pendingVideoConference
@property (retain, nonatomic) UIResponder *responderToRestoreOnAppearence; // ivar: _responderToRestoreOnAppearence
@property (nonatomic) BOOL scrollToNotes; // ivar: _scrollToNotes
@property (nonatomic) BOOL showsTimeZone; // ivar: _showsTimeZone
@property (retain, nonatomic) EKEventStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeImplicitlySet; // ivar: _timeImplicitlySet
@property (nonatomic) NSUInteger visibleSectionToRestoreOnAppearence; // ivar: _visibleSectionToRestoreOnAppearence


+(id)_addLocalizedString;
+(id)_doneLocalizedString;
+(id)defaultTitleForCalendarItem;
-(BOOL)_canEnableDoneButton;
-(BOOL)_performSave:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)attachmentsModifiedOnRecurrence;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canPerformSaveKeyCommand;
-(BOOL)hasAttachmentChanges;
-(BOOL)hasUnsavedChanges;
-(BOOL)saveCalendarItemWithSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)saveWithSpan:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)shouldDisplayEditItem:(id)arg0 withVisibility:(int)arg1 ;
-(BOOL)willPresentDialogOnSave;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)firstTableRowForEditItem:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)rowNumberForEditItem:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)entityType;
-(NSUInteger)supportedInterfaceOrientations;
-(NSUInteger)tableSectionForEditItem:(id)arg0 ;
-(id)_editItemAtIndexPath:(id)arg0 firstRowIndex:(*NSInteger)arg1 ;
-(id)_editItems;
-(id)_nameForDeleteButton;
-(id)_orderedEditItems;
-(id)_viewForSheet;
-(id)_viewHierarchy;
-(id)attachmentsModifiedEvent;
-(id)cellWithReuseIdentifier:(id)arg0 forEditItem:(id)arg1 ;
-(id)defaultAlertTitle;
-(id)defaultAlertTitleForEditItem:(id)arg0 ;
-(id)init;
-(id)notificationNamesForLocaleChange;
-(id)preferredTitle;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)viewControllerForEditItem:(id)arg0 ;
-(int)editItemVisibility;
-(struct CGSize )preferredContentSize;
-(void)_completeWithAction:(NSInteger)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_configureVisibleItems;
-(void)_copyEventForPossibleRevert;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillHide;
-(void)_localeChanged;
-(void)_performDelete:(NSInteger)arg0 ;
-(void)_pinKeyboard:(BOOL)arg0 ;
-(void)_presentAttachmentRecurrenceSheetForEvent:(id)arg0 withContinueBlock:(id)arg1 ;
-(void)_presentDetachSheetForEvent:(id)arg0 saveAttachments:(BOOL)arg1 withContinueBlock:(id)arg2 ;
-(void)_reallyHandleCellHeightChange;
-(void)_revertEvent;
-(void)_setDoneAndCancelButtonVisible:(BOOL)arg0 ;
-(void)_setShowingAccessDeniedView:(BOOL)arg0 showSettingsInstructions:(BOOL)arg1 ;
-(void)_setWantsToEnableDoneButton:(BOOL)arg0 ;
-(void)_setupFirstResponder;
-(void)_tableViewDidUpdateHeights;
-(void)_tableViewWillUpdateHeights;
-(void)_updateCurrentEditItemsFromVisibility:(int)arg0 toVisibility:(int)arg1 animated:(BOOL)arg2 ;
-(void)_updateDoneButtonState;
-(void)applicationDidResume;
-(void)cancel:(id)arg0 ;
-(void)cancelEditingWithDelegateNotification:(BOOL)arg0 forceCancel:(BOOL)arg1 ;
-(void)completeAndSave;
-(void)completeAndSaveWithContinueBlock:(id)arg0 ;
-(void)completeWithAction:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)deleteClicked:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)done:(id)arg0 withContinueBlock:(id)arg1 ;
-(void)editItem:(id)arg0 didSaveFromDetailViewController:(BOOL)arg1 ;
-(void)editItem:(id)arg0 performActionsOnCellAtSubitem:(NSUInteger)arg1 actions:(id)arg2 ;
-(void)editItem:(id)arg0 textViewShouldReturn:(id)arg1 ;
-(void)editItem:(id)arg0 wantsDoneButtonDisabled:(BOOL)arg1 ;
-(void)editItem:(id)arg0 wantsKeyboardPinned:(BOOL)arg1 ;
-(void)editItem:(id)arg0 wantsRowInsertions:(id)arg1 rowDeletions:(id)arg2 ;
-(void)editItem:(id)arg0 wantsRowInsertions:(id)arg1 rowDeletions:(id)arg2 rowReloads:(id)arg3 ;
-(void)editItem:(id)arg0 wantsRowReload:(id)arg1 ;
-(void)editItem:(id)arg0 wantsRowsScrolledToVisible:(id)arg1 ;
-(void)editItem:(id)arg0 wantsViewControllerPresented:(id)arg1 ;
-(void)editItem:(id)arg0 wantsViewControllerPushed:(id)arg1 ;
-(void)editItemDidEndEditing:(id)arg0 ;
-(void)editItemDidStartEditing:(id)arg0 ;
-(void)editItemRequiresHeightChange:(id)arg0 ;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg0 ;
-(void)editItemTextChanged:(id)arg0 ;
-(void)editItemVisibilityChanged:(id)arg0 ;
-(void)editItemWantsFirstResponderResigned:(id)arg0 ;
-(void)editItemWantsFooterTitlesToReload:(id)arg0 ;
-(void)editItemWantsInjectableViewControllerToBeShown:(id)arg0 ;
-(void)focus:(NSUInteger)arg0 select:(BOOL)arg1 ;
-(void)handleCloseKeyCommand;
-(void)handleSaveKeyCommand;
-(void)handleTapOutside;
-(void)loadView;
-(void)prepareEditItems;
-(void)refreshInvitees;
-(void)refreshLocation;
-(void)refreshStartAndEndDates;
-(void)refreshURL;
-(void)reloadTableViewSectionsForDates:(BOOL)arg0 invitees:(BOOL)arg1 location:(BOOL)arg2 alarm:(BOOL)arg3 ;
-(void)resetBackgroundColor;
-(void)resignCurrentEditItemFirstResponder;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setEditItemVisibility:(int)arg0 animated:(BOOL)arg1 ;
-(void)setupDeleteButton;
-(void)setupForEvent;
-(void)storeChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)tableViewDidStartReload:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNavButtonsWithSpacing;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif