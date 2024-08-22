// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIACCOUNTERRORSANALYTICSTRACKER_H
#define EKUIACCOUNTERRORSANALYTICSTRACKER_H


#import <Foundation/Foundation.h>


@interface EKUIAccountErrorsAnalyticsTracker : NSObject



+(void)_trackErrorShown:(NSUInteger)arg0 ;
+(void)trackCalendarListDisplayedActionableError;
+(void)trackCalendarListDisplayedOfflineError;
+(void)trackCalendarListDisplayedOtherError;
+(void)trackCalendarListDisplayedUnknownError;
+(void)trackCalendarListInteractedWithError;
+(void)trackRootUIDisplayedError;
+(void)trackRootUIInteractedWithError;


@end


#endif