// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETPICKERCONTAINERCONTROLLER_H
#define PUASSETPICKERCONTAINERCONTROLLER_H

@class UIViewController, NSString, UISegmentedControl, PXPeoplePickerConfigurationController, PXAssetsDataSourceManager, PXSectionedSelectionManager, PXPhotosUIViewController, PXGAnchor, PXSearchQueryController, UISearchController, NSArray, PXSearchComposableDataSource, PXSelectionCoordinator, UILabel, UIButton, UIBarButtonItem, PXWallpaperPickerDataSource;
@protocol _TtP15PhotosUIPrivate40PUWallpaperPickerSuggestionsViewDelegate_, PXWallpaperPickerDataSourceChangeObserver, UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, PXPhotosViewDelegate, PXScrollViewControllerObserver, PUAssetPickerSearchSuggestionsSelectionDelegate, PXChangeObserver, PXPeoplePickerConfigurationControllerHandler, PXPhotosPreferredAssetCropDelegate, PUAssetPickerContainerControllerActionHandler;


#import "PUPickerConfiguration.h"
#import "PUPhotoPickerResizeTaskDescriptorViewModel.h"
#import "PUAssetPickerSearchSuggestionsHeaderView.h"
#import "PUSessionInfo.h"
#import "PUSidebarViewController.h"
#import "_TtC15PhotosUIPrivate32PUWallpaperPickerSuggestionsView.h"

@interface PUAssetPickerContainerController : UIViewController <_TtP15PhotosUIPrivate40PUWallpaperPickerSuggestionsViewDelegate_, PXWallpaperPickerDataSourceChangeObserver, UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, PXPhotosViewDelegate, PXScrollViewControllerObserver, PUAssetPickerSearchSuggestionsSelectionDelegate, PXChangeObserver, PXPeoplePickerConfigurationControllerHandler, PXPhotosPreferredAssetCropDelegate>



@property (readonly, nonatomic) UIViewController *albumsViewController; // ivar: _albumsViewController
@property (nonatomic) BOOL allowSafeAreaChangeAnchor; // ivar: _allowSafeAreaChangeAnchor
@property (readonly, nonatomic) PUPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, weak, nonatomic) NSObject<PUAssetPickerContainerControllerActionHandler> *containerControllerActionHandler; // ivar: _containerControllerActionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *itemsViewController;
@property (readonly, nonatomic) UISegmentedControl *navigationBarSegmentedControl; // ivar: _navigationBarSegmentedControl
@property (readonly, nonatomic) PXPeoplePickerConfigurationController *peopleConfigController; // ivar: _peopleConfigController
@property (readonly, nonatomic) PXAssetsDataSourceManager *photosDataSourceManager; // ivar: _photosDataSourceManager
@property (readonly, nonatomic) PXSectionedSelectionManager *photosSelectionManager; // ivar: _photosSelectionManager
@property (readonly, nonatomic) PXPhotosUIViewController *photosViewController; // ivar: _photosViewController
@property (retain, nonatomic) PXGAnchor *pinToTopAnchor; // ivar: _pinToTopAnchor
@property (readonly, nonatomic) PXSearchQueryController *queryController; // ivar: _queryController
@property (nonatomic) BOOL replacesConfirmationButtonWithActivityIndicator; // ivar: _replacesConfirmationButtonWithActivityIndicator
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // ivar: _resizeTaskDescriptorViewModel
@property (readonly, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) NSArray *searchMatchedOCRAssetUUIDs; // ivar: _searchMatchedOCRAssetUUIDs
@property (readonly, nonatomic) PXSearchComposableDataSource *searchSuggestionsCollectionViewDataSource; // ivar: _searchSuggestionsCollectionViewDataSource
@property (readonly, nonatomic) PUAssetPickerSearchSuggestionsHeaderView *searchSuggestionsHeaderView; // ivar: _searchSuggestionsHeaderView
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator; // ivar: _selectionCoordinator
@property (readonly, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly, nonatomic) UILabel *showSelectedButtonSubtitleLabel; // ivar: _showSelectedButtonSubtitleLabel
@property (readonly, nonatomic) UIButton *showSelectedButtonTitleButton; // ivar: _showSelectedButtonTitleButton
@property (weak, nonatomic) PUSidebarViewController *sidebarViewController; // ivar: _sidebarViewController
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIBarButtonItem *toolbarDeselectAllButton; // ivar: _toolbarDeselectAllButton
@property (readonly, nonatomic) UIBarButtonItem *toolbarSelectAllButton; // ivar: _toolbarSelectAllButton
@property (readonly, nonatomic) UIBarButtonItem *toolbarShowSelectedButton; // ivar: _toolbarShowSelectedButton
@property (readonly, nonatomic) UIViewController *unavailableViewController; // ivar: _unavailableViewController
@property (readonly, nonatomic) _TtC15PhotosUIPrivate32PUWallpaperPickerSuggestionsView *wallPaperSuggestionView; // ivar: _wallPaperSuggestionView
@property (readonly, nonatomic) PXWallpaperPickerDataSource *wallPaperSuggestionsDataSource; // ivar: _wallPaperSuggestionsDataSource


-(BOOL)allowsContextMenuInteractionForPhotosViewController:(id)arg0 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_cancellationBarButtonItemWithTraitCollection:(id)arg0 ;
-(id)_confirmationBarButtonItemWithTraitCollection:(id)arg0 ;
-(id)_updateSelectionStatusBarButtonItem;
-(id)headerViewForPhotosViewController:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 loadingStatusManager:(id)arg1 resizeTaskDescriptorViewModel:(id)arg2 selectionCoordinator:(id)arg3 actionHandler:(id)arg4 ;
-(id)photosViewController:(id)arg0 animationForProposedAnimation:(id)arg1 ;
-(id)px_gridPresentation;
-(id)px_navigationDestination;
-(struct CGRect )preferredCropForAsset:(id)arg0 withAspectRatio:(CGFloat)arg1 ;
-(void)_searchWithString:(id)arg0 tokens:(id)arg1 ;
-(void)_updateNavigationBar;
-(void)_updateToolbar;
-(void)_updateWallPaperSuggestionsViewHeight;
-(void)dealloc;
-(void)didSelectSuggestionAtIndexPath:(id)arg0 collectionView:(id)arg1 ;
-(void)handleNavigationBarSegmentedControl:(id)arg0 ;
-(void)handleToolbarDeselectAllButton:(id)arg0 ;
-(void)handleToolbarSelectAllButton:(id)arg0 ;
-(void)handleToolbarShowSelectedButton:(id)arg0 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)peopleConfigurationController:(id)arg0 didFinishWithCurrentViewController:(id)arg1 selectedPerson:(id)arg2 ;
-(void)peopleConfigurationController:(id)arg0 didPopViewController:(id)arg1 ;
-(void)ppt_prepareForSearchTest:(id)arg0 ;
-(void)ppt_switchToAlbumsTab;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)searchWithString:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBars;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)wallPaperPickerView:(id)arg0 didChangePreferredHeight:(CGFloat)arg1 ;
-(void)wallPaperPickerView:(id)arg0 didSelectSuggestion:(NSInteger)arg1 ;
-(void)wallpaperPickerDataSourceChanged:(id)arg0 ;
-(void)wallpaperPickerSameModeTapped:(id)arg0 ;


@end


#endif