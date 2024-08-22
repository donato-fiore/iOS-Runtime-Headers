// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONNOTIFICATIONANALYTICS_H
#define HKMEDICATIONNOTIFICATIONANALYTICS_H


#import <Foundation/Foundation.h>


@interface HKMedicationNotificationAnalytics : NSObject



+(BOOL)_isAllowed;
+(BOOL)_isMetricEnabled;
+(BOOL)shouldSubmit;
+(void)submitMetricForType:(NSInteger)arg0 areHealthNotificationsAuthorizedStatus:(id)arg1 interactionType:(NSInteger)arg2 dataSource:(id)arg3 ;
+(void)submitNotificationInterationMetricForType:(NSInteger)arg0 withHealthNotificationsAuthorizedStatus:(id)arg1 dataSource:(id)arg2 ;
+(void)submitNotificationSentMetricWithHealthNotificationsAuthorizedStatus:(BOOL)arg0 dataSource:(id)arg1 ;


@end


#endif