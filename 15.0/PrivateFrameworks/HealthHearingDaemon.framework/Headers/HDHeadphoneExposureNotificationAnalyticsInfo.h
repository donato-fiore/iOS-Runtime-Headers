// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEADPHONEEXPOSURENOTIFICATIONANALYTICSINFO_H
#define HDHEADPHONEEXPOSURENOTIFICATIONANALYTICSINFO_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface HDHeadphoneExposureNotificationAnalyticsInfo : NSObject {
    NSDate *_lastLockDate;
    NSDate *_lastNotificationDate;
}




-(id)boundedIntegerForMinutesSinceLastUnlockWithNowDate:(id)arg0 ;
-(id)boundedIntegerForTimeSinceLastNotificationWithNowDate:(id)arg0 ;
-(id)initWithLastLockDate:(id)arg0 lastNotificationDate:(id)arg1 ;


@end


#endif