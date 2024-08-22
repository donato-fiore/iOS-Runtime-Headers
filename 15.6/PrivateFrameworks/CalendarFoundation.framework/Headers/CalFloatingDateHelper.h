// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALFLOATINGDATEHELPER_H
#define CALFLOATINGDATEHELPER_H


#import <Foundation/Foundation.h>


@interface CalFloatingDateHelper : NSObject



+(id)dateInFloatingTimeZoneFromDate:(id)arg0 inTimeZone:(id)arg1 ;
+(id)dateInTimeZone:(id)arg0 fromFloatingDateInGMT:(id)arg1 ;
+(void)_initCustomCalendar;


@end


#endif