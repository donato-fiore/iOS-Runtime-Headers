// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCARBONDIOXIDEALARMSTATUSITEM_H
#define HFCARBONDIOXIDEALARMSTATUSITEM_H



#import "HFAbstractAlarmStatusItem.h"

@interface HFCarbonDioxideAlarmStatusItem : HFAbstractAlarmStatusItem



+(id)serviceTypes;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)iconDescription;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;
-(id)statusDescriptionAllNormal;
-(id)statusDescriptionMultipleTriggered:(NSUInteger)arg0 ;
-(id)statusDescriptionOneTriggered;


@end


#endif