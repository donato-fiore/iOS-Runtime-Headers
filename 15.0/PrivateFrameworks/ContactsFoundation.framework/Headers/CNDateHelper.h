// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDATEHELPER_H
#define CNDATEHELPER_H


#import <Foundation/Foundation.h>


@interface CNDateHelper : NSObject



+(BOOL)isComponentsEmpty:(id)arg0 ;
+(BOOL)isGregorianDerivedCalendar:(id)arg0 ;
+(BOOL)isGregorianDerivedCalendarIdentifier:(id)arg0 ;
+(NSInteger)currentGregorianYearInGMT;
+(NSInteger)gregorianYearFromDate:(id)arg0 ;
+(NSInteger)gregorianYearInGMTFromDate:(id)arg0 ;
+(id)componentsForJanuary1WithYear:(NSInteger)arg0 ;
+(id)componentsFromDate:(id)arg0 ;
+(id)dateComponentsFromDateComponents:(id)arg0 preservingUnits:(NSUInteger)arg1 ;
+(id)dateComponentsInCalendar:(id)arg0 fromGregorianDateComponents:(id)arg1 ;
+(id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)arg0 timeZone:(id)arg1 ;
+(id)dateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 ;
+(id)dateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 hour:(NSInteger)arg3 minute:(NSInteger)arg4 second:(NSInteger)arg5 timeZone:(id)arg6 ;
+(id)gregorianCalendar;
+(id)gregorianCalendarInGMT;
+(id)gregorianDateComponentsFromDateComponents:(id)arg0 ;


@end


#endif