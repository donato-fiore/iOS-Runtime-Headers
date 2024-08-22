// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFABSTRACTRANGESTATUSITEM_H
#define HFABSTRACTRANGESTATUSITEM_H

@protocol HFServiceLikeStatusItem;


#import "HFStatusItem.h"

@interface HFAbstractRangeStatusItem : HFStatusItem <HFServiceLikeStatusItem>





+(BOOL)isPercentRange;
+(BOOL)shouldShowAverageForRange:(id)arg0 ;
+(NSInteger)currentStateForResponses:(id)arg0 ;
+(NSUInteger)abstractCurrentModeInResponse:(id)arg0 ;
+(NSUInteger)abstractTargetModeInResponse:(id)arg0 ;
+(NSUInteger)badgeTypeForState:(NSInteger)arg0 ;
+(NSUInteger)statusItemCategory;
+(id)_defaultValueFormatter;
+(id)controllableServiceTypes;
+(id)currentModeCharacteristicTypes;
+(id)currentValueCharacteristicType;
+(id)customValueFormatter;
+(id)descriptionStringForCharacteristicType:(id)arg0 withResponses:(id)arg1 ;
+(id)displayValueComparator:(SEL)arg0 ;
+(id)formatValue:(id)arg0 forCharacteristic:(id)arg1 ;
+(id)maximumTargetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)overrideValueDisplayRange;
+(id)sensorServiceTypes;
+(id)serviceTypes;
+(id)targetModeCharacteristicTypes;
+(id)targetValueCharacteristicType;
+(id)titleStringForState:(NSInteger)arg0 ;
+(id)unknownValueDescriptionString;
+(id)valueRangeForCharacteristicType:(id)arg0 withResponses:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;


@end


#endif