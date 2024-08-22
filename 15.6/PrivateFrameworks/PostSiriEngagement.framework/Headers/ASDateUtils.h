// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDATEUTILS_H
#define ASDATEUTILS_H


#import <Foundation/Foundation.h>


@interface ASDateUtils : NSObject



+(id)eventEndDateFromDate:(id)arg0 ;
+(id)eventStartDateFromDate:(id)arg0 ;
+(id)predicateForEventsWithDateRangeFromDate:(id)arg0 toDate:(id)arg1 ;
+(id)subtractDays:(NSInteger)arg0 fromDate:(id)arg1 ;


@end


#endif