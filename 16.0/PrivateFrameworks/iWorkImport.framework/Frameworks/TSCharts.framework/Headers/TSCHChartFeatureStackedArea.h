// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTFEATURESTACKEDAREA_H
#define TSCHCHARTFEATURESTACKEDAREA_H



#import "TSCHChartFeatureArea.h"

@interface TSCHChartFeatureStackedArea : TSCHChartFeatureArea



-(BOOL)drawValueLabelsForZero;
-(BOOL)editableFormatForValueStrings;
-(BOOL)reverseSingleColumnLegendOrder;
-(BOOL)supportsInterSetDepthGap;
-(BOOL)supportsReferenceLines;
-(BOOL)supportsSymbolOverhang;
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