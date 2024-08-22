// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIDATE_H
#define CNUIDATE_H


#import <Foundation/Foundation.h>


@interface CNUIDate : NSObject



+(BOOL)isYearlessComponents:(id)arg0 ;
+(id)GMTComponentsFromDate:(id)arg0 sourceCalendar:(id)arg1 ;
+(id)componentsFromDate:(id)arg0 sourceCalendar:(id)arg1 destinationCalendar:(id)arg2 ;
+(id)currentCalendarGMT;
+(id)dateByNormalizingToGMT:(id)arg0 ;
+(id)dateFromComponents:(id)arg0 destinationCalendar:(id)arg1 ;
+(id)gregorianCalendarGMT;
+(id)yearlessComponentsFromDate:(id)arg0 calendar:(id)arg1 ;
+(id)yearlessGregorianComponentsFromGMTDate:(id)arg0 ;
+(void)initialize;
+(void)localeDidChange:(id)arg0 ;


@end


#endif