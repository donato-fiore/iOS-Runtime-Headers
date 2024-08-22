// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHADDWIDGETSHEETVIEWCONTROLLER_H
#define SBHADDWIDGETSHEETVIEWCONTROLLER_H

@class NSMutableDictionary, NSIndexPath, UICollectionViewDiffableDataSource, NSMapTable, NSArray, MTMaterialView, UIViewController, UIButton, UICollectionView, NSString;
@protocol UICollectionViewDelegate, UISheetPresentationControllerDelegate, SBHAddWidgetSheetViewControllerDelegate, SBHWidgetWrapperViewControllerDelegate, SBHMainAddSheetViewControlling, SBHWidgetSheetViewControlling, SBHWidgetDragHandlerPassing, UISearchResultsUpdating, UISearchControllerDelegate, SBHWidgetSheetViewControllerPresenter, SBHWidgetDragHandling;


#import "SBHAddWidgetSheetViewControllerBase.h"
#import "SBHWidgetSearchController.h"
#import "SBHWidgetAddSheetTransitionContext.h"

@interface SBHAddWidgetSheetViewController : SBHAddWidgetSheetViewControllerBase <UICollectionViewDelegate, UISheetPresentationControllerDelegate, SBHAddWidgetSheetViewControllerDelegate, SBHWidgetWrapperViewControllerDelegate, SBHMainAddSheetViewControlling, SBHWidgetSheetViewControlling, SBHWidgetDragHandlerPassing, UISearchResultsUpdating, UISearchControllerDelegate>

 {
    NSMutableDictionary *_userInfo;
    SBHPadAddWidgetSheetMetrics _landscapeMetrics;
    SBHPadAddWidgetSheetMetrics _portraitMetrics;
    CGFloat _widgetScaleFactor;
    NSIndexPath *_lastSelectedIndexPath;
    BOOL _performedInitialSelection;
    ? _sheetIconMetrics;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    NSMapTable *_galleryIdentifierToGalleryItemLookupTable;
    NSMapTable *_applicationWidgetCollectionForApplicationWidgetCollectionIdentifierLookupTable;
}


@property (retain, nonatomic) NSArray *applicationWidgetCollections; // ivar: _applicationWidgetCollections
@property (nonatomic) NSDirectionalEdgeInsets applicationsSectionInsets; // ivar: _applicationsSectionInsets
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIViewController *barSwipeViewController; // ivar: _barSwipeViewController
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBHWidgetSearchController *externalSearchController; // ivar: _externalSearchController
@property (retain, nonatomic) NSArray *filteredApplicationWidgetCollections; // ivar: _filteredApplicationWidgetCollections
@property (copy, nonatomic) NSArray *galleryItems; // ivar: _galleryItems
@property (nonatomic) NSUInteger galleryLayoutSize; // ivar: _galleryLayoutSize
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalSpacing; // ivar: _horizontalSpacing
@property (nonatomic) CGRect keyboardFrameIntersect; // ivar: _keyboardFrameIntersect
@property (weak, nonatomic) NSObject<SBHWidgetSheetViewControllerPresenter> *presenter; // ivar: _presenter
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers; // ivar: _searchBarGradientMaskLayers
@property (nonatomic) CGFloat searchBarHeightAdjustment; // ivar: _searchBarHeightAdjustment
@property (retain, nonatomic) SBHWidgetSearchController *searchController; // ivar: _searchController
@property (nonatomic) BOOL shouldShowGalleryOnly; // ivar: _shouldShowGalleryOnly
@property (retain, nonatomic) NSMutableDictionary *suggestedItemsByGalleryLayoutSize; // ivar: _suggestedItemsByGalleryLayoutSize
@property (readonly) Class superclass;
@property (retain, nonatomic) SBHWidgetAddSheetTransitionContext *transitionContext; // ivar: _transitionContext
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, weak, nonatomic) NSObject<SBHWidgetDragHandling> *widgetDragHandler;


-(BOOL)_isSearchVisible;
-(BOOL)_shouldAnimateChanges;
-(BOOL)_shouldShowGallery;
-(BOOL)_shouldShowSuggestionsListItem;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSUInteger)_addWidgetSheetStyle;
-(NSUInteger)_applicationWidgetCollectionIndexForItemIndex:(NSUInteger)arg0 ;
-(NSUInteger)_itemIndexForApplicationWidgetCollectionIndex:(NSUInteger)arg0 ;
-(NSUInteger)_sectionIndexForSection:(NSUInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_collectionViewLayoutApplicationsSectionWithStyle:(NSUInteger)arg0 ;
-(id)_collectionViewLayoutGallerySectionWithWidth:(CGFloat)arg0 sizeClasses:(id)arg1 ;
-(id)_currentPresenter;
-(id)_effectiveSearchController;
-(id)_generateLayoutSectionForSectionIdx:(NSUInteger)arg0 width:(CGFloat)arg1 ;
-(id)_generateSnapshotDiffedFromSnapshot:(id)arg0 ;
-(id)_itemsArrayWithSizeClasses:(id)arg0 nSmallsGroup:(id)arg1 mediumAndSmallGroup:(id)arg2 usesThreeColumnLayout:(BOOL)arg3 ;
-(id)_materialViewForVisualStyling;
-(id)_newBackgroundView;
-(id)_newPadCollectionViewLayoutGallerySectionWithWidth:(CGFloat)arg0 sizeClasses:(id)arg1 ;
-(id)_newWrapperViewControllerWithGalleryItem:(id)arg0 sizeClass:(NSInteger)arg1 ;
-(id)_podsArrayWithSizeClasses:(id)arg0 columnCount:(NSInteger)arg1 ;
-(id)_presentedGalleryViewController;
-(id)_sizeClasses;
-(id)_suggestedItems;
-(id)backgroundViewMatchingMaterialBeneathAddWidgetSheetViewController:(id)arg0 ;
-(id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithListLayoutProvider:(id)arg0 iconViewProvider:(id)arg1 allowedWidgets:(struct SBHWidgetFilteringParameters )arg2 appCellConfigurator:(id)arg3 ;
-(id)suggestedItemsForGalleryLayoutSize:(NSUInteger)arg0 ;
-(struct ? )sheetIconMetrics;
-(struct SBHPadAddWidgetSheetMetrics )_metricsForOrientation:(NSInteger)arg0 ;
-(void)_addBarSwipeView;
-(void)_backgroundTapped:(id)arg0 ;
-(void)_clearDetailViewController;
-(void)_collectionView:(id)arg0 updateSeparatorVisibility:(BOOL)arg1 forHighlightAtIndexPath:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_keyboardWillDismiss:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_layoutCollectionViewForScalingIfNeeded;
-(void)_layoutSearchBarGradientMaskLayers;
-(void)_makeFakeGalleryItemsFromHomeScreenItems:(id)arg0 ;
-(void)_makeGalleryItemsFromHomeScreenItems:(id)arg0 ;
-(void)_presentDetailSheetForGalleryCellAtIndexPath:(id)arg0 ;
-(void)_presentDetailSheetViewControllerForApplicationWidgetCollection:(id)arg0 ;
-(void)_presentDetailSheetViewControllerForApplicationWidgetCollection:(id)arg0 configuredWithGalleryItem:(id)arg1 selectedSizeClass:(NSInteger)arg2 fromCell:(id)arg3 atIndexPath:(id)arg4 ;
-(void)_presentDetailViewController:(id)arg0 fromCell:(id)arg1 ;
-(void)_presentGalleryCell;
-(void)_refreshData:(BOOL)arg0 ;
-(void)_reloadData;
-(void)_reloadData:(BOOL)arg0 ;
-(void)_selectFirstItem;
-(void)_updateCollectionViewInsets;
-(void)_updateSearchBarContentInsets;
-(void)addWidgetSheetViewController:(id)arg0 didSelectWidgetIconView:(id)arg1 ;
-(void)addWidgetSheetViewControllerDidAppear:(id)arg0 ;
-(void)addWidgetSheetViewControllerDidCancel:(id)arg0 ;
-(void)addWidgetSheetViewControllerDidDisappear:(id)arg0 ;
-(void)addWidgetSheetViewControllerWillAppear:(id)arg0 ;
-(void)addWidgetSheetViewControllerWillDisappear:(id)arg0 ;
-(void)closeButtonTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)configureBackgroundView:(id)arg0 matchingMaterialBeneathWrapperViewController:(id)arg1 ;
-(void)dealloc;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setSuggestedItems:(id)arg0 forGalleryLayoutSize:(NSUInteger)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif