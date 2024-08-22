// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVMLSHELFVIEWLAYOUT_H
#define _TVMLSHELFVIEWLAYOUT_H

@class TVShelfViewLayout;



@interface _TVMLShelfViewLayout : TVShelfViewLayout

@property (nonatomic) CGFloat cachedTallestHeaderHeight; // ivar: _cachedTallestHeaderHeight
@property (nonatomic) TVCellMetrics cellMetrics; // ivar: _cellMetrics
@property (nonatomic) CGFloat showcaseFactor; // ivar: _showcaseFactor


-(CGFloat)expectedLineSpacing;
-(CGFloat)headerAllowance;
-(id)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 type:(id)arg2 ;
-(id)contentRowMetricsForShowcase:(BOOL)arg0 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(void)invalidateLayoutWithContext:(id)arg0 ;


@end


#endif