// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCOLLECTIONSCAROUSELVIEW_H
#define MKCOLLECTIONSCAROUSELVIEW_H

@class UIView, UICollectionView, UIStackView, NSString, GEOExploreGuides, UICollectionViewFlowLayout;
@protocol UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MKCollectionCarouselSizeProvider, MKCollectionCarouselUpdater, OS_dispatch_queue, MKCollectionCarouselAnalyticsDelegate, MKCollectionCarouselRoutingDelegate, UIScrollViewDelegate, MKCollectionsSizeProvider;


#import "MKPlaceCollectionsLogicController.h"

@interface MKCollectionsCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MKCollectionCarouselSizeProvider, MKCollectionCarouselUpdater>

 {
    ? _collectionsConfiguration;
    BOOL _hasDisplayedCollections;
    NSObject<OS_dispatch_queue> *_utilityQueue;
}


@property (weak, nonatomic) NSObject<MKCollectionCarouselAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (nonatomic) NSInteger carouselContext; // ivar: _carouselContext
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) CGPoint contentOffset;
@property (readonly, nonatomic) CGSize contentSize;
@property (retain, nonatomic) UIStackView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOExploreGuides *exploreGuides; // ivar: _exploreGuides
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKPlaceCollectionsLogicController *logicController; // ivar: _logicController
@property (weak, nonatomic) NSObject<MKCollectionCarouselRoutingDelegate> *routingDelegate; // ivar: _routingDelegate
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (retain, nonatomic) NSObject<MKCollectionsSizeProvider> *sizeController; // ivar: _sizeController
@property (readonly) Class superclass;


+(CGFloat)horizontalLayoutHeightInContext:(NSInteger)arg0 includeExploreGuidesHeight:(BOOL)arg1 isSingleCollection:(BOOL)arg2 ;
+(CGFloat)verticalLayoutHeightWithNumberOfItems:(NSUInteger)arg0 maxWidth:(CGFloat)arg1 usingTraitEnvironment:(id)arg2 inContext:(NSInteger)arg3 ;
-(BOOL)isDisplayingCollections;
-(BOOL)isShowingExploreGuides;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(id)initCollectionsCarouselViewWithContext:(NSInteger)arg0 withPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 withRoutingDelegate:(id)arg3 withScrollViewDelegate:(id)arg4 withAnalyticsDelegate:(id)arg5 exploreGuides:(id)arg6 ;
-(id)visibleFocusItems;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCarouselCollectionView;
-(void)configureCarouselMetadata:(NSInteger)arg0 ;
-(void)dismissedCollections;
-(void)displayCollections;
-(void)displayCollectionsUsingBatchIds:(id)arg0 usingGuideFetcher:(id)arg1 ;
-(void)fetchCollections;
-(void)refreshCollections;
-(void)resetCollectionsLayout;
-(void)resetScrollOffset;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateCollections:(id)arg0 ;


@end


#endif