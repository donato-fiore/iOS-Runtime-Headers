// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKDATECALENDARUNITKEY_H
#define _HKDATECALENDARUNITKEY_H

@class NSCalendar, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HKDateCalendarUnitKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSUInteger calendarUnit; // ivar: _calendarUnit
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 unit:(NSUInteger)arg2 ;


@end


#endif