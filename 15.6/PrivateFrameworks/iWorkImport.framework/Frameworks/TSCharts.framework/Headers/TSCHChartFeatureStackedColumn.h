// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTFEATURESTACKEDCOLUMN_H
#define TSCHCHARTFEATURESTACKEDCOLUMN_H



#import "TSCHChartFeatureColumn.h"

@interface TSCHChartFeatureStackedColumn : TSCHChartFeatureColumn



-(BOOL)drawValueLabelsForZero;
-(BOOL)editableFormatForValueStrings;
-(BOOL)reverseSingleColumnLegendOrder;
-(BOOL)supportsCategoryAxisSeriesNames;
-(BOOL)supportsReferenceLines;
-(BOOL)supportsSeriesLabels;
-(BOOL)supportsTrendLines;
-(CGFloat)maxDepthRatio;
-(CGFloat)sageMaxDepthRatio;
-(CGFloat)spiceMaxDepthRatio;
-(Class)presetImagerClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)supportedAxisScales;
-(id)userInterfaceName;
-(int)stackingSignRule;


@end


#endif