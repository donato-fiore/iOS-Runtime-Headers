// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCALENDAR_H
#define PPCALENDAR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPCalendar : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (readonly, nonatomic) *CGColor color; // ivar: _color
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCalendar:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCalendarIdentifier:(id)arg0 title:(id)arg1 color:(struct CGColor *)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEKCalendar:(id)arg0 internPool:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif