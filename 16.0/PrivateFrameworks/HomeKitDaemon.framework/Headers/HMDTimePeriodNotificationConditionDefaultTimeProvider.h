// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTIMEPERIODNOTIFICATIONCONDITIONDEFAULTTIMEPROVIDER_H
#define HMDTIMEPERIODNOTIFICATIONCONDITIONDEFAULTTIMEPROVIDER_H

@protocol HMDTimePeriodNotificationConditionTimeProvider;

#import <Foundation/Foundation.h>


@interface HMDTimePeriodNotificationConditionDefaultTimeProvider : NSObject <HMDTimePeriodNotificationConditionTimeProvider>





-(id)currentDate;


@end


#endif