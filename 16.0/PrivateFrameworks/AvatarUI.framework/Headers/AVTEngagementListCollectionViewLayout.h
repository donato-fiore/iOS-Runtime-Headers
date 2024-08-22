// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTENGAGEMENTLISTCOLLECTIONVIEWLAYOUT_H
#define AVTENGAGEMENTLISTCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSValue;
@protocol AVTCollectionViewLayout;


#import "AVTEngagementLayout.h"

@interface AVTEngagementListCollectionViewLayout : UICollectionViewLayout <AVTCollectionViewLayout>



@property (readonly, nonatomic) AVTEngagementLayout *engagementLayout; // ivar: _engagementLayout
@property (retain, nonatomic) NSValue *ignoredProposedContentOffset; // ivar: _ignoredProposedContentOffset
@property (retain, nonatomic) NSValue *targetContentOffset; // ivar: _targetContentOffset


-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)indexesForElementsInRect:(struct CGRect )arg0 visibleBounds:(struct CGRect )arg1 numberOfItems:(NSInteger)arg2 ;
-(id)initWithEngagementLayout:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )centerForCenteringElementAtIndex:(NSInteger)arg0 visibleBoundsSize:(struct CGSize )arg1 proposedOrigin:(struct CGPoint )arg2 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGRect )frameForElementAtIndex:(NSInteger)arg0 visibleBounds:(struct CGRect )arg1 ;
-(struct CGSize )collectionViewContentSize;
-(struct CGSize )contentSizeForVisibleBounds:(struct CGRect )arg0 numberOfItems:(NSInteger)arg1 ;
-(struct UIEdgeInsets )engagementInsetsForCollectionViewBounds:(struct CGSize )arg0 ;
-(void)clearTargetContentOffsetForAnimations;
-(void)invalidateLayout;


@end


#endif