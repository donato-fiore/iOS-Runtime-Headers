// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACEDAILYHOURS_H
#define GEOPLACEDAILYHOURS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOPlaceDailyHours : NSObject

@property (readonly, nonatomic) _NSRange dayOfWeekRange; // ivar: _dayOfWeekRange
@property (readonly, nonatomic) NSArray *openIntervals; // ivar: _openIntervals


+(id)dailyHours:(id)arg0 forDays:(struct _NSRange )arg1 ;
+(id)getPlaceDailyHoursForWeekday:(NSInteger)arg0 placeDailyHours:(id)arg1 ;
-(id)description;


@end


#endif