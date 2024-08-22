// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCIMAGECUSTOMHIGHLIGHTVIEW_H
#define VKCIMAGECUSTOMHIGHLIGHTVIEW_H

@class UIBezierPath, UIColor, CAShapeLayer, NSMutableArray, NSArray, CALayer;
@protocol VKCImageCustomHighlightViewDelegate;


#import "VKCImageBaseOverlayView.h"

@interface VKCImageCustomHighlightView : VKCImageBaseOverlayView

@property (retain, nonatomic) UIBezierPath *borderedNormalizedHighlightPath; // ivar: _borderedNormalizedHighlightPath
@property (readonly, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) CAShapeLayer *highlightColorLayer; // ivar: _highlightColorLayer
@property (retain, nonatomic) NSMutableArray *highlightDots; // ivar: _highlightDots
@property (retain, nonatomic) CAShapeLayer *highlightLayer; // ivar: _highlightLayer
@property (retain, nonatomic) NSArray *highlightRanges; // ivar: _highlightRanges
@property (retain, nonatomic) CALayer *highlightShadowLayer; // ivar: _highlightShadowLayer
@property (weak, nonatomic) NSObject<VKCImageCustomHighlightViewDelegate> *highlightViewDelegate; // ivar: _highlightViewDelegate
@property (nonatomic) BOOL isConfiguringHighlights; // ivar: _isConfiguringHighlights
@property (retain, nonatomic) NSArray *matchedRanges; // ivar: _matchedRanges
@property (retain, nonatomic) UIBezierPath *normalizedHighlightPath; // ivar: _normalizedHighlightPath
@property (retain, nonatomic) NSArray *selectionRects; // ivar: _selectionRects
@property (nonatomic) CGRect startingHighlightLayerRect; // ivar: _startingHighlightLayerRect


-(id)initWithDelegate:(id)arg0 ;
-(struct CGAffineTransform )transformForHighlightLayerInCurrentBounds;
-(struct CGRect )currentContentsRectInLayerCoodinates;
-(void)_configureHighlightDotForRanges:(id)arg0 ;
-(void)beginHighlightWithRanges:(id)arg0 animated:(BOOL)arg1 ;
-(void)clearHighlightsAnimated:(BOOL)arg0 ;
-(void)clearHighlightsAnimated:(BOOL)arg0 hideLayers:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)normalizedVisibleRectDidChange;
-(void)performHighlightForRanges:(id)arg0 animated:(BOOL)arg1 isReplacingResults:(BOOL)arg2 ;
-(void)updateHighlightLayerGeometry;
-(void)updateHighlightLayerGeometryIfVisible;


@end


#endif