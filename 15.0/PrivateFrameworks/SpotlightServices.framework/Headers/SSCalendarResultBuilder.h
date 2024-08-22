// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSCALENDARRESULTBUILDER_H
#define SSCALENDARRESULTBUILDER_H

@class NSString, NSDate;


#import "SSResultBuilder.h"

@interface SSCalendarResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *calendarName; // ivar: _calendarName
@property (retain, nonatomic) NSString *delegateCalendarName; // ivar: _delegateCalendarName
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
+(id)stringWithStartDate:(id)arg0 endDate:(id)arg1 isAllDay:(BOOL)arg2 ;
-(id)buildCompactCardSection;
-(id)buildInlineCardSection;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;
-(id)subclassBuildHorizontallyScrollingCardSection;


@end


#endif