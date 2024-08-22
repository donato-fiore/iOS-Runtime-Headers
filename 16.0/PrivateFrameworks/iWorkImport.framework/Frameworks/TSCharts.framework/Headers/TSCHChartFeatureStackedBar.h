// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTFEATURESTACKEDBAR_H
#define TSCHCHARTFEATURESTACKEDBAR_H



#import "TSCHChartFeatureBar.h"

@interface TSCHChartFeatureStackedBar : TSCHChartFeatureBar



-(BOOL)drawValueLabelsForZero;
-(BOOL)editableFormatForValueStrings;
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