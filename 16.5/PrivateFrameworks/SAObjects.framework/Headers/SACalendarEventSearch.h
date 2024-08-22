// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACALENDAREVENTSEARCH_H
#define SACALENDAREVENTSEARCH_H

@class NSDate, NSNumber, NSString, NSArray;


#import "SADomainCommand.h"

@interface SACalendarEventSearch : SADomainCommand

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *title;


+(id)eventSearch;
+(id)eventSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif