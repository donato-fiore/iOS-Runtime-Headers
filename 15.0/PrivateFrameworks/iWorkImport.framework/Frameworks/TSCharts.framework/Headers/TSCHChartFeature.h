// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTFEATURE_H
#define TSCHCHARTFEATURE_H

@class NSArray, NSString, TSUIntToIntDictionary, NSSet;
@protocol TSCH3DAxisLabelPositioner;

#import <Foundation/Foundation.h>

#import "TSCHChartType.h"

@interface TSCHChartFeature : NSObject

@property (retain, nonatomic) NSArray *categoryAxisIDs; // ivar: _categoryAxisIDs
@property (readonly, nonatomic) NSObject<TSCH3DAxisLabelPositioner> *categoryLabelPositioner;
@property (weak, nonatomic) TSCHChartType *chartType; // ivar: _chartType
@property (readonly, nonatomic) NSString *columnShapeUIName;
@property (readonly, nonatomic) NSString *defaultDataFileName;
@property (readonly, nonatomic) float defaultLabelExplosionPercentage;
@property (readonly, nonatomic) BOOL drawValueLabelsForZero;
@property (readonly, nonatomic) BOOL editableFormatForValueStrings;
@property (readonly, nonatomic) TSUIntToIntDictionary *genericToSpecificPropertyMap;
@property (readonly, nonatomic) BOOL hasExplodableSeriesElements;
@property (readonly, nonatomic) BOOL hasFixedFrameRatio;
@property (readonly, nonatomic) BOOL isHorizontal;
@property (readonly, nonatomic) int labelOrientation;
@property (readonly, nonatomic) NSUInteger maxCellsToCheckForGridValueType;
@property (readonly, nonatomic) CGFloat maxDepthRatio;
@property (readonly, nonatomic) CGFloat maxInnerRadiusPercentage;
@property (readonly, nonatomic) CGFloat minInnerRadiusPercentage;
@property (readonly, nonatomic) Class presetImagerClass;
@property (readonly, nonatomic) BOOL rendersBackgroundAxis;
@property (readonly, nonatomic) BOOL rendersUsingRadialGeometry;
@property (readonly, nonatomic) int representativeGridValueAxisType;
@property (readonly, nonatomic) BOOL requiresStagesBuildingInReverse;
@property (readonly, nonatomic) BOOL requiresYAxisOrdinal;
@property (readonly, nonatomic) BOOL reverseSingleColumnLegendOrder;
@property (readonly, nonatomic) CGFloat sageMaxDepthRatio;
@property (readonly, nonatomic) CGFloat spiceMaxDepthRatio;
@property (readonly, nonatomic) int stackingSignRule;
@property (readonly, nonatomic) Class stageClass;
@property (readonly, nonatomic) BOOL suppliesFinalTextures;
@property (readonly, nonatomic) NSArray *supportedAxisScales;
@property (readonly, nonatomic) NSSet *supportedSeriesTypes;
@property (readonly, nonatomic) BOOL supportsAxisNames;
@property (readonly, nonatomic) BOOL supportsBackgroundFill;
@property (readonly, nonatomic) BOOL supportsBorderFrame;
@property (readonly, nonatomic) BOOL supportsBorderStroke;
@property (readonly, nonatomic) BOOL supportsBubbleOptions;
@property (readonly, nonatomic) BOOL supportsCalloutLines;
@property (readonly, nonatomic) BOOL supportsCategoryAxisMinorTickmarks;
@property (readonly, nonatomic) BOOL supportsCategoryAxisSeriesNames;
@property (readonly, nonatomic) BOOL supportsCategoryLabelExplosion;
@property (readonly, nonatomic) BOOL supportsCategoryLabelsInChartRangeEditor;
@property (readonly, nonatomic) BOOL supportsColumnShape;
@property (readonly, nonatomic) BOOL supportsConnectingLines;
@property (readonly, nonatomic) BOOL supportsEditing;
@property (readonly, nonatomic) BOOL supportsElementChunking;
@property (readonly, nonatomic) BOOL supportsElementSeriesNames;
@property (readonly, nonatomic) BOOL supportsEllipticalGridlines;
@property (readonly, nonatomic) BOOL supportsErrorBars;
@property (readonly, nonatomic) BOOL supportsGroupedShadows;
@property (readonly, nonatomic) BOOL supportsIndividualShadowRendering;
@property (readonly, nonatomic) BOOL supportsInterSetDepthGap;
@property (readonly, nonatomic) BOOL supportsLabelExplosion;
@property (readonly, nonatomic) BOOL supportsMultipleSeriesTypes;
@property (readonly, nonatomic) BOOL supportsMultipleValuesPerSeries;
@property (readonly, nonatomic) BOOL supportsPercentNumberFormatting;
@property (readonly, nonatomic) BOOL supportsPlaceTitleAtCenter;
@property (readonly, nonatomic) BOOL supportsReferenceLines;
@property (readonly, nonatomic) BOOL supportsSeriesLabels;
@property (readonly, nonatomic) BOOL supportsSharedAndSeparateX;
@property (readonly, nonatomic) BOOL supportsShowLabelsInFrontOption;
@property (readonly, nonatomic) BOOL supportsStartAngleRotation;
@property (readonly, nonatomic) BOOL supportsSymbolOverhang;
@property (readonly, nonatomic) BOOL supportsTrendLines;
@property (readonly, nonatomic) BOOL supportsValueLabelSpacing;
@property (readonly, nonatomic) BOOL supportsValueLabels;
@property (retain, nonatomic) NSArray *valueAxisIDs; // ivar: _valueAxisIDs
@property (readonly, nonatomic) NSObject<TSCH3DAxisLabelPositioner> *valueLabelPositioner;


-(BOOL)supportsEditingForAxisID:(id)arg0 ;
-(Class)p_selectAxisClassForScale:(NSInteger)arg0 linearClass:(Class)arg1 logClass:(Class)arg2 percentClass:(Class)arg3 ;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(NSUInteger)gridOffsetToSeriesForScatterFormat:(int)arg0 ;
-(NSUInteger)styleIndexForAxisID:(id)arg0 ;
-(id)filteredStyleOwnersFromStyleOwners:(id)arg0 ;
-(id)initWithChartType:(id)arg0 ;
-(id)initWithChartType:(id)arg0 valueAxisIDs:(id)arg1 categoryAxisIDs:(id)arg2 ;
-(id)initialSceneWithChartInfo:(id)arg0 layoutSettings:(struct ? )arg1 ;
-(id)userInterfaceNameForPlaceTitleAtCenter:(BOOL)arg0 ;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(void)updateTitlesForExportingModel:(id)arg0 info:(id)arg1 ;


@end


#endif