// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFMOTIONALARMSTATUSITEM_H
#define HFMOTIONALARMSTATUSITEM_H



#import "HFAbstractPresenceStatusItem.h"

@interface HFMotionAlarmStatusItem : HFAbstractPresenceStatusItem



+(id)serviceTypes;
-(id)descriptionStringForTriggeredServices:(id)arg0 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;
-(id)multipleReadyFormatString;
-(id)multipleTriggeredFormatString;
-(id)multipleTriggeredWithRoomsFormatString;
-(id)oneReadyFormatString;
-(id)oneTriggeredFormatString;
-(id)oneTriggeredWithRoomFormatString;
-(id)titleStringForTriggeredServices:(id)arg0 ;


@end


#endif