// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNUNNOTIFICATIONCONTENTMAPPER_H
#define CALNUNNOTIFICATIONCONTENTMAPPER_H


#import <Foundation/Foundation.h>

#import "CALNUNNotificationIconMapper.h"

@interface CALNUNNotificationContentMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationIconMapper *notificationIconMapper; // ivar: _notificationIconMapper


+(id)_calnNotificationSoundFromUNNotificationContent:(id)arg0 ;
+(id)_sectionIdentifierFromTopicIdentifiers:(id)arg0 ;
+(void)_setBodyForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setInterruptionLevelForCALNMutableNotificationContent:(id)arg0 usingUNNotificationContent:(id)arg1 ;
+(void)_setInterruptionLevelForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setPeopleIdentifiersForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setSoundForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setSubtitleForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setSummaryArgumentForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setThreadIdentifierForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setTitleForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setTopicIdentifiersForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
+(void)_setUserInfoForUNMutableNotificationContent:(id)arg0 usingCALNNotificationContent:(id)arg1 ;
-(id)_iconIdentifierFromUNNotificationContent:(id)arg0 ;
-(id)_unNotificationIconFromCALNNotificationContent:(id)arg0 ;
-(id)calnNotificationContentFromUNNotificationContent:(id)arg0 ;
-(id)initWithNotificationIconMapper:(id)arg0 ;
-(id)unNotificationContentFromCALNNotificationContent:(id)arg0 ;


@end


#endif