// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNMUTABLENOTIFICATIONCONTENT_H
#define UNMUTABLENOTIFICATIONCONTENT_H

@class NSString, NSArray, NSNumber, NSDate, NSURL, NSSet, NSDictionary;


#import "UNNotificationContent.h"
#import "_UNNotificationCommunicationContext.h"
#import "UNNotificationIcon.h"
#import "UNNotificationSound.h"

@interface UNMutableNotificationContent : UNNotificationContent

@property (copy, nonatomic) NSString *accessoryImageName;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSNumber *badge;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) _UNNotificationCommunicationContext *communicationContext;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *defaultActionBundleIdentifier;
@property (copy, nonatomic) NSString *defaultActionTitle;
@property (copy, nonatomic) NSURL *defaultActionURL;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *filterCriteria;
@property (copy, nonatomic) NSString *footer;
@property (nonatomic) BOOL hasDefaultAction;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) UNNotificationIcon *icon;
@property (nonatomic) NSUInteger interruptionLevel;
@property (copy, nonatomic) NSString *launchImageName;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (nonatomic) NSUInteger realertCount;
@property (nonatomic) CGFloat relevanceScore;
@property (nonatomic) BOOL shouldAuthenticateDefaultAction;
@property (nonatomic) BOOL shouldBackgroundDefaultAction;
@property (nonatomic) BOOL shouldDisplayActionsInline;
@property (nonatomic) BOOL shouldHideDate;
@property (nonatomic) BOOL shouldHideTime;
@property (nonatomic) BOOL shouldIgnoreDoNotDisturb;
@property (nonatomic) BOOL shouldIgnoreDowntime;
@property (nonatomic) BOOL shouldPreemptPresentedNotification;
@property (nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic) BOOL shouldShowSubordinateIcon;
@property (nonatomic) BOOL shouldSuppressDefaultAction;
@property (nonatomic) BOOL shouldSuppressScreenLightUp;
@property (nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync;
@property (copy, nonatomic) UNNotificationSound *sound;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) NSUInteger summaryArgumentCount;
@property (copy, nonatomic) NSString *targetContentIdentifier;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSSet *topicIdentifiers;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif