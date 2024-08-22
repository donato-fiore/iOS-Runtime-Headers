// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFLEAKALARMSTATUSITEM_H
#define HFLEAKALARMSTATUSITEM_H



#import "HFAbstractAlarmStatusItem.h"

@interface HFLeakAlarmStatusItem : HFAbstractAlarmStatusItem



+(id)serviceTypes;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;
-(id)statusDescriptionAllNormal;
-(id)statusDescriptionMultipleTriggered:(NSUInteger)arg0 ;
-(id)statusDescriptionOneTriggered;


@end


#endif