// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDTIMEPERIOD_H
#define WDTIMEPERIOD_H

@class NSString, NSDate;
@protocol WDTimePeriod, NSCopying;

#import <Foundation/Foundation.h>


@interface WDTimePeriod : NSObject <WDTimePeriod, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)timePeriodWithSample:(id)arg0 ;
+(id)timePeriodWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)sleep_titleString;


@end


#endif