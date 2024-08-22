// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGADGETUIVIEWCONTROLLER_H
#define PXGADGETUIVIEWCONTROLLER_H

@class UICollectionViewController, NSMutableSet, NSMapTable, UIColor, UIContextMenuInteraction, NSString, NSTimer, UIView, UIViewController;
@protocol UIContextMenuInteractionDelegate, PXGadgetCollectionViewLayoutDelegate, PXGadgetAnchorHelperDelegate, PXSectionedDataSourceManagerObserver, PXContentUnavailablePlaceholderManagerDelegate, UICollectionViewDataSourcePrefetching, PXSplitViewControllerChangeObserver, PXChangeObserver, PXGadgetNavigationHelperDelegate, UICollectionViewDropDelegate, UICollectionViewDelegateFlowLayout, PXGadgetDelegate, PXGadgetTransition, OS_os_log, PXGadget;


#import "PXGadgetAnchorHelper.h"
#import "PXGadgetDataSource.h"
#import "PXGadgetDataSourceManager.h"
#import "PXGadgetCollectionViewLayout.h"
#import "PXGadgetNavigationHelper.h"
#import "PXContentUnavailablePlaceholderManager.h"
#import "PXContentUnavailableView.h"
#import "PXGadgetSpecManager.h"
#import "PXUpdater.h"

@interface PXGadgetUIViewController : UICollectionViewController <UIContextMenuInteractionDelegate, PXGadgetCollectionViewLayoutDelegate, PXGadgetAnchorHelperDelegate, PXSectionedDataSourceManagerObserver, PXContentUnavailablePlaceholderManagerDelegate, UICollectionViewDataSourcePrefetching, PXSplitViewControllerChangeObserver, PXChangeObserver, PXGadgetNavigationHelperDelegate, UICollectionViewDropDelegate, UICollectionViewDelegateFlowLayout, PXGadgetDelegate>

 {
    NSMutableSet *_registeredCellReuseIdentifiers;
    NSMapTable *_cellsToGadgets;
}


@property (readonly, nonatomic) BOOL allowsBarManagement; // ivar: _allowsBarManagement
@property (readonly, nonatomic) PXGadgetAnchorHelper *anchorHelper; // ivar: _anchorHelper
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic, getter=isBatchUpdating) BOOL batchUpdating; // ivar: _batchUpdating
@property (retain, nonatomic) NSMutableSet *cellsWantingVisibleRectUpdates; // ivar: _cellsWantingVisibleRectUpdates
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (nonatomic, getter=isCurrentlyVisible) BOOL currentlyVisible; // ivar: _currentlyVisible
@property (retain, nonatomic) PXGadgetDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXGadgetDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGadgetAnimating) BOOL gadgetAnimating; // ivar: _gadgetAnimating
@property (retain, nonatomic) NSTimer *gadgetSeenTimer; // ivar: _gadgetSeenTimer
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (readonly, nonatomic) NSObject<OS_os_log> *gadgetViewControllerLog;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets insetsForSectionHeaders;
@property (retain, nonatomic) NSObject<PXGadget> *interactionPreviewGadget; // ivar: _interactionPreviewGadget
@property (retain, nonatomic) UIView *interactionPreviewView; // ivar: _interactionPreviewView
@property (retain, nonatomic) UIViewController *interactionPreviewViewController; // ivar: _interactionPreviewViewController
@property (nonatomic, setter=setContentVisible:) BOOL isContentVisible; // ivar: _isContentVisible
@property (nonatomic) BOOL isDFITogglingSidebar; // ivar: _isDFITogglingSidebar
@property (nonatomic) BOOL isInteractionPreviewCancelled; // ivar: _isInteractionPreviewCancelled
@property (nonatomic) BOOL isRotatingVerticalLayout; // ivar: _isRotatingVerticalLayout
@property (nonatomic) BOOL isScrolling; // ivar: _isScrolling
@property (readonly, nonatomic) BOOL isTogglingSidebarNoRotating;
@property (readonly, nonatomic) PXGadgetCollectionViewLayout *layout; // ivar: _layout
@property (nonatomic, getter=isLoadingGadgets) BOOL loadingGadgets; // ivar: _loadingGadgets
@property (readonly, nonatomic) PXGadgetNavigationHelper *navigationHelper; // ivar: _navigationHelper
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic) NSUInteger numberOfInitialGadgetsToLoad; // ivar: _numberOfInitialGadgetsToLoad
@property (retain, nonatomic) PXContentUnavailablePlaceholderManager *placeholderManager; // ivar: _placeholderManager
@property (retain, nonatomic) PXContentUnavailableView *placeholderView; // ivar: _placeholderView
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (retain, nonatomic) NSMutableSet *seenGadgetIdentifiers; // ivar: _seenGadgetIdentifiers
@property (retain, nonatomic) NSObject<PXGadget> *selectedGadget; // ivar: _selectedGadget
@property (readonly, nonatomic) BOOL shouldPreventPlaceholder; // ivar: _shouldPreventPlaceholder
@property (retain, nonatomic) PXGadgetSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (nonatomic) PXGadgetUpdateFlags updateFlags; // ivar: _updateFlags
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) CGRect visibleBounds;


+(Class)gadgetSpecClass;
-(BOOL)_isUsingDeprecatedViewLoadingForGadget:(id)arg0 ;
-(BOOL)anchorHelper:(id)arg0 indexPathIsFullyVisible:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSesson:(id)arg1 ;
-(BOOL)gadget:(id)arg0 transitionToViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)isRootGadgetViewController;
-(BOOL)navigateToGadget:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)navigationHelperCanCurrentlyNavigate:(id)arg0 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg0 ;
-(NSInteger)_scrollAxis;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)scrollAnimationIdentifier;
-(id)_gadgetAtIndexPath:(id)arg0 ;
-(id)_gadgetForCollectionViewCell:(id)arg0 ;
-(id)_indexPathForGadget:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)debugURLsForDiagnostics;
-(id)gadgetAtLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)gadgetDataSourceForNavigationHelper:(id)arg0 ;
-(id)gadgetViewControllerHostingGadget:(id)arg0 ;
-(id)initWithLayout:(id)arg0 dataSourceManager:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg0 ;
-(id)sortedVisibleIndexPathsForAnchorHelper:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_addContextMenuInteraction;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_clearTimerToHandleGadgetsSeen;
-(void)_configureHeader:(id)arg0 withGadgetSection:(id)arg1 ;
-(void)_gadgetSpecDidChange;
-(void)_handleGadgetsSeen;
-(void)_initializeDataSource;
-(void)_initializeHelpers;
-(void)_invalidatePlaceholder;
-(void)_notifyGadgetsThatGadgetControllerHasAppeared;
-(void)_notifyGadgetsThatGadgetControllerHasDisappeared;
-(void)_notifyPresentedGadgetsOfVisibilityChange;
-(void)_removeContextMenuInteraction;
-(void)_scrollViewDidEndScrolling;
-(void)_setGadget:(id)arg0 forCollectionViewCell:(id)arg1 ;
-(void)_setTimerToHandleGadgetsSeen;
-(void)_updateGadgetVisibleRects;
-(void)_updateHeaderForGadget:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updatePlaceholder;
-(void)_updateVisibleGadgetHeaders;
-(void)_updateVisibleRectForGadget:(id)arg0 inCell:(id)arg1 collectionView:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureSectionHeader:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)contentUnavailablePlaceholderManagerDidChange:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteractionDidEnd:(id)arg0 ;
-(void)dealloc;
-(void)dismissGadgetViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)gadget:(id)arg0 animateChanges:(id)arg1 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)gadgetControllerFinishedUpdatingDataSourceWithChange:(id)arg0 ;
-(void)navigationHelperDidNotFindValidGadget:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)presentGadgetViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)reloadContent;
-(void)rootGadgetControllerDidDisappear;
-(void)rootGadgetControllerWillAppear;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)splitViewController:(id)arg0 didChangeSidebarVisibility:(BOOL)arg1 ;
-(void)splitViewController:(id)arg0 willChangeSidebarVisibility:(BOOL)arg1 ;
-(void)updateIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif