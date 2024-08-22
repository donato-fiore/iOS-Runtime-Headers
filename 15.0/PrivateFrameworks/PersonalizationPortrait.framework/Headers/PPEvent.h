// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPEVENT_H
#define PPEVENT_H

@class NSArray, NSDate, NSString, NSURL, CLLocation;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PPCalendar.h"

@interface PPEvent : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *attendees; // ivar: _attendees
@property (readonly, nonatomic) char availability; // ivar: _availability
@property (readonly, nonatomic) PPCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) unsigned char eventFlags; // ivar: _eventFlags
@property (readonly, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) NSURL *externalURI; // ivar: _externalURI
@property (readonly, nonatomic) NSString *location; // ivar: _location
@property (readonly, nonatomic) NSString *notes; // ivar: _notes
@property (readonly, nonatomic) NSString *organizerName; // ivar: _organizerName
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *structuredLocationAddress; // ivar: _structuredLocationAddress
@property (readonly, nonatomic) CLLocation *structuredLocationCoordinates; // ivar: _structuredLocationCoordinates
@property (readonly, nonatomic) NSString *structuredLocationTitle; // ivar: _structuredLocationTitle
@property (readonly, nonatomic) unsigned char suggestedEventCategory; // ivar: _suggestedEventCategory
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)descriptionForSuggestedEventCategory:(unsigned char)arg0 ;
+(unsigned char)suggestedEventCategoryFromMetadata:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(BOOL)isNLEvent;
-(BOOL)isStructuredEvent;
-(BOOL)organizerIsCurrentUser;
-(BOOL)representsUnscheduledFreeTime;
-(NSInteger)compareStartDateWithEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEKEvent:(id)arg0 calendarInternPool:(id)arg1 ;
-(id)initWithEventIdentifier:(id)arg0 title:(id)arg1 location:(id)arg2 calendar:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 availability:(char)arg6 externalURI:(id)arg7 attendees:(id)arg8 organizerName:(id)arg9 eventFlags:(unsigned char)arg10 notes:(id)arg11 url:(id)arg12 structuredLocationTitle:(id)arg13 structuredLocationAddress:(id)arg14 structuredLocationCoordinates:(id)arg15 suggestedEventCategory:(unsigned char)arg16 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif