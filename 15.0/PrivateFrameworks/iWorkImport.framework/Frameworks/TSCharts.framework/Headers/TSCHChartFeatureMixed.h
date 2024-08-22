// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTFEATUREMIXED_H
#define TSCHCHARTFEATUREMIXED_H



#import "TSCHChartFeatureCategory.h"

@interface TSCHChartFeatureMixed : TSCHChartFeatureCategory



-(BOOL)supportsConnectingLines;
-(BOOL)supportsEditing;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsIndividualShadowRendering;
-(BOOL)supportsMultipleSeriesTypes;
-(BOOL)supportsSymbolOverhang;
-(Class)presetImagerClass;
-(Class)valueAxisClassForID:(id)arg0 scale:(NSInteger)arg1 ;
-(id)defaultDataFileName;
-(id)genericToSpecificPropertyMap;
-(id)supportedAxisScales;
-(id)supportedSeriesTypes;
-(id)userInterfaceName;


@end


#endif