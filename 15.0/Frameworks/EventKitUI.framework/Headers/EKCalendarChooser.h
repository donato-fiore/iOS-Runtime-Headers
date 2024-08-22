// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARCHOOSER_H
#define EKCALENDARCHOOSER_H

@class UIViewController, EKAccountRefresher, NSMutableDictionary, NSArray, NSSet, UIBarButtonItem, _UIAccessDeniedView, NSIndexPath, NSString, EKEvent, EKEventStore, NSMutableArray, EKSource, UIRefreshControl, EKCalendar, NSMutableSet;
@protocol EKAccountRefresherDelegate, EKCalendarChooserDelegate, EKStyleProvider;


#import "EKUITableViewCell.h"
#import "EKAbstractCalendarEditor.h"
#import "EKCalendarChooserTableView.h"

@interface EKCalendarChooser : UIViewController <EKAccountRefresherDelegate>

 {
    EKAccountRefresher *_currentAccountRefresher;
    NSMutableDictionary *_accountErrorAnalyticsState;
    NSArray *_delegateSources;
    BOOL _showDelegateCalendarsCell;
    NSSet *_currentKnownCalendarIds;
    NSInteger _displayStyle;
    EKUITableViewCell *_showDeclinedEventsCell;
    UIBarButtonItem *_addCalendarButton;
    BOOL _updatingHeaderHeight;
    BOOL _viewDidAppear;
}


@property (retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // ivar: _accessDeniedView
@property (nonatomic) BOOL allowsEdit; // ivar: _allowsEdit
@property (nonatomic) BOOL allowsPullToRefresh;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) BOOL canShowIdentityChooser; // ivar: _canShowIdentityChooser
@property (retain, nonatomic) NSIndexPath *checkedRow; // ivar: _checkedRow
@property (nonatomic) int chooserMode; // ivar: _chooserMode
@property (retain, nonatomic) NSMutableDictionary *customGroupMap; // ivar: _customGroupMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKCalendarChooserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableCalendarEditing; // ivar: _disableCalendarEditing
@property (nonatomic) NSUInteger entityType; // ivar: _entityType
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (retain, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (nonatomic) int explanatoryTextMode; // ivar: _explanatoryTextMode
@property (nonatomic) ? flags; // ivar: _flags
@property (retain, nonatomic) NSMutableArray *groups; // ivar: _groups
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastAuthorizationStatus; // ivar: _lastAuthorizationStatus
@property (retain, nonatomic) EKSource *limitedToSource; // ivar: _limitedToSource
@property (nonatomic) BOOL onlyShowUnmanagedAccounts; // ivar: _onlyShowUnmanagedAccounts
@property (retain, nonatomic) EKAbstractCalendarEditor *presentedEditor; // ivar: _presentedEditor
@property (retain, nonatomic) UIRefreshControl *refreshControl; // ivar: _refreshControl
@property (retain, nonatomic) EKCalendar *selectedCalendar;
@property (retain, nonatomic) NSMutableSet *selectedCalendarSet; // ivar: _selectedCalendars
@property (copy, nonatomic) NSSet *selectedCalendars;
@property (nonatomic) NSInteger selectionStyle; // ivar: _style
@property (nonatomic) BOOL showAccountStatus; // ivar: _showAccountStatus
@property (retain, nonatomic) UIBarButtonItem *showAllButton; // ivar: _showAllButton
@property (nonatomic) BOOL showDetailAccessories; // ivar: _showDetailAccessories
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsDeclinedEventsSetting; // ivar: _showsDeclinedEventsSetting
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsRefreshButton;
@property (retain, nonatomic) NSMutableDictionary *storeGroupMap; // ivar: _storeGroupMap
@property (weak, nonatomic) NSObject<EKStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) EKCalendarChooserTableView *tableView; // ivar: _tableView


+(BOOL)groups:(id)arg0 differStructurallyFromGroups:(id)arg1 ;
+(id)_subscribedLocalizedString;
+(id)hideAllString;
+(id)showAllString;
-(BOOL)_applySelection;
-(BOOL)_calendarAvailableForEditing:(id)arg0 ;
-(BOOL)_isDeclinedEventsSwitchSection:(NSInteger)arg0 ;
-(BOOL)_isDelegateCalendarsCellSection:(NSInteger)arg0 ;
-(BOOL)_isIdentityChooserSection:(NSInteger)arg0 ;
-(BOOL)_shouldShowDelegateCalendarsCellSection;
-(BOOL)_shouldShowGroupNameInSection:(NSInteger)arg0 ;
-(BOOL)_shouldShowIdentityChooser;
-(BOOL)_tableShouldDisplayAccountErrorActionCellForGroup:(id)arg0 ;
-(BOOL)hasAccountThatCanCreateCalendars;
-(BOOL)showsWritableCalendarsOnly;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(CGFloat)marginForTableView:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_accountErrorActionIndexForGroup:(id)arg0 ;
-(NSInteger)_calendarRowOffsetForGroup:(id)arg0 ;
-(NSInteger)_tableSectionRow:(NSInteger)arg0 toCalendarIndexInGroup:(id)arg1 ;
-(NSInteger)_tableSectionRowToDelegateSourceIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_allCalendars;
-(id)_calendarSetToCalendarIdSet:(id)arg0 ;
-(id)_calendarsForSelectedSource;
-(id)_cellIdentifierWithSubtitle:(BOOL)arg0 ;
-(id)_contactForSource:(id)arg0 ;
-(id)_contactNameForSharee:(id)arg0 ;
-(id)_currentKnownCalendarIds;
-(id)_filterCalendars:(id)arg0 ;
-(id)_groupForCustomGroupType:(NSUInteger)arg0 ;
-(id)_groupForSection:(NSInteger)arg0 ;
-(id)_groupForSource:(id)arg0 ;
-(id)_indexPathForCalendar:(id)arg0 ;
-(id)_loadCalendars;
-(id)_preferredAddressFromOwnerAddresses:(id)arg0 ;
-(id)_saveSelection;
-(id)_statusTextForGroup:(id)arg0 ;
-(id)_stringForSharedCalendar:(id)arg0 ;
-(id)_tableHeaderView;
-(id)_toggleButtonTitleForGroup:(id)arg0 ;
-(id)_viewModeTitle;
-(id)centeredCalendar;
-(id)displayedEditor;
-(id)initWithSelectionStyle:(NSInteger)arg0 displayStyle:(NSInteger)arg1 entityType:(NSUInteger)arg2 eventStore:(id)arg3 ;
-(id)initWithSelectionStyle:(NSInteger)arg0 displayStyle:(NSInteger)arg1 entityType:(NSUInteger)arg2 forEvent:(id)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5 showIdentityChooser:(BOOL)arg6 showAccountStatus:(BOOL)arg7 ;
-(id)initWithSelectionStyle:(NSInteger)arg0 displayStyle:(NSInteger)arg1 eventStore:(id)arg2 ;
-(id)sourceForSelectedIdentity;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(int)_numSelectedGroups;
-(struct CGSize )preferredContentSize;
-(void)_commonAddCalendarButtonPressed:(id)arg0 ;
-(void)_delegateSelectionDidChange:(BOOL)arg0 ;
-(void)_ensureWritableCalendarExists;
-(void)_eventStoreChanged:(id)arg0 ;
-(void)_finishRefreshing;
-(void)_ignoredErrorsChanged;
-(void)_insertStoreIntoByGroupArray:(id)arg0 ;
-(void)_layoutNavToolbarControls;
-(void)_populateGroupsForCalendars:(id)arg0 includingAccountsWithoutCalendars:(BOOL)arg1 footersChanged:(*BOOL)arg2 ;
-(void)_presentEditor:(id)arg0 withIndexPath:(id)arg1 barButtonItem:(id)arg2 permittedArrowDirections:(NSUInteger)arg3 animated:(BOOL)arg4 completion:(id)arg5 ;
-(void)_pulledToRefresh:(id)arg0 ;
-(void)_restoreSelection:(id)arg0 calendarsForSelectedSource:(id)arg1 allCalendars:(id)arg2 ;
-(void)_selectAllCalendarsAndStores:(BOOL)arg0 ;
-(void)_selectCalendar:(id)arg0 selected:(BOOL)arg1 ;
-(void)_selectGroup:(id)arg0 selected:(BOOL)arg1 ;
-(void)_sendAnalyticsEvent:(NSUInteger)arg0 forGroup:(id)arg1 ;
-(void)_setCalendars:(id)arg0 changedObjectsHint:(id)arg1 ;
-(void)_setGroup:(id)arg0 withSourceIdentifier:(id)arg1 ;
-(void)_updateCurrentKnownCalendarIds;
-(void)_updateDelegateSources;
-(void)_updateShowDelegateCalendarsCell;
-(void)_updateViewControllerTitle;
-(void)accountRefreshFinished:(id)arg0 ;
-(void)addCalendarButtonPressed:(id)arg0 ;
-(void)addSubscribedCalendarButtonPressed:(id)arg0 prefillURL:(id)arg1 ;
-(void)calendarEditor:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)centerOnCalendar:(id)arg0 ;
-(void)dealloc;
-(void)declinedEventsChanged;
-(void)done:(id)arg0 ;
-(void)groupHeaderChangedHeight:(id)arg0 ;
-(void)groupShowAllTapped:(id)arg0 ;
-(void)identityChanged:(id)arg0 ;
-(void)loadView;
-(void)populateGroupsForNonDelegateSources;
-(void)presentAccountErrorAlertForGroup:(id)arg0 ;
-(void)redisplayEditor:(id)arg0 completion:(id)arg1 ;
-(void)refresh:(id)arg0 ;
-(void)resetBackgroundColor;
-(void)setAllSelected:(BOOL)arg0 ;
-(void)setShowAll:(BOOL)arg0 ;
-(void)setShowsWritableCalendarsOnly:(BOOL)arg0 ;
-(void)showAddSubscribedCalendarWithURL:(id)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDeclinedEventsCell:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif