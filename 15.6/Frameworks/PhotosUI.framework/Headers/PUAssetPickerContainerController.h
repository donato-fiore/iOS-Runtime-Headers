// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETPICKERCONTAINERCONTROLLER_H
#define PUASSETPICKERCONTAINERCONTROLLER_H

@class UIViewController, NSString, UIBarButtonItem, UISegmentedControl, PXAssetsDataSourceManager, PXSectionedSelectionManager, PXPhotosUIViewController, PXGAnchor, PXSearchQueryController, UISearchController, PXSearchComposableDataSource, PXSelectionCoordinator, UILabel, UIButton;
@protocol UISearchResultsUpdating, UISearchBarDelegate, PXPhotosViewDelegate, PXScrollViewControllerObserver, PUAssetPickerSearchSuggestionsSelectionDelegate, PXChangeObserver, PUAssetPickerSuggestionsViewControllerActionHandler, PUAssetPickerContainerControllerActionHandler;


#import "PUAlbumsGadgetViewController.h"
#import "PUPickerConfiguration.h"
#import "PUPhotoPickerResizeTaskDescriptorViewModel.h"
#import "PUAssetPickerSearchSuggestionsHeaderView.h"
#import "PUSessionInfo.h"

@interface PUAssetPickerContainerController : UIViewController <UISearchResultsUpdating, UISearchBarDelegate, PXPhotosViewDelegate, PXScrollViewControllerObserver, PUAssetPickerSearchSuggestionsSelectionDelegate, PXChangeObserver, PUAssetPickerSuggestionsViewControllerActionHandler>



@property (readonly, nonatomic) PUAlbumsGadgetViewController *allAlbumsGadgetViewController; // ivar: _allAlbumsGadgetViewController
@property (nonatomic) BOOL allowSafeAreaChangeAnchor; // ivar: _allowSafeAreaChangeAnchor
@property (readonly, nonatomic) PUPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, weak, nonatomic) NSObject<PUAssetPickerContainerControllerActionHandler> *containerControllerActionHandler; // ivar: _containerControllerActionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIBarButtonItem *navigationBarAddButton; // ivar: _navigationBarAddButton
@property (readonly, nonatomic) UIBarButtonItem *navigationBarCancelButton; // ivar: _navigationBarCancelButton
@property (readonly, nonatomic) UIBarButtonItem *navigationBarClearButton; // ivar: _navigationBarClearButton
@property (readonly, nonatomic) UIBarButtonItem *navigationBarDoneButton; // ivar: _navigationBarDoneButton
@property (readonly, nonatomic) UISegmentedControl *navigationBarSegmentedControl; // ivar: _navigationBarSegmentedControl
@property (readonly, nonatomic) PXAssetsDataSourceManager *photosDataSourceManager; // ivar: _photosDataSourceManager
@property (readonly, nonatomic) PXSectionedSelectionManager *photosSelectionManager; // ivar: _photosSelectionManager
@property (readonly, nonatomic) PXPhotosUIViewController *photosViewController; // ivar: _photosViewController
@property (retain, nonatomic) PXGAnchor *pinToTopAnchor; // ivar: _pinToTopAnchor
@property (nonatomic) NSInteger previousNavigationBarSegmentedControlSelectedIndex; // ivar: _previousNavigationBarSegmentedControlSelectedIndex
@property (readonly, nonatomic) PXSearchQueryController *queryController; // ivar: _queryController
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // ivar: _resizeTaskDescriptorViewModel
@property (readonly, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly, nonatomic) PXSearchComposableDataSource *searchSuggestionsCollectionViewDataSource; // ivar: _searchSuggestionsCollectionViewDataSource
@property (readonly, nonatomic) PUAssetPickerSearchSuggestionsHeaderView *searchSuggestionsHeaderView; // ivar: _searchSuggestionsHeaderView
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator; // ivar: _selectionCoordinator
@property (readonly, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIBarButtonItem *toolbarDeselectAllButton; // ivar: _toolbarDeselectAllButton
@property (readonly, nonatomic) UILabel *toolbarFileSizeLabel; // ivar: _toolbarFileSizeLabel
@property (readonly, nonatomic) UIBarButtonItem *toolbarSelectAllButton; // ivar: _toolbarSelectAllButton
@property (readonly, nonatomic) UIButton *toolbarSelectedItemsButton; // ivar: _toolbarSelectedItemsButton
@property (readonly, nonatomic) UIBarButtonItem *toolbarSelectedItemsFileSizeStackView; // ivar: _toolbarSelectedItemsFileSizeStackView


+(BOOL)_hideSearchBarWhenScrolling;
+(id)_setupSearchQueryControllerWithSuggestionsSectionProvider:(id)arg0 photosDataSourceManager:(id)arg1 suggestionsHeaderView:(id)arg2 photosViewController:(id)arg3 ;
+(id)photosTabTitleForConfiguration:(id)arg0 ;
-(BOOL)allowsContextMenuInteractionForPhotosViewController:(id)arg0 ;
-(BOOL)photosViewController:(id)arg0 didPickAssetReference:(id)arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(NSUInteger)_searchSuggestionLimit;
-(id)_createSearchController;
-(id)_sectionLayoutForSection:(NSInteger)arg0 environment:(id)arg1 ;
-(id)_setupCollectionViewLayoutWithSectionProviders:(id)arg0 ;
-(id)headerViewForPhotosViewController:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 loadingStatusManager:(id)arg1 resizeTaskDescriptorViewModel:(id)arg2 selectionCoordinator:(id)arg3 actionHandler:(id)arg4 ;
-(id)photosViewController:(id)arg0 animationForProposedAnimation:(id)arg1 ;
-(id)px_gridPresentation;
-(void)_updateNavigationBar;
-(void)_updateSearchFieldWithSuggestion:(id)arg0 ;
-(void)_updateToolbarBar;
-(void)dealloc;
-(void)didSelectSuggestionAtIndexPath:(id)arg0 collectionView:(id)arg1 ;
-(void)handleNavigationBarAddButton:(id)arg0 ;
-(void)handleNavigationBarCancelButton:(id)arg0 ;
-(void)handleNavigationBarClearButton:(id)arg0 ;
-(void)handleNavigationBarSegmentedControl:(id)arg0 ;
-(void)handleToolbarDeselectAllButton:(id)arg0 ;
-(void)handleToolbarSelectAllButton:(id)arg0 ;
-(void)handleToolbarSelectedItemsButton:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)ppt_prepareForSearchTest:(id)arg0 ;
-(void)ppt_switchToAlbumsTab;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)suggestionsViewController:(id)arg0 didTapAsset:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBars;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif