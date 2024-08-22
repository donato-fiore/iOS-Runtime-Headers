// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNNOTIFICATIONFILTERUTILS_H
#define CALNNOTIFICATIONFILTERUTILS_H


#import <Foundation/Foundation.h>


@interface CALNNotificationFilterUtils : NSObject



+(id)filterIdentifierForNotificationContent:(id)arg0 ;
+(id)filterIdentifierForNotificationRecord:(id)arg0 ;
+(void)setFilterIdentifier:(id)arg0 onNotificationContent:(id)arg1 ;
+(void)setFilterIdentifierForEKCalendarNotification:(id)arg0 onNotificationContent:(id)arg1 ;


@end


#endif