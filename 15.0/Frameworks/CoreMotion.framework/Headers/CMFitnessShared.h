// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMFITNESSSHARED_H
#define CMFITNESSSHARED_H


#import <Foundation/Foundation.h>


@interface CMFitnessShared : NSObject



+(BOOL)isDeviceSatellitePaired;
+(BOOL)isWorkoutEndReminderEnabledWhenDeviceIsInMoveTimeMode:(BOOL)arg0 withCurrentSetting:(id)arg1 ;
+(BOOL)isWorkoutStartReminderEnabledWhenDeviceIsSatellitePaired:(BOOL)arg0 isInMoveTimeMode:(BOOL)arg1 withCurrentSetting:(id)arg2 ;


@end


#endif