// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONMUTABLESYSTEMSETTINGS_H
#define NCNOTIFICATIONMUTABLESYSTEMSETTINGS_H

@class NSArray;


#import "NCNotificationSystemSettings.h"

@interface NCNotificationMutableSystemSettings : NCNotificationSystemSettings

@property (nonatomic, getter=isScheduledDeliveryEnabled) BOOL scheduledDeliveryEnabled;
@property (nonatomic, getter=shouldScheduledDeliveryShowNextSummary) BOOL scheduledDeliveryShowNextSummary;
@property (copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (nonatomic, getter=isScheduledDeliveryUninitialized) BOOL scheduledDeliveryUninitialized;




@end


#endif