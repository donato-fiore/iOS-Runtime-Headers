// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRAFIBBURDENNOTIFICATIONANALYTICSEVENT_H
#define HDHRAFIBBURDENNOTIFICATIONANALYTICSEVENT_H

@class HKFeatureStatus, NSString;
@protocol HKAnalyticsEvent, HDHRAFibBurdenNotificationAnalyticsEventFocusModeDeterminer, HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider;

#import <Foundation/Foundation.h>

#import "HDHRAFibBurdenNotificationMode.h"

@interface HDHRAFibBurdenNotificationAnalyticsEvent : NSObject <HKAnalyticsEvent>

 {
    HDHRAFibBurdenNotificationMode *_notificationMode;
    HKFeatureStatus *_featureStatus;
    id<HDHRAFibBurdenNotificationAnalyticsEventFocusModeDeterminer> *_focusModeDeterminer;
    id<HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> *_notificationsAuthorizedProvider;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(id)_notificationTypeStringForType:(NSInteger)arg0 ;
-(id)initWithNotificationMode:(id)arg0 featureStatus:(id)arg1 focusModeDeterminer:(id)arg2 notificationsAuthorizedProvider:(id)arg3 ;
-(id)initWithNotificationMode:(id)arg0 featureStatus:(id)arg1 profile:(id)arg2 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif