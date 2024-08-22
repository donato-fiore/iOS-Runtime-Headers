// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTOREPAGESECTIONSVIEWCONTROLLER_H
#define SKUISTOREPAGESECTIONSVIEWCONTROLLER_H

@class UITapGestureRecognizer, NSMapTable, NSMutableIndexSet, NSIndexPath, NSArray, NSNumber, UIRefreshControl, UIView, UICollectionView, NSString;
@protocol UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIProductPageOverlayDelegate, SKUIStorePageCollectionViewDelegate, SKUIViewControllerTesting, UICollectionViewDataSource, UIGestureRecognizerDelegate, UIViewControllerPreviewing, SKUIStorePageSectionsDelegate, SKUICollectionViewPullToRefreshDelegate;


#import "SKUIViewController.h"
#import "SKUIProductPageOverlayController.h"
#import "SKUICollectionView.h"
#import "SKUIStorePageSplitsDescription.h"
#import "SKUIStackedBar.h"
#import "SKUILayoutCache.h"
#import "SKUIMetricsImpressionSession.h"
#import "SKUIColorScheme.h"
#import "SKUIIndexBarControl.h"
#import "SKUIMetricsController.h"
#import "SKUIResourceLoader.h"

@interface SKUIStorePageSectionsViewController : SKUIViewController <UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIProductPageOverlayDelegate, SKUIStorePageCollectionViewDelegate, SKUIViewControllerTesting, UICollectionViewDataSource, UIGestureRecognizerDelegate>

 {
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUICollectionView *_collectionView;
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;
    UIEdgeInsets _contentInsetAdjustments;
    id *_deferredSplitsDescription;
    BOOL _delegateWantsDidScroll;
    BOOL _delegateWantsWillScrollToOffsetVisibleRange;
    BOOL _didInitialReload;
    NSMapTable *_entityProviderToRelevantSections;
    NSMapTable *_expandSectionContexts;
    NSMutableIndexSet *_expandInsertSections;
    NSMutableIndexSet *_expandRemoveSections;
    NSInteger _ignoreSectionsChangeCount;
    NSIndexPath *_indexPathOfEditedCell;
    NSArray *_initialOverlayURLs;
    NSNumber *_lastKnownWidth;
    NSInteger _layoutStyle;
    NSMapTable *_menuSectionContexts;
    SKUIProductPageOverlayController *_overlayController;
    id<UIViewControllerPreviewing> *_viewControllerPreviewing;
    UIRefreshControl *_refreshControl;
    BOOL _rendersWithParallax;
    BOOL _rendersWithPerspective;
    BOOL _scrollOffsetHasChanged;
    SKUIStorePageSplitsDescription *_splitsDescription;
    UIView *_splitsDividerView;
    SKUIStackedBar *_stackedBar;
    SKUILayoutCache *_textLayoutCache;
    NSInteger _lastInterfaceOrientation;
    BOOL _itemsChangedStateWhileDisappeared;
}


@property (retain, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // ivar: _activeMetricsImpressionSession
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIStorePageSectionsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingOverlays) BOOL displayingOverlays;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIIndexBarControl *indexBarControl; // ivar: _indexBarControl
@property (retain, nonatomic) SKUIMetricsController *metricsController; // ivar: _metricsController
@property (nonatomic) NSInteger pinningTransitionStyle; // ivar: _pinningTransitionStyle
@property (weak, nonatomic) NSObject<SKUICollectionViewPullToRefreshDelegate> *pullToRefreshDelegate; // ivar: _pullToRefreshDelegate
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canScrollCellAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)performTestWithName:(id)arg0 options:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 pinningGroupForItemAtIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 pinningStyleForItemAtIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 layout:(id)arg1 pinningTransitionStyleForItemAtIndexPath:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)SKUIStackedBar;
-(id)_childSectionsForMenuComponent:(id)arg0 selectedIndex:(NSInteger)arg1 ;
-(id)_createSectionsForExpandPageComponent:(id)arg0 context:(id)arg1 newSections:(id)arg2 sectionCount:(NSInteger)arg3 sectionsByViewElement:(id)arg4 updateStyle:(NSInteger)arg5 ;
-(id)_currentBackdropGroupName;
-(id)_defaultSectionForGridComponent:(id)arg0 ;
-(id)_defaultSectionForSwooshComponent:(id)arg0 ;
-(id)_expandContextForMenuComponent:(id)arg0 ;
-(id)_impressionableViewElements;
-(id)_menuContextForMenuComponent:(id)arg0 ;
-(id)_newSectionContext;
-(id)_newSectionsWithPageComponent:(id)arg0 ;
-(id)_newSectionsWithPageComponents:(id)arg0 ;
-(id)_newStorePageCollectionViewLayout;
-(id)_prepareLayoutForSections;
-(id)_splitForSectionIndex:(NSInteger)arg0 ;
-(id)_textLayoutCache;
-(id)_visibleMetricsImpressionsString;
-(id)backgroundColorForSection:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)defaultSectionForComponent:(id)arg0 ;
-(id)indexPathsForGradientItemsInCollectionView:(id)arg0 layout:(id)arg1 ;
-(id)indexPathsForPinningItemsInCollectionView:(id)arg0 layout:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 pinningContentInsetForItemAtIndexPath:(id)arg2 ;
-(void)_applyColorScheme:(id)arg0 toIndexBarControl:(id)arg1 ;
-(void)_beginActiveImpressionsForImpressionableViewElements;
-(void)_beginIgnoringSectionChanges;
-(void)_contentSizeChangeNotification:(id)arg0 ;
-(void)_deselectCellsForAppearance:(BOOL)arg0 ;
-(void)_endAllPendingActiveImpression;
-(void)_endIgnoringSectionChanges;
-(void)_entityProviderDidInvalidateNotification:(id)arg0 ;
-(void)_enumerateSectionContextsUsingBlock:(id)arg0 ;
-(void)_enumerateVisibleSectionsUsingBlock:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_insertSectionsWithComponents:(id)arg0 afterSection:(id)arg1 ;
-(void)_invalidateIfLastKnownWidthChanged;
-(void)_invalidateLayoutWithNewSize:(struct CGSize )arg0 transitionCoordinator:(id)arg1 ;
-(void)_longPressAction:(id)arg0 ;
-(void)_pageSectionDidDismissOverlayController:(id)arg0 ;
-(void)_prefetchArtworkForVisibleSections;
-(void)_registerForNotificationsForEntityProvider:(id)arg0 ;
-(void)_reloadCollectionView;
-(void)_reloadRelevantEntityProviders;
-(void)_scrollFirstAppearanceSectionToView;
-(void)_setActiveProductPageOverlayController:(id)arg0 ;
-(void)_setPageSize:(struct CGSize )arg0 ;
-(void)_setRendersWithParallax:(BOOL)arg0 ;
-(void)_setRendersWithPerspective:(BOOL)arg0 ;
-(void)_setSelectedIndex:(NSInteger)arg0 forMenuSection:(id)arg1 ;
-(void)_startRefresh:(id)arg0 ;
-(void)_unregisterForNotificationsForEntityProvider:(id)arg0 ;
-(void)_updateCollectionViewWithUpdates:(id)arg0 ;
-(void)_updateSectionsAfterMenuChange;
-(void)_updateSectionsForIndex:(NSInteger)arg0 menuSection:(id)arg1 ;
-(void)collectionView:(id)arg0 didConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndEditingItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 editorialView:(id)arg1 didSelectLink:(id)arg2 ;
-(void)collectionView:(id)arg0 expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 layout:(id)arg1 willApplyLayoutAttributes:(id)arg2 ;
-(void)collectionView:(id)arg0 performDefaultActionForViewElement:(id)arg1 indexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willBeginEditingItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)dismissOverlays;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)invalidateAndReload;
-(void)itemCollectionView:(id)arg0 didConfirmItemOfferForCell:(id)arg1 ;
-(void)itemCollectionView:(id)arg0 didTapVideoForCollectionViewCell:(id)arg1 ;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)loadView;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)productPageOverlayDidDismiss:(id)arg0 ;
-(void)reloadSections:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setSKUIStackedBar:(id)arg0 ;
-(void)setUsePullToRefresh:(BOOL)arg0 ;
-(void)showOverlayWithProductPage:(id)arg0 metricsPageEvent:(id)arg1 ;
-(void)skuiCollectionViewWillLayoutSubviews:(id)arg0 ;
-(void)skui_viewWillAppear:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;


@end


#endif