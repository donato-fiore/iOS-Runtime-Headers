// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTVIEWCONTROLLER_H
#define EKEVENTVIEWCONTROLLER_H

@class UIViewController, NSArray, EKEvent, _UIAccessDeniedView, UITableView, UIView, NSMutableDictionary, NSDictionary, NSString, UIScrollView;
@protocol EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEventDetailTextCellDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, EKUIPasteboardManagerCutDelegate, EKEventDetailItemDelegate, EKEventEditViewDelegatePrivate, EKUIManagedViewController, EKEventViewDelegate;


#import "EKEventDetailItem.h"
#import "EKEventEditViewController.h"
#import "EKUIRecurrenceAlertController.h"
#import "EKUIEventStatusButtonsView.h"
#import "SingleToolbarItemContainerView.h"
#import "EKEventTitleDetailItem.h"
#import "EKCustomTitleView.h"
#import "EKEventViewController.h"

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEventDetailTextCellDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, EKUIPasteboardManagerCutDelegate, EKEventDetailItemDelegate, EKEventEditViewDelegatePrivate, EKUIManagedViewController>

 {
    NSArray *_items;
    EKEvent *_event;
    BOOL _ignoreDBChanges;
    NSInteger _lastAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
    EKEventDetailItem *_selectedEditItem;
    NSInteger _disclosedTableSection;
    _NSRange _disclosedTableRange;
    NSInteger _pendingStatus;
    EKEventEditViewController *_activeEventEditor;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    CGFloat _statusButtonsViewCachedFontSize;
    NSInteger _lastOrientation;
    EKEventTitleDetailItem *_titleItem;
    EKCustomTitleView *_customTitle;
    EKEventDetailItem *_currentEditItem;
    UITableView *_tableView;
    BOOL _didAppear;
    BOOL _countedAppearance;
    BOOL _autoPop;
    BOOL _showsPreview;
    BOOL _hidePreview;
    BOOL _calendarPreviewIsInlineDayView;
    BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
    BOOL _trustsStatus;
    BOOL _needsReload;
    BOOL _itemsNeedReload;
    BOOL _dead;
    BOOL _tableIsBeingEdited;
    BOOL _minimalMode;
    NSArray *_currentSections;
    int _scrollToSection;
    UIView *_headerView;
    NSArray *_headerConstraints;
    NSArray *_tableViewTopConstraints;
    UIView *_blankFooterView;
    CGFloat _lastFooterLayoutWidth;
    BOOL _showingBlankFooterView;
    UIViewController *_presentationSourceViewController;
    NSMutableDictionary *_cellHeights;
    EKEventEditViewController *_editViewControllerForPasteboard;
    EKEventViewController *_strongSelf;
}


@property (nonatomic, getter=isICSPreview) BOOL ICSPreview; // ivar: _ICSPreview
@property (nonatomic) BOOL allowsCalendarPreview;
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL allowsInviteResponses; // ivar: _allowsInviteResponses
@property (nonatomic) BOOL allowsSubitems; // ivar: _allowsSubitems
@property (nonatomic) BOOL calendarPreviewIsInlineDayView;
@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKEventViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) int editorHideTransition; // ivar: _editorHideTransition
@property (nonatomic) int editorShowTransition; // ivar: _editorShowTransition
@property (retain, nonatomic) EKEvent *event;
@property (readonly, nonatomic) UIScrollView *eventDetailsScrollView;
@property (readonly, nonatomic) UIViewController *eventDetailsViewController;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideCalendarPreview;
@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) BOOL isLargeDayView; // ivar: _isLargeDayView
@property (nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (nonatomic) BOOL minimalMode;
@property (nonatomic) BOOL noninteractivePlatterMode; // ivar: _noninteractivePlatterMode
@property (weak, nonatomic) UIViewController *presentationSourceViewController;
@property (nonatomic) int scrollToSection;
@property (nonatomic) BOOL showsAddToCalendarForICSPreview; // ivar: _showsAddToCalendarForICSPreview
@property (nonatomic) BOOL showsDelegateMessage; // ivar: _showsDelegateMessage
@property (nonatomic) BOOL showsDelegatorMessage; // ivar: _showsDelegatorMessage
@property (nonatomic) BOOL showsDeleteForICSPreview; // ivar: _showsDeleteForICSPreview
@property (nonatomic) BOOL showsDetectedConferenceItem; // ivar: _showsDetectedConferenceItem
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (nonatomic) BOOL showsOutOfDateMessage; // ivar: _showsOutOfDateMessage
@property (nonatomic) BOOL showsUpdateCalendarForICSPreview; // ivar: _showsUpdateCalendarForICSPreview
@property (readonly) Class superclass;
@property BOOL viewIsVisible; // ivar: _viewIsVisible


+(id)_orderedActionsForMask:(NSInteger)arg0 ;
+(void)adjustLayoutForCell:(id)arg0 tableViewWidth:(CGFloat)arg1 numRowsInSection:(NSUInteger)arg2 cellRow:(NSUInteger)arg3 forceLayout:(BOOL)arg4 ;
+(void)popViewControllersAfterAndIncluding:(id)arg0 fromNavigationController:(id)arg1 animated:(BOOL)arg2 ;
+(void)setDefaultDatesForEvent:(id)arg0 ;
-(BOOL)_backingEventAllowsEditing;
-(BOOL)_canPerformEditKeyCommand;
-(BOOL)_isDisplayingDeletableEvent;
-(BOOL)_isDisplayingInvitation;
-(BOOL)_isDisplayingSelfOrganizedInvitation;
-(BOOL)_isDisplayingSuggestion;
-(BOOL)_navigationBarShouldBeHidden;
-(BOOL)_performSave:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)_refreshEventAndReload;
-(BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
-(BOOL)_shouldDisplayDoneButton;
-(BOOL)_shouldDisplayStatusButtons;
-(BOOL)_shouldPopSelf;
-(BOOL)_shouldShowEditButton;
-(BOOL)_shouldShowInlineButtonFromDelegate;
-(BOOL)allowContextProvider:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canManagePresentationStyle;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)shouldShowEditButtonInline;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)wantsManagement;
-(CGFloat)eventStatusButtonsViewButtonFontSize:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableViewSectionContentWidth;
-(CGFloat)topInset;
-(NSInteger)_actionsMask;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_sectionForDetailItem:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_detachSheetHandler:(SEL)arg0 ;
-(id)_footerLabelContainingText:(id)arg0 ;
-(id)_indexPathForAttendeesDetailItem;
-(id)_indexPathForSection:(int)arg0 ;
-(id)_itemAtIndexPath:(id)arg0 section:(*id)arg1 subitemIndex:(*NSUInteger)arg2 ;
-(id)_proposedDate;
-(id)_sectionAtIndex:(NSInteger)arg0 ;
-(id)_statusButtons;
-(id)_statusButtonsContainerView;
-(id)_statusButtonsView;
-(id)_viewControllerForEditorPresentation;
-(id)accessDeniedView;
-(id)activeEventEditor;
-(id)editorForEventDetailItem:(id)arg0 ;
-(id)editorForPasteboardManager:(id)arg0 ;
-(id)getCurrentContext;
-(id)initWithContext:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)items;
-(id)optionalModel;
-(id)pasteboardManagerForEventEditViewController:(id)arg0 ;
-(id)tableView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)viewControllerForEventItem:(id)arg0 ;
-(id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg0 ;
-(id)viewTitle;
-(struct CGSize )_idealSize;
-(struct CGSize )preferredContentSize;
-(void)_acceptProposedTimeWithSourceViewForPopover:(id)arg0 ;
-(void)_addToCalendarClicked:(id)arg0 ;
-(void)_cancelProposedTime;
-(void)_clearCustomTitle;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg0 ;
-(void)_deleteClicked:(id)arg0 ;
-(void)_deleteSuggestionTapped:(id)arg0 ;
-(void)_didToggleMinimalMode;
-(void)_dismissEditor:(BOOL)arg0 deleted:(BOOL)arg1 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)_keyboardWasHidden:(id)arg0 ;
-(void)_keyboardWasShown:(id)arg0 ;
-(void)_localeChanged;
-(void)_notifyDetailItemsOfVisibilityOnScreen;
-(void)_performDelete:(NSInteger)arg0 editor:(id)arg1 ;
-(void)_performEditKeyCommand;
-(void)_pop;
-(void)_prepareEventForEdit;
-(void)_presentDetachSheetFromBarButtonItem:(id)arg0 ;
-(void)_presentDetachSheetFromView:(id)arg0 ;
-(void)_presentValidationAlert:(id)arg0 ;
-(void)_rejectProposedTime;
-(void)_reloadIfNeeded;
-(void)_saveStatus:(NSInteger)arg0 sourceViewForPopover:(id)arg1 ;
-(void)_saveStatus:(NSInteger)arg0 span:(NSInteger)arg1 ;
-(void)_setNeedsReloadIncludingItems:(BOOL)arg0 ;
-(void)_setObservesKeyboardNotifications:(BOOL)arg0 ;
-(void)_setUpForEvent;
-(void)_storeChanged:(id)arg0 ;
-(void)_teardownTableView;
-(void)_unsubscribeClicked:(id)arg0 ;
-(void)_updateHeaderAndFooterIfNeeded;
-(void)_updateNavBarAnimated:(BOOL)arg0 ;
-(void)_updateResponse;
-(void)_updateResponseVisibility;
-(void)_updateStatusButtonsActions;
-(void)_updateTableContentForSizeCategoryChange:(id)arg0 ;
-(void)_updateTableContentInsetForKeyboard:(id)arg0 ;
-(void)attemptDisplayReviewPrompt;
-(void)completeWithAction:(NSInteger)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)detailItem:(id)arg0 performActionsOnCellAtIndexPath:(id)arg1 actions:(id)arg2 ;
-(void)detailItem:(id)arg0 wantsIndexPathsScrolledToVisible:(id)arg1 ;
-(void)detailItem:(id)arg0 wantsRowInsertions:(id)arg1 rowDeletions:(id)arg2 rowReloads:(id)arg3 ;
-(void)detailItem:(id)arg0 wantsRowReload:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)doneButtonPressed;
-(void)editButtonPressed;
-(void)editEvent;
-(void)eventDetailItemAccessoryButtonTapped:(id)arg0 ;
-(void)eventDetailItemWantsRefresh:(id)arg0 ;
-(void)eventEditViewController:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)eventItem:(id)arg0 wantsViewControllerPresented:(id)arg1 ;
-(void)eventItemDidCommit:(id)arg0 ;
-(void)eventItemDidEndEditing:(id)arg0 ;
-(void)eventItemDidSave:(id)arg0 ;
-(void)eventItemDidStartEditing:(id)arg0 ;
-(void)eventStatusButtonsView:(id)arg0 calculatedFontSizeToFit:(CGFloat)arg1 ;
-(void)eventStatusButtonsView:(id)arg0 didSelectAction:(NSInteger)arg1 ifCancelled:(id)arg2 ;
-(void)invokeAction:(NSInteger)arg0 eventStatusButtonsView:(id)arg1 ;
-(void)loadView;
-(void)openAttendeesDetailItem;
-(void)presentEditorAnimated:(BOOL)arg0 ;
-(void)resetBackgroundColor;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setActiveEventEditor:(id)arg0 ;
-(void)setNeedsReload;
-(void)setTopInset:(CGFloat)arg0 ;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTitleWithScrollView:(id)arg0 animation:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif