// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMREORDERINGTHUMBNAILCOLLECTIONVIEWLAYOUT_H
#define ICDOCCAMREORDERINGTHUMBNAILCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSString, NSMutableArray, NSArray;
@protocol UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate;



@interface ICDocCamReorderingThumbnailCollectionViewLayout : UICollectionViewLayout <UICollectionViewDelegate>



@property (nonatomic) CGSize cachedContentSize; // ivar: _cachedContentSize
@property (nonatomic) CGFloat currentInterPageScrollPosition; // ivar: _currentInterPageScrollPosition
@property (nonatomic) NSUInteger currentItem; // ivar: _currentItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<ICDocCamThumbnailViewLayoutDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths; // ivar: _deleteIndexPaths
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat extraSpacingForCurrentItem;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *imageSizeCache; // ivar: _imageSizeCache
@property (retain, nonatomic) NSMutableArray *insertIndexPaths; // ivar: _insertIndexPaths
@property (nonatomic) BOOL isScrollingBetweenPages; // ivar: _isScrollingBetweenPages
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (nonatomic) BOOL isUndergoingOrientationChange; // ivar: _isUndergoingOrientationChange
@property (copy, nonatomic) NSArray *itemAttributes; // ivar: _itemAttributes
@property (nonatomic) CGFloat itemHeight; // ivar: _itemHeight
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (nonatomic) BOOL layoutCacheIsValid; // ivar: _layoutCacheIsValid
@property (nonatomic) CGFloat leftMargin; // ivar: _leftMargin
@property (nonatomic) BOOL movingItem; // ivar: _movingItem
@property (nonatomic) CGFloat rightMargin; // ivar: _rightMargin
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topBottomMargins; // ivar: _topBottomMargins


+(CGFloat)effectiveAspectRatioForSize:(struct CGSize )arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)horizontalContentOffsetAdjustmentForItem:(NSUInteger)arg0 ;
-(CGFloat)horizontalContentOffsetForItem:(NSUInteger)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )collectionViewContentSize;
-(struct CGSize )itemSizeForImageSize:(struct CGSize )arg0 ;
-(void)finalizeCollectionViewUpdates;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareLayout;
-(void)setContentOffsetForItem:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setInterPageScrollPosition:(CGFloat)arg0 ;
-(void)updateLayoutCacheIfNecessary;


@end


#endif