// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEKCALENDARDESCRIPTOR_H
#define WFEKCALENDARDESCRIPTOR_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL allCalendars; // ivar: _allCalendars
@property (readonly, copy, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (readonly, nonatomic) NSNumber *calendarRGBAValue; // ivar: _calendarRGBAValue
@property (readonly, copy, nonatomic) NSString *calendarTitle; // ivar: _calendarTitle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAllCalendars;
-(id)initWithCalendarTitle:(id)arg0 identifier:(id)arg1 RGBAValue:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)matchingCalendarsFromArray:(id)arg0 ;
-(id)matchingRemindersListsFromArray:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif