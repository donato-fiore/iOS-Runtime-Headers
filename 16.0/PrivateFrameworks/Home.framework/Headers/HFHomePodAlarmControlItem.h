// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFHOMEPODALARMCONTROLITEM_H
#define HFHOMEPODALARMCONTROLITEM_H

@protocol HFMediaProfileContainer;


#import "HFControlItem.h"
#import "HFHomeKitSettingsValueManager.h"

@interface HFHomePodAlarmControlItem : HFControlItem

@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly, nonatomic) HFHomeKitSettingsValueManager *valueManager;


+(Class)valueClass;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg0 displayResults:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)readValueAndPopulateStandardResults;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif