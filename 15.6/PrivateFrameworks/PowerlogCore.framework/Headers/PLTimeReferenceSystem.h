// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLTIMEREFERENCESYSTEM_H
#define PLTIMEREFERENCESYSTEM_H



#import "PLTimeReferenceDynamic.h"

@interface PLTimeReferenceSystem : PLTimeReferenceDynamic



-(id)currentTime;
-(void)dayChangedNotificationReceived:(id)arg0 ;
-(void)dealloc;
-(void)registerForClockSetNotification;
-(void)registerForDayChangedNotification;
-(void)registerForTimeChangedNotification;
-(void)registerForTimeZoneChangedNotification;
-(void)timeChangedToMidnightLocalTime;
-(void)timeZoneChangedNotificationReceived:(id)arg0 ;


@end


#endif