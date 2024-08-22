// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFLIGHTBULBCONTROLITEM_H
#define HFLIGHTBULBCONTROLITEM_H



#import "HFIncrementalStateControlItem.h"

@interface HFLightbulbControlItem : HFIncrementalStateControlItem



+(id)optionsForPrimaryStateControlItem:(id)arg0 incrementalCharacteristicType:(id)arg1 ;
+(id)readOnlyCharacteristicTypes;
-(BOOL)supportsRGBColor;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)_tintColorForNaturalLightFromResults:(id)arg0 ;
-(id)_tintColorFromResults:(id)arg0 ;
-(id)readValueAndPopulateStandardResults;
-(id)writeValue:(id)arg0 ;


@end


#endif