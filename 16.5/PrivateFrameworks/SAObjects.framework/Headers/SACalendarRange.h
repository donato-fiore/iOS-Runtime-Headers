// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACALENDARRANGE_H
#define SACALENDARRANGE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SACalendar.h"

@interface SACalendarRange : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SACalendar *end;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SACalendar *start;
@property (readonly) Class superclass;


+(id)calendarRangeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif