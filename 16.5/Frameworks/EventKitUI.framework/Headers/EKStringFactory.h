// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKSTRINGFACTORY_H
#define EKSTRINGFACTORY_H


#import <Foundation/Foundation.h>


@interface EKStringFactory : NSObject {
    *__CFDateFormatter _standardTimeFormatter;
    *__CFDateFormatter _customFormatter;
}




+(id)sharedInstance;
-(id)_dateStringForEventInvitationWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3 withFormat:(NSUInteger)arg4 showTimeZone:(BOOL)arg5 ;
-(id)_stringForDateTime:(struct ? )arg0 timeZone:(struct __CFTimeZone *)arg1 ;
-(id)_stringForTime:(struct ? )arg0 ;
-(id)dateStringForDate:(CGFloat)arg0 allDay:(BOOL)arg1 shortFormat:(BOOL)arg2 ;
-(id)dateStringForDate:(CGFloat)arg0 allDay:(BOOL)arg1 standalone:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(id)dateStringForEventInvitation:(id)arg0 timeZone:(id)arg1 ;
-(id)dateStringForEventInvitationWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3 ;
-(id)dateStringForSuggestedEventWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3 showTimeZone:(BOOL)arg4 ;
-(id)init;
-(id)stringForSharedCalendar:(id)arg0 ;
-(id)timeStringForDate:(CGFloat)arg0 inTimeZone:(id)arg1 ;
-(struct __CFDateFormatter *)_customFormatter;
-(struct __CFDateFormatter *)standardTimeFormatter;
-(void)_invalidateFormatters;
-(void)_localeChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif