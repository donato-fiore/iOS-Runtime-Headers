// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INDATECOMPONENTSRANGE_H
#define INDATECOMPONENTSRANGE_H

@class NSNumber, NSDateInterval, NSString, NSDate, NSDateComponents;
@protocol INDateComponentsRangeExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INRecurrenceRule.h"

@interface INDateComponentsRange : NSObject <INDateComponentsRangeExport, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *allDay; // ivar: _allDay
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSDateComponents *endDateComponents; // ivar: _endDateComponents
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INRecurrenceRule *recurrenceRule; // ivar: _recurrenceRule
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDateComponents *startDateComponents; // ivar: _startDateComponents
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userInput; // ivar: _userInput


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)EKRecurrenceRule;
-(id)_dictionaryRepresentation;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 onCalendar:(id)arg1 inTimeZone:(id)arg2 ;
-(id)initWithDateInterval:(id)arg0 onCalendar:(id)arg1 inTimeZone:(id)arg2 ;
-(id)initWithEKRecurrenceRule:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 onCalendar:(id)arg2 inTimeZone:(id)arg3 ;
-(id)initWithStartDateComponents:(id)arg0 endDateComponents:(id)arg1 ;
-(id)initWithStartDateComponents:(id)arg0 endDateComponents:(id)arg1 recurrenceRule:(id)arg2 ;
-(id)initWithStartDateComponents:(id)arg0 endDateComponents:(id)arg1 recurrenceRule:(id)arg2 userInput:(id)arg3 allDay:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif