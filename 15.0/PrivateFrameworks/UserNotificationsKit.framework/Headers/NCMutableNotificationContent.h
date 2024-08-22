// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCMUTABLENOTIFICATIONCONTENT_H
#define NCMUTABLENOTIFICATIONCONTENT_H

@class UIImage, NSArray, NSString, _UNNotificationCommunicationContext, NSDate, NSTimeZone;


#import "NCNotificationContent.h"

@interface NCMutableNotificationContent : NCNotificationContent

@property (retain, nonatomic) UIImage *attachmentImage;
@property (retain, nonatomic) UIImage *carPlayIcon;
@property (retain, nonatomic) NSArray *carPlayIcons;
@property (copy, nonatomic) NSString *categorySummaryFormat;
@property (retain, nonatomic) _UNNotificationCommunicationContext *communicationContext;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *customHeader;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (copy, nonatomic) NSString *defaultHeader;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) NSUInteger summaryArgumentCount;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif