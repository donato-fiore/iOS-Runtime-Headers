// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNMUTABLENOTIFICATIONCONTENT_H
#define CALNMUTABLENOTIFICATIONCONTENT_H

@class NSString, NSDate, NSURL, NSArray, NSDictionary;


#import "CALNNotificationContent.h"
#import "CALNNotificationSound.h"

@interface CALNMutableNotificationContent : CALNNotificationContent

@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSURL *defaultActionURL;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *iconIdentifier;
@property (nonatomic) NSUInteger interruptionLevel;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (nonatomic) BOOL shouldHideTime;
@property (nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (copy, nonatomic) CALNNotificationSound *sound;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) NSUInteger summaryArgumentCount;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif