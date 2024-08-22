// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONCONTENT_H
#define NCNOTIFICATIONCONTENT_H

@class UIImage, NSArray, NSString, _UNNotificationCommunicationContext, NSDate, NSTimeZone;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NCNotificationContent : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) UIImage *attachmentImage; // ivar: _attachmentImage
@property (readonly, nonatomic, getter=isCallType) BOOL callType;
@property (readonly, nonatomic) UIImage *carPlayIcon;
@property (readonly, nonatomic) NSArray *carPlayIcons; // ivar: _carPlayIcons
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat; // ivar: _categorySummaryFormat
@property (readonly, nonatomic) _UNNotificationCommunicationContext *communicationContext; // ivar: _communicationContext
@property (readonly, nonatomic, getter=isCommunicationType) BOOL communicationType;
@property (readonly, copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSString *customHeader; // ivar: _customHeader
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay; // ivar: _dateAllDay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *defaultHeader; // ivar: _defaultHeader
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *header;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // ivar: _hiddenPreviewsBodyPlaceholder
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSArray *icons; // ivar: _icons
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic, getter=isMessagingType) BOOL messagingType;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *summaryArgument; // ivar: _summaryArgument
@property (readonly, nonatomic) NSUInteger summaryArgumentCount; // ivar: _summaryArgumentCount
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


-(BOOL)isAirDrop;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationContent:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif