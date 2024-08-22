// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCCYCLETIMELINEFLOWLAYOUT_H
#define HKMCCYCLETIMELINEFLOWLAYOUT_H

@class UICollectionViewFlowLayout, NSArray, NSIndexPath;


#import "HKMCCycleTimelinePillConfiguration.h"

@interface HKMCCycleTimelineFlowLayout : UICollectionViewFlowLayout {
    CGFloat _yOffset;
    NSArray *_pillConfigurations;
    HKMCCycleTimelinePillConfiguration *_introPillConfiguration;
    CGFloat _pillAspectRatio;
    CGFloat _centerPillHeight;
    CGSize _cellSize;
    CGFloat _totalZoomWidth;
    NSIndexPath *_centerIndexPath;
    _NSRange _zoomRange;
    CGFloat _offsetFactor;
    CGFloat _zoomAreaOffset;
}


@property (readonly, nonatomic) CGFloat configuredWidth;


+(Class)layoutAttributesClass;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)_pillOriginXAtZoomIndex:(NSInteger)arg0 centerPill:(BOOL)arg1 ;
-(id)_configurationAtIndex:(NSInteger)arg0 ;
-(id)initWithYOffset:(CGFloat)arg0 pillConfigurations:(id)arg1 introPillConfiguration:(id)arg2 pillAspectRatio:(CGFloat)arg3 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGRect )_pillFrameAtZoomIndex:(NSInteger)arg0 ;
-(void)_configureLayoutAttributes:(id)arg0 ;
-(void)prepareLayout;


@end


#endif