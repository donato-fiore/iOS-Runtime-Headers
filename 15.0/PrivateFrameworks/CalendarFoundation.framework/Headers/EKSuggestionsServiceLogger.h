// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSUGGESTIONSSERVICELOGGER_H
#define EKSUGGESTIONSSERVICELOGGER_H


#import <Foundation/Foundation.h>


@interface EKSuggestionsServiceLogger : NSObject



+(Class)_SGSuggestionsServiceClass;
+(void)logEventConfirmedDetailsWithUniqueKey:(id)arg0 ;
+(void)logEventConfirmedInboxWithUniqueKey:(id)arg0 ;
+(void)logEventConfirmedNotificationWithUniqueKey:(id)arg0 ;
+(void)logEventDismissedNotificationWithUniqueKey:(id)arg0 ;
+(void)logEventEngagedNotificationWithUniqueKey:(id)arg0 ;
+(void)logEventRejectedDetailsWithUniqueKey:(id)arg0 ;
+(void)logEventRejectedInboxWithUniqueKey:(id)arg0 ;
+(void)logEventRejectedNotificationWithUniqueKey:(id)arg0 ;
+(void)logEventShowedDetailsWithUniqueKey:(id)arg0 ;
+(void)logEventShowedNotificationWithUniqueKey:(id)arg0 ;
+(void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)arg0 ;


@end


#endif