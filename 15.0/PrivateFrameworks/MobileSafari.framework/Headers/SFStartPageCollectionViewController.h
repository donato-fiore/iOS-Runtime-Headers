// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTARTPAGECOLLECTIONVIEWCONTROLLER_H
#define SFSTARTPAGECOLLECTIONVIEWCONTROLLER_H

@class UIViewController, UICollectionViewDiffableDataSource, UICollectionView, UIVisualEffectView, UIView, UITapGestureRecognizer, NSMapTable, NSString, UIScrollView;
@protocol UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDragDelegate_Private, UICollectionViewDropDelegate_Private, SFStartPageDataSourceObserving, SFStartPageVisualStyleProviding, SFStartPageCollectionDataSource, SFStartPageCollectionDelegate><SFStartPagePreviewProviding;


#import "SFSectionModel.h"

@interface SFStartPageCollectionViewController : UIViewController <UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDragDelegate_Private, UICollectionViewDropDelegate_Private, SFStartPageDataSourceObserving>

 {
    SFSectionModel *_cachedCustomizationSection;
    UICollectionViewDiffableDataSource *_collectionDataSource;
    UICollectionView *_collectionView;
    BOOL _hasAppliedInitialSnapshot;
    BOOL _hasDeferredUpdates;
    CGFloat _keyboardBottomInset;
    CGFloat _lastLayoutWidth;
    UIVisualEffectView *_navigationBarBackdrop;
    UIView *_navigationBarSeparator;
    UIVisualEffectView *_statusBarBackdrop;
    UIView *_statusBarSeparator;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    id<SFStartPageVisualStyleProviding> *_visualStyleProvider;
    NSMapTable *_contextMenuToItemIdentifierMap;
}


@property (weak, nonatomic) NSObject<SFStartPageCollectionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFStartPageCollectionDelegate><SFStartPagePreviewProviding> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysSectionHeaders; // ivar: _displaysSectionHeaders
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesEmptyNavigationBar; // ivar: _hidesEmptyNavigationBar
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSObject<SFStartPageCollectionDataSource> *strongDataSource; // ivar: _strongDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsWallpaperHiddenForCurrentBackgroundStyle; // ivar: _wantsWallpaperHiddenForCurrentBackgroundStyle


-(BOOL)_canDrop;
-(BOOL)_shouldShowContextMenuForCellAtIndexPath:(id)arg0 fromPoint:(struct CGPoint )arg1 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 dragSessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)scrollDistance;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)_collectionView:(id)arg0 dataOwnerForDropSession:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(NSUInteger)_collapsedCapacityForSection:(id)arg0 ;
-(NSUInteger)_itemLimitForSection:(id)arg0 ;
-(id)_bannerSectionLayoutForEnvironment:(id)arg0 includingHeader:(BOOL)arg1 ;
-(id)_collectionView:(id)arg0 supplementaryViewWithKind:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_currentSnapshot;
-(id)_customizationSection;
-(id)_dragPreviewParametersForSourceView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_layoutForSectionAtIndex:(NSInteger)arg0 inEnvironment:(id)arg1 ;
-(id)_makeCollectionViewLayout;
-(id)_previewForCellAtIndexPath:(id)arg0 ;
-(id)_reuseIdentifierForCellWithIdentifier:(id)arg0 indexPath:(id)arg1 ;
-(id)_richLinkSectionLayoutForEnvironment:(id)arg0 ;
-(id)_sectionForIdentifier:(id)arg0 ;
-(id)_siteCardSectionLayoutForEnvironment:(id)arg0 ;
-(id)_siteIconSectionLayoutForEnvironment:(id)arg0 ;
-(id)_siteRowSectionLayoutForEnvironment:(id)arg0 ;
-(id)_toggleExpandedActionForSectionIdentifier:(id)arg0 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 dragPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropPreviewParametersForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithVisualStyleProvider:(id)arg0 ;
-(id)sections;
-(struct ? )_siteIconLayoutForEnvironment:(id)arg0 sectionInsets:(struct NSDirectionalEdgeInsets )arg1 ;
-(struct NSDirectionalEdgeInsets )_sectionContentInsets;
-(void)_applyCurrentSnapshotAnimatingDifferences:(BOOL)arg0 ;
-(void)_configureCell:(id)arg0 forIdentifier:(id)arg1 indexPath:(id)arg2 ;
-(void)_configureHeader:(id)arg0 forSection:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_receivedTapToDismissGesture;
-(void)_setUpDataSource:(id)arg0 ;
-(void)_updateCustomTopBackdrops;
-(void)_updateInteractionEnabled;
-(void)_updateInteractionEnabledForView:(id)arg0 ;
-(void)_updateNavigationItemAnimated:(BOOL)arg0 ;
-(void)cancelGestures;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)collectionView:(id)arg0 dropSessionDidExit:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)configureModelWithIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)navigationBarPositionDidChange;
-(void)presentViewController:(id)arg0 fromItemWithIdentifier:(id)arg1 ;
-(void)reloadDataAnimatingDifferences:(BOOL)arg0 ;
-(void)reloadNavigationItemAnimated:(BOOL)arg0 ;
-(void)reloadSection:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollToTop;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundStyle;
-(void)updateCollectionViewContentInset;
-(void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect )arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewIsAppearing:(BOOL)arg0 ;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif