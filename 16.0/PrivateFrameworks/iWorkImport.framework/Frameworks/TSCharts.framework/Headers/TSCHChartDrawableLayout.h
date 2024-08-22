// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTDRAWABLELAYOUT_H
#define TSCHCHARTDRAWABLELAYOUT_H

@class TSWPTextHostLayout, TSDLayoutGeometry, NSIndexSet, NSArray, NSDictionary;
@protocol TSWPStyleProviding;


#import "TSCHChartLayout.h"
#import "TSCHChartInfo.h"
#import "TSCHChartDrawableLayoutLegendResizer.h"
#import "TSCHChartModel.h"

@interface TSCHChartDrawableLayout : TSWPTextHostLayout {
    TSCHChartLayout *_chartLayout;
    ? _chartInvalidFlags;
}


@property (readonly, weak, nonatomic) TSCHChartInfo *chart;
@property (readonly, nonatomic) NSInteger chartDrawableLayoutMode;
@property (readonly, weak, nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, nonatomic) TSCHChartLayout *chartLayout;
@property (nonatomic) NSUInteger dataSetIndex;
@property (nonatomic) BOOL forceLayoutSettingsOmitLabelPlacement; // ivar: _forceLayoutSettingsOmitLabelPlacement
@property (nonatomic) BOOL inResize; // ivar: _inResize
@property (readonly, nonatomic) BOOL is3DChart;
@property (copy, nonatomic) TSDLayoutGeometry *lastChartAreaGeometry; // ivar: _lastChartAreaGeometry
@property (copy, nonatomic) TSDLayoutGeometry *lastPureGeometry; // ivar: _lastPureGeometry
@property (retain, nonatomic) TSDLayoutGeometry *layoutGeometryWhileCallingSuperComputeLayoutGeometry; // ivar: _layoutGeometryWhileCallingSuperComputeLayoutGeometry
@property (copy, nonatomic) TSDLayoutGeometry *legendGeometry;
@property (copy, nonatomic) TSDLayoutGeometry *legendGeometryForResize; // ivar: _legendGeometryForResize
@property (copy, nonatomic) TSDLayoutGeometry *legendModelGeometry;
@property (retain, nonatomic) TSCHChartDrawableLayoutLegendResizer *legendResizer; // ivar: _legendResizer
@property (nonatomic) CGSize minSizeCache; // ivar: _minSizeCache
@property (readonly, nonatomic) TSCHChartModel *model;
@property (readonly, nonatomic) CGFloat multiDataControlDesiredDistanceFromChartRep;
@property (readonly, nonatomic) NSIndexSet *pieWedgeExplosionSeriesIndices;
@property (copy, nonatomic) NSArray *pieWedgeExplosions;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;
@property (readonly, weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource;
@property (nonatomic) BOOL suppressChartLayoutInvalidation; // ivar: _suppressChartLayoutInvalidation


-(BOOL)canRotateChildLayout:(id)arg0 ;
-(BOOL)changesShouldClearLayout:(id)arg0 ;
-(BOOL)changesShouldSetNeedsLayout:(id)arg0 ;
-(BOOL)p_isPrintingInBackground;
-(BOOL)p_isRenderingForKPF;
-(CGFloat)p_approximateMultiDataControlUnscaledHeight;
-(CGFloat)p_approximateMultiDataControlUnscaledMinimumWidth;
-(CGFloat)p_approximatedAdditionalHeightForMultiDataControlWithMinimumAccommodatingScale:(CGFloat)arg0 ;
-(CGFloat)viewScaleForZoomingToSelectionPath:(id)arg0 targetPointSize:(CGFloat)arg1 ;
-(Class)repClassOverride;
-(id)ancestorLayoutConformingToProtocol:(id)arg0 ;
-(id)computeInfoGeometryDuringResize;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)i_computeUnitedWrapPath;
-(id)i_computeWrapPath;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)p_constrainAndResizePureGeometry:(id)arg0 withValidChartLayout:(id)arg1 toChartAreaGeometry:(*id)arg2 toShadowGeometry:(*id)arg3 toInfoGeometry:(*id)arg4 ;
-(id)p_infoGeometryForComputingLayoutGeometryWithChartLayout:(id)arg0 ;
-(id)pieWedgeExplosionsForSeriesIndices:(id)arg0 ;
-(id)propertiesThatInvalidateLayout;
-(id)renderersWithRep:(id)arg0 ;
-(id)visibleGeometries;
-(int)wrapFitType;
-(struct ? )p_layoutSettingsForDrawableLayoutModeByUpdatingLayoutSettings:(struct ? )arg0 ;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameForInlineLayout;
-(struct CGRect )alignmentFrameForProvidingGuidesInRoot;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )boundsInfluencingExteriorWrap;
-(struct CGRect )frameForCaptionPositioning;
-(struct CGRect )frameForCullingWithBaseFrame:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )insertionFrame;
-(struct CGRect )p_addMultiDataControlToInlineWrapBounds:(struct CGRect )arg0 ;
-(struct CGSize )minimumSize;
-(struct CGSize )p_calcMinSize;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateChartLayoutState;
-(void)invalidateChartLayoutStructure;
-(void)invalidateSize;
-(void)offsetGeometryBy:(struct CGPoint )arg0 ;
-(void)p_addEdgeAlignmentGuidesForRect:(struct CGRect )arg0 array:(id)arg1 ;
-(void)p_clearChartLayout;
-(void)p_convertValidChartLayout:(id)arg0 andInfoGeometry:(id)arg1 toPureGeometry:(*id)arg2 toChartAreaGeometry:(*id)arg3 toShadowGeometry:(*id)arg4 ;
-(void)p_forceValidateChartLayout;
-(void)p_postLayoutPropertyValueDidChangeNotification;
-(void)p_setLegendSize:(struct CGSize )arg0 ;
-(void)p_validateChartLayout;
-(void)processChangedProperty:(int)arg0 ;
-(void)processChanges:(id)arg0 ;
-(void)take3DDepth;
-(void)validate;
-(void)willBeAddedToLayoutController:(id)arg0 ;


@end


#endif