// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREVIEWSCRUBBER_H
#define PUREVIEWSCRUBBER_H

@class UIToolbar, UIImageView, _UIBackdropView, UICollectionView, UIImpactFeedbackGenerator, NSIndexPath, UITapGestureRecognizer, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, PUReviewScrubberDataSource, PUReviewScrubberDelegate;


#import "PUHorizontalCollectionViewLayout.h"

@interface PUReviewScrubber : UIToolbar <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>



@property (readonly, nonatomic) UIImageView *_arrowImageView; // ivar: __arrowImageView
@property (readonly, nonatomic) _UIBackdropView *_backdropView; // ivar: __backdropView
@property (readonly, nonatomic) UICollectionView *_collectionView; // ivar: __collectionView
@property (readonly, nonatomic) PUHorizontalCollectionViewLayout *_collectionViewLayout; // ivar: __collectionViewLayout
@property (readonly, nonatomic) BOOL _ignoreScrollViewDidScrollUpdate; // ivar: __ignoreScrollViewDidScrollUpdate
@property (readonly, nonatomic) UIImpactFeedbackGenerator *_impactFeedbackBehavior; // ivar: __impactFeedbackBehavior
@property (retain, nonatomic, setter=_setIndexPathForPreviousFeedbackQuery:) NSIndexPath *_indexPathForPreviousFeedbackQuery; // ivar: __indexPathForPreviousFeedbackQuery
@property (readonly, nonatomic) BOOL _performingInteractiveUpdate; // ivar: __performingInteractiveUpdate
@property (readonly, nonatomic) UIImageView *_shadowView; // ivar: __shadowView
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (retain, nonatomic) NSString *cellReuseIdentifier; // ivar: _cellReuseIdentifier
@property (nonatomic) NSObject<PUReviewScrubberDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) Class scrubberCellClass; // ivar: _scrubberCellClass
@property (nonatomic) NSObject<PUReviewScrubberDelegate> *scrubberDelegate; // ivar: _scrubberDelegate
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isMinibar;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_indexPathInCollectionView:(id)arg0 closestToPoint:(struct CGPoint )arg1 excludingIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)indexPathUnderTickMarkInCollectionView:(id)arg0 atContentOffset:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )contentOffsetForIndexPath:(id)arg0 inCollectionView:(id)arg1 ;
-(struct CGPoint )contentOffsetForItemAtIndex:(NSInteger)arg0 ofScrollView:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_beginFeedbackInteraction;
-(void)_commonPUReviewScrubberInitialization;
-(void)_endFeedbackInteraction;
-(void)_handleTapAtIndexPath:(id)arg0 ;
-(void)_handleTapOnReviewScrubber:(id)arg0 ;
-(void)_notifyDelegateOfScrub;
-(void)_notifyDelegateOfSelection;
-(void)_playFeedbackIfNeeded;
-(void)_updateContentOffsetForSelectedIndexPathAnimated:(BOOL)arg0 ;
-(void)_updateToSelectedIndexPath:(id)arg0 ;
-(void)beginInteractiveUpdate;
-(void)dealloc;
-(void)finishInteractiveUpdate;
-(void)layoutSubviews;
-(void)reloadData;
-(void)reloadIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadSelectedIndexPathAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)toggleIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)toggleSelectedIndexPathAnimated:(BOOL)arg0 ;
-(void)updateWithAbsoluteProgress:(CGFloat)arg0 ;


@end


#endif