// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUSERNOTIFICATIONMETRICSEVENT_H
#define AMSUSERNOTIFICATIONMETRICSEVENT_H

@class NSString;


#import "AMSMetricsEvent.h"

@interface AMSUserNotificationMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *displayScheduledTime;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL postedSuccessfully;


+(id)_centerForBundleId:(id)arg0 ;
+(id)_stringFromInteruptionLevel:(NSUInteger)arg0 ;
+(id)eventForBadgingForMetricsDictionary:(id)arg0 bundleID:(id)arg1 ;
+(id)eventForContentEngagementWithNotification:(id)arg0 ;
+(id)eventForPostedNotification:(id)arg0 ;
+(id)eventForSettingsChangedWithSettings:(id)arg0 bundleID:(id)arg1 ;
+(id)eventForSettingsChangedWithSettings:(id)arg0 bundleID:(id)arg1 account:(id)arg2 ;
+(id)eventForVideoPlaybackForNotification:(id)arg0 ;
+(id)eventFromMetricsDictionary:(id)arg0 centerBundleId:(id)arg1 ;
+(id)eventFromNotificationCenterSettings:(id)arg0 centerBundleId:(id)arg1 ;
-(id)_createDisplayCriteriaFromSettings:(id)arg0 ;
-(id)_stringFromNotificationSetting:(NSInteger)arg0 ;
-(id)initWithTopic:(id)arg0 settings:(id)arg1 notificationSettingsForTopic:(id)arg2 centerBundleId:(id)arg3 ;


@end


#endif