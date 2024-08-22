// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCLINICALONBOARDINGVIEWCONTROLLER_H
#define WDCLINICALONBOARDINGVIEWCONTROLLER_H

@class HKTableViewController, NSTimer, UISearchController, CLLocationManager, CLLocation, HKClinicalAccountStore, NSArray, NSSet, NSMutableOrderedSet, NSString, UIViewController, NSLayoutConstraint, UIView, _UIContentUnavailableView, HKClinicalProviderServiceStore, NSMutableDictionary, NSIndexPath;
@protocol CLLocationManagerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, HRWDUserActivityResponder;


#import "WDClinicalOnboardingNoGeoView.h"
#import "WDClinicalGatewayProxy.h"
#import "HRProfile.h"
#import "WDClinicalSampleAccountsLoader.h"
#import "HRUITableViewSectionConfiguration.h"
#import "HRWDSpinnerView.h"

@interface WDClinicalOnboardingViewController : HKTableViewController <CLLocationManagerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, HRWDUserActivityResponder>

 {
    NSInteger _searchesInFlight;
    NSTimer *_searchTimer;
    UISearchController *_searchController;
    CLLocationManager *_locationManager;
    CLLocation *_location;
}


@property (retain, nonatomic) HKClinicalAccountStore *accountStore; // ivar: _accountStore
@property (copy, nonatomic) NSArray *alreadyConnectedAccounts; // ivar: _alreadyConnectedAccounts
@property (copy, nonatomic) NSSet *alreadyConnectedBrands; // ivar: _alreadyConnectedBrands
@property (copy, nonatomic) NSSet *alreadySharingBrands; // ivar: _alreadySharingBrands
@property (retain, nonatomic) NSMutableOrderedSet *alreadySharingSearchResults; // ivar: _alreadySharingSearchResults
@property (readonly, nonatomic) BOOL couldFetchAdditionalResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIViewController *dismissalViewController; // ivar: _dismissalViewController
@property (nonatomic) BOOL hasCompletedAtLeastOneFetch; // ivar: _hasCompletedAtLeastOneFetch
@property (readonly, nonatomic) BOOL hasSearchResults;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL locationEnabled; // ivar: _locationEnabled
@property (nonatomic) NSInteger nextFrom; // ivar: _nextFrom
@property (weak, nonatomic) NSLayoutConstraint *noContentBottomConstraint; // ivar: _noContentBottomConstraint
@property (retain, nonatomic) UIView *noContentParentView; // ivar: _noContentParentView
@property (weak, nonatomic) NSLayoutConstraint *noContentTopConstraint; // ivar: _noContentTopConstraint
@property (retain, nonatomic) WDClinicalOnboardingNoGeoView *noGeoView; // ivar: _noGeoView
@property (retain, nonatomic) _UIContentUnavailableView *noLocationsView; // ivar: _noLocationsView
@property (retain, nonatomic) WDClinicalGatewayProxy *pendingGatewayProxy; // ivar: _pendingGatewayProxy
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile
@property (retain, nonatomic) UIView *providerNotFoundView; // ivar: _providerNotFoundView
@property (readonly, nonatomic) HKClinicalProviderServiceStore *providerServiceStore; // ivar: _providerServiceStore
@property (readonly, nonatomic) NSMutableDictionary *resultsCache; // ivar: _resultsCache
@property (retain, nonatomic) WDClinicalSampleAccountsLoader *sampleAccountsLoader; // ivar: _sampleAccountsLoader
@property (nonatomic) BOOL searchInFlight; // ivar: _searchInFlight
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (copy, nonatomic) NSArray *searchTerms; // ivar: _searchTerms
@property (retain, nonatomic) HRUITableViewSectionConfiguration *sectionConfiguration; // ivar: _sectionConfiguration
@property (nonatomic) BOOL showOnlyClinicalSharingCapableProviders; // ivar: _showOnlyClinicalSharingCapableProviders
@property (nonatomic) BOOL showProviderNotFound; // ivar: _showProviderNotFound
@property (readonly, nonatomic) BOOL showingMainSpinner;
@property (readonly, nonatomic) BOOL showingNoGeoView;
@property (readonly, nonatomic) BOOL showingNoLocations;
@property (retain, nonatomic) NSIndexPath *spinnerIndexPath; // ivar: _spinnerIndexPath
@property (retain, nonatomic) HRWDSpinnerView *spinnerView; // ivar: _spinnerView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableOrderedSet *supportedSearchResults; // ivar: _supportedSearchResults
@property (retain, nonatomic) NSMutableOrderedSet *unsupportedSearchResults; // ivar: _unsupportedSearchResults


-(BOOL)_isSimulator;
-(BOOL)definesPresentationContext;
-(BOOL)hasSearchTerm;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_cacheKeyForSearchQuery:(id)arg0 ;
-(id)_changeEnvironmentMenuElements;
-(id)_createNoContentParentView;
-(id)_createNoGeoView;
-(id)_createNoLocationsView;
-(id)_createSpinnerView;
-(id)_emptyMutableOrderedSet;
-(id)_mutableOrderedSetWithSampleAccountsForQuery:(id)arg0 ;
-(id)_providerNotFoundExplanationMessage;
-(id)accountSearchResultAtIndexPath:(id)arg0 ;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 gatewayProxy:(id)arg1 ;
-(id)providerSearchResultAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_applicationDidBecomeActive;
-(void)_beginLoadingAlreadyConnectedAccountsIfNecessary;
-(void)_cacheFeaturedBrandLogos;
-(void)_cancelSearch;
-(void)_changeEnvironment:(NSInteger)arg0 ;
-(void)_configureDeniedAuthorization;
-(void)_configureLeftNavigationItemAsCancel;
-(void)_configureLocationServices;
-(void)_configureNavigationItems;
-(void)_configureProviderNotFoundView;
-(void)_configureRightNavigationItems;
-(void)_configureSearchController;
-(void)_configureTableViewCells;
-(void)_didFetchResultsForQuery:(id)arg0 searchResultsPage:(id)arg1 error:(id)arg2 ;
-(void)_disableLocationAwareness;
-(void)_hideNoGeoView;
-(void)_hideNoLocationsView;
-(void)_hideSpinnerView;
-(void)_loadGatewayProxyForDeeplinking:(id)arg0 ;
-(void)_presentError:(id)arg0 ;
-(void)_presentInitialResultsIfNecessary;
-(void)_presentLoginForAlreadyConnectedAccount:(id)arg0 ;
-(void)_proceedWithAlreadyConnectedAccount:(id)arg0 ;
-(void)_resetCacheAndReloadData;
-(void)_resetSearchResults;
-(void)_searchResultsForQuery:(id)arg0 from:(NSInteger)arg1 ;
-(void)_searchUsingQuery:(id)arg0 ;
-(void)_showNoContentView:(id)arg0 ;
-(void)_showNoGeoView;
-(void)_showNoLocationsViewIfNeeded;
-(void)_showSpinnerView;
-(void)_suggestNewProviders;
-(void)_updateNoContentViewConstraints;
-(void)_updateTableHeaderViewHeight;
-(void)applyChangeActivity:(id)arg0 ;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didPresentSearchController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)dismiss:(id)arg0 ;
-(void)loadView;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)reloadData;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willDismissSearchController:(id)arg0 ;


@end


#endif