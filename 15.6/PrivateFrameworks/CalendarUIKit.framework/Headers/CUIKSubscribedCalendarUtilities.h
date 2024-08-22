// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKSUBSCRIBEDCALENDARUTILITIES_H
#define CUIKSUBSCRIBEDCALENDARUTILITIES_H


#import <Foundation/Foundation.h>


@interface CUIKSubscribedCalendarUtilities : NSObject



+(BOOL)canHandleURL:(id)arg0 ;
// +(id)checkSubscriptionURL:(id)arg0 missingSchemeBlock:(id)arg1 unsupportedSchemeBlock:(unk)arg2  ;
+(id)daHostFromSubscriptionURL:(id)arg0 ;
+(id)subscriptionURL:(id)arg0 usingHTTPS:(BOOL)arg1 ;
+(id)subscriptionURLForCalendar:(id)arg0 inStore:(id)arg1 ;
+(void)_reportLocalSubscribedCalendarAsJunkWithoutRemoval:(id)arg0 ;
+(void)unsubscribeFromCalendar:(id)arg0 ;
+(void)unsubscribeFromCalendar:(id)arg0 reportAsJunk:(BOOL)arg1 ;


@end


#endif