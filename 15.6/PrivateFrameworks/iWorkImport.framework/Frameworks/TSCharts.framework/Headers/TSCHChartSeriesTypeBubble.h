// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTSERIESTYPEBUBBLE_H
#define TSCHCHARTSERIESTYPEBUBBLE_H



#import "TSCHChartSeriesTypeScatter.h"

@interface TSCHChartSeriesTypeBubble : TSCHChartSeriesTypeScatter



-(BOOL)supportsFillSetFill;
-(BOOL)supportsLineConnectionStyle;
-(BOOL)supportsSeriesStroke;
-(BOOL)supportsSymbolTypeEditing;
-(NSUInteger)valueDimensions;
-(id)axisTypesForValueLabels;
-(id)elementBuilder;
-(id)fillPropertyTypeName;
-(id)g_genericToSpecificPropertyMapBubble;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)inspectorLocalizedValueLabelsDisclosureTitle;
-(id)inspectorLocalizedValueLabelsTabName;
-(id)legalChartLabelPositions;
-(id)propertiesForReferenceColors;
-(id)supportedValueLabelsAxisCombinations;
-(id)userInterfaceName;
-(int)defaultSymbolType;
-(int)fillPropertyType;
-(int)fillSetFillProperty;
-(int)legendBadgeType;
-(int)seriesStrokeProperty;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;


@end


#endif