// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALHOLIDAYACCOUNTUTILS_H
#define CALHOLIDAYACCOUNTUTILS_H


#import <Foundation/Foundation.h>


@interface CalHolidayAccountUtils : NSObject



+(BOOL)_isEnabledWithAccount:(id)arg0 ;
+(BOOL)holidayCalendarIsEnabledWithAccountStore:(id)arg0 ;
+(id)_createUnsavedHolidayAccountWithAccountStore:(id)arg0 ;
+(id)_holidayAccountWithAccountStore:(id)arg0 ;
+(id)holidayAccountDescription;
+(id)logHandle;
+(void)ensureHolidayAccountExistsWithAccountStore:(id)arg0 ;
+(void)setHolidayCalendarIsEnabled:(BOOL)arg0 withAccountStore:(id)arg1 ;


@end


#endif