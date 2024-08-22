// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFHUMIDIFIERDEHUMIDIFIERTHRESHOLDCONTROLITEM_H
#define HFHUMIDIFIERDEHUMIDIFIERTHRESHOLDCONTROLITEM_H



#import "HFRangeControlItem.h"

@interface HFHumidifierDehumidifierThresholdControlItem : HFRangeControlItem



+(id)readOnlyCharacteristicTypes;
-(NSUInteger)rangeModeWithCharacteristicValuesKeyedByType:(id)arg0 ;
-(id)initWithValueSource:(id)arg0 displayResults:(id)arg1 ;
-(id)numberValueFormatter;
-(id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg0 ;


@end


#endif