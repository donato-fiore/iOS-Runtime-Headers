// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFHUMIDITYSTATUSITEM_H
#define HFHUMIDITYSTATUSITEM_H



#import "HFAbstractRangeStatusItem.h"

@interface HFHumidityStatusItem : HFAbstractRangeStatusItem



+(BOOL)isPercentRange;
+(BOOL)shouldShowAverageForRange:(id)arg0 ;
+(NSUInteger)abstractCurrentModeInResponse:(id)arg0 ;
+(NSUInteger)abstractTargetModeInResponse:(id)arg0 ;
+(NSUInteger)statusItemCategory;
+(id)controllableServiceTypes;
+(id)currentModeCharacteristicTypes;
+(id)currentValueCharacteristicType;
+(id)displayValueComparator:(SEL)arg0 ;
+(id)maximumTargetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)overrideValueDisplayRange;
+(id)sensorServiceTypes;
+(id)targetModeCharacteristicTypes;
+(id)targetValueCharacteristicType;
+(id)titleStringForState:(NSInteger)arg0 ;
+(id)unknownValueDescriptionString;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;


@end


#endif