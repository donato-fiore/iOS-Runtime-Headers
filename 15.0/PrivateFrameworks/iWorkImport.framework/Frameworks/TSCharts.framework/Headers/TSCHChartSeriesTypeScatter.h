// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSERIESTYPESCATTER_H
#define TSCHCHARTSERIESTYPESCATTER_H



#import "TSCHChartSeriesType.h"

@interface TSCHChartSeriesTypeScatter : TSCHChartSeriesType



-(BOOL)supportsDownsampling;
-(BOOL)supportsFillSetFill;
-(BOOL)supportsGridPartitioning;
-(BOOL)supportsLineConnectionStyle;
-(BOOL)supportsLineTypeNone;
-(BOOL)supportsSeriesFill;
-(BOOL)supportsSymbolDrawing;
-(BOOL)supportsSymbolFillForSymbolType:(int)arg0 ;
-(BOOL)supportsValueLabelsAxisOption;
-(BOOL)supportsValueLabelsSeriesName;
-(NSUInteger)valueDimensions;
-(id)axisTypesForValueLabels;
-(id)elementBuilder;
-(id)g_genericToSpecificPropertyMapScatter;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)p_supportedSymbolsIfSymbolsSupported;
-(id)propertiesForReferenceColors;
-(id)supportedValueLabelsAxisCombinations;
-(id)userInterfaceName;
-(int)legendBadgeType;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;


@end


#endif