// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALRECURRENCEDAYOFWEEK_H
#define CALRECURRENCEDAYOFWEEK_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CalRecurrenceDayOfWeek : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger dayOfTheWeek; // ivar: _dayOfTheWeek
@property (readonly, nonatomic) NSInteger weekNumber; // ivar: _weekNumber


+(id)dayOfWeek:(NSInteger)arg0 ;
+(id)dayOfWeek:(NSInteger)arg0 weekNumber:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)iCalendarDescription;
-(id)iCalendarValueFromDayOfTheWeek:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDayOfTheWeek:(NSInteger)arg0 weekNumber:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif