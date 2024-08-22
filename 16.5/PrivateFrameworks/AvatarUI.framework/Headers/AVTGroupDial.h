// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTGROUPDIAL_H
#define AVTGROUPDIAL_H

@class UIView, NSArray, UICollectionView, UICollectionViewFlowLayout, NSString, NSIndexPath;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AVTGroupPicker, AVTGroupPickerDelegate;


#import "AVTCenteringCollectionViewDelegate.h"
#import "AVTUIEnvironment.h"
#import "AVTGroupDialMaskingView.h"

@interface AVTGroupDial : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AVTGroupPicker>



@property (readonly, nonatomic) NSArray *cachedGroupTitleSizes; // ivar: _cachedGroupTitleSizes
@property (readonly, nonatomic) AVTCenteringCollectionViewDelegate *centeringCollectionViewDelegate; // ivar: _centeringCollectionViewDelegate
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (nonatomic) NSUInteger currentScrollDirection; // ivar: _currentScrollDirection
@property (nonatomic) NSInteger currentSelectedItemIndex; // ivar: _currentSelectedItemIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTGroupPickerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSArray *groupItems; // ivar: _groupItems
@property (nonatomic) BOOL hasFinalizedSelection; // ivar: _hasFinalizedSelection
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMoving; // ivar: _isMoving
@property (retain, nonatomic) AVTGroupDialMaskingView *maskingView; // ivar: _maskingView
@property (nonatomic) NSInteger selectedGroupIndex;
@property (nonatomic) NSIndexPath *shimmeringItemIndexPath; // ivar: _shimmeringItemIndexPath
@property (readonly) Class superclass;


+(BOOL)shouldScrollGivenTitleSizes:(id)arg0 fittingWidth:(CGFloat)arg1 ;
+(CGFloat)estimatedContentWidthForTitleSizes:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithGroupItems:(id)arg0 environment:(id)arg1 ;
-(struct CGSize )cellSizeForItemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)cacheTitleSizes;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectItemAtIndex:(NSInteger)arg0 updateScrollPosition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentPadding:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setupDial;
-(void)setupMasking;
-(void)startDiscoverability;
-(void)stopDiscoverability;
-(void)updateForEndingScroll;
-(void)updateSelectedState:(BOOL)arg0 forItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif