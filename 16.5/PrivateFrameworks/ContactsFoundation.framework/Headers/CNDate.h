// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDATE_H
#define CNDATE_H


#import <Foundation/Foundation.h>


@interface CNDate : NSObject



+(id)dateFromDayComponents:(id)arg0 ;
+(id)dayComponentsFromDate:(id)arg0 ;
+(id)gmtBuddhistCalendar;
+(id)gmtChineseCalendar;
+(id)gmtGregorianCalendar;
+(id)gmtIslamicCalendar;
+(id)gmtJapaneseCalendar;


@end


#endif