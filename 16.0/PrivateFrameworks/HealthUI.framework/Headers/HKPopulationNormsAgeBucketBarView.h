// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPOPULATIONNORMSAGEBUCKETBARVIEW_H
#define HKPOPULATIONNORMSAGEBUCKETBARVIEW_H

@class UIView, NSArray, UIColor, CATextLayer, CALayer, NSDictionary;



@interface HKPopulationNormsAgeBucketBarView : UIView

@property (retain, nonatomic) NSArray *ascendingThresholds; // ivar: _ascendingThresholds
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) CATextLayer *highlightedBottomLabelLayer; // ivar: _highlightedBottomLabelLayer
@property (retain, nonatomic) CALayer *highlightedLayer; // ivar: _highlightedLayer
@property (nonatomic) CGFloat highlightedSectionMaxY; // ivar: _highlightedSectionMaxY
@property (nonatomic) CGFloat highlightedSectionMinY; // ivar: _highlightedSectionMinY
@property (nonatomic) NSUInteger highlightedSegmentIndex; // ivar: _highlightedSegmentIndex
@property (retain, nonatomic) NSDictionary *highlightedTextLayerAttributes; // ivar: _highlightedTextLayerAttributes
@property (retain, nonatomic) CATextLayer *highlightedTopLabelLayer; // ivar: _highlightedTopLabelLayer
@property (nonatomic) CGFloat referenceMaxY; // ivar: _referenceMaxY
@property (nonatomic) CGFloat referenceMinY; // ivar: _referenceMinY
@property (retain, nonatomic) CALayer *segmentsLayer; // ivar: _segmentsLayer
@property (retain, nonatomic) CALayer *underlyingBarLayer; // ivar: _underlyingBarLayer
@property (nonatomic) CGFloat visibleBarMaxY; // ivar: _visibleBarMaxY
@property (nonatomic) CGFloat visibleBarMinY; // ivar: _visibleBarMinY


-(BOOL)_bottomSegmentIsHighlighted;
-(BOOL)_topSegmentIsHighlighted;
-(id)initWithReferenceMinY:(CGFloat)arg0 referenceMaxY:(CGFloat)arg1 highlightColor:(id)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)updateWithAscendingThresholds:(id)arg0 currentHighlightIndex:(NSUInteger)arg1 ;


@end


#endif