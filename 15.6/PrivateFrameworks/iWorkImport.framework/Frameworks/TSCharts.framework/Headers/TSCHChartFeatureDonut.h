// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTFEATUREDONUT_H
#define TSCHCHARTFEATUREDONUT_H



#import "TSCHChartFeaturePieFamily.h"

@interface TSCHChartFeatureDonut : TSCHChartFeaturePieFamily



-(BOOL)supportsCalloutLines;
-(BOOL)supportsPlaceTitleAtCenter;
-(CGFloat)maxInnerRadiusPercentage;
-(CGFloat)minInnerRadiusPercentage;
-(Class)presetImagerClass;
-(float)defaultLabelExplosionPercentage;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)userInterfaceName;


@end


#endif