// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTFEATURECOLUMN_H
#define TSCHCHARTFEATURECOLUMN_H



#import "TSCHChartFeatureCategory.h"

@interface TSCHChartFeatureColumn : TSCHChartFeatureCategory



-(BOOL)supportsCategoryAxisSeriesNames;
-(BOOL)supportsColumnShape;
-(BOOL)supportsElementChunking;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsSeriesLabels;
-(CGFloat)maxDepthRatio;
-(CGFloat)sageMaxDepthRatio;
-(CGFloat)spiceMaxDepthRatio;
-(Class)presetImagerClass;
-(Class)stageClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(id)categoryLabelPositioner;
-(id)columnShapeUIName;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)supportedAxisScales;
-(id)userInterfaceName;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(int)labelOrientation;


@end


#endif