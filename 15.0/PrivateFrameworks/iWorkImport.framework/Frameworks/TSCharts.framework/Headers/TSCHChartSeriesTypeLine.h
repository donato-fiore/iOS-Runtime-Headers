// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSERIESTYPELINE_H
#define TSCHCHARTSERIESTYPELINE_H



#import "TSCHChartSeriesType.h"

@interface TSCHChartSeriesTypeLine : TSCHChartSeriesType



-(BOOL)supportsDownsampling;
-(BOOL)supportsFillSetFill;
-(BOOL)supportsLineConnectionStyle;
-(BOOL)supportsSeriesFill;
-(BOOL)supportsSymbolDrawing;
-(BOOL)supportsSymbolFillForSymbolType:(int)arg0 ;
-(NSUInteger)valueDimensions;
-(id)elementBuilder;
-(id)fillPropertyTypeName;
-(id)g_genericToSpecificPropertyMapLine;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)propertiesForReferenceColors;
-(id)userInterfaceName;
-(int)fillPropertyType;
-(int)legendBadgeType;
-(int)seriesElementType;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;


@end


#endif