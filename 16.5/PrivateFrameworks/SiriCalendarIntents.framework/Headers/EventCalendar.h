// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EVENTCALENDAR_H
#define EVENTCALENDAR_H

@class INObject, NSString, NSNumber;



@interface EventCalendar : INObject

@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic, retain) NSNumber *isImmutable;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif