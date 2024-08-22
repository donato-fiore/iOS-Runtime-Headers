// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSERIESTYPERADARAREA_H
#define TSCHCHARTSERIESTYPERADARAREA_H



#import "TSCHChartSeriesTypeArea.h"

@interface TSCHChartSeriesTypeRadarArea : TSCHChartSeriesTypeArea



-(BOOL)supportsDownsampling;
-(BOOL)supportsLineConnectionStyle;
-(BOOL)supportsUseSeriesStrokeColorForFill;
-(id)additionalFillSetMutations;
-(id)axisTypesForValueLabels;
-(id)elementBuilder;
-(id)g_genericToSpecificPropertyMapRadarArea;
-(id)genericToSpecificPropertyMap;
-(id)legendFillForSeries:(id)arg0 ;
-(id)p_axisForSeries:(id)arg0 isCategory:(BOOL)arg1 ;
-(int)legendBadgeType;


@end


#endif