// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTDRAWABLELAYOUTLEGENDRESIZER_H
#define TSCHCHARTDRAWABLELAYOUTLEGENDRESIZER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSCHChartDrawableLayoutLegendResizer : NSObject {
    int _anchoringStates;
    CGFloat _anchoringPosition;
}


@property (copy, nonatomic) NSArray *p_legendConfinementBounds; // ivar: _legendConfinementBounds
@property (nonatomic) BOOL p_shouldUpdateConfinedPushableAnchoring; // ivar: _shouldUpdateConfinedPushableAnchoring


+(CGFloat)p_sideIntersectionLengthForChartAreaFrame:(struct CGRect )arg0 ;
+(CGFloat)p_sideIntersectionLengthForChartAreaRange:(struct TSCHLegendAnchorRange )arg0 ;
+(id)legendResizerWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames )arg0 ;
+(struct CGRect )innerAnchoringFrameFromChartAreaFrame:(struct CGRect )arg0 ;
+(struct CGRect )outerAnchoringFrameFromChartAreaFrame:(struct CGRect )arg0 ;
+(struct CGRect )snappedLegendFrame:(struct CGRect )arg0 forChartAreaFrame:(struct CGRect )arg1 ;
-(BOOL)p_hasConfinedLocationWithinConfinementBoundsForLocation:(CGFloat)arg0 dimension:(NSInteger)arg1 returningConfinedLocation:(*CGFloat)arg2 ;
-(BOOL)p_isConfinedPushableAnchoring;
-(BOOL)p_isInFrontOfLine:(struct TSCHLegendAnchorLine )arg0 forRect:(struct CGRect )arg1 ;
-(BOOL)p_isLegendAnchoredForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames )arg0 dimension:(NSInteger)arg1 returningLegendLocation:(*CGFloat)arg2 ;
-(id)initWithInitialFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames )arg0 ;
-(id)resizedLegendGeometry:(id)arg0 forLastChartAreaFrame:(struct CGRect )arg1 newChartAreaFrame:(struct CGRect )arg2 isIndirectResizing:(BOOL)arg3 ;
-(int)p_anchoringStateForLegendFrame:(struct CGRect )arg0 chartAreaFrame:(struct CGRect )arg1 dimension:(NSInteger)arg2 returningAnchoringPosition:(*CGFloat)arg3 ;
-(struct TSCHLegendAnchorRange )p_pushedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames )arg0 dimension:(NSInteger)arg1 returningIsConfined:(*BOOL)arg2 ;
-(struct TSCHLegendAnchorRange )p_resizedLegendForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames )arg0 dimension:(NSInteger)arg1 ;
-(void)p_initializeAnchoringStateForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames )arg0 ;
-(void)p_updateLegendConfinementBoundsForChartAreaFrame:(struct CGRect )arg0 legendFrame:(struct CGRect )arg1 ;
-(void)p_updateLegendConfinementBoundsForFrames:(struct TSCHChartDrawableLayoutLegendResizerFrames )arg0 ;
-(void)p_updateStateForIsIndirectResizing:(BOOL)arg0 ;


@end


#endif