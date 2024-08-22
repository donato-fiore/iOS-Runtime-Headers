// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFOCCUPANCYALARMSTATUSITEM_H
#define HFOCCUPANCYALARMSTATUSITEM_H



#import "HFAbstractPresenceStatusItem.h"

@interface HFOccupancyAlarmStatusItem : HFAbstractPresenceStatusItem



-(id)_serviceType;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;
-(id)multipleReadyFormatString;
-(id)multipleTriggeredFormatString;
-(id)multipleTriggeredWithRoomsFormatString;
-(id)oneReadyFormatString;
-(id)oneTriggeredFormatString;
-(id)oneTriggeredWithRoomFormatString;


@end


#endif