// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCMUTABLENOTIFICATIONREQUEST_H
#define NCMUTABLENOTIFICATIONREQUEST_H

@class NSString, NSDictionary, NSArray, NSSet, NSDate, UNNotification, NSUUID;


#import "NCNotificationRequest.h"
#import "NCNotificationAlertOptions.h"
#import "NCNotificationAction.h"
#import "NCNotificationContent.h"
#import "NCNotificationOptions.h"
#import "NCNotificationSound.h"

@interface NCMutableNotificationRequest : NCNotificationRequest

@property (retain, nonatomic) NCNotificationAlertOptions *alertOptions;
@property (retain, nonatomic) NCNotificationAction *cancelAction;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (retain, nonatomic) NCNotificationAction *clearAction;
@property (retain, nonatomic) NCNotificationAction *closeAction;
@property (nonatomic) NSUInteger collapsedNotificationsCount;
@property (retain, nonatomic) NCNotificationContent *content;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic, getter=isCriticalAlert) BOOL criticalAlert;
@property (retain, nonatomic) NCNotificationAction *defaultAction;
@property (copy, nonatomic) NSString *highestPrioritySubSectionIdentifier;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (nonatomic) NSUInteger interruptionLevel;
@property (nonatomic) BOOL isCollapsedNotification;
@property (copy, nonatomic) NSString *notificationIdentifier;
@property (retain, nonatomic) NCNotificationOptions *options;
@property (copy, nonatomic) NSString *parentSectionIdentifier;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (nonatomic) float relevanceScore;
@property (copy, nonatomic) NSSet *requestDestinations;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSSet *settingsSections;
@property (retain, nonatomic) NCNotificationAction *silenceAction;
@property (retain, nonatomic) NCNotificationSound *sound;
@property (copy, nonatomic) NSDictionary *sourceInfo;
@property (copy, nonatomic) NSSet *subSectionIdentifiers;
@property (copy, nonatomic) NSDictionary *supplementaryActions;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (nonatomic, getter=isUniqueThreadIdentifier) BOOL threadIdentifierUnique;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) UNNotification *userNotification;
@property (copy, nonatomic) NSUUID *uuid;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif