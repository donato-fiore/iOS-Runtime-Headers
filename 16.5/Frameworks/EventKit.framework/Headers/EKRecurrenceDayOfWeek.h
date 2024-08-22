// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKRECURRENCEDAYOFWEEK_H
#define EKRECURRENCEDAYOFWEEK_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EKRecurrenceDayOfWeek : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger dayOfTheWeek; // ivar: _dayOfTheWeek
@property (readonly, nonatomic) NSInteger weekNumber; // ivar: _weekNumber


+(BOOL)supportsSecureCoding;
+(NSInteger)icsWeekDayFromDayOfTheWeek:(NSInteger)arg0 ;
+(id)dayOfWeek:(NSInteger)arg0 ;
+(id)dayOfWeek:(NSInteger)arg0 weekNumber:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)iCalendarDescription;
-(id)iCalendarValueFromDayOfTheWeek:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDayOfTheWeek:(NSInteger)arg0 weekNumber:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif