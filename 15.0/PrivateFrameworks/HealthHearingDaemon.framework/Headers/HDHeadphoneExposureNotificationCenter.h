// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEADPHONEEXPOSURENOTIFICATIONCENTER_H
#define HDHEADPHONEEXPOSURENOTIFICATIONCENTER_H

@class HDProfile, HAENotificationCenter;

#import <Foundation/Foundation.h>


@interface HDHeadphoneExposureNotificationCenter : NSObject {
    HDProfile *_profile;
    HAENotificationCenter *_notificationCenter;
}




-(id)initWithProfile:(id)arg0 ;
-(id)postSevenDayDoseNotification:(id)arg0 nowDate:(id)arg1 analyticsInfo:(id)arg2 error:(*id)arg3 ;
-(void)_reportHeadphoneNotificationWithNowDate:(id)arg0 eventDuration:(CGFloat)arg1 exposureLevel:(CGFloat)arg2 exposureDuration:(CGFloat)arg3 hasPrunableData:(BOOL)arg4 isDeviceLocked:(BOOL)arg5 analyticsInfo:(id)arg6 ;


@end


#endif