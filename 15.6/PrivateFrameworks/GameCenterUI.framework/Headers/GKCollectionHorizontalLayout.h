// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCOLLECTIONHORIZONTALLAYOUT_H
#define GKCOLLECTIONHORIZONTALLAYOUT_H

@class NSDictionary;


#import "GKCollectionFocusingLayout.h"

@interface GKCollectionHorizontalLayout : GKCollectionFocusingLayout

@property (nonatomic) BOOL alignItemsToTop; // ivar: _alignItemsToTop
@property (nonatomic) BOOL centersItemsInExcessSpace; // ivar: _centersItemsInExcessSpace
@property (nonatomic) CGFloat extraSectionHeaderToCellSpace; // ivar: _extraSectionHeaderToCellSpace
@property (retain, nonatomic) NSDictionary *headerAttributes; // ivar: _headerAttributes
@property (retain, nonatomic) NSDictionary *itemAttributes; // ivar: _itemAttributes
@property (nonatomic) CGFloat scrollStepIntegral; // ivar: _scrollStepIntegral


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)maxHeaderHeight;
-(NSInteger)firstValidSection;
-(NSInteger)lastValidSection;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)applyDefaults;
-(void)prepareLayout;


@end


#endif