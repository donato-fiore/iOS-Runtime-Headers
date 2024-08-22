// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCOLLECTIONVIEWCONTROLLER_H
#define GKCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, GKColorPalette, NSString, NSUUID, UICollectionViewLayout, UIActivityIndicatorView, UINavigationController, NSMapTable;
@protocol _GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler, OS_dispatch_queue, UICollectionViewDataSource;


#import "GKSearchBar.h"
#import "GKLoadableContentStateMachine.h"
#import "GKPlaceholderView.h"
#import "GKSwipeToEditStateMachine.h"

@interface GKCollectionViewController : UICollectionViewController <_GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler>

 {
    BOOL _skipLoadAfterViewDidLoad;
}


@property BOOL active; // ivar: _active
@property (retain, nonatomic) GKSearchBar *activeSearchBar; // ivar: _activeSearchBar
@property NSInteger appearCount; // ivar: _appearCount
@property NSInteger batchUpdateCount; // ivar: _batchUpdateCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchUpdateQueue; // ivar: _batchUpdateQueue
@property (retain, nonatomic) GKColorPalette *colorPalette; // ivar: _colorPalette
@property (retain, nonatomic) NSString *currentSearchText; // ivar: _currentSearchText
@property (retain) NSUUID *currentUpdateID; // ivar: _currentUpdateID
@property (retain, nonatomic) NSObject<UICollectionViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionViewLayout *defaultLayout; // ivar: _defaultLayout
@property (readonly, copy) NSString *description;
@property BOOL didSlideIn; // ivar: _didSlideIn
@property BOOL hasViewFactories; // ivar: _hasViewFactories
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // ivar: _loadingIndicatorView
@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // ivar: _loadingMachine
@property (readonly, nonatomic) NSString *loadingState;
@property (retain, nonatomic) UINavigationController *placeholderNavigationController; // ivar: _placeholderNavigationController
@property (retain, nonatomic) GKPlaceholderView *placeholderView; // ivar: _placeholderView
@property (nonatomic) NSInteger previousOrientation; // ivar: _previousOrientation
@property (readonly, nonatomic) BOOL readyToDisplayData; // ivar: _readyToDisplayData
@property (retain, nonatomic) NSMapTable *reusableViewsIHaveSeen; // ivar: _reusableViewsIHaveSeen
@property (nonatomic) BOOL shouldSlideInContents; // ivar: _shouldSlideInContents
@property (nonatomic) BOOL showSupplementaryViewsWhileLoading; // ivar: _showSupplementaryViewsWhileLoading
@property (nonatomic) BOOL skipLoadAfterViewDidLoad;
@property (readonly) Class superclass;
@property (retain, nonatomic) GKSwipeToEditStateMachine *swipeStateMachine; // ivar: _swipeStateMachine


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)_initializeSafeCategoryFromValidationManager;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)hasLoaded;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(CGFloat)showMoreTextMarginAtIndexPath:(id)arg0 ;
-(id)_gkRecursiveDescription;
-(id)collectionView;
-(id)currentSearchTerms;
-(id)defaultColorPalette;
-(id)footerViewAboveShowMoreViewAtIndexPath:(id)arg0 ;
-(id)gkDataSource;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)nearestSelectableIndexPath:(id)arg0 ;
-(void)_applyUpdates:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_finishUpdates:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_gkRefreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)_gkSetContentsNeedUpdateWithHandler:(id)arg0 ;
-(void)_loadDataWithCompletionHandlerAndError:(id)arg0 ;
-(void)_reallyStartLoadingIndicator;
-(void)_systemContentSizeSettingDidChange;
-(void)addPlaceholderViewToView:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)applyShowMoreLayoutAttributesForShowMoreView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)clearButtonPressed:(id)arg0 ;
-(void)clearSelectionHighlight;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)completeWhenReadyToDisplayData:(id)arg0 ;
-(void)configureDataSource;
-(void)configureViewFactories;
-(void)dataSource:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didInsertSections:(id)arg1 ;
-(void)dataSource:(id)arg0 didMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)dataSource:(id)arg0 didMoveSection:(NSInteger)arg1 toSection:(NSInteger)arg2 ;
-(void)dataSource:(id)arg0 didRefreshItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didRefreshSections:(id)arg1 ;
-(void)dataSource:(id)arg0 didRemoveItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didRemoveSections:(id)arg1 ;
-(void)dataSource:(id)arg0 didUpdatePlaceholderVisibility:(BOOL)arg1 ;
// -(void)dataSource:(id)arg0 performBatchUpdate:(id)arg1 complete:(unk)arg2  ;
-(void)dataSourceDidMoveSectionsWithItems:(id)arg0 ;
-(void)dataSourceDidReloadData:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeReadyToDisplayData;
-(void)didDisplayData;
-(void)didEnterErrorState;
-(void)didEnterLoadedState;
-(void)didEnterLoadingState;
-(void)didEnterNoContentState;
-(void)didEnterRefreshingState;
-(void)didExitErrorState;
-(void)didExitLoadedState;
-(void)didExitLoadingState;
-(void)didExitNoContentState;
-(void)didExitRefreshingState;
-(void)didTouchShowMore:(id)arg0 ;
-(void)hidePlaceholderAnimated:(BOOL)arg0 ;
-(void)invalidateSearch;
-(void)loadDataWithCompletionHandlerAndError:(id)arg0 ;
-(void)loadView;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 updateNotifier:(id)arg2 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)segmentedSectionDataSource:(id)arg0 inSection:(NSUInteger)arg1 didSelectDataSourceWithIndex:(NSInteger)arg2 ;
-(void)setIsReadyToDisplayData:(BOOL)arg0 ;
-(void)setNeedsReload;
-(void)showCollectionView;
-(void)showPlaceholderWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 animated:(BOOL)arg3 block:(id)arg4 ;
-(void)shutActionPaneAnimated:(BOOL)arg0 ;
-(void)slideInContents;
-(void)startLoadingIndicator;
-(void)stateDidChange;
-(void)stateDidChangeFromErrorStateToLoadingState;
-(void)stateDidChangeFromLoadedStateToLoadingState;
-(void)stateDidChangeFromNilToLoadingState;
-(void)stateDidChangeFromNoContentStateToLoadingState;
-(void)stateWillChange;
-(void)stopLoadingIndicator;
-(void)stopLoadingIndicatorWithoutAnimation;
-(void)swipeToDeleteCell:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDynamicColumnCountsForViewSize:(struct CGSize )arg0 ;
-(void)updateLayoutGuideOffsets;
-(void)updateMetrics;
-(void)updateSelectionHighlight;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willDismissActionSheetFromCell:(id)arg0 ;


@end


#endif