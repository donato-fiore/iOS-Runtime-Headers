// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFABSTRACTPRESENCESTATUSITEM_H
#define HFABSTRACTPRESENCESTATUSITEM_H



#import "HFStatusItem.h"

@interface HFAbstractPresenceStatusItem : HFStatusItem



-(id)_serviceType;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)multipleReadyFormatString;
-(id)multipleTriggeredFormatString;
-(id)multipleTriggeredWithRoomsFormatString;
-(id)oneReadyFormatString;
-(id)oneTriggeredFormatString;
-(id)oneTriggeredWithRoomFormatString;


@end


#endif