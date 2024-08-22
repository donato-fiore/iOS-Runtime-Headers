// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHMULTIDATACHARTREP_H
#define TSCHMULTIDATACHARTREP_H

@class CALayer, NSMutableDictionary, NSSet;


#import "TSCHChartRep.h"
#import "TSCHMultiDataChartRepElementIndex.h"

@interface TSCHMultiDataChartRep : TSCHChartRep {
    CALayer *_rootLayer;
    CALayer *_elementsContainerLayer;
    BOOL _renderingBackgroundLayer;
    BOOL _renderingElementShapeLayer;
    BOOL _renderingElementLabelsLayer;
    BOOL _renderingDataSetNameLayer;
    BOOL _renderingReferenceLineLayer;
    BOOL _animatedLayersNeedUpdate;
    BOOL _shouldAnimateLabelsQuickly;
    BOOL _isAnimatingForBuilds;
    NSUInteger _elementLayersMultiDataSetIndex;
    int _gridDirection;
    NSMutableDictionary *_indexedElements;
    TSCHMultiDataChartRepElementIndex *_currentRepElementIndex;
    CALayer *_dataSetNameLayer;
    CALayer *_referenceLinesContainerLayer;
    NSSet *_referenceLinesToRender;
    NSSet *_referenceLineLabelsSearchSelectionsToRender;
    NSMutableDictionary *_layerIdToLayerMap;
    NSMutableDictionary *_previousOutsideBodyBounds;
}


@property (readonly, nonatomic) BOOL shouldDisableMultiDataControls; // ivar: _shouldDisableMultiDataControls


-(BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
-(BOOL)isHorizontalChart;
-(BOOL)needsAnimationForAnimationInfo:(id)arg0 ;
-(BOOL)shouldUseLegendLayerForLayerBasedRep;
-(id)imageFromFill:(id)arg0 forResolutionWithBounds:(struct CGRect )arg1 toRepElementTransform:(struct CGAffineTransform )arg2 skipIntegral:(BOOL)arg3 returningFillFrame:(struct CGRect *)arg4 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)layerIdToLayerMap;
-(id)p_chartModel;
-(id)p_elementLayers;
-(id)previousOutsideBodyBounds;
-(void)dealloc;
-(void)didEndZooming;
-(void)invalidateAnimationState;
-(void)willBeginZooming;


@end


#endif