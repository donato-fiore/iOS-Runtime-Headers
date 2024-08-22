// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTTYPE_H
#define TSCHCHARTTYPE_H

@class NSArray, TSUIntToIntDictionary, NSString, NSSet;
@protocol TSDMixing, NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHChartFeature.h"
#import "TSCHChartType.h"

@interface TSCHChartType : NSObject <TSDMixing, NSCopying>

 {
    TSCHChartFeature *_feature;
}


@property (readonly, nonatomic) NSArray *allCDESectionLabels;
@property (readonly, nonatomic) BOOL approximatesTitleAccommodationUsingLegendSize;
@property (readonly, nonatomic) Class categoryAxisClass;
@property (readonly, nonatomic) NSArray *categoryAxisIDs;
@property (readonly, nonatomic) int chartBodyBoundsDefinition;
@property (readonly, nonatomic) Class chartLayoutClass;
@property (readonly, nonatomic) Class chartLayoutItemClass;
@property (readonly, nonatomic) float defaultLabelExplosionPercentage;
@property (readonly, nonatomic) CGFloat defaultLabelExplosionValue;
@property (readonly, nonatomic) BOOL drawValueLabelsForZero;
@property (readonly, nonatomic) BOOL editableFormatForValueStrings;
@property (readonly, nonatomic) BOOL explosionAffectsChartBodyBounds;
@property (readonly, nonatomic) TSUIntToIntDictionary *genericToSpecificPropertyMap;
@property (readonly, nonatomic) BOOL hasExplodableSeriesElements;
@property (readonly, nonatomic) BOOL hasFixedFrameRatio;
@property (readonly, nonatomic) BOOL is3D;
@property (readonly, nonatomic) BOOL isHorizontal;
@property (readonly, nonatomic) BOOL isMultiData;
@property (readonly, nonatomic) BOOL isPseudoType;
@property (readonly, nonatomic) Class layoutClass;
@property (readonly, nonatomic) BOOL layoutFrameShouldEncloseInfoGeometry;
@property (readonly, nonatomic) NSString *localizedActionStringForWedgeExplosion;
@property (readonly, nonatomic) NSString *localizedDeliveryTypeForWedge;
@property (readonly, nonatomic) NSString *localizedTitleForDeliveryTypeWedge;
@property (readonly, nonatomic) NSString *localizedToolTipDescriptionForShadow;
@property (readonly, nonatomic) int majorGridlineStrokeProperty;
@property (readonly, nonatomic) CGFloat maxDepthRatio;
@property (readonly, nonatomic) CGFloat maxInnerRadiusPercentage;
@property (readonly, nonatomic) CGFloat minInnerRadiusPercentage;
@property (readonly, nonatomic) CGSize minimumChartBodySize;
@property (readonly, nonatomic) CGSize minimumChartBodySizeForTransformingGeometry;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) TSCHChartType *otherDimensionChartType;
@property (readonly, nonatomic) NSUInteger presentationDimension;
@property (readonly, nonatomic) Class presetImagerClass;
@property (readonly, nonatomic) BOOL rendersBackgroundAxis;
@property (readonly, nonatomic) BOOL rendersUsingRadialGeometry;
@property (readonly, nonatomic) Class repClass;
@property (readonly, nonatomic) BOOL requiresSeparateLabelsRenderPass;
@property (readonly, nonatomic) BOOL requiresStagesBuildingInReverse;
@property (readonly, nonatomic) BOOL requiresYAxisOrdinal;
@property (readonly, nonatomic) BOOL reverseSingleColumnLegendOrder;
@property (readonly, nonatomic) Class sageGeometeryHelperClass;
@property (readonly, nonatomic) int stackingSignRule;
@property (readonly, nonatomic) BOOL suppliesFinalTextures;
@property (readonly, nonatomic) NSArray *supportedAxisScales;
@property (readonly, nonatomic) NSSet *supportedSeriesTypes;
@property (readonly, nonatomic) BOOL supportsAxisLabelAngle;
@property (readonly, nonatomic) BOOL supportsAxisLabelsOrientation;
@property (readonly, nonatomic) BOOL supportsAxisLine;
@property (readonly, nonatomic) BOOL supportsAxisNames;
@property (readonly, nonatomic) BOOL supportsBackgroundFill;
@property (readonly, nonatomic) BOOL supportsBorderFrame;
@property (readonly, nonatomic) BOOL supportsBorderStroke;
@property (readonly, nonatomic) BOOL supportsBubbleOptions;
@property (readonly, nonatomic) BOOL supportsCalloutLines;
@property (readonly, nonatomic) BOOL supportsCategoryAxisLabels;
@property (readonly, nonatomic) BOOL supportsCategoryAxisMinorTickmarks;
@property (readonly, nonatomic) BOOL supportsCategoryAxisPlotToEdgesOption;
@property (readonly, nonatomic) BOOL supportsCategoryAxisSeriesNames;
@property (readonly, nonatomic) BOOL supportsCategoryLabelExplosion;
@property (readonly, nonatomic) BOOL supportsCategoryLabelsInChartRangeEditor;
@property (readonly, nonatomic) BOOL supportsConnectingLines;
@property (readonly, nonatomic) BOOL supportsEditing;
@property (readonly, nonatomic) BOOL supportsElementChunking;
@property (readonly, nonatomic) BOOL supportsElementSeriesNames;
@property (readonly, nonatomic) BOOL supportsEllipticalGridlines;
@property (readonly, nonatomic) BOOL supportsErrorBars;
@property (readonly, nonatomic) BOOL supportsErrorBarsScatterX;
@property (readonly, nonatomic) BOOL supportsGridlineShadow;
@property (readonly, nonatomic) BOOL supportsGridlineTickmarks;
@property (readonly, nonatomic) BOOL supportsGroupedShadows;
@property (readonly, nonatomic) BOOL supportsIncrementalResize;
@property (readonly, nonatomic) BOOL supportsIndividualShadowRendering;
@property (readonly, nonatomic) BOOL supportsInnerRadius;
@property (readonly, nonatomic) BOOL supportsLabelExplosion;
@property (readonly, nonatomic) BOOL supportsMinorGridlines;
@property (readonly, nonatomic) BOOL supportsMultipleSeriesTypes;
@property (readonly, nonatomic) BOOL supportsMultipleValueScales;
@property (readonly, nonatomic) BOOL supportsMultipleValuesPerSeries;
@property (readonly, nonatomic) BOOL supportsPercentNumberFormatting;
@property (readonly, nonatomic) BOOL supportsPlaceTitleAtCenter;
@property (readonly, nonatomic) BOOL supportsReferenceLines;
@property (readonly, nonatomic) BOOL supportsSeriesFill;
@property (readonly, nonatomic) BOOL supportsSeriesLabels;
@property (readonly, nonatomic) BOOL supportsSeriesShadow;
@property (readonly, nonatomic) BOOL supportsSeriesStroke;
@property (readonly, nonatomic) BOOL supportsShadowOffset;
@property (readonly, nonatomic) BOOL supportsSharedAndSeparateX;
@property (readonly, nonatomic) BOOL supportsShowLabelsInFrontOption;
@property (readonly, nonatomic) BOOL supportsStartAngleRotation;
@property (readonly, nonatomic) BOOL supportsSymbolOverhang;
@property (readonly, nonatomic) BOOL supportsTickmarks;
@property (readonly, nonatomic) BOOL supportsTrendLines;
@property (readonly, nonatomic) BOOL supportsValueAxisLabelsPosition;
@property (readonly, nonatomic) BOOL supportsValueLabelSpacing;
@property (readonly, nonatomic) BOOL supportsValueLabels;
@property (readonly, nonatomic) NSString *unlocalizedDeliveryTypeForWedge;
@property (readonly, nonatomic) NSString *userInterfaceName;
@property (readonly, nonatomic) BOOL usesCartesianCoordinates;
@property (readonly, nonatomic) BOOL usesPolarCoordinates;
@property (readonly, nonatomic) NSArray *valueAxisIDs;


+(CGFloat)sageDepthFactorForExportingChartInfo:(id)arg0 ;
+(id)all3DChartTypes;
+(id)allChartTypes;
+(id)area3DChart;
+(id)areaChart;
+(id)areaChart3D;
+(id)bar3DChart;
+(id)barChart;
+(id)barChart3D;
+(id)bubbleChart;
+(id)chartTypeForUserInterfaceTag:(NSInteger)arg0 ;
+(id)chartTypePlaceholderForDefault3DScaleProperty;
+(id)column3DChart;
+(id)columnChart;
+(id)columnChart3D;
+(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg0 chartType:(id)arg1 barShape:(int)arg2 ;
+(id)donut3DChart;
+(id)donutChart;
+(id)donutChart3D;
+(id)line3DChart;
+(id)lineChart;
+(id)lineChart3D;
+(id)mixedChart;
+(id)multiDataBarChart;
+(id)multiDataBubbleChart;
+(id)multiDataColumnChart;
+(id)multiDataScatterChart;
+(id)multipleChartsSelected;
+(id)multipleChartsSelected2D;
+(id)multipleChartsSelected3D;
+(id)pie3DChart;
+(id)pieChart;
+(id)pieChart3D;
+(id)radarChart;
+(id)scatterChart;
+(id)stackedArea3DChart;
+(id)stackedAreaChart;
+(id)stackedAreaChart3D;
+(id)stackedBar3DChart;
+(id)stackedBarChart;
+(id)stackedBarChart3D;
+(id)stackedColumn3DChart;
+(id)stackedColumnChart;
+(id)stackedColumnChart3D;
+(id)twoYAxisChart;
+(struct CGSize )fallbackMinimumChartBodySize;
-(BOOL)shouldChangeExplosionWithPreviousChartType:(id)arg0 chartInfo:(id)arg1 seriesList:(id)arg2 ;
-(BOOL)supportsEditingForAxisID:(id)arg0 ;
-(CGFloat)categoryAxisTitleRotation;
-(CGFloat)valueAxisTitleRotation;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSInteger)userInterfaceTag;
-(NSUInteger)gridOffsetToSeriesForScatterFormat:(int)arg0 ;
-(NSUInteger)maxCellsForAdding;
-(NSUInteger)maxCellsForInsert;
-(NSUInteger)maxCellsToCheckForGridValueType;
-(NSUInteger)maxSeries;
-(NSUInteger)styleIndexForAxisID:(id)arg0 ;
-(float)rotation3DMaxX;
-(float)rotation3DMaxY;
-(float)rotation3DMinX;
-(float)rotation3DMinY;
-(id)alternateArchiveChartTypeAndReturnWriterVersion:(*NSUInteger)arg0 readerVersion:(*NSUInteger)arg1 featureID:(*id)arg2 ;
-(id)animationDeliveryStylesForFilter:(id)arg0 ;
-(id)animationFiltersWithDefaultFilters:(id)arg0 ;
-(id)cellsAddedWarning;
-(id)cellsCreatedWarning;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultDataFileName;
-(id)defaultSeriesType:(NSUInteger)arg0 ;
-(id)feature;
-(id)filteredStyleOwnersFromStyleOwners:(id)arg0 ;
-(id)imageWithPreset:(id)arg0 target:(int)arg1 imageSize:(struct CGSize )arg2 imageScale:(CGFloat)arg3 swatchFrame:(struct CGRect )arg4 documentRoot:(id)arg5 shouldCache:(*BOOL)arg6 ;
-(id)init;
-(id)initWithFeatureClass:(Class)arg0 ;
-(id)localizedWedgeDragLabelWithPercent:(NSUInteger)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)p_debugDescription;
-(id)seriesPlotColumnsWarning;
-(id)seriesPlotRowsWarning;
-(id)seriesTypeForSeriesElementType:(int)arg0 defaultSeriesIndex:(NSUInteger)arg1 ;
-(id)seriesWarning;
-(id)titlePositionerWithInfo:(id)arg0 scene:(id)arg1 ;
-(id)userInterfaceNameForPlaceTitleAtCenter:(BOOL)arg0 ;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(int)representativeGridValueAxisType;
-(int)seriesElementTypeForSeriesType:(id)arg0 ;
-(struct CGSize )mungeBodySize:(struct CGSize )arg0 ;
-(struct TSCH3DChartRotationLimit )rotation3DLimit;
-(struct UIEdgeInsets )swatchImageEdgeInsetsForSize:(struct CGSize )arg0 ;
-(void)updateTitlesForExportingModel:(id)arg0 info:(id)arg1 ;


@end


#endif