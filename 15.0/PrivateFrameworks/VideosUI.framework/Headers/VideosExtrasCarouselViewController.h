// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASCAROUSELVIEWCONTROLLER_H
#define VIDEOSEXTRASCAROUSELVIEWCONTROLLER_H

@class UIViewController, UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout>, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasCarouselCollectionViewDelegate, VideosExtrasZoomingImageTransitionParticipant, VideosExtrasCarouselViewControllerDataSource, VideosExtrasCarouselViewControllerDelegate;


#import "VideosExtrasCarouselCollectionView.h"

@interface VideosExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasCarouselCollectionViewDelegate, VideosExtrasZoomingImageTransitionParticipant>



@property (retain, nonatomic) VideosExtrasCarouselCollectionView *carouselCollectionView; // ivar: _carouselCollectionView
@property (retain, nonatomic) UICollectionViewLayout<VideosExtrasCarouselCollectionViewLayout> *carouselCollectionViewLayout; // ivar: _carouselCollectionViewLayout
@property (weak, nonatomic) NSObject<VideosExtrasCarouselViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VideosExtrasCarouselViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger indexOfVisibleItem;
@property (nonatomic, getter=isRevealingNavigationBarDuringTransition) BOOL revealingNavigationBarDuringTransition; // ivar: _revealingNavigationBarDuringTransition
@property (readonly) Class superclass;


-(BOOL)_isPhone;
-(NSInteger)_numberOfItems;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_findSnappingItemFromContentOffset:(struct CGPoint *)arg0 withVelocity:(struct CGPoint )arg1 ;
-(id)carouselCollectionViewCellForItemAtIndex:(NSUInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_ensureScrollViewSnaps;
-(void)_loadCarouselCollectionViewInView:(id)arg0 withContraintsAccumulator:(id)arg1 ;
-(void)_snapTargetContentOffset:(struct CGPoint *)arg0 toItemIndexPath:(id)arg1 atItemOffset:(struct CGPoint )arg2 ;
-(void)_updateOpacityOfTextInVisibleCells;
-(void)_updateWindowSizeForVisibleCells;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg0 transitionFinished:(BOOL)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg0 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)subviewsDidChangeForCarouselCollectionView:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif