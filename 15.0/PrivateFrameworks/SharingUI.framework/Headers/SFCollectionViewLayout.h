// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCOLLECTIONVIEWLAYOUT_H
#define SFCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSArray;
@protocol SFCollectionViewDelegateLayout;



@interface SFCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) CGSize evaluatedContentSize; // ivar: _evaluatedContentSize
@property (nonatomic) CGFloat evaluatedHorizontalItemOffset; // ivar: _evaluatedHorizontalItemOffset
@property (nonatomic) UIEdgeInsets evaluatedInset; // ivar: _evaluatedInset
@property (nonatomic) CGSize evaluatedItemSize; // ivar: _evaluatedItemSize
@property (weak, nonatomic) NSObject<SFCollectionViewDelegateLayout> *fallbackDelegate; // ivar: _fallbackDelegate
@property (copy, nonatomic) NSArray *preparedLayoutAttributes; // ivar: _preparedLayoutAttributes
@property (copy, nonatomic) NSArray *preparedUpdateItems; // ivar: _preparedUpdateItems


-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldReverseLayoutDirection;
-(CGFloat)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize )arg0 inset:(struct UIEdgeInsets )arg1 containerWidth:(CGFloat)arg2 offscreenPeekInFactor:(float)arg3 ;
-(id)_indexPathsForItemsInSection:(NSInteger)arg0 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg0 numberOfItemsInSection:(NSUInteger)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )firstItemCenterForContainerWidth:(CGFloat)arg0 ;
-(struct CGSize )_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(struct UIEdgeInsets )_evaluateInsetForSectionAtIndex:(NSInteger)arg0 ;
-(void)calculateLayoutValuesForIndexPaths:(id)arg0 containerWidth:(CGFloat)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)invalidateGroupViewLayoutAnimated:(BOOL)arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareLayout;


@end


#endif