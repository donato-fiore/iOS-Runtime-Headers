// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFABSTRACTPRESENCESTATUSITEM_H
#define HFABSTRACTPRESENCESTATUSITEM_H

@protocol HFServiceLikeStatusItem;


#import "HFStatusItem.h"

@interface HFAbstractPresenceStatusItem : HFStatusItem <HFServiceLikeStatusItem>





+(id)serviceTypes;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)descriptionStringForTriggeredServices:(id)arg0 ;
-(id)multipleReadyFormatString;
-(id)multipleTriggeredFormatString;
-(id)multipleTriggeredWithRoomsFormatString;
-(id)oneReadyFormatString;
-(id)oneTriggeredFormatString;
-(id)oneTriggeredWithRoomFormatString;
-(id)titleStringForTriggeredServices:(id)arg0 ;


@end


#endif