// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSTRAVELESTIMATESSTRINGFORMATTER_H
#define CPSTRAVELESTIMATESSTRINGFORMATTER_H

@class NSDateFormatter, NSCalendar, NSDateComponentsFormatter;

#import <Foundation/Foundation.h>


@interface CPSTravelEstimatesStringFormatter : NSObject

@property (readonly, nonatomic) NSDateFormatter *arrivalTimeFormatter; // ivar: _arrivalTimeFormatter
@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSDateComponentsFormatter *remainingTimeFormatter; // ivar: _remainingTimeFormatter


-(CGFloat)_minuteRoundedTimeRemainingForTravelEstimates:(id)arg0 ;
-(id)generateTravelEstimatesStringsForTravelEstimates:(id)arg0 ;
-(id)init;


@end


#endif