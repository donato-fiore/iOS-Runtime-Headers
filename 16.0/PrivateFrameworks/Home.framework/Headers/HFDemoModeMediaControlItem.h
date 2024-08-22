// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFDEMOMODEMEDIACONTROLITEM_H
#define HFDEMOMODEMEDIACONTROLITEM_H

@class HMAccessory, NSString;
@protocol HFToggleableControlItem;


#import "HFControlItem.h"
#import "HFNullValueSource.h"

@interface HFDemoModeMediaControlItem : HFControlItem <HFToggleableControlItem>



@property (weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFNullValueSource *mediaValueSource; // ivar: _mediaValueSource
@property (readonly) Class superclass;


+(Class)valueClass;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithDisplayResults:(id)arg0 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)readValueAndPopulateStandardResults;
-(id)toggleValue;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif