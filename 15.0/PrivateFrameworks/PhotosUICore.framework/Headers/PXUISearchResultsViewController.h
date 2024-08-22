// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUISEARCHRESULTSVIEWCONTROLLER_H
#define PXUISEARCHRESULTSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, UIScrollView, UISearchController;
@protocol PXOneUpPresentationDelegate, PXSearchTapToRadarSectionProviderDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UISearchBarDelegate, UISearchResultsUpdating;


#import "PXSearchAnalyticsSession.h"
#import "PXSearchQuery.h"
#import "PXSearchComposableDataSource.h"
#import "PXSearchResultsOneUpViewModel.h"
#import "PXSearchQueryController.h"
#import "PXSearchIndexManager.h"

@interface PXUISearchResultsViewController : UIViewController <PXOneUpPresentationDelegate, PXSearchTapToRadarSectionProviderDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UISearchBarDelegate, UISearchResultsUpdating>



@property (retain, nonatomic) PXSearchAnalyticsSession *analyticsSession; // ivar: _analyticsSession
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (copy, nonatomic) PXSearchQuery *currentSearchQuery; // ivar: _currentSearchQuery
@property (retain, nonatomic) PXSearchComposableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger nextAnalyticsSessionBeginType; // ivar: _nextAnalyticsSessionBeginType
@property (retain, nonatomic) PXSearchResultsOneUpViewModel *oneUpViewModel; // ivar: _oneUpViewModel
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (retain, nonatomic) PXSearchQueryController *queryController; // ivar: _queryController
@property (nonatomic) BOOL searchBarWantsFirstResponder; // ivar: _searchBarWantsFirstResponder
@property (readonly, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) PXSearchIndexManager *searchIndexManager; // ivar: _searchIndexManager
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(NSUInteger)_analyticsSessionResultTypeForCollectionType:(NSUInteger)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(NSInteger)_contentInsetsReferenceForTraitCollection:(id)arg0 ;
-(NSInteger)oneUpPresentationActionContext:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)_searchAnalyticsSessionResultTypeForSearchResult:(id)arg0 ;
-(NSUInteger)_searchAnalyticsSessionResultTypeForSearchResultType:(NSUInteger)arg0 subtype:(NSUInteger)arg1 ;
-(NSUInteger)_searchSuggestionLimit;
-(id)_collectionViewLayoutWithProviders:(id)arg0 ;
-(id)_emptyPhotosViewControllerForSearchResult:(id)arg0 ;
-(id)_keywordForRadarRoute:(id)arg0 ;
-(id)_ppt_resultsSectionProvider;
-(id)_radarInfoForRadarRoute:(id)arg0 searchQuery:(id)arg1 ;
-(id)_radarRoutes;
-(id)_radarRoutesDescription;
-(id)_searchResultsSectionProvider;
-(id)_templateForRadarRoute:(id)arg0 ;
-(id)_titleForRadarRoute:(id)arg0 searchQuery:(id)arg1 ;
-(id)init;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(void)_configureCollectionViewWithSectionProviders:(id)arg0 ;
-(void)_configureDataSourceForCollectionView:(id)arg0 sectionProviders:(id)arg1 ;
-(void)_configureQueryControllerWithResultsSectionProvider:(id)arg0 suggestionsSectionProvider:(id)arg1 queryStatusSectionProvider:(id)arg2 tapToRadarSectionProvider:(id)arg3 ;
-(void)_didSelectAlbumSearchResult:(id)arg0 ;
-(void)_didSelectAssetsSeeAllButtonForSection:(id)arg0 allAssetResultUUIDs:(id)arg1 title:(id)arg2 ;
-(void)_didSelectCollectionsSeeAllButtonForSection:(id)arg0 sectionProvider:(id)arg1 searchResultsHeaderView:(id)arg2 ;
-(void)_didSelectDetailCollectionSearchResult:(id)arg0 ;
-(void)_didSelectItemIdentifier:(id)arg0 inResultsSectionProvider:(id)arg1 ;
-(void)_didSelectItemIdentifier:(id)arg0 inSuggestionsSectionProvider:(id)arg1 ;
-(void)_didSelectMemoryCollectionSearchResult:(id)arg0 ;
-(void)_didSelectTapToRadar:(id)arg0 ;
-(void)_endAnalyticsSession;
-(void)_notifyAnalyticsInteractedWithCurrentSearch;
-(void)_notifyAnalyticsNoResultsForSearch;
-(void)_notifyAnalyticsOneUpTopAssets;
-(void)_notifyAnalyticsSearchChanged;
-(void)_notifyAnalyticsSearchResultSelected:(id)arg0 ;
-(void)_notifyAnalyticsSeeAllSelectedWithResultType:(NSUInteger)arg0 ;
-(void)_notifyAnalyticsSuggestionSelectedWithType:(NSUInteger)arg0 ;
-(void)_notifyAnalyticsWordEmbeddingPresented;
-(void)_registerNotificationsForAnalytics;
-(void)_shouldEndAnalyticsSession:(id)arg0 ;
-(void)_unregisterNotificationsForAnalytics;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didSelectAssetAggregationSearchResult:(id)arg0 ;
-(void)didSelectAssetSearchResult:(id)arg0 ;
-(void)didSelectCollectionSearchResult:(id)arg0 ;
-(void)didSelectPersonSearchResult:(id)arg0 ;
-(void)didSelectSeeAllForAssetUUIDs:(id)arg0 title:(id)arg1 ;
-(void)didSelectTapToRadar;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)ppt_expandAllSections;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)showOneUpForAssetSearchResult:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif