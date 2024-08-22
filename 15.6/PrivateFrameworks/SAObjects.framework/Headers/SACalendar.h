// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACALENDAR_H
#define SACALENDAR_H

@class NSDate, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SACalendar : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *timeZoneId;


+(id)calendar;
+(id)calendarWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif