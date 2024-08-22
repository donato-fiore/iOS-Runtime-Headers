// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDVIEWCONTROLLER_H
#define PKDASHBOARDVIEWCONTROLLER_H

@class UICollectionViewController, NSDictionary, NSMutableDictionary, NSSet, UICollectionViewLayout<PKDashboardLayout>, PKUISpringAnimationFactory, NSString;
@protocol UICollectionViewDataSourcePrefetching, PKDashboardDataSourceDelegate, PKDashboardViewControllerDelegateFlowLayout, PKDashboardDataSource, PKDashboardDelegate;


#import "PKDashboardTitleHeaderView.h"
#import "PKDashboardFooterTextView.h"

@interface PKDashboardViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PKDashboardDataSourceDelegate, PKDashboardViewControllerDelegateFlowLayout>

 {
    NSDictionary *_presentersPerIdentifier;
    *? _presentersOptionalMethods;
    NSDictionary *_presenterMethodsIndexPerIdentifier;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    NSMutableDictionary *_titlesForSection;
    PKDashboardFooterTextView *_sampleFooterView;
    NSMutableDictionary *_footerTextItemsBySection;
    CGFloat _lastScrollOffset;
    BOOL _inScrollViewDidScroll;
    NSSet *_visibleCellsExcludingSafeArea;
    UICollectionViewLayout<PKDashboardLayout> *_customLayout;
    BOOL _contentIsLoaded;
    BOOL _shouldPresentAllContent;
    BOOL _presentationAnimated;
    BOOL _isHidingContent;
    PKUISpringAnimationFactory *_collectionViewFactory;
    NSMutableDictionary *_blocksOnVisibilityChange;
}


@property (readonly, nonatomic) NSObject<PKDashboardDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDashboardDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPresentingContent; // ivar: _isPresentingContent
@property (nonatomic) BOOL shouldUseClearNavigationBar; // ivar: _shouldUseClearNavigationBar
@property (readonly) Class superclass;


+(id)backgroundColor;
-(BOOL)_isCellVisibleAtIndexPath:(id)arg0 withTopSafeArea:(CGFloat)arg1 contentOffset:(CGFloat)arg2 ;
-(BOOL)_isIndexPathAFooter:(id)arg0 ;
-(BOOL)_isIndexPathAHeader:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)itemIsIndependentInCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)itemIsStackableInCollectionView:(id)arg0 atIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(id)_actualItemIndexPathForIndexPath:(id)arg0 ;
-(id)_internalIndexPathForItemIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 presenters:(id)arg1 layout:(id)arg2 ;
-(struct ? )methodsForItemIdentifier:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_hideAllContentAnimated:(BOOL)arg0 ;
-(void)_presentAllContent;
-(void)_setupPresenters:(id)arg0 ;
-(void)_updateNavigationBarAppearance;
-(void)_updateNavigationBarVisibility;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)contentIsLoaded;
-(void)dealloc;
-(void)deleteSections:(id)arg0 ;
-(void)insertSections:(id)arg0 ;
-(void)itemChanged:(id)arg0 atIndexPath:(id)arg1 ;
// -(void)performBatchUpdates:(id)arg0 completion:(unk)arg1  ;
-(void)reloadSections:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
// -(void)setActionForVisibilityChange:(id)arg0 indexPath:(unk)arg1  ;
-(void)shouldPresentAllContent:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContent;
-(void)viewDidLoad;


@end


#endif