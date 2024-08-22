// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSEARCHRESULTSVIEWCONTROLLER_H
#define PKSEARCHRESULTSVIEWCONTROLLER_H

@class UICollectionViewController, PKFamilyMemberCollection, PKSearchService, PKAccountService, PKPassLibrary, NSDictionary, PKTransactionSourceCollection, NSString, NSMutableOrderedSet, PKSearchQuery, PKSearchResults, NSMutableDictionary, NSArray, UILabel, FHSearchSuggestionController;
@protocol CNAvatarViewDelegate, PKAccountServiceObserver, PKSearchServiceObserver, UICollectionViewDelegateFlowLayout, PKWorldRegionUpdaterObserver, PKForegroundActiveArbiterObserver, PKPaymentDataProviderDelegate, UISearchResultsUpdating, PKPaymentDataProvider, OS_dispatch_queue, OS_dispatch_source;


#import "PKDashboardTitleHeaderView.h"
#import "PKSearchSuggestionCollectionViewCell.h"
#import "PKDashboardPaymentTransactionItemPresenter.h"
#import "PKTransactionGroupItemPresenter.h"
#import "PKTransactionGroupThumbnailPresenter.h"
#import "PKWorldRegionUpdater.h"
#import "PKTransactionHistoryViewController.h"

@interface PKSearchResultsViewController : UICollectionViewController <CNAvatarViewDelegate, PKAccountServiceObserver, PKSearchServiceObserver, UICollectionViewDelegateFlowLayout, PKWorldRegionUpdaterObserver, PKForegroundActiveArbiterObserver, PKPaymentDataProviderDelegate, UISearchResultsUpdating>

 {
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKSearchSuggestionCollectionViewCell *_sampleSuggestionCell;
    PKDashboardPaymentTransactionItemPresenter *_transactionPresenter;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKTransactionGroupThumbnailPresenter *_thumbnailPresenter;
    PKWorldRegionUpdater *_regionUpdater;
    PKFamilyMemberCollection *_familyCollection;
    PKSearchService *_searchService;
    PKAccountService *_accountService;
    PKPassLibrary *_passLibrary;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    NSDictionary *_accountsPerIdentifier;
    NSDictionary *_accountUserCollectionsPerIdentifier;
    NSDictionary *_physicalCardsPerIdentifier;
    PKTransactionSourceCollection *_transactionSourceCollection;
    os_unfair_lock_s _lockQuery;
    NSString *_currentQueryIdentifier;
    NSMutableOrderedSet *_lastQueries;
    PKSearchQuery *_queryForCurrentResults;
    PKSearchResults *_currentResults;
    BOOL _queryInProgress;
    NSMutableDictionary *_lastResultsPerQueryIdentifier;
    NSObject<OS_dispatch_queue> *_queuePrepareResults;
    NSArray *_transactions;
    NSArray *_categories;
    NSArray *_merchants;
    NSArray *_locations;
    NSArray *_people;
    NSArray *_transactionTags;
    NSArray *_suggestions;
    NSMutableDictionary *_passesForResults;
    BOOL _hasReceivedResults;
    BOOL _hasLoadedRequiredData;
    NSUInteger _presentationCounter;
    NSUInteger _seeAllPresentationCounter;
    PKTransactionHistoryViewController *_seeAllHistoryVC;
    NSObject<OS_dispatch_source> *_seeAllPresentationTimer;
    BOOL _queryHasNoResults;
    BOOL _fullResultsNotAvailable;
    BOOL _hasSearchableContent;
    UILabel *_noResultsTitleLabel;
    UILabel *_noResultsBodyLabel;
    BOOL _queryIsReplay;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
    BOOL _usingThumbnailLayout;
    BOOL _atNaturalRestingBounds;
    BOOL _isScrolling;
    ? _foregroundActiveState;
    id *_pendingPreflightCompletion;
    FHSearchSuggestionController *_searchSuggestionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isQueryIdentifierMatchingCurrentQuery:(id)arg0 ;
-(BOOL)_updateGroup:(id)arg0 withRegion:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)_thumbnailInset;
-(CGFloat)_thumbnailSpacing;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)_numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_historyViewControllerForQuery:(id)arg0 groups:(id)arg1 headerGroup:(id)arg2 ;
-(id)_queryWithIdentifier:(id)arg0 ;
-(id)_resultsLayout;
-(id)_searchController;
-(id)_thumbnailLayout;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithPaymentDataProvider:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_applyMaskToCell:(id)arg0 firstInSection:(BOOL)arg1 lastInSection:(BOOL)arg2 ;
-(void)_configureHeaderView:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)_configureSuggestionCell:(id)arg0 withSuggestion:(id)arg1 ;
-(void)_initiateSeeAllPresentationForQuery:(id)arg0 ;
-(void)_saveResults:(id)arg0 forQuery:(id)arg1 ;
-(void)_scrollViewStoppedScrolling;
-(void)_seeAllHeaderGroupForQuery:(id)arg0 groups:(id)arg1 transactions:(id)arg2 completion:(id)arg3 ;
-(void)_udpateOrPresentSeeAllViewControllerForQuery:(id)arg0 groups:(id)arg1 transactions:(id)arg2 ;
-(void)_updateAccountsWithCompletion:(id)arg0 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)_updateUIIfPossibleWithResults:(id)arg0 query:(id)arg1 completion:(id)arg2 ;
-(void)_updateUIWithResults:(id)arg0 forQuery:(id)arg1 completion:(id)arg2 ;
-(void)accountAdded:(id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)accountUsersChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)invalidateSearchResults;
-(void)keyboardWillChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchDidCompleteWithError:(id)arg0 results:(id)arg1 forIdentifier:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)worldRegionUpdated:(id)arg0 updatedRegion:(id)arg1 ;


@end


#endif