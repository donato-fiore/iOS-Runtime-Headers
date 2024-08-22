// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNDATESTRINGUTILS_H
#define CALNDATESTRINGUTILS_H


#import <Foundation/Foundation.h>


@interface CALNDateStringUtils : NSObject



+(id)_allDayFormatter;
+(id)_dateTimeFormatter;
+(id)dateTimeStringForEventDate:(id)arg0 alwaysIncludeDate:(BOOL)arg1 allDayEvent:(BOOL)arg2 dateProvider:(id)arg3 ;


@end


#endif