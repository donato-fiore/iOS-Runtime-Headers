// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACALENDARRECURRENCE_H
#define SACALENDARRECURRENCE_H

@class NSString, NSDate;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SACalendarRecurrence : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger endCount;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) int frequency;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interval;
@property (readonly) Class superclass;


+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif