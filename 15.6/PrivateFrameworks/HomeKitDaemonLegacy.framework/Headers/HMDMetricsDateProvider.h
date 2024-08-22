// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMETRICSDATEPROVIDER_H
#define HMDMETRICSDATEPROVIDER_H

@class NSCalendar;

#import <Foundation/Foundation.h>


@interface HMDMetricsDateProvider : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) id *dateFactory; // ivar: _dateFactory


-(NSInteger)daysFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)init;
-(id)initWithDateFactory:(id)arg0 ;
-(id)startOfCurrentDay;
-(id)startOfDateByAddingDayCount:(NSInteger)arg0 toDate:(id)arg1 ;
-(id)startOfDayByAddingDayCount:(NSInteger)arg0 ;


@end


#endif