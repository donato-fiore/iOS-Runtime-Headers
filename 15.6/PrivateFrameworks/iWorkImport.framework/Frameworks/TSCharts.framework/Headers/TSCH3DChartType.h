// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTTYPE_H
#define TSCH3DCHARTTYPE_H

@class NSSet, NSString;
@protocol TSCH3DAxisLabelPositioner;


#import "TSCH2DChartType.h"

@interface TSCH3DChartType : TSCH2DChartType

@property (readonly, copy, nonatomic) NSSet *animationFilters;
@property (readonly, nonatomic) NSObject<TSCH3DAxisLabelPositioner> *categoryLabelPositioner;
@property (readonly, nonatomic) NSString *columnShapeUIName;
@property (readonly, nonatomic) NSUInteger depthRatioDimension;
@property (readonly, nonatomic) BOOL isHomogeneous;
@property (readonly, nonatomic) int labelOrientation;
@property (readonly, nonatomic) CGFloat minDepthRatio;
@property (readonly, nonatomic) BOOL needsRefinementForInwardLayout;
@property (readonly, nonatomic) id *renderers;
@property (readonly, nonatomic) CGFloat sageMaxDepthRatio;
@property (readonly, nonatomic) CGFloat spiceMaxDepthRatio;
@property (readonly, nonatomic) Class stageClass;
@property (readonly, nonatomic) BOOL supportsBevels;
@property (readonly, nonatomic) BOOL supportsColumnShape;
@property (readonly, nonatomic) BOOL supportsInterSetDepthGap;
@property (readonly, nonatomic) NSObject<TSCH3DAxisLabelPositioner> *valueLabelPositioner;


+(id)allAnimationFilters;
+(struct tvec3<float> )adjustedScaleForInfoChartScale:(*void)arg0 chartType:(id)arg1 barShape:(int)arg2 ;
-(BOOL)approximatesTitleAccommodationUsingLegendSize;
-(BOOL)layoutFrameShouldEncloseInfoGeometry;
-(BOOL)supportsAxisLabelAngle;
-(BOOL)supportsAxisLabelsOrientation;
-(BOOL)supportsAxisLine;
-(BOOL)supportsBackgroundFill;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsBorderStroke;
-(BOOL)supportsBubbleOptions;
-(BOOL)supportsCalloutLines;
-(BOOL)supportsCategoryAxisMinorTickmarks;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsErrorBars;
-(BOOL)supportsGridlineTickmarks;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsIncrementalResize;
-(BOOL)supportsMinorGridlines;
-(BOOL)supportsReferenceLines;
-(BOOL)supportsSeriesFill;
-(BOOL)supportsSeriesShadow;
-(BOOL)supportsSeriesStroke;
-(BOOL)supportsShadowOffset;
-(BOOL)supportsTickmarks;
-(BOOL)supportsTrendLines;
-(BOOL)supportsValueAxisLabelsPosition;
-(BOOL)supportsValueLabelSpacing;
-(CGFloat)maxDepthRatio;
-(Class)chartLayoutClass;
-(Class)chartLayoutItemClass;
-(Class)layoutClass;
-(Class)presetImagerClass;
-(Class)repClass;
-(Class)sageGeometeryHelperClass;
-(NSUInteger)presentationDimension;
-(id)animationDeliveryStylesForFilter:(id)arg0 ;
-(id)animationFiltersWithDefaultFilters:(id)arg0 ;
-(id)sceneWithChartInfo:(id)arg0 layoutSettings:(struct ? )arg1 styleProvidingSource:(id)arg2 ;
-(int)chartBodyBoundsDefinition;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(struct CGSize )minimumChartBodySize;
-(struct CGSize )minimumChartBodySizeForTransformingGeometry;
-(struct tvec3<float> )adjustedScaleForInfoChartScale:(*void)arg0 barShape:(int)arg1 ;


@end


#endif