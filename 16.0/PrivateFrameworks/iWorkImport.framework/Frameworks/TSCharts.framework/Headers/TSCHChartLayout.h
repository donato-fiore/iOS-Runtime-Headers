// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTLAYOUT_H
#define TSCHCHARTLAYOUT_H

@protocol TSWPStyleProviding;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"
#import "TSCHChartModel.h"

@interface TSCHChartLayout : NSObject

@property (readonly) CGRect chartAreaFrame;
@property (readonly) CGRect chartBodyFrame;
@property (retain, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property NSUInteger dataSetIndex;
@property (readonly, nonatomic) BOOL isValid;
@property ? layoutSettings; // ivar: _layoutSettings
@property (readonly) CGRect legendDrawingFrame;
@property (readonly) CGRect legendFrame;
@property CGRect legendGeometryFrame;
@property CGRect legendModelGeometryFrame; // ivar: _legendModelGeometryFrame
@property (readonly, nonatomic) TSCHChartModel *model;
@property (nonatomic) BOOL needsLayout; // ivar: _needsLayout
@property (readonly) CGRect outerLayoutFrame;
@property (readonly) CGRect outerShadowFrame;
@property (weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: _styleProvidingSource
@property (readonly) CGRect titleFrame;


+(id)chartLayoutWithChartInfo:(id)arg0 ;
+(id)propertiesThatInvalidateLayout;
+(struct CGRect )normalizeRect:(struct CGRect )arg0 outerRect:(struct CGRect )arg1 ;
+(struct CGRect )outerRectForRects:(id)arg0 ;
+(struct CGSize )legendSizeForChartInfo:(id)arg0 initialWidth:(CGFloat)arg1 ;
-(BOOL)layoutFrameShouldEncloseInfoGeometry;
-(id)hitChartElements:(struct CGPoint )arg0 passingTest:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 ;
-(id)renderersWithRep:(id)arg0 ;
-(id)subselectionHaloPositionsForSelections:(id)arg0 ;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(struct CGAffineTransform )transformToConvertChartLayoutToNatural;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGPoint )convertChartLayoutSpaceToNaturalSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )convertNaturalSpaceToChartLayoutSpace:(struct CGPoint )arg0 ;
-(struct CGRect )boundsForResize;
-(struct CGRect )convertChartLayoutSpaceRectToNaturalSpaceRect:(struct CGRect )arg0 ;
-(struct CGRect )convertNaturalSpaceRectToChartLayoutSpaceRect:(struct CGRect )arg0 ;
-(void)beginDynamicOperation;
-(void)beginResize;
-(void)endDynamicOperation;
-(void)endResize;
-(void)invalidate;
-(void)invalidateCachedOriginRelativeToChartAreaFrame;
-(void)layoutForChartAreaSize:(struct CGSize )arg0 ;
-(void)layoutForChartBodySize:(struct CGSize )arg0 ;
-(void)layoutForCircumscribingSize:(struct CGSize )arg0 ;
-(void)layoutForResizingSize:(struct CGSize )arg0 ;
-(void)processChanges:(id)arg0 ;
-(void)setForceLegendAtBottom:(BOOL)arg0 ;
-(void)setForceOmitLabelPlacement:(BOOL)arg0 ;
-(void)setForceOmitLegend:(BOOL)arg0 ;
-(void)setForceTitleAtTop:(BOOL)arg0 ;
-(void)setLegendSize:(struct CGSize )arg0 ;
-(void)takeSizeFromTracker:(id)arg0 ;


@end


#endif