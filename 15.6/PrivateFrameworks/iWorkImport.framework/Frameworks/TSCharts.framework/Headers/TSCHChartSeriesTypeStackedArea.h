// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTSERIESTYPESTACKEDAREA_H
#define TSCHCHARTSERIESTYPESTACKEDAREA_H



#import "TSCHChartSeriesTypeArea.h"

@interface TSCHChartSeriesTypeStackedArea : TSCHChartSeriesTypeArea



-(BOOL)supportsSymbolDrawing;
-(CGFloat)beginDataValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 valueAxisID:(id)arg2 ;
-(CGFloat)beginDataValueForSeries:(id)arg0 valueIndex:(NSUInteger)arg1 valueAxisID:(id)arg2 ;
-(id)elementBuilder;
-(id)g_genericToSpecificPropertyMapStackedArea;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)userInterfaceName;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;


@end


#endif