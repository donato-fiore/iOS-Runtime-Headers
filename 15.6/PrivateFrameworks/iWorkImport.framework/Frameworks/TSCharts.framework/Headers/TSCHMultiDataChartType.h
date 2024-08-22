// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHMULTIDATACHARTTYPE_H
#define TSCHMULTIDATACHARTTYPE_H



#import "TSCH2DChartType.h"

@interface TSCHMultiDataChartType : TSCH2DChartType



+(id)g_genericToSpecificPropertyMapCategoryAxis;
-(BOOL)isMultiData;
-(BOOL)supportsConnectingLines;
-(BOOL)supportsErrorBars;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsSeriesShadow;
-(BOOL)supportsTrendLines;
-(BOOL)supportsValueLabelSpacing;
-(Class)repClass;
-(NSUInteger)maxCellsForInsert;
-(id)cellsCreatedWarning;
-(id)genericToSpecificPropertyMap;
-(id)p_genericToSpecificPropertyMap;


@end


#endif