// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTCOLLECTIONVIEWFLOWLAYOUT_H
#define NTKUPNEXTCOLLECTIONVIEWFLOWLAYOUT_H

@class UICollectionViewFlowLayout, CLKDevice, NSDictionary, NSSet, NSIndexPath;


#import "NTKUpNextCollectionViewFlowLayoutAttributes.h"

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout {
    CLKDevice *_device;
    NSDictionary *_layoutInfo;
    NSDictionary *_headerLayoutInfo;
    NTKUpNextCollectionViewFlowLayoutAttributes *_decorationLayoutInfo;
    NSSet *_previousSectionsWithHeaders;
    NSSet *_sectionsWithHeaders;
    BOOL _needsHeaderUpdate;
    BOOL _needsInsetsUpdate;
}


@property (retain, nonatomic) NSIndexPath *bottomElementIndexPath; // ivar: _bottomElementIndexPath
@property (readonly, nonatomic) NSSet *dwellIndexPathes; // ivar: _dwellIndexPathes
@property (nonatomic) CGFloat headerAlpha; // ivar: _headerAlpha
@property (nonatomic) CGFloat highTransitionBottomOffset; // ivar: _highTransitionBottomOffset
@property (nonatomic) CGFloat highTransitionScale; // ivar: _highTransitionScale
@property (nonatomic) CGFloat highTransitionShift; // ivar: _highTransitionShift
@property (retain, nonatomic) NSIndexPath *indexPathToSnapTo; // ivar: _indexPathToSnapTo
@property (nonatomic) CGFloat lowTransitionScale; // ivar: _lowTransitionScale
@property (nonatomic) CGFloat lowTransitionShift; // ivar: _lowTransitionShift
@property (nonatomic) CGFloat maximumDarkeningAmount; // ivar: _maximumDarkeningAmount
@property (nonatomic, getter=isShowingAllAttributes) BOOL showingAllAttributes; // ivar: _showingAllAttributes
@property (nonatomic, getter=isSnappingEnabled) BOOL snappingEnabled; // ivar: _snappingEnabled
@property (nonatomic) CGFloat snappingOffset; // ivar: _snappingOffset
@property (nonatomic) CGFloat statusBarDecorationHeight; // ivar: _statusBarDecorationHeight
@property (retain, nonatomic) NSIndexPath *topElementIndexPath; // ivar: _topElementIndexPath
@property (nonatomic) CGFloat topItemsAlpha; // ivar: _topItemsAlpha
@property (nonatomic) CGFloat topItemsShift; // ivar: _topItemsShift
@property (nonatomic) CGFloat topOffsetForScrolling; // ivar: _topOffsetForScrolling
@property (nonatomic) CGFloat topOffsetForSnapping; // ivar: _topOffsetForSnapping
@property (nonatomic) BOOL useFixedLowTransitionLayout; // ivar: _useFixedLowTransitionLayout


+(Class)layoutAttributesClass;
-(BOOL)_hasHeaderForSection:(NSInteger)arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)flowLayoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg0 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(void)_updateContentInsetsIfNeeded;
-(void)_updateSectionHeaderListIfNeeded;
-(void)_updateVisibilityForLayoutAttributes:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif