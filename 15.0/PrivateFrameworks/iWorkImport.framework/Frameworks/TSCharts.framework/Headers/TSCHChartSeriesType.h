// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSERIESTYPE_H
#define TSCHCHARTSERIESTYPE_H

@class NSArray, NSDictionary, TSSPropertyMap, TSUIntToIntDictionary, NSString;

#import <Foundation/Foundation.h>

#import "TSCHElementBuilder.h"

@interface TSCHChartSeriesType : NSObject {
    NSArray *_seriesRendererClasses;
}


@property (readonly, nonatomic) NSDictionary *additionalFillSetMutations;
@property (readonly, nonatomic) TSSPropertyMap *additionalFillSetPropertyMap;
@property (readonly, nonatomic) NSArray *axisTypesForValueLabels;
@property (readonly, nonatomic) BOOL chunkedBuildsIncludeInterceptValues;
@property (readonly, nonatomic) int defaultSymbolType;
@property (readonly, nonatomic) TSCHElementBuilder *elementBuilder;
@property (readonly, nonatomic) int fillSetFillProperty;
@property (readonly, nonatomic) TSUIntToIntDictionary *genericToSpecificPropertyMap;
@property (readonly, nonatomic) NSString *inspectorLocalizedValueLabelsDisclosureTitle;
@property (readonly, nonatomic) NSString *inspectorLocalizedValueLabelsTabName;
@property (readonly, nonatomic) BOOL isVertical;
@property (readonly, nonatomic) NSArray *legalChartLabelPositions;
@property (readonly, nonatomic) int legendBadgeType;
@property (readonly, copy, nonatomic) NSArray *propertiesForReferenceColors;
@property (readonly, nonatomic) Class sceneObjectClass;
@property (readonly, nonatomic) int seriesElementType;
@property (readonly, nonatomic) NSString *seriesFillLabelUIString;
@property (readonly, nonatomic) NSArray *seriesRendererClasses;
@property (readonly, nonatomic) int seriesStrokeProperty;
@property (readonly, nonatomic) int specificFillSetFillProperty;
@property (readonly, nonatomic) NSArray *supportedSymbols;
@property (readonly, nonatomic) NSArray *supportedValueLabelsAxisCombinations;
@property (readonly, nonatomic) BOOL supportsBarGap;
@property (readonly, nonatomic) BOOL supportsCalloutLines;
@property (readonly, nonatomic) BOOL supportsDownsampling;
@property (readonly, nonatomic) BOOL supportsFillSetFill;
@property (readonly, nonatomic) BOOL supportsGridPartitioning;
@property (readonly, nonatomic) BOOL supportsLineConnectionStyle;
@property (readonly, nonatomic) BOOL supportsLineTypeNone;
@property (readonly, nonatomic) BOOL supportsRoundedCorners;
@property (readonly, nonatomic) BOOL supportsSeries3DFill;
@property (readonly, nonatomic) BOOL supportsSeriesFill;
@property (readonly, nonatomic) BOOL supportsSeriesGradientFill;
@property (readonly, nonatomic) BOOL supportsSeriesStroke;
@property (readonly, nonatomic) BOOL supportsSetGap;
@property (readonly, nonatomic) BOOL supportsShadowOffset;
@property (readonly, nonatomic) BOOL supportsSymbolDrawing;
@property (readonly, nonatomic) BOOL supportsSymbolTypeEditing;
@property (readonly, nonatomic) BOOL supportsUseSeriesStrokeColorForFill;
@property (readonly, nonatomic) BOOL supportsValueLabels;
@property (readonly, nonatomic) BOOL supportsValueLabelsAxisOption;
@property (readonly, nonatomic) BOOL supportsValueLabelsSeriesName;
@property (readonly, nonatomic) BOOL useInBarGapCalculations;
@property (readonly, nonatomic) NSString *userInterfaceName;
@property (readonly, nonatomic) NSUInteger valueDimensions;


+(id)_singletonAlloc;
+(id)allSeriesTypes;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)area3DSeries;
+(id)areaSeries;
+(id)bar3DSeries;
+(id)barSeries;
+(id)bubbleSeries;
+(id)column3DSeries;
+(id)columnSeries;
+(id)donut3DSeries;
+(id)donutSeries;
+(id)expandProperties:(id)arg0 ;
+(id)inspectorDefaultLocalizedValueLabelsDisclosureTitle;
+(id)inspectorDefaultLocalizedValueLabelsTabName;
+(id)line3DSeries;
+(id)lineSeries;
+(id)mixedAreaSeries;
+(id)mixedColumnSeries;
+(id)mixedLineSeries;
+(id)pie3DSeries;
+(id)pieSeries;
+(id)radarAreaSeries;
+(id)scatterSeries;
+(id)stackedArea3DSeries;
+(id)stackedAreaSeries;
+(id)stackedBar3DSeries;
+(id)stackedBarSeries;
+(id)stackedColumn3DSeries;
+(id)stackedColumnSeries;
+(id)styleArchTypes;
-(BOOL)canUseEstimatedValueLabelsDrawingRect;
-(BOOL)floatValueForLabelExplosion:(*float)arg0 series:(id)arg1 ;
-(BOOL)supportsSymbolFillForSymbolType:(int)arg0 ;
-(CGFloat)beginDataValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 valueAxisID:(id)arg2 ;
-(CGFloat)beginDataValueForSeries:(id)arg0 valueIndex:(NSUInteger)arg1 valueAxisID:(id)arg2 ;
-(CGFloat)beginValueForSeries:(NSUInteger)arg0 groupIndex:(NSUInteger)arg1 unitSpaceIntercept:(CGFloat)arg2 relativelyPositive:(BOOL)arg3 valueAxis:(id)arg4 ;
-(NSUInteger)numberOfSeriesForCalculatingBarWidth:(id)arg0 ;
-(NSUInteger)seriesIndexForDrawing:(id)arg0 ;
-(id)cdeFillForSeries:(id)arg0 ;
-(id)coordinateAxisForSeries:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fillPropertyTypeName;
-(id)init;
-(id)legendFillForSeries:(id)arg0 ;
-(id)legendStrokeForSeries:(id)arg0 ;
-(id)p_axisForSeries:(id)arg0 isCategory:(BOOL)arg1 ;
-(id)p_specificMutationsForGenericMutations:(id)arg0 ;
-(id)resetSeriesStorage:(id)arg0 forSeries:(id)arg1 ;
-(id)userInterfaceNameForLabelPosition:(id)arg0 ;
-(id)valueAxisForSeries:(id)arg0 ;
-(int)fillPropertyType;
-(unsigned int)adjustLabelPosition:(unsigned int)arg0 forAxisValue:(CGFloat)arg1 intercept:(CGFloat)arg2 ;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 forSeries:(id)arg1 ;


@end


#endif