// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKSUBSCRIBEDCALENDARUTILITIES_H
#define CUIKSUBSCRIBEDCALENDARUTILITIES_H


#import <Foundation/Foundation.h>


@interface CUIKSubscribedCalendarUtilities : NSObject



+(BOOL)canHandleURL:(id)arg0 ;
// +(id)checkSubscriptionURL:(id)arg0 missingSchemeBlock:(id)arg1 unsupportedSchemeBlock:(unk)arg2  ;
+(id)subscriptionURL:(id)arg0 usingHTTPS:(BOOL)arg1 ;
+(id)subscriptionURLForCalendar:(id)arg0 inStore:(id)arg1 ;
// +(void)checkURLForSpam:(id)arg0 completionHandler:(id)arg1 queue:(unk)arg2  ;
// +(void)fetchAvailableHolidayCalendarsWithCompletion:(id)arg0 queue:(unk)arg1  ;
+(void)reportLocalSubscribedCalendarAsJunkWithoutRemoval:(id)arg0 ;
+(void)unsubscribeFromCalendar:(id)arg0 ;
+(void)unsubscribeFromCalendar:(id)arg0 reportAsJunk:(BOOL)arg1 ;


@end


#endif