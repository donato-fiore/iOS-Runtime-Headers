// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLTIMEINTERVALSFORMATTER_H
#define SCLTIMEINTERVALSFORMATTER_H

@class NSFormatter, NSListFormatter, NSLocale;


#import "SCLScheduleIntervalFormatter.h"

@interface SCLTimeIntervalsFormatter : NSFormatter

@property (readonly, nonatomic) SCLScheduleIntervalFormatter *intervalFormatter; // ivar: _intervalFormatter
@property (nonatomic) NSUInteger intervalFormattingStyle;
@property (readonly, nonatomic) NSListFormatter *listFormatter; // ivar: _listFormatter
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL prefersHoursOnly; // ivar: _prefersHoursOnly


-(id)init;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromTimeIntervals:(id)arg0 ;


@end


#endif