// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGADGETCOLLECTIONVIEWLAYOUT_H
#define PXGADGETCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, NSString;
@protocol UICollectionViewDelegateFlowLayout, PXGadgetCollectionViewLayoutDelegate;


#import "PXGadgetSpec.h"

@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout>



@property (nonatomic) CGFloat columnWidth; // ivar: _columnWidth
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetCollectionViewLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interSectionSpacing; // ivar: _interSectionSpacing
@property (nonatomic) BOOL isPageFullColumnnWidth; // ivar: _isPageFullColumnnWidth
@property (nonatomic) NSInteger pageSizeClass; // ivar: _pageSizeClass
@property (nonatomic) BOOL prefersPagingEnabled; // ivar: _prefersPagingEnabled
@property (retain, nonatomic) PXGadgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(BOOL)_disablesDoubleSidedAnimations;
-(BOOL)_hasButtonForGadget:(id)arg0 ;
-(BOOL)_shouldShowSectionHeaderForGadget:(id)arg0 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSUInteger)_buttonTypeForGadget:(id)arg0 ;
-(NSUInteger)_sectionHeaderStyleForGadget:(id)arg0 ;
-(id)_titleForGadget:(id)arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_updateMinimumLineSpacing;
-(void)setScrollDirection:(NSInteger)arg0 ;


@end


#endif