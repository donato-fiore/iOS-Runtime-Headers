// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMEDICALRECORDTIMELINEVIEWCONTROLLER_H
#define WDMEDICALRECORDTIMELINEVIEWCONTROLLER_H

@class HKTableViewController, HKClinicalAccount, NSUUID, NSPredicate, NSSet, NSDictionary, HKViewTableViewCell, HKClinicalAccountStore, HKCloudSyncObserver, HKConcept, HKConceptIdentifier, NSString, UIButton, NSHashTable, UISearchController, NSArray, NSTimer, HKMedicalUserDomainConcept;
@protocol UISearchControllerDelegate, UISearchResultsUpdating, _TtP15HealthRecordsUI36FilterSettingsViewControllerDelegate_, HKHealthRecordsStoreIngestionStateListener, HKClinicalAccountStoreStateChangeListener, HKConceptStoreObserver, HKCloudSyncObserverDelegate, HRTimelineHeaderViewDelegate, HKInteractiveChartViewObserver, HRRecordViewControllerFactory;


#import "HRAccountUpgradeTileCell.h"
#import "WDMedicalRecordCategory.h"
#import "HROverlayRoomViewController.h"
#import "HRContentStatusCell.h"
#import "HRContentStatusView.h"
#import "WDClinicalSourcesDataProvider.h"
#import "WDMedicalRecordDisplayItemProvider.h"
#import "HRProfile.h"
#import "WDMedicalRecordStandaloneCell.h"

@interface WDMedicalRecordTimelineViewController : HKTableViewController <UISearchControllerDelegate, UISearchResultsUpdating, _TtP15HealthRecordsUI36FilterSettingsViewControllerDelegate_, HKHealthRecordsStoreIngestionStateListener, HKClinicalAccountStoreStateChangeListener, HKConceptStoreObserver, HKCloudSyncObserverDelegate, HRTimelineHeaderViewDelegate, HKInteractiveChartViewObserver>



@property (retain, nonatomic) HKClinicalAccount *account; // ivar: _account
@property (retain, nonatomic) NSUUID *accountId; // ivar: _accountId
@property (retain, nonatomic) NSPredicate *accountPredicate; // ivar: _accountPredicate
@property (retain, nonatomic) HRAccountUpgradeTileCell *accountUpgradeTile; // ivar: _accountUpgradeTile
@property (retain, nonatomic) NSSet *accounts; // ivar: _accounts
@property (retain, nonatomic) NSDictionary *additionalPredicatePerSampleType; // ivar: _additionalPredicatePerSampleType
@property (retain, nonatomic) NSSet *categories; // ivar: _categories
@property (retain, nonatomic) WDMedicalRecordCategory *category; // ivar: _category
@property (retain, nonatomic) HKViewTableViewCell *chartCell; // ivar: _chartCell
@property (nonatomic) BOOL chartLoaded; // ivar: _chartLoaded
@property (retain, nonatomic) HROverlayRoomViewController *chartViewController; // ivar: _chartViewController
@property (nonatomic) BOOL chartabilityDetermined; // ivar: _chartabilityDetermined
@property (retain, nonatomic) HKClinicalAccountStore *clinicalAccountStore; // ivar: _clinicalAccountStore
@property (nonatomic) BOOL cloudSyncActive; // ivar: _cloudSyncActive
@property (retain, nonatomic) HKCloudSyncObserver *cloudSyncObserver; // ivar: _cloudSyncObserver
@property (retain, nonatomic) HKConcept *concept; // ivar: _concept
@property (copy, nonatomic) HKConceptIdentifier *conceptIdentifier; // ivar: _conceptIdentifier
@property (retain, nonatomic) HRContentStatusCell *contentStatusCell; // ivar: _contentStatusCell
@property (retain, nonatomic) HRContentStatusView *contentStatusView; // ivar: _contentStatusView
@property (retain, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WDMedicalRecordDisplayItemProvider *displayItemProvider; // ivar: _displayItemProvider
@property (retain, nonatomic) NSObject<HRRecordViewControllerFactory> *factory; // ivar: _factory
@property (retain, nonatomic) UIButton *filterButton; // ivar: _filterButton
@property (retain, nonatomic) NSHashTable *floatingSectionHeaders; // ivar: _floatingSectionHeaders
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *highlightedRecordId; // ivar: _highlightedRecordId
@property (nonatomic) NSUInteger indexManagerState; // ivar: _indexManagerState
@property (nonatomic) NSInteger ingestionState; // ivar: _ingestionState
@property (nonatomic) BOOL isAccountTimeline; // ivar: _isAccountTimeline
@property (nonatomic) BOOL isDisplayingRemovedRecords; // ivar: _isDisplayingRemovedRecords
@property (nonatomic) BOOL loadingNextPage; // ivar: _loadingNextPage
@property (retain, nonatomic) id *medicalRecordSearchController; // ivar: _medicalRecordSearchController
@property (retain, nonatomic) UISearchController *navigationSearchController; // ivar: _navigationSearchController
@property (copy, nonatomic) NSString *overrideTitle; // ivar: _overrideTitle
@property (copy, nonatomic) NSArray *preloadedRemovedRecords; // ivar: _preloadedRemovedRecords
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile
@property (nonatomic) BOOL queryReturned; // ivar: _queryReturned
@property (retain, nonatomic) WDMedicalRecordStandaloneCell *removedRecordsCell; // ivar: _removedRecordsCell
@property (retain, nonatomic) NSTimer *scrollToUUIDTrigger; // ivar: _scrollToUUIDTrigger
@property (retain, nonatomic) NSPredicate *searchPredicate; // ivar: _searchPredicate
@property (retain, nonatomic) NSTimer *searchThrottleTimer; // ivar: _searchThrottleTimer
@property (nonatomic) BOOL showExportButton; // ivar: _showExportButton
@property (nonatomic) BOOL showSearchBar; // ivar: _showSearchBar
@property (nonatomic) BOOL showsFilterControl; // ivar: _showsFilterControl
@property (readonly) Class superclass;
@property (retain, nonatomic) HKMedicalUserDomainConcept *userDomainConcept; // ivar: _userDomainConcept


-(BOOL)_displayItemShouldBeTappable:(id)arg0 ;
-(BOOL)_hasDisplayableStatus;
-(BOOL)_isRemovedRecordsTimeline;
-(BOOL)_shouldShowAccountUpgradeTile;
-(BOOL)_shouldShowGatewayUpgradeMessage;
-(BOOL)_shouldShowInlineSystemStatusSection;
-(BOOL)_shouldShowReconnectCell;
-(BOOL)_shouldShowRemovedRecordsSection;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_adjustTimelineItemSectionWithSection:(NSInteger)arg0 ;
-(NSInteger)_sectionTypeForSectionIndex:(NSInteger)arg0 ;
-(NSInteger)_sourceRowForRowIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)userInteractionContextForType:(NSInteger)arg0 timelineSection:(NSInteger)arg1 ;
-(id)_adjustedIndexPathForRecordId:(id)arg0 ;
-(id)_adjustedTimelineItemIndexPathForIndexPath:(id)arg0 ;
-(id)_filterFromCurrentPredicates;
-(id)_sampleTypesToDisplay;
-(id)_systemStatusDisplay;
-(id)_tableView:(id)arg0 sourceCellForRow:(NSInteger)arg1 ;
-(id)initForRemovedRecordsWithProfile:(id)arg0 category:(id)arg1 factory:(id)arg2 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 account:(id)arg2 showInitialSearchBar:(BOOL)arg3 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 accountId:(id)arg2 showInitialSearchBar:(BOOL)arg3 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 category:(id)arg2 showInitialSearchBar:(BOOL)arg3 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 category:(id)arg2 showInitialSearchBar:(BOOL)arg3 predicatePerSampleType:(id)arg4 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 conceptIdentifier:(id)arg2 category:(id)arg3 highlightedRecordId:(id)arg4 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 preloadedRemovedRecords:(id)arg2 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 showInitialSearchBar:(BOOL)arg2 ;
-(id)initWithProfile:(id)arg0 factory:(id)arg1 userDomainConcept:(id)arg2 category:(id)arg3 highlightedRecordId:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_assertSearchControllerStatus;
-(void)_configureBarButtonItems;
-(void)_determineConceptChartabilityAndInsertChartIfNeeded;
-(void)_fetchConceptAndDeferDataLoading;
-(void)_filterButtonTapped:(id)arg0 ;
-(void)_installSearchController;
-(void)_layoutHeaderView:(id)arg0 ;
-(void)_performActionForCellsSharingRecordsInTableView:(id)arg0 atIndexPath:(id)arg1 action:(id)arg2 ;
-(void)_popSelfFromNavigationStack;
-(void)_reloadData;
-(void)_reloadDataWithDelay:(CGFloat)arg0 ;
-(void)_reloadDataWithNotification:(id)arg0 ;
-(void)_removeSearchController;
-(void)_removeSystemStatusObservers;
-(void)_scrollToHighlightedRecordIfNeeded;
-(void)_scrollToRecordWithUUID:(id)arg0 ;
-(void)_searchControllerHasQueryChange:(id)arg0 ;
-(void)_setHeaderViewForTitle:(id)arg0 ;
-(void)_setupDisplayItemProvider;
-(void)_setupSearchController;
-(void)_setupSystemStatusObservers;
-(void)_startCollectingData;
-(void)_tapToRadar:(id)arg0 ;
-(void)_uninstallSearchController;
-(void)_updateFilterButtonImage;
-(void)_updateSystemStatusView;
-(void)_updateSystemStatusViewAfterDelay:(BOOL)arg0 ;
-(void)_updateTableHeaderViewClearBeforeUpdate:(BOOL)arg0 ;
-(void)_updateTableViewGroups;
-(void)clinicalAccountStore:(id)arg0 accountDidChange:(id)arg1 changeType:(NSInteger)arg2 ;
-(void)cloudSyncObserver:(id)arg0 syncDidStartWithProgress:(id)arg1 ;
-(void)cloudSyncObserver:(id)arg0 syncFailedWithError:(id)arg1 ;
-(void)cloudSyncObserverStatusUpdated:(id)arg0 status:(id)arg1 ;
-(void)cloudSyncObserverSyncCompleted:(id)arg0 ;
-(void)conceptStore:(id)arg0 indexManagerDidChangeState:(NSUInteger)arg1 ;
-(void)configureDisplayTypes:(id)arg0 timeScope:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didTapAccountDetailsButton;
-(void)didTapExportPDFButton;
-(void)didUpdateSeriesWithNewValueRange:(id)arg0 ;
-(void)didUpdateVisibleValueRange:(id)arg0 changeContext:(NSInteger)arg1 ;
-(void)filterSettingsViewControllerWithDidSelectCategories:(id)arg0 accounts:(id)arg1 ;
-(void)headerViewDidBeginFloating:(id)arg0 ;
-(void)headerViewDidEndFloating:(id)arg0 ;
-(void)healthRecordsStore:(id)arg0 ingestionStateDidUpdateTo:(NSInteger)arg1 ;
-(void)presentPDFViewController;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(void)trackInteractionOfType:(NSInteger)arg0 context:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif