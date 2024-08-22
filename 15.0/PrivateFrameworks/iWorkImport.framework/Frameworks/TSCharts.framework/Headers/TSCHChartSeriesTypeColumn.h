// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSERIESTYPECOLUMN_H
#define TSCHCHARTSERIESTYPECOLUMN_H



#import "TSCHChartSeriesTypeBar.h"

@interface TSCHChartSeriesTypeColumn : TSCHChartSeriesTypeBar



-(BOOL)chunkedBuildsIncludeInterceptValues;
-(BOOL)isVertical;
-(BOOL)supportsBarGap;
-(BOOL)supportsDownsampling;
-(BOOL)supportsRoundedCorners;
-(BOOL)supportsSetGap;
-(BOOL)useInBarGapCalculations;
-(NSUInteger)valueDimensions;
-(id)axisTypesForValueLabels;
-(id)elementBuilder;
-(id)fillPropertyTypeName;
-(id)g_genericToSpecificPropertyMapColumn;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)legalChartLabelPositions;
-(id)supportedValueLabelsAxisCombinations;
-(id)userInterfaceName;
-(id)userInterfaceNameForLabelPosition:(id)arg0 ;
-(int)fillPropertyType;
-(int)seriesElementType;
-(unsigned int)adjustLabelPosition:(unsigned int)arg0 forAxisValue:(CGFloat)arg1 intercept:(CGFloat)arg2 ;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;


@end


#endif